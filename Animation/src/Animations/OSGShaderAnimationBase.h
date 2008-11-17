/*---------------------------------------------------------------------------*\
 *                       OpenSG ToolBox Animation                            *
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
 **     class ShaderAnimation
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSHADERANIMATIONBASE_H_
#define _OSGSHADERANIMATIONBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGAnimationDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGAnimation.h" // Parent

#include "Animators/OSGAnimator.h" // Animator type
#include <OpenSG/OSGShaderParameterChunkFields.h> // ShaderContainer type
#include <OpenSG/OSGStringFields.h> // ParameterName type
#include <OpenSG/OSGShaderParameterFields.h> // Parameter type
#include <OpenSG/OSGUInt32Fields.h> // ParameterFieldId type
#include <OpenSG/OSGUInt32Fields.h> // InterpolationType type
#include <OpenSG/OSGUInt32Fields.h> // ReplacementPolicy type

#include "OSGShaderAnimationFields.h"

OSG_BEGIN_NAMESPACE

class ShaderAnimation;
class BinaryDataHandler;

//! \brief ShaderAnimation Base Class.

class OSG_ANIMATIONLIB_DLLMAPPING ShaderAnimationBase : public Animation
{
  private:

    typedef Animation    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef ShaderAnimationPtr  Ptr;

    enum
    {
        AnimatorFieldId          = Inherited::NextFieldId,
        ShaderContainerFieldId   = AnimatorFieldId          + 1,
        ParameterNameFieldId     = ShaderContainerFieldId   + 1,
        ParameterFieldId         = ParameterNameFieldId     + 1,
        ParameterFieldIdFieldId  = ParameterFieldId         + 1,
        InterpolationTypeFieldId = ParameterFieldIdFieldId  + 1,
        ReplacementPolicyFieldId = InterpolationTypeFieldId + 1,
        NextFieldId              = ReplacementPolicyFieldId + 1
    };

    static const OSG::BitVector AnimatorFieldMask;
    static const OSG::BitVector ShaderContainerFieldMask;
    static const OSG::BitVector ParameterNameFieldMask;
    static const OSG::BitVector ParameterFieldMask;
    static const OSG::BitVector ParameterFieldIdFieldMask;
    static const OSG::BitVector InterpolationTypeFieldMask;
    static const OSG::BitVector ReplacementPolicyFieldMask;


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

           SFAnimatorPtr       *getSFAnimator       (void);
           SFShaderParameterChunkPtr *getSFShaderContainer(void);
           SFString            *getSFParameterName  (void);
           SFUInt32            *getSFInterpolationType(void);
           SFUInt32            *getSFReplacementPolicy(void);

           AnimatorPtr         &getAnimator       (void);
     const AnimatorPtr         &getAnimator       (void) const;
           ShaderParameterChunkPtr &getShaderContainer(void);
     const ShaderParameterChunkPtr &getShaderContainer(void) const;
           std::string         &getParameterName  (void);
     const std::string         &getParameterName  (void) const;
           UInt32              &getInterpolationType(void);
     const UInt32              &getInterpolationType(void) const;
           UInt32              &getReplacementPolicy(void);
     const UInt32              &getReplacementPolicy(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setAnimator       ( const AnimatorPtr &value );
     void setShaderContainer( const ShaderParameterChunkPtr &value );
     void setParameterName  ( const std::string &value );
     void setInterpolationType( const UInt32 &value );
     void setReplacementPolicy( const UInt32 &value );

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

    static  ShaderAnimationPtr      create          (void); 
    static  ShaderAnimationPtr      createEmpty     (void); 

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

    SFAnimatorPtr       _sfAnimator;
    SFShaderParameterChunkPtr   _sfShaderContainer;
    SFString            _sfParameterName;
    SFShaderParameterPtr   _sfParameter;
    SFUInt32            _sfParameterFieldId;
    SFUInt32            _sfInterpolationType;
    SFUInt32            _sfReplacementPolicy;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ShaderAnimationBase(void);
    ShaderAnimationBase(const ShaderAnimationBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ShaderAnimationBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           SFShaderParameterPtr *getSFParameter      (void);
           SFUInt32            *getSFParameterFieldId(void);

           ShaderParameterPtr  &getParameter      (void);
     const ShaderParameterPtr  &getParameter      (void) const;
           UInt32              &getParameterFieldId(void);
     const UInt32              &getParameterFieldId(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setParameter      (const ShaderParameterPtr &value);
     void setParameterFieldId(const UInt32 &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      ShaderAnimationBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      ShaderAnimationBase *pOther,
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
    void operator =(const ShaderAnimationBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef ShaderAnimationBase *ShaderAnimationBaseP;

typedef osgIF<ShaderAnimationBase::isNodeCore,
              CoredNodePtr<ShaderAnimation>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet ShaderAnimationNodePtr;

typedef RefPtr<ShaderAnimationPtr> ShaderAnimationRefPtr;

OSG_END_NAMESPACE

#define OSGSHADERANIMATIONBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGSHADERANIMATIONBASE_H_ */
