/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com), Daniel Guilliams           *
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
 **     class PerlinNoiseDistribution2D
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPERLINNOISEDISTRIBUTION2DBASE_H_
#define _OSGPERLINNOISEDISTRIBUTION2DBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

//#include "OSGBaseTypes.h"

#include "OSGDistribution2D.h" // Parent

#include "OSGSysFields.h"               // Frequency type
#include "OSGVecFields.h"               // Phase type

#include "OSGPerlinNoiseDistribution2DFields.h"

OSG_BEGIN_NAMESPACE

class PerlinNoiseDistribution2D;

//! \brief PerlinNoiseDistribution2D Base Class.

class OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING PerlinNoiseDistribution2DBase : public Distribution2D
{
  public:

    typedef Distribution2D Inherited;
    typedef Distribution2D ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(PerlinNoiseDistribution2D);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        FrequencyFieldId = Inherited::NextFieldId,
        PersistanceFieldId = FrequencyFieldId + 1,
        OctavesFieldId = PersistanceFieldId + 1,
        AmplitudeFieldId = OctavesFieldId + 1,
        InterpolationTypeFieldId = AmplitudeFieldId + 1,
        PhaseFieldId = InterpolationTypeFieldId + 1,
        UseSmoothingFieldId = PhaseFieldId + 1,
        NextFieldId = UseSmoothingFieldId + 1
    };

    static const OSG::BitVector FrequencyFieldMask =
        (TypeTraits<BitVector>::One << FrequencyFieldId);
    static const OSG::BitVector PersistanceFieldMask =
        (TypeTraits<BitVector>::One << PersistanceFieldId);
    static const OSG::BitVector OctavesFieldMask =
        (TypeTraits<BitVector>::One << OctavesFieldId);
    static const OSG::BitVector AmplitudeFieldMask =
        (TypeTraits<BitVector>::One << AmplitudeFieldId);
    static const OSG::BitVector InterpolationTypeFieldMask =
        (TypeTraits<BitVector>::One << InterpolationTypeFieldId);
    static const OSG::BitVector PhaseFieldMask =
        (TypeTraits<BitVector>::One << PhaseFieldId);
    static const OSG::BitVector UseSmoothingFieldMask =
        (TypeTraits<BitVector>::One << UseSmoothingFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFReal32          SFFrequencyType;
    typedef SFReal32          SFPersistanceType;
    typedef SFUInt32          SFOctavesType;
    typedef SFReal32          SFAmplitudeType;
    typedef SFUInt32          SFInterpolationTypeType;
    typedef SFVec2f           SFPhaseType;
    typedef SFBool            SFUseSmoothingType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFReal32            *editSFFrequency      (void);
            const SFReal32            *getSFFrequency       (void) const;

                  SFReal32            *editSFPersistance    (void);
            const SFReal32            *getSFPersistance     (void) const;

                  SFUInt32            *editSFOctaves        (void);
            const SFUInt32            *getSFOctaves         (void) const;

                  SFReal32            *editSFAmplitude      (void);
            const SFReal32            *getSFAmplitude       (void) const;

                  SFUInt32            *editSFInterpolationType(void);
            const SFUInt32            *getSFInterpolationType (void) const;

                  SFVec2f             *editSFPhase          (void);
            const SFVec2f             *getSFPhase           (void) const;

                  SFBool              *editSFUseSmoothing   (void);
            const SFBool              *getSFUseSmoothing    (void) const;


                  Real32              &editFrequency      (void);
                  Real32               getFrequency       (void) const;

                  Real32              &editPersistance    (void);
                  Real32               getPersistance     (void) const;

                  UInt32              &editOctaves        (void);
                  UInt32               getOctaves         (void) const;

                  Real32              &editAmplitude      (void);
                  Real32               getAmplitude       (void) const;

                  UInt32              &editInterpolationType(void);
                  UInt32               getInterpolationType (void) const;

                  Vec2f               &editPhase          (void);
            const Vec2f               &getPhase           (void) const;

                  bool                &editUseSmoothing   (void);
                  bool                 getUseSmoothing    (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setFrequency      (const Real32 value);
            void setPersistance    (const Real32 value);
            void setOctaves        (const UInt32 value);
            void setAmplitude      (const Real32 value);
            void setInterpolationType(const UInt32 value);
            void setPhase          (const Vec2f &value);
            void setUseSmoothing   (const bool value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  PerlinNoiseDistribution2DTransitPtr  create          (void);
    static  PerlinNoiseDistribution2D           *createEmpty     (void);

    static  PerlinNoiseDistribution2DTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  PerlinNoiseDistribution2D            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  PerlinNoiseDistribution2DTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFReal32          _sfFrequency;
    SFReal32          _sfPersistance;
    SFUInt32          _sfOctaves;
    SFReal32          _sfAmplitude;
    SFUInt32          _sfInterpolationType;
    SFVec2f           _sfPhase;
    SFBool            _sfUseSmoothing;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    PerlinNoiseDistribution2DBase(void);
    PerlinNoiseDistribution2DBase(const PerlinNoiseDistribution2DBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~PerlinNoiseDistribution2DBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleFrequency       (void) const;
    EditFieldHandlePtr editHandleFrequency      (void);
    GetFieldHandlePtr  getHandlePersistance     (void) const;
    EditFieldHandlePtr editHandlePersistance    (void);
    GetFieldHandlePtr  getHandleOctaves         (void) const;
    EditFieldHandlePtr editHandleOctaves        (void);
    GetFieldHandlePtr  getHandleAmplitude       (void) const;
    EditFieldHandlePtr editHandleAmplitude      (void);
    GetFieldHandlePtr  getHandleInterpolationType (void) const;
    EditFieldHandlePtr editHandleInterpolationType(void);
    GetFieldHandlePtr  getHandlePhase           (void) const;
    EditFieldHandlePtr editHandlePhase          (void);
    GetFieldHandlePtr  getHandleUseSmoothing    (void) const;
    EditFieldHandlePtr editHandleUseSmoothing   (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      PerlinNoiseDistribution2DBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const PerlinNoiseDistribution2DBase &source);
};

typedef PerlinNoiseDistribution2DBase *PerlinNoiseDistribution2DBaseP;

OSG_END_NAMESPACE

#endif /* _OSGPERLINNOISEDISTRIBUTION2DBASE_H_ */
