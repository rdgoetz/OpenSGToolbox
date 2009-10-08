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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class MenuButton
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGMENUBUTTONBASE_H_
#define _OSGMENUBUTTONBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGToggleButton.h" // Parent

#include "Component/List/Models/OSGListModelFields.h" // Model type
#include "ComponentGenerators/OSGComponentGeneratorFields.h" // CellGenerator type
#include "Component/Menu/OSGListGeneratedPopupMenuFields.h" // MenuButtonPopupMenu type

#include "OSGMenuButtonFields.h"
#include <OpenSG/Toolbox/OSGEventProducer.h>
#include <OpenSG/Toolbox/OSGEventProducerType.h>
#include <OpenSG/Toolbox/OSGMethodDescription.h>

OSG_BEGIN_NAMESPACE

class MenuButton;
class BinaryDataHandler;

//! \brief MenuButton Base Class.

class OSG_USERINTERFACELIB_DLLMAPPING MenuButtonBase : public ToggleButton
{
  private:

    typedef ToggleButton    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef MenuButtonPtr  Ptr;

    enum
    {
        ModelFieldId               = Inherited::NextFieldId,
        CellGeneratorFieldId       = ModelFieldId               + 1,
        MenuButtonPopupMenuFieldId = CellGeneratorFieldId       + 1,
        NextFieldId                = MenuButtonPopupMenuFieldId + 1
    };

    static const OSG::BitVector ModelFieldMask;
    static const OSG::BitVector CellGeneratorFieldMask;
    static const OSG::BitVector MenuButtonPopupMenuFieldMask;


    enum
    {
        MenuActionPerformedMethodId = Inherited::NextMethodId,
        NextMethodId                = MenuActionPerformedMethodId + 1
    };



    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 
    static const  EventProducerType  &getProducerClassType  (void); 
    static        UInt32              getProducerClassTypeId(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType  (void); 
    virtual const FieldContainerType &getType  (void) const; 

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


           SFListModelPtr      *editSFModel          (void);
     const SFListModelPtr      *getSFModel          (void) const;

           SFComponentGeneratorPtr *editSFCellGenerator  (void);
     const SFComponentGeneratorPtr *getSFCellGenerator  (void) const;


           ListModelPtr        &editModel          (void);
     const ListModelPtr        &getModel          (void) const;

           ComponentGeneratorPtr &editCellGenerator  (void);
     const ComponentGeneratorPtr &getCellGenerator  (void) const;


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setModel          ( const ListModelPtr &value );
     void setCellGenerator  ( const ComponentGeneratorPtr &value );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Method Produced Get                           */
    /*! \{                                                                 */

    virtual const EventProducerType &getProducerType(void) const; 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (const BitVector         &whichField);
    virtual void   copyToBin  (      BinaryDataHandler &pMem,
                               const BitVector         &whichField);
    virtual void   copyFromBin(      BinaryDataHandler &pMem,
                               const BitVector         &whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  MenuButtonPtr      create          (void); 
    static  MenuButtonPtr      createEmpty     (void); 

    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr     shallowCopy     (void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFListModelPtr      _sfModel;
    SFComponentGeneratorPtr   _sfCellGenerator;
    SFListGeneratedPopupMenuPtr   _sfMenuButtonPopupMenu;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    MenuButtonBase(void);
    MenuButtonBase(const MenuButtonBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~MenuButtonBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           SFListGeneratedPopupMenuPtr *editSFMenuButtonPopupMenu(void);
     const SFListGeneratedPopupMenuPtr *getSFMenuButtonPopupMenu(void) const;

           ListGeneratedPopupMenuPtr &editMenuButtonPopupMenu(void);
     const ListGeneratedPopupMenuPtr &getMenuButtonPopupMenu(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setMenuButtonPopupMenu(const ListGeneratedPopupMenuPtr &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      MenuButtonBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      MenuButtonBase *pOther,
                         const BitVector         &whichField,
                         const SyncInfo          &sInfo     );

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField,
                               const SyncInfo          &sInfo);

    virtual void execBeginEdit     (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

            void execBeginEditImpl (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

    virtual void onDestroyAspect(UInt32 uiId, UInt32 uiAspect);
#endif

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;

    static MethodDescription   *_methodDesc[];
    static EventProducerType _producerType;

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const MenuButtonBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef MenuButtonBase *MenuButtonBaseP;

typedef osgIF<MenuButtonBase::isNodeCore,
              CoredNodePtr<MenuButton>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet MenuButtonNodePtr;

typedef RefPtr<MenuButtonPtr> MenuButtonRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGMENUBUTTONBASE_H_ */
