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
 **     class ScrollPanel
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSCROLLPANELBASE_H_
#define _OSGSCROLLPANELBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "Component/Container/OSGContainer.h" // Parent

#include "Component/Container/OSGUIViewport.h" // View type
#include "Component/Scroll/OSGScrollBar.h" // InternalVerticalScrollBar type
#include "Component/Scroll/OSGScrollBar.h" // InternalHorizontalScrollBar type
#include <OpenSG/OSGUInt32Fields.h> // VerticalScrollBarDisplayPolicy type
#include <OpenSG/OSGUInt32Fields.h> // HorizontalScrollBarDisplayPolicy type
#include <OpenSG/OSGUInt32Fields.h> // VerticalResizePolicy type
#include <OpenSG/OSGUInt32Fields.h> // HorizontalResizePolicy type
#include <OpenSG/OSGUInt32Fields.h> // VerticalScrollBarAlignment type
#include <OpenSG/OSGUInt32Fields.h> // HorizontalScrollBarAlignment type

#include "OSGScrollPanelFields.h"

OSG_BEGIN_NAMESPACE

class ScrollPanel;
class BinaryDataHandler;

//! \brief ScrollPanel Base Class.

class OSG_USERINTERFACELIB_DLLMAPPING ScrollPanelBase : public Container
{
  private:

    typedef Container    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef ScrollPanelPtr  Ptr;

    enum
    {
        ViewFieldId                             = Inherited::NextFieldId,
        InternalVerticalScrollBarFieldId        = ViewFieldId                             + 1,
        InternalHorizontalScrollBarFieldId      = InternalVerticalScrollBarFieldId        + 1,
        VerticalScrollBarDisplayPolicyFieldId   = InternalHorizontalScrollBarFieldId      + 1,
        HorizontalScrollBarDisplayPolicyFieldId = VerticalScrollBarDisplayPolicyFieldId   + 1,
        VerticalResizePolicyFieldId             = HorizontalScrollBarDisplayPolicyFieldId + 1,
        HorizontalResizePolicyFieldId           = VerticalResizePolicyFieldId             + 1,
        VerticalScrollBarAlignmentFieldId       = HorizontalResizePolicyFieldId           + 1,
        HorizontalScrollBarAlignmentFieldId     = VerticalScrollBarAlignmentFieldId       + 1,
        NextFieldId                             = HorizontalScrollBarAlignmentFieldId     + 1
    };

    static const OSG::BitVector ViewFieldMask;
    static const OSG::BitVector InternalVerticalScrollBarFieldMask;
    static const OSG::BitVector InternalHorizontalScrollBarFieldMask;
    static const OSG::BitVector VerticalScrollBarDisplayPolicyFieldMask;
    static const OSG::BitVector HorizontalScrollBarDisplayPolicyFieldMask;
    static const OSG::BitVector VerticalResizePolicyFieldMask;
    static const OSG::BitVector HorizontalResizePolicyFieldMask;
    static const OSG::BitVector VerticalScrollBarAlignmentFieldMask;
    static const OSG::BitVector HorizontalScrollBarAlignmentFieldMask;


    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 

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

           SFUInt32            *getSFVerticalScrollBarDisplayPolicy(void);
           SFUInt32            *getSFHorizontalScrollBarDisplayPolicy(void);
           SFUInt32            *getSFVerticalResizePolicy(void);
           SFUInt32            *getSFHorizontalResizePolicy(void);
           SFUInt32            *getSFVerticalScrollBarAlignment(void);
           SFUInt32            *getSFHorizontalScrollBarAlignment(void);

           UInt32              &getVerticalScrollBarDisplayPolicy(void);
     const UInt32              &getVerticalScrollBarDisplayPolicy(void) const;
           UInt32              &getHorizontalScrollBarDisplayPolicy(void);
     const UInt32              &getHorizontalScrollBarDisplayPolicy(void) const;
           UInt32              &getVerticalResizePolicy(void);
     const UInt32              &getVerticalResizePolicy(void) const;
           UInt32              &getHorizontalResizePolicy(void);
     const UInt32              &getHorizontalResizePolicy(void) const;
           UInt32              &getVerticalScrollBarAlignment(void);
     const UInt32              &getVerticalScrollBarAlignment(void) const;
           UInt32              &getHorizontalScrollBarAlignment(void);
     const UInt32              &getHorizontalScrollBarAlignment(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setVerticalScrollBarDisplayPolicy( const UInt32 &value );
     void setHorizontalScrollBarDisplayPolicy( const UInt32 &value );
     void setVerticalResizePolicy( const UInt32 &value );
     void setHorizontalResizePolicy( const UInt32 &value );
     void setVerticalScrollBarAlignment( const UInt32 &value );
     void setHorizontalScrollBarAlignment( const UInt32 &value );

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

    static  ScrollPanelPtr      create          (void); 
    static  ScrollPanelPtr      createEmpty     (void); 

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

    SFUIViewportPtr     _sfView;
    SFScrollBarPtr      _sfInternalVerticalScrollBar;
    SFScrollBarPtr      _sfInternalHorizontalScrollBar;
    SFUInt32            _sfVerticalScrollBarDisplayPolicy;
    SFUInt32            _sfHorizontalScrollBarDisplayPolicy;
    SFUInt32            _sfVerticalResizePolicy;
    SFUInt32            _sfHorizontalResizePolicy;
    SFUInt32            _sfVerticalScrollBarAlignment;
    SFUInt32            _sfHorizontalScrollBarAlignment;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ScrollPanelBase(void);
    ScrollPanelBase(const ScrollPanelBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ScrollPanelBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           SFUIViewportPtr     *getSFView           (void);
           SFScrollBarPtr      *getSFInternalVerticalScrollBar(void);
           SFScrollBarPtr      *getSFInternalHorizontalScrollBar(void);

           UIViewportPtr       &getView           (void);
     const UIViewportPtr       &getView           (void) const;
           ScrollBarPtr        &getInternalVerticalScrollBar(void);
     const ScrollBarPtr        &getInternalVerticalScrollBar(void) const;
           ScrollBarPtr        &getInternalHorizontalScrollBar(void);
     const ScrollBarPtr        &getInternalHorizontalScrollBar(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setView           (const UIViewportPtr &value);
     void setInternalVerticalScrollBar(const ScrollBarPtr &value);
     void setInternalHorizontalScrollBar(const ScrollBarPtr &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      ScrollPanelBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      ScrollPanelBase *pOther,
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

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const ScrollPanelBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef ScrollPanelBase *ScrollPanelBaseP;

typedef osgIF<ScrollPanelBase::isNodeCore,
              CoredNodePtr<ScrollPanel>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet ScrollPanelNodePtr;

typedef RefPtr<ScrollPanelPtr> ScrollPanelRefPtr;

OSG_END_NAMESPACE

#define OSGSCROLLPANELBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGSCROLLPANELBASE_H_ */