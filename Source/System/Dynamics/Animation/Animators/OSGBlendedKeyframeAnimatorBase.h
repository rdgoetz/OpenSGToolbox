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
 **     class BlendedKeyframeAnimator
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGBLENDEDKEYFRAMEANIMATORBASE_H_
#define _OSGBLENDEDKEYFRAMEANIMATORBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGAnimationDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGAnimator.h" // Parent

#include "KeyframeSequence/OSGKeyframeSequence.h" // KeyframeSequences type
#include <OpenSG/OSGReal32Fields.h> // BlendAmounts type

#include "OSGBlendedKeyframeAnimatorFields.h"

OSG_BEGIN_NAMESPACE

class BlendedKeyframeAnimator;
class BinaryDataHandler;

//! \brief BlendedKeyframeAnimator Base Class.

class OSG_ANIMATIONLIB_DLLMAPPING BlendedKeyframeAnimatorBase : public Animator
{
  private:

    typedef Animator    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef BlendedKeyframeAnimatorPtr  Ptr;

    enum
    {
        KeyframeSequencesFieldId = Inherited::NextFieldId,
        BlendAmountsFieldId      = KeyframeSequencesFieldId + 1,
        NextFieldId              = BlendAmountsFieldId      + 1
    };

    static const OSG::BitVector KeyframeSequencesFieldMask;
    static const OSG::BitVector BlendAmountsFieldMask;


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


           MFKeyframeSequencePtr *editMFKeyframeSequences(void);
     const MFKeyframeSequencePtr *getMFKeyframeSequences(void) const;
#ifndef OSG_2_PREP
           MFKeyframeSequencePtr *getMFKeyframeSequences(void);
#endif

           MFReal32            *editMFBlendAmounts   (void);
     const MFReal32            *getMFBlendAmounts   (void) const;
#ifndef OSG_2_PREP
           MFReal32            *getMFBlendAmounts   (void);
#endif


           KeyframeSequencePtr &editKeyframeSequences(const UInt32 index);
     const KeyframeSequencePtr &getKeyframeSequences(const UInt32 index) const;
#ifndef OSG_2_PREP
           KeyframeSequencePtr &getKeyframeSequences(const UInt32 index);
           MFKeyframeSequencePtr &getKeyframeSequences(void);
     const MFKeyframeSequencePtr &getKeyframeSequences(void) const;
#endif

           Real32              &editBlendAmounts   (const UInt32 index);
     const Real32              &getBlendAmounts   (const UInt32 index) const;
#ifndef OSG_2_PREP
           Real32              &getBlendAmounts   (const UInt32 index);
           MFReal32            &getBlendAmounts   (void);
     const MFReal32            &getBlendAmounts   (void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */


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

    static  BlendedKeyframeAnimatorPtr      create          (void); 
    static  BlendedKeyframeAnimatorPtr      createEmpty     (void); 

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

    MFKeyframeSequencePtr   _mfKeyframeSequences;
    MFReal32            _mfBlendAmounts;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    BlendedKeyframeAnimatorBase(void);
    BlendedKeyframeAnimatorBase(const BlendedKeyframeAnimatorBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BlendedKeyframeAnimatorBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      BlendedKeyframeAnimatorBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      BlendedKeyframeAnimatorBase *pOther,
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
    void operator =(const BlendedKeyframeAnimatorBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef BlendedKeyframeAnimatorBase *BlendedKeyframeAnimatorBaseP;

typedef osgIF<BlendedKeyframeAnimatorBase::isNodeCore,
              CoredNodePtr<BlendedKeyframeAnimator>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet BlendedKeyframeAnimatorNodePtr;

typedef RefPtr<BlendedKeyframeAnimatorPtr> BlendedKeyframeAnimatorRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGBLENDEDKEYFRAMEANIMATORBASE_H_ */