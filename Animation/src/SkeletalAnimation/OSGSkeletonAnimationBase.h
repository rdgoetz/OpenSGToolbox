/*---------------------------------------------------------------------------*\
 *                       OpenSG ToolBox Animation                            *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                   Authors: David Kabala, John Morales                     *
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
 **     class SkeletonAnimation
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSKELETONANIMATIONBASE_H_
#define _OSGSKELETONANIMATIONBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGAnimationDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "Animations/OSGAnimation.h" // Parent

#include "Animators/OSGKeyframeAnimatorFields.h" // RotationAnimators type
#include "OSGBoneFields.h" // RotationAnimatorBones type
#include "Animators/OSGKeyframeAnimatorFields.h" // TranslationAnimators type
#include "OSGBoneFields.h" // LengthAnimatorBones type
#include "Animators/OSGKeyframeAnimatorFields.h" // LengthAnimators type
#include "OSGBoneFields.h" // TranslationAnimatorBones type
#include "OSGSkeletonFields.h" // Skeleton type
#include <OpenSG/OSGUInt32Fields.h> // InterpolationType type

#include "OSGSkeletonAnimationFields.h"

OSG_BEGIN_NAMESPACE

class SkeletonAnimation;
class BinaryDataHandler;

//! \brief SkeletonAnimation Base Class.

class OSG_ANIMATIONLIB_DLLMAPPING SkeletonAnimationBase : public Animation
{
  private:

    typedef Animation    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef SkeletonAnimationPtr  Ptr;

    enum
    {
        RotationAnimatorsFieldId        = Inherited::NextFieldId,
        RotationAnimatorBonesFieldId    = RotationAnimatorsFieldId        + 1,
        TranslationAnimatorsFieldId     = RotationAnimatorBonesFieldId    + 1,
        LengthAnimatorBonesFieldId      = TranslationAnimatorsFieldId     + 1,
        LengthAnimatorsFieldId          = LengthAnimatorBonesFieldId      + 1,
        TranslationAnimatorBonesFieldId = LengthAnimatorsFieldId          + 1,
        SkeletonFieldId                 = TranslationAnimatorBonesFieldId + 1,
        InterpolationTypeFieldId        = SkeletonFieldId                 + 1,
        NextFieldId                     = InterpolationTypeFieldId        + 1
    };

    static const OSG::BitVector RotationAnimatorsFieldMask;
    static const OSG::BitVector RotationAnimatorBonesFieldMask;
    static const OSG::BitVector TranslationAnimatorsFieldMask;
    static const OSG::BitVector LengthAnimatorBonesFieldMask;
    static const OSG::BitVector LengthAnimatorsFieldMask;
    static const OSG::BitVector TranslationAnimatorBonesFieldMask;
    static const OSG::BitVector SkeletonFieldMask;
    static const OSG::BitVector InterpolationTypeFieldMask;


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

           SFSkeletonPtr       *getSFSkeleton       (void);
           SFUInt32            *getSFInterpolationType(void);

           SkeletonPtr         &getSkeleton       (void);
     const SkeletonPtr         &getSkeleton       (void) const;
           UInt32              &getInterpolationType(void);
     const UInt32              &getInterpolationType(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setSkeleton       ( const SkeletonPtr &value );
     void setInterpolationType( const UInt32 &value );

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

    static  SkeletonAnimationPtr      create          (void); 
    static  SkeletonAnimationPtr      createEmpty     (void); 

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

    MFKeyframeAnimatorPtr   _mfRotationAnimators;
    MFBonePtr           _mfRotationAnimatorBones;
    MFKeyframeAnimatorPtr   _mfTranslationAnimators;
    MFBonePtr           _mfLengthAnimatorBones;
    MFKeyframeAnimatorPtr   _mfLengthAnimators;
    MFBonePtr           _mfTranslationAnimatorBones;
    SFSkeletonPtr       _sfSkeleton;
    SFUInt32            _sfInterpolationType;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SkeletonAnimationBase(void);
    SkeletonAnimationBase(const SkeletonAnimationBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SkeletonAnimationBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           MFKeyframeAnimatorPtr *getMFRotationAnimators(void);
           MFBonePtr           *getMFRotationAnimatorBones(void);
           MFKeyframeAnimatorPtr *getMFTranslationAnimators(void);
           MFBonePtr           *getMFLengthAnimatorBones(void);
           MFKeyframeAnimatorPtr *getMFLengthAnimators(void);
           MFBonePtr           *getMFTranslationAnimatorBones(void);

           KeyframeAnimatorPtr &getRotationAnimators(UInt32 index);
           MFKeyframeAnimatorPtr &getRotationAnimators(void);
     const MFKeyframeAnimatorPtr &getRotationAnimators(void) const;
           BonePtr             &getRotationAnimatorBones(UInt32 index);
           MFBonePtr           &getRotationAnimatorBones(void);
     const MFBonePtr           &getRotationAnimatorBones(void) const;
           KeyframeAnimatorPtr &getTranslationAnimators(UInt32 index);
           MFKeyframeAnimatorPtr &getTranslationAnimators(void);
     const MFKeyframeAnimatorPtr &getTranslationAnimators(void) const;
           BonePtr             &getLengthAnimatorBones(UInt32 index);
           MFBonePtr           &getLengthAnimatorBones(void);
     const MFBonePtr           &getLengthAnimatorBones(void) const;
           KeyframeAnimatorPtr &getLengthAnimators(UInt32 index);
           MFKeyframeAnimatorPtr &getLengthAnimators(void);
     const MFKeyframeAnimatorPtr &getLengthAnimators(void) const;
           BonePtr             &getTranslationAnimatorBones(UInt32 index);
           MFBonePtr           &getTranslationAnimatorBones(void);
     const MFBonePtr           &getTranslationAnimatorBones(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      SkeletonAnimationBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      SkeletonAnimationBase *pOther,
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
    void operator =(const SkeletonAnimationBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef SkeletonAnimationBase *SkeletonAnimationBaseP;

typedef osgIF<SkeletonAnimationBase::isNodeCore,
              CoredNodePtr<SkeletonAnimation>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet SkeletonAnimationNodePtr;

typedef RefPtr<SkeletonAnimationPtr> SkeletonAnimationRefPtr;

OSG_END_NAMESPACE

#define OSGSKELETONANIMATIONBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGSKELETONANIMATIONBASE_H_ */
