/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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

#include "OSGAbstractTreeModelLayout.h"

#include <boost/bind.hpp>
#include "Component/Tree/Model/OSGTreeModelEvent.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::AbstractTreeModelLayout
A UI Abstract Tree Model Layout. 	
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void AbstractTreeModelLayout::initMethod (void)
{
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

EventConnection AbstractTreeModelLayout::addTreeModelLayoutListener(TreeModelLayoutListenerPtr Listener)
{
   _TreeModelLayoutListeners.insert(Listener);
   return EventConnection(
       boost::bind(&AbstractTreeModelLayout::isTreeModelLayoutListenerAttached, this, Listener),
       boost::bind(&AbstractTreeModelLayout::removeTreeModelLayoutListener, this, Listener));
}

void AbstractTreeModelLayout::removeTreeModelLayoutListener(TreeModelLayoutListenerPtr Listener)
{
   TreeModelLayoutListenerSetItor EraseIter(_TreeModelLayoutListeners.find(Listener));
   if(EraseIter != _TreeModelLayoutListeners.end())
   {
      _TreeModelLayoutListeners.erase(EraseIter);
   }
}

EventConnection AbstractTreeModelLayout::addTreeModelListener(TreeModelListenerPtr l)
{
    _ModelListeners.insert(l);
   return EventConnection(
       boost::bind(&AbstractTreeModelLayout::isTreeModelListenerAttached, this, l),
       boost::bind(&AbstractTreeModelLayout::removeTreeModelListener, this, l));
}

void AbstractTreeModelLayout::removeTreeModelListener(TreeModelListenerPtr l)
{
   TreeModelListenerSetIter EraseIter(_ModelListeners.find(l));
   if(EraseIter != _ModelListeners.end())
   {
      _ModelListeners.erase(EraseIter);
   }
}

std::vector<Int32> AbstractTreeModelLayout::getRowsForPaths(const std::vector<TreePath>& paths) const
{
	std::vector<Int32> Result;
	for(UInt32 i(0) ; i<paths.size() ; ++i)
	{
		Result.push_back(this->getRowForPath(paths[i]));
	}
	return Result;
}

TreeModelPtr AbstractTreeModelLayout::getModel(void) const
{
	return _TreeModel;
}

//AbstractLayoutCache.NodeDimensions AbstractTreeModelLayout::getNodeDimensions(void) const;

Real32 AbstractTreeModelLayout::getPreferredHeight(void) const
{
	if(isFixedRowHeight())
	{
		return getRowHeight() * getRowCount();
	}
	else
	{
		//TODO: Implement
		return 0;
	}
}

Real32 AbstractTreeModelLayout::getPreferredWidth(Pnt2f& TopLeft, Pnt2f& BottomRight) const
{
	//TODO: Implement
	return 0;
}

Real32 AbstractTreeModelLayout::getRowHeight(void) const
{
	return getRowHeightInternal();
}

Real32 AbstractTreeModelLayout::getDepthOffset(void) const
{
	return getDepthOffsetInternal();
}

void AbstractTreeModelLayout::setDepthOffset(const Real32& depthOffset)
{
    beginEditCP(AbstractTreeModelLayoutPtr(this), DepthOffsetInternalFieldMask);
		setDepthOffsetInternal(depthOffset);
    endEditCP(AbstractTreeModelLayoutPtr(this), DepthOffsetInternalFieldMask);
}

TreeSelectionModelPtr AbstractTreeModelLayout::getSelectionModel(void) const
{
	return _TreeSelectionModel;
}

bool AbstractTreeModelLayout::isFixedRowHeight(void) const
{
	return getRowHeightInternal() > 0;
}

bool AbstractTreeModelLayout::isRootVisible(void) const
{
	return getRootVisibleInternal();
}

void AbstractTreeModelLayout::setModel(TreeModelPtr newModel)
{
    if(_TreeModel != NULL)
    {
        _TreeModel->removeTreeModelListener(&_ModelListener);
    }

    _TreeModel = newModel;
    
    _ExpandedPathSet.clear();

    _VisiblePathSet.clear();

    if(_TreeModel != NULL)
    {
        _TreeModel->addTreeModelListener(&_ModelListener);

        TreePath RootPath(_TreeModel->getPath(_TreeModel->getRoot()));
        setExpanded(RootPath, true);
        if(isRootVisible())
        {
            _VisiblePathSet.insert(RootPath);
        }
    }
    

}

//void AbstractTreeModelLayout::setNodeDimensions(AbstractLayoutCache.NodeDimensions nd);

void AbstractTreeModelLayout::setRootVisible(bool rootVisible)
{
    beginEditCP(AbstractTreeModelLayoutPtr(this), RootVisibleInternalFieldMask);
        setRootVisibleInternal(rootVisible);
    endEditCP(AbstractTreeModelLayoutPtr(this), RootVisibleInternalFieldMask);
}

void AbstractTreeModelLayout::setRowHeight(const Real32& rowHeight)
{
    beginEditCP(AbstractTreeModelLayoutPtr(this), RowHeightInternalFieldMask);
    setRowHeightInternal(rowHeight);
    endEditCP(AbstractTreeModelLayoutPtr(this), RowHeightInternalFieldMask);
}

void AbstractTreeModelLayout::setSelectionModel(TreeSelectionModelPtr newLSM)
{
	_TreeSelectionModel = newLSM;
}

void AbstractTreeModelLayout::setVisible(const TreePath& path)
{
    TreePath ThePath(path);
    while(!ThePath.empty())
    {
        setExpanded(ThePath, true);
        ThePath = ThePath.getParentPath();
    }
}

std::vector<TreePath> AbstractTreeModelLayout::getVisiblePaths(void) const
{
    return std::vector<TreePath>(_VisiblePathSet.begin(), _VisiblePathSet.end());
}

std::vector<TreePath> AbstractTreeModelLayout::getExpandedPaths(void) const
{
    return std::vector<TreePath>(_ExpandedPathSet.begin(), _ExpandedPathSet.end());
}

void AbstractTreeModelLayout::vetoPathExpantion(const TreePath& Path)
{
	_VetoPathExpantion = true;
}

void AbstractTreeModelLayout::vetoPathCollapse(const TreePath& Path)
{
	_VetoPathCollapse = true;
}

void AbstractTreeModelLayout::getNodeDimensions(Pnt2f& TopLeft, Pnt2f& BottomRight, const boost::any& value, const UInt32& row, const UInt32& depth, bool expanded, Pnt2f TopLeftPlaceIn, Pnt2f BottomRightPlaceIn)
{
	//TODO: Implement
}

void AbstractTreeModelLayout::produceTreeCollapsed(const TreePath& Path)
{
	const TreeModelLayoutEventPtr TheEvent = TreeModelLayoutEvent::create(AbstractTreeModelLayoutPtr(this), getTimeStamp(), Path);
	TreeModelLayoutListenerSet Listeners(_TreeModelLayoutListeners);
    for(TreeModelLayoutListenerSetConstItor SetItor(Listeners.begin()) ; SetItor != Listeners.end() ; ++SetItor)
    {
		(*SetItor)->treeCollapsed(TheEvent);
    }
    _Producer.produceEvent(TreeCollapsedMethodId,TheEvent);
}

void AbstractTreeModelLayout::produceTreeExpanded(const TreePath& Path)
{
	const TreeModelLayoutEventPtr TheEvent = TreeModelLayoutEvent::create(AbstractTreeModelLayoutPtr(this), getTimeStamp(), Path);
	TreeModelLayoutListenerSet Listeners(_TreeModelLayoutListeners);
    for(TreeModelLayoutListenerSetConstItor SetItor(Listeners.begin()) ; SetItor != Listeners.end() ; ++SetItor)
    {
		(*SetItor)->treeExpanded(TheEvent);
    }
    _Producer.produceEvent(TreeExpandedMethodId,TheEvent);
}

void AbstractTreeModelLayout::produceTreeWillCollapse(const TreePath& Path)
{
	const TreeModelLayoutEventPtr TheEvent = TreeModelLayoutEvent::create(AbstractTreeModelLayoutPtr(this), getTimeStamp(), Path);
	TreeModelLayoutListenerSet Listeners(_TreeModelLayoutListeners);
    for(TreeModelLayoutListenerSetConstItor SetItor(Listeners.begin()) ; SetItor != Listeners.end() ; ++SetItor)
    {
		(*SetItor)->treeWillCollapse(TheEvent);
    }
    _Producer.produceEvent(TreeWillCollapseMethodId,TheEvent);
}

void AbstractTreeModelLayout::produceTreeWillExpand(const TreePath& Path)
{
	const TreeModelLayoutEventPtr TheEvent = TreeModelLayoutEvent::create(AbstractTreeModelLayoutPtr(this), getTimeStamp(), Path);
	TreeModelLayoutListenerSet Listeners(_TreeModelLayoutListeners);
    for(TreeModelLayoutListenerSetConstItor SetItor(Listeners.begin()) ; SetItor != Listeners.end() ; ++SetItor)
    {
		(*SetItor)->treeWillExpand(TheEvent);
    }
    _Producer.produceEvent(TreeWillExpandMethodId,TheEvent);
}


bool AbstractTreeModelLayout::areChildrenVisible(const TreePath& path) const
{
    if(isRootVisible() ||
       (!isRootVisible() && path != _TreeModel->getPath(_TreeModel->getRoot())))
    {
        return isVisible(path) && isExpanded(path);
    }
    else
    {
        return isExpanded(path);
    }
}

void AbstractTreeModelLayout::insertVisiblePath(const TreePath& Path)
{
    _VisiblePathSet.insert(Path);
	//Insert all visible decendents of Path
	std::vector<TreePath> VisibleDecendants;
	getVisibleDecendants(Path, VisibleDecendants);
	for(UInt32 i(0) ; i<VisibleDecendants.size() ; ++i)
	{
		_VisiblePathSet.insert(VisibleDecendants[i]);
	}
}

void AbstractTreeModelLayout::removeVisiblePath(const TreePath& Path)
{
    _VisiblePathSet.erase(_VisiblePathSet.find(Path));
	//Remove all visible decendents of Path
    TreePathSetItor VisibleSetItor(_VisiblePathSet.begin());
    while(VisibleSetItor != _VisiblePathSet.end())
    {
        if(Path.isDescendant((*VisibleSetItor)))
        {
            TreePathSetItor RemoveItor(VisibleSetItor);
            ++VisibleSetItor;
           _VisiblePathSet.erase(RemoveItor);
        }
        else
        {
            ++VisibleSetItor;
        }
    }
}
void AbstractTreeModelLayout::removeExpandedPath(const TreePath& Path)
{
    _ExpandedPathSet.erase(Path);
	//Remove all visible decendents of Path
    TreePathSetItor ExpandedSetItor(_ExpandedPathSet.begin());
    while(ExpandedSetItor != _ExpandedPathSet.end())
    {

        if(Path.isDescendant((*ExpandedSetItor)))
        {
            TreePathSetItor RemoveItor(ExpandedSetItor);
            ++ExpandedSetItor;
            _ExpandedPathSet.erase(RemoveItor);
        }
        else
        {
            ++ExpandedSetItor;
        }
    }
}

void AbstractTreeModelLayout::getVisibleDecendants(const TreePath& Path, std::vector<TreePath>& VisibleDecendants) const
{
    //Loop through all of the Children of the last node in Path
    UInt32 NumChildren(_TreeModel->getChildCount(Path.getLastPathComponent()));
    boost::any Child;

    TreePath ChildPath;
    for(UInt32 i(0) ; i<NumChildren ; ++i)
    {
        Child = _TreeModel->getChild(Path.getLastPathComponent(), i);

        ChildPath = _TreeModel->getPath(Child);
        //Add This child to the Visible Decendants
        VisibleDecendants.push_back(ChildPath);

        //If this child is expanded then add all of it's visible decendants
        if(isExpanded(ChildPath))
        {
            getVisibleDecendants(ChildPath, VisibleDecendants);
        }
    }
}

void AbstractTreeModelLayout::produceTreeNodesChanged(const TreeModelEventPtr e)
{
   TreeModelListenerSet ModelListenerSet(_ModelListeners);
   for(TreeModelListenerSetConstIter SetItor(ModelListenerSet.begin()) ; SetItor != ModelListenerSet.end() ; ++SetItor)
   {
      (*SetItor)->treeNodesChanged(e);
   }
   _Producer.produceEvent(TreeNodesChangedMethodId,e);
}

void AbstractTreeModelLayout::produceTreeNodesInserted(const TreeModelEventPtr e)
{
   TreeModelListenerSet ModelListenerSet(_ModelListeners);
   for(TreeModelListenerSetConstIter SetItor(ModelListenerSet.begin()) ; SetItor != ModelListenerSet.end() ; ++SetItor)
   {
      (*SetItor)->treeNodesInserted(e);
   }
   _Producer.produceEvent(TreeNodesInsertedMethodId,e);
}

void AbstractTreeModelLayout::produceTreeNodesWillBeRemoved(const TreeModelEventPtr e)
{
   TreeModelListenerSet ModelListenerSet(_ModelListeners);
   for(TreeModelListenerSetConstIter SetItor(ModelListenerSet.begin()) ; SetItor != ModelListenerSet.end() ; ++SetItor)
   {
      (*SetItor)->treeNodesWillBeRemoved(e);
   }
   _Producer.produceEvent(TreeNodesWillBeRemovedMethodId,e);
}

void AbstractTreeModelLayout::produceTreeNodesRemoved(const TreeModelEventPtr e)
{
   TreeModelListenerSet ModelListenerSet(_ModelListeners);
   for(TreeModelListenerSetConstIter SetItor(ModelListenerSet.begin()) ; SetItor != ModelListenerSet.end() ; ++SetItor)
   {
      (*SetItor)->treeNodesRemoved(e);
   }
   _Producer.produceEvent(TreeNodesRemovedMethodId,e);
}

void AbstractTreeModelLayout::produceTreeStructureChanged(const TreeModelEventPtr e)
{
   TreeModelListenerSet ModelListenerSet(_ModelListeners);
   for(TreeModelListenerSetConstIter SetItor(ModelListenerSet.begin()) ; SetItor != ModelListenerSet.end() ; ++SetItor)
   {
      (*SetItor)->treeStructureChanged(e);
   }
   _Producer.produceEvent(TreeStructureChangedMethodId,e);
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

AbstractTreeModelLayout::AbstractTreeModelLayout(void) :
    Inherited(),
    _TreeModel(NULL),
    _TreeSelectionModel(NULL),
    _ExpandedPathSet(),
    _VisiblePathSet(),
    _ModelListener(AbstractTreeModelLayoutPtr(this)),
	_VetoPathExpantion(false),
	_VetoPathCollapse(false)
{
}

AbstractTreeModelLayout::AbstractTreeModelLayout(const AbstractTreeModelLayout &source) :
    Inherited(source),
        _TreeModel(source._TreeModel),
    _TreeSelectionModel(source._TreeSelectionModel),
    _ExpandedPathSet(source._ExpandedPathSet),
    _VisiblePathSet(source._VisiblePathSet),
    _ModelListener(AbstractTreeModelLayoutPtr(this)),
	_VetoPathExpantion(false),
	_VetoPathCollapse(false)
{
}

AbstractTreeModelLayout::~AbstractTreeModelLayout(void)
{
}

/*----------------------------- class specific ----------------------------*/

void AbstractTreeModelLayout::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);

    if(whichField & RootVisibleInternalFieldMask)
    {
        if(getRootVisibleInternal())
        {
            _VisiblePathSet.insert(_TreeModel->getPath(_TreeModel->getRoot()));
        }
    }
}

