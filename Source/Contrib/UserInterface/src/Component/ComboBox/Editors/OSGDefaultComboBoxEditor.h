/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
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

#ifndef _OSGDEFAULTCOMBOBOXEDITOR_H_
#define _OSGDEFAULTCOMBOBOXEDITOR_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGDefaultComboBoxEditorBase.h"
#include "OSGFocusListener.h"
#include "OSGTextField.h"

#include "OSGEventConnection.h"

OSG_BEGIN_NAMESPACE

/*! \brief DefaultComboBoxEditor class. See \ref
           PageContribUserInterfaceDefaultComboBoxEditor for a description.
*/

class OSG_CONTRIBUSERINTERFACE_DLLMAPPING DefaultComboBoxEditor : public DefaultComboBoxEditorBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef DefaultComboBoxEditorBase Inherited;
    typedef DefaultComboBoxEditor     Self;

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(ConstFieldMaskArg whichField,
                         UInt32            origin,
                         BitVector         details    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0,
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */

	//Add an ActionListener.
	virtual EventConnection addActionListener(ActionListenerPtr Listener);
	virtual bool isActionListenerAttached(ActionListenerPtr Listener) const;

	//Remove an ActionListener
	virtual void removeActionListener(ActionListenerPtr Listener);

	//Return the component that should be added to the tree hierarchy for this editor
	virtual ComponentRefPtr getEditorComponent(void);

	//Return the edited item
	virtual boost::any getItem(void);

	//Ask the editor to start editing and to select everything
	virtual void selectAll(void);

	//Set the item that should be edited.
	virtual void setItem(const boost::any& anObject);
	
    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in DefaultComboBoxEditorBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    DefaultComboBoxEditor(void);
    DefaultComboBoxEditor(const DefaultComboBoxEditor &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DefaultComboBoxEditor(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
	/*---------------------------------------------------------------------*/
	/*! \name                   Class Specific                             */
	/*! \{                                                                 */
	void onCreate(const DefaultComboBoxEditor *Id = NULL);
	void onDestroy();
	
	/*! \}                                                                 */

    //Expand Button Action Listener
    class TextFieldListener :public FocusListener
    {
      public:
        TextFieldListener(DefaultComboBoxEditorRefPtr TheDefaultComboBoxEditor);
        virtual void focusGained(const FocusEventUnrecPtr e);
        virtual void focusLost(const FocusEventUnrecPtr e);

      private:
        DefaultComboBoxEditorRefPtr _DefaultComboBoxEditor;
    };

    friend class TextFieldListener;

    TextFieldListener _TextFieldListener;
    
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class DefaultComboBoxEditorBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const DefaultComboBoxEditor &source);
};

typedef DefaultComboBoxEditor *DefaultComboBoxEditorP;

OSG_END_NAMESPACE

#include "OSGDefaultComboBoxEditorBase.inl"
#include "OSGDefaultComboBoxEditor.inl"

#endif /* _OSGDEFAULTCOMBOBOXEDITOR_H_ */
