/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                          Authors: David Kabala                            *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>

#define OSG_COMPILEUSERINTERFACELIB

#include <OpenSG/OSGConfig.h>

#include "OSGMenuButton.h"
#include "Component/Menu/OSGListGeneratedPopupMenu.h"
#include "Component/Container/Window/OSGInternalWindow.h"
#include "Component/List/Models/OSGListModel.h"
#include "Util/OSGUIDrawUtils.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::MenuButton
A UI MenuButton 	
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void MenuButton::initMethod (void)
{
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

EventConnection MenuButton::addMenuActionListener(ActionListenerPtr Listener)
{
   _MenuActionListeners.insert(Listener);
   return EventConnection(
       boost::bind(&MenuButton::isMenuActionListenerAttached, this, Listener),
       boost::bind(&MenuButton::removeMenuActionListener, this, Listener));
}

void MenuButton::hidePopup(void)
{
    if(getMenuButtonPopupMenu()->getVisible())
    {
	    getMenuButtonPopupMenu()->cancel();
    }
}

void MenuButton::showPopup(void)
{
    if(!getMenuButtonPopupMenu()->getVisible())
    {
	    Pnt2f BorderTopLeft, BorderBottomRight;
	    getBounds(BorderTopLeft, BorderBottomRight);

        beginEditCP(getMenuButtonPopupMenu(), PopupMenu::InvokerFieldMask | PopupMenu::VisibleFieldMask | Component::PositionFieldMask);
           getMenuButtonPopupMenu()->setInvoker(ComponentPtr(this));
           getMenuButtonPopupMenu()->setVisible(true);
           getMenuButtonPopupMenu()->setPosition(ComponentToFrame(BorderTopLeft + Vec2f(0,BorderBottomRight.y()), ComponentPtr(this)));
	       getMenuButtonPopupMenu()->setSelection(-1);
        endEditCP(getMenuButtonPopupMenu(), PopupMenu::InvokerFieldMask | PopupMenu::VisibleFieldMask | Component::PositionFieldMask);
        
        beginEditCP(getParentWindow(), InternalWindow::ActivePopupMenusFieldMask);
            getParentWindow()->getActivePopupMenus().push_back(getMenuButtonPopupMenu());
        endEditCP(getParentWindow(), InternalWindow::ActivePopupMenusFieldMask);
    }
}


void MenuButton::removeMenuActionListener(ActionListenerPtr Listener)
{
   MenuActionListenerSetItor EraseIter(_MenuActionListeners.find(Listener));
   if(EraseIter != _MenuActionListeners.end())
   {
      _MenuActionListeners.erase(EraseIter);
   }
}

Int32 MenuButton::getSelectionIndex(void) const
{
    if(getMenuButtonPopupMenu() != NullFC)
    {
        return getMenuButtonPopupMenu()->getSelectionIndex();
    }
    else
    {
        return -1;
    }
}

boost::any MenuButton::getSelectionValue(void) const
{
    if(getMenuButtonPopupMenu() != NullFC &&
        getModel() != NullFC &&
        getMenuButtonPopupMenu()->getSelectionIndex() >= 0 &&
        getMenuButtonPopupMenu()->getSelectionIndex() < getModel()->getSize())
    {
        return getModel()->getElementAt(getMenuButtonPopupMenu()->getSelectionIndex());
    }
    else
    {
        return boost::any();
    }
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

void MenuButton::updatePopupMenuConnections(void)
{
    if(getMenuButtonPopupMenu() != NullFC)
    {
        for(UInt32 i(0) ; i<getMenuButtonPopupMenu()->getNumItems() ; ++i)
        {
            getMenuButtonPopupMenu()->getItem(i)->addActionListener(&_MenuButtonEventsListener);
        }
    }
}

void MenuButton::produceMenuActionPerformed(void)
{
    const ActionEventPtr e = ActionEvent::create(MenuButtonPtr(this), getTimeStamp());
	MenuActionListenerSet Listeners(_MenuActionListeners);
    for(MenuActionListenerSetConstItor SetItor(Listeners.begin()) ; SetItor != Listeners.end() ; ++SetItor)
    {
	    (*SetItor)->actionPerformed(e);
    }
   _Producer.produceEvent(MenuActionPerformedMethodId,e);
}

/*----------------------- constructors & destructors ----------------------*/

MenuButton::MenuButton(void) :
    Inherited(),
    _MenuButtonEventsListener(MenuButtonPtr(this))
{
	beginEditCP(MenuButtonPtr(this), MenuButtonPopupMenuFieldMask);
		setMenuButtonPopupMenu(ListGeneratedPopupMenu::create());
	endEditCP(MenuButtonPtr(this), MenuButtonPopupMenuFieldMask);
}

MenuButton::MenuButton(const MenuButton &source) :
    Inherited(source),
    _MenuButtonEventsListener(MenuButtonPtr(this))
{
	beginEditCP(MenuButtonPtr(this), MenuButtonPopupMenuFieldMask);
		setMenuButtonPopupMenu(ListGeneratedPopupMenu::create());
	endEditCP(MenuButtonPtr(this), MenuButtonPopupMenuFieldMask);
}

MenuButton::~MenuButton(void)
{
}

/*----------------------------- class specific ----------------------------*/

void MenuButton::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);

	if((whichField & MenuButtonPopupMenuFieldMask) &&
		getMenuButtonPopupMenu() != NullFC)
	{
		getMenuButtonPopupMenu()->addPopupMenuListener(&_MenuButtonEventsListener);
        updatePopupMenuConnections();
	}

	if(whichField & ModelFieldMask)
	{
		if(getModel() != NullFC)
		{
			beginEditCP(getMenuButtonPopupMenu(), ListGeneratedPopupMenu::ModelFieldMask);
				getMenuButtonPopupMenu()->setModel(getModel());
			endEditCP(getMenuButtonPopupMenu(), ListGeneratedPopupMenu::ModelFieldMask);
		}
	}

	if(((whichField & CellGeneratorFieldMask) ||
		(whichField & MenuButtonPopupMenuFieldMask)) &&
		getCellGenerator() != NullFC)
	{
		beginEditCP(getMenuButtonPopupMenu(), ListGeneratedPopupMenu::CellGeneratorFieldMask);
			getMenuButtonPopupMenu()->setCellGenerator(getCellGenerator());
		endEditCP(getMenuButtonPopupMenu(), ListGeneratedPopupMenu::CellGeneratorFieldMask);
	}

	if((whichField & SelectedFieldMask))
    {
        if(getSelected())
        {
            showPopup();
        }
        else
        {
            hidePopup();
        }
    }
}

void MenuButton::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump MenuButton NI" << std::endl;
}


void MenuButton::MenuButtonEventsListener::popupMenuCanceled(const PopupMenuEventPtr e)
{
    beginEditCP(_MenuButton, ToggleButton::SelectedFieldMask);
        _MenuButton->setSelected(false);
    endEditCP(_MenuButton, ToggleButton::SelectedFieldMask);
}

void MenuButton::MenuButtonEventsListener::popupMenuWillBecomeInvisible(const PopupMenuEventPtr e)
{
    beginEditCP(_MenuButton, ToggleButton::SelectedFieldMask);
        _MenuButton->setSelected(false);
    endEditCP(_MenuButton, ToggleButton::SelectedFieldMask);
}

void MenuButton::MenuButtonEventsListener::popupMenuWillBecomeVisible(const PopupMenuEventPtr e)
{
}

void MenuButton::MenuButtonEventsListener::popupMenuContentsChanged(const PopupMenuEventPtr e)
{
    _MenuButton->updatePopupMenuConnections();
}

void MenuButton::MenuButtonEventsListener::actionPerformed(const ActionEventPtr e)
{
    _MenuButton->produceMenuActionPerformed();
}

OSG_END_NAMESPACE