void AbstractTreeModelLayout::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump AbstractTreeModelLayout NI" << std::endl;
}

void AbstractTreeModelLayout::ModelListener::treeNodesChanged(const TreeModelEventPtr e)
{
    //This event inidicates changes that are not structural
    //So there are no changes to the Layout

    //Pass the event along
    _AbstractTreeModelLayout->produceTreeNodesChanged(e);
}

void AbstractTreeModelLayout::ModelListener::treeNodesInserted(const TreeModelEventPtr e)
{
    //If the Nodes are inserted into a node that is expanded then
    //they are visible.
    if(_AbstractTreeModelLayout->areChildrenVisible(e->getPath()))
    {
        TreePath NodePath;
        for(UInt32 i(0) ; i<e->getChildren().size() ; ++i)
        {
            //Insert the path
            _AbstractTreeModelLayout->insertVisiblePath( _AbstractTreeModelLayout->_TreeModel->getPath(e->getChildren()[i]) );
        }
    }
    _AbstractTreeModelLayout->produceTreeNodesInserted(e);
}


void AbstractTreeModelLayout::ModelListener::treeNodesWillBeRemoved(const TreeModelEventPtr e)
{
    _AbstractTreeModelLayout->produceTreeNodesWillBeRemoved(e);
    //If the Nodes are remove into a node that is expanded then
    //they are no longer visible.
    if(_AbstractTreeModelLayout->areChildrenVisible(e->getPath()))
    {
        //remove the nodes from the visible set
        for(UInt32 i(0) ; i<e->getChildren().size() ; ++i)
        {
            _AbstractTreeModelLayout->removeVisiblePath( _AbstractTreeModelLayout->_TreeModel->getPath(e->getChildren()[i]) );
            _AbstractTreeModelLayout->removeExpandedPath( _AbstractTreeModelLayout->_TreeModel->getPath(e->getChildren()[i]) );
        }
    }
}

void AbstractTreeModelLayout::ModelListener::treeNodesRemoved(const TreeModelEventPtr e)
{
    _AbstractTreeModelLayout->produceTreeNodesRemoved(e);
}

void AbstractTreeModelLayout::ModelListener::treeStructureChanged(const TreeModelEventPtr e)
{
    //If the node that the changes are rooted at is expanded then
    //redo the visibility calculations on the parent node
    if(_AbstractTreeModelLayout->areChildrenVisible(e->getPath()))
    {
        //Add the newly inserted nodes into the visible set
        _AbstractTreeModelLayout->setExpanded(e->getPath(), false);
        _AbstractTreeModelLayout->setExpanded(e->getPath(), true);
    }
    _AbstractTreeModelLayout->produceTreeStructureChanged(e);
}

/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCTemplate_cpp.h,v 1.20 2006/03/16 17:01:53 dirk Exp $";
    static Char8 cvsid_hpp       [] = OSGABSTRACTTREEMODELLAYOUTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGABSTRACTTREEMODELLAYOUTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGABSTRACTTREEMODELLAYOUTFIELDS_HEADER_CVSID;
}

#ifdef __sgi
#pragma reset woff 1174
#endif

OSG_END_NAMESPACE

