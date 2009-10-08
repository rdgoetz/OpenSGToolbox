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
 **     class ParticleSystem!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPARTICLESYSTEMINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGParticleSystemBase.h"
#include "OSGParticleSystem.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  ParticleSystemBase::InternalPositionsFieldMask = 
    (TypeTraits<BitVector>::One << ParticleSystemBase::InternalPositionsFieldId);

const OSG::BitVector  ParticleSystemBase::InternalSecPositionsFieldMask = 
    (TypeTraits<BitVector>::One << ParticleSystemBase::InternalSecPositionsFieldId);

const OSG::BitVector  ParticleSystemBase::InternalNormalsFieldMask = 
    (TypeTraits<BitVector>::One << ParticleSystemBase::InternalNormalsFieldId);

const OSG::BitVector  ParticleSystemBase::InternalColorsFieldMask = 
    (TypeTraits<BitVector>::One << ParticleSystemBase::InternalColorsFieldId);

const OSG::BitVector  ParticleSystemBase::InternalSizesFieldMask = 
    (TypeTraits<BitVector>::One << ParticleSystemBase::InternalSizesFieldId);

const OSG::BitVector  ParticleSystemBase::InternalLifespansFieldMask = 
    (TypeTraits<BitVector>::One << ParticleSystemBase::InternalLifespansFieldId);

const OSG::BitVector  ParticleSystemBase::InternalAgesFieldMask = 
    (TypeTraits<BitVector>::One << ParticleSystemBase::InternalAgesFieldId);

const OSG::BitVector  ParticleSystemBase::InternalVelocitiesFieldMask = 
    (TypeTraits<BitVector>::One << ParticleSystemBase::InternalVelocitiesFieldId);

const OSG::BitVector  ParticleSystemBase::InternalSecVelocitiesFieldMask = 
    (TypeTraits<BitVector>::One << ParticleSystemBase::InternalSecVelocitiesFieldId);

const OSG::BitVector  ParticleSystemBase::InternalAccelerationsFieldMask = 
    (TypeTraits<BitVector>::One << ParticleSystemBase::InternalAccelerationsFieldId);

const OSG::BitVector  ParticleSystemBase::InternalAttributesFieldMask = 
    (TypeTraits<BitVector>::One << ParticleSystemBase::InternalAttributesFieldId);

const OSG::BitVector  ParticleSystemBase::MaxParticlesFieldMask = 
    (TypeTraits<BitVector>::One << ParticleSystemBase::MaxParticlesFieldId);

const OSG::BitVector  ParticleSystemBase::DynamicFieldMask = 
    (TypeTraits<BitVector>::One << ParticleSystemBase::DynamicFieldId);

const OSG::BitVector  ParticleSystemBase::UpdateSecAttribsFieldMask = 
    (TypeTraits<BitVector>::One << ParticleSystemBase::UpdateSecAttribsFieldId);

const OSG::BitVector  ParticleSystemBase::LastElapsedTimeFieldMask = 
    (TypeTraits<BitVector>::One << ParticleSystemBase::LastElapsedTimeFieldId);

const OSG::BitVector  ParticleSystemBase::GeneratorsFieldMask = 
    (TypeTraits<BitVector>::One << ParticleSystemBase::GeneratorsFieldId);

const OSG::BitVector  ParticleSystemBase::AffectorsFieldMask = 
    (TypeTraits<BitVector>::One << ParticleSystemBase::AffectorsFieldId);

const OSG::BitVector  ParticleSystemBase::SystemAffectorsFieldMask = 
    (TypeTraits<BitVector>::One << ParticleSystemBase::SystemAffectorsFieldId);

const OSG::BitVector  ParticleSystemBase::EventProducerFieldMask =
    (TypeTraits<BitVector>::One << ParticleSystemBase::EventProducerFieldId);

const OSG::BitVector ParticleSystemBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Pnt3f           ParticleSystemBase::_mfInternalPositions
    The positions of the particles. This is the primary defining         information for a particle.
*/
/*! \var Pnt3f           ParticleSystemBase::_mfInternalSecPositions
    The secondary position of the particle. This information is only used         by a few rendering modes, e.g. the streak mode. Usually it represents         the particle's last position.
*/
/*! \var Vec3f           ParticleSystemBase::_mfInternalNormals
    Most particles will be automatically aligned to the view         direction. If normals are set they will be used to define the         direction the particles are facing.
*/
/*! \var Color4f         ParticleSystemBase::_mfInternalColors
    The particle colors (optional).
*/
/*! \var Vec3f           ParticleSystemBase::_mfInternalSizes
    The particle sizes. If not set (1,1,1) will be used, if only one entry         is set, it will be used for all particles. If the number of sizes if         equal to the number of positions every particle will get its own size.         Most modes only use the X coordinate of the vector. Particles with size 0         are ignored.
*/
/*! \var Time            ParticleSystemBase::_mfInternalLifespans
    The particle lifespan. If set to less than 0, then the particle is considered eternal.
*/
/*! \var Time            ParticleSystemBase::_mfInternalAges
    The particle age.
*/
/*! \var Vec3f           ParticleSystemBase::_mfInternalVelocities
    The particle velocities. If not set (0,0,0) will be used, if only one entry         is set, it will be used for all particles. If the number of velocities is         equal to the number of positions every particle will get its own velocity.         If no velocities are present, then the position will not be updated regarding velocity.
*/
/*! \var Vec3f           ParticleSystemBase::_mfInternalSecVelocities
    The particle secVelocities. This is the velocity of the particle last update.  This is used         for the VelocityDirQuads draw mode.
*/
/*! \var Vec3f           ParticleSystemBase::_mfInternalAccelerations
    The particle accelerations If not set (0,0,0) will be used, if only one entry         is set, it will be used for all particles. If the number of accelerations is         equal to the number of positions every particle will get its own acceleration.         If no accelerations are present, then the position will not be updated regarding acceleration.
*/
/*! \var StringToUInt32Map ParticleSystemBase::_mfInternalAttributes
    A per-particle attribute map.  Used for storing user-defined data to particles.
*/
/*! \var UInt32          ParticleSystemBase::_sfMaxParticles
    
*/
/*! \var bool            ParticleSystemBase::_sfDynamic
    Hint to tell the system whether particles are expected to change position or         not. Is used to speed up sorting.
*/
/*! \var bool            ParticleSystemBase::_sfUpdateSecAttribs
    If true then the secondary position, and velocity will be updated every frame to    the previous value of position and velocity respectively.
*/
/*! \var Time            ParticleSystemBase::_sfLastElapsedTime
    This value holds the value of the last elapsed time.
*/
/*! \var ParticleGeneratorPtr ParticleSystemBase::_mfGenerators
    List of Particle Generators.
*/
/*! \var ParticleAffectorPtr ParticleSystemBase::_mfAffectors
    List of Particle Affectors.  These are applied on a per particle basis.
*/
/*! \var ParticleSystemAffectorPtr ParticleSystemBase::_mfSystemAffectors
    List of Particle System Affectors.  These are applied to the entire system of particles and can allow for particle-to-particle interaction.
*/

//! ParticleSystem description

FieldDescription *ParticleSystemBase::_desc[] = 
{
    new FieldDescription(MFPnt3f::getClassType(), 
                     "InternalPositions", 
                     InternalPositionsFieldId, InternalPositionsFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ParticleSystemBase::editMFInternalPositions)),
    new FieldDescription(MFPnt3f::getClassType(), 
                     "InternalSecPositions", 
                     InternalSecPositionsFieldId, InternalSecPositionsFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ParticleSystemBase::editMFInternalSecPositions)),
    new FieldDescription(MFVec3f::getClassType(), 
                     "InternalNormals", 
                     InternalNormalsFieldId, InternalNormalsFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ParticleSystemBase::editMFInternalNormals)),
    new FieldDescription(MFColor4f::getClassType(), 
                     "InternalColors", 
                     InternalColorsFieldId, InternalColorsFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ParticleSystemBase::editMFInternalColors)),
    new FieldDescription(MFVec3f::getClassType(), 
                     "InternalSizes", 
                     InternalSizesFieldId, InternalSizesFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ParticleSystemBase::editMFInternalSizes)),
    new FieldDescription(MFTime::getClassType(), 
                     "InternalLifespans", 
                     InternalLifespansFieldId, InternalLifespansFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ParticleSystemBase::editMFInternalLifespans)),
    new FieldDescription(MFTime::getClassType(), 
                     "InternalAges", 
                     InternalAgesFieldId, InternalAgesFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ParticleSystemBase::editMFInternalAges)),
    new FieldDescription(MFVec3f::getClassType(), 
                     "InternalVelocities", 
                     InternalVelocitiesFieldId, InternalVelocitiesFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ParticleSystemBase::editMFInternalVelocities)),
    new FieldDescription(MFVec3f::getClassType(), 
                     "InternalSecVelocities", 
                     InternalSecVelocitiesFieldId, InternalSecVelocitiesFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ParticleSystemBase::editMFInternalSecVelocities)),
    new FieldDescription(MFVec3f::getClassType(), 
                     "InternalAccelerations", 
                     InternalAccelerationsFieldId, InternalAccelerationsFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ParticleSystemBase::editMFInternalAccelerations)),
    new FieldDescription(MFStringToUInt32Map::getClassType(), 
                     "InternalAttributes", 
                     InternalAttributesFieldId, InternalAttributesFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ParticleSystemBase::editMFInternalAttributes)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "MaxParticles", 
                     MaxParticlesFieldId, MaxParticlesFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ParticleSystemBase::editSFMaxParticles)),
    new FieldDescription(SFBool::getClassType(), 
                     "Dynamic", 
                     DynamicFieldId, DynamicFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ParticleSystemBase::editSFDynamic)),
    new FieldDescription(SFBool::getClassType(), 
                     "UpdateSecAttribs", 
                     UpdateSecAttribsFieldId, UpdateSecAttribsFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ParticleSystemBase::editSFUpdateSecAttribs)),
    new FieldDescription(SFTime::getClassType(), 
                     "LastElapsedTime", 
                     LastElapsedTimeFieldId, LastElapsedTimeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ParticleSystemBase::editSFLastElapsedTime)),
    new FieldDescription(MFParticleGeneratorPtr::getClassType(), 
                     "Generators", 
                     GeneratorsFieldId, GeneratorsFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ParticleSystemBase::editMFGenerators)),
    new FieldDescription(MFParticleAffectorPtr::getClassType(), 
                     "Affectors", 
                     AffectorsFieldId, AffectorsFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ParticleSystemBase::editMFAffectors)),
    new FieldDescription(MFParticleSystemAffectorPtr::getClassType(), 
                     "SystemAffectors", 
                     SystemAffectorsFieldId, SystemAffectorsFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ParticleSystemBase::editMFSystemAffectors))
    , 
    new FieldDescription(SFEventProducerPtr::getClassType(), 
                     "EventProducer", 
                     EventProducerFieldId,EventProducerFieldMask,
                     true,
                     FieldAccessMethod(NULL))
};


FieldContainerType ParticleSystemBase::_type(
    "ParticleSystem",
    "AttachmentContainer",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&ParticleSystemBase::createEmpty),
    ParticleSystem::initMethod,
    _desc,
    sizeof(_desc));

//! ParticleSystem Produced Methods

MethodDescription *ParticleSystemBase::_methodDesc[] =
{
    new MethodDescription("SystemUpdated", 
                     SystemUpdatedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("ParticleGenerated", 
                     ParticleGeneratedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("ParticleKilled", 
                     ParticleKilledMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("ParticleStolen", 
                     ParticleStolenMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod())
};

EventProducerType ParticleSystemBase::_producerType(
    "ParticleSystemProducerType",
    "EventProducerType",
    NULL,
    InitEventProducerFunctor(),
    _methodDesc,
    sizeof(_methodDesc));
//OSG_FIELD_CONTAINER_DEF(ParticleSystemBase, ParticleSystemPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &ParticleSystemBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &ParticleSystemBase::getType(void) const 
{
    return _type;
} 

const EventProducerType &ParticleSystemBase::getProducerType(void) const
{
    return _producerType;
}


FieldContainerPtr ParticleSystemBase::shallowCopy(void) const 
{ 
    ParticleSystemPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const ParticleSystem *>(this)); 

    return returnValue; 
}

UInt32 ParticleSystemBase::getContainerSize(void) const 
{ 
    return sizeof(ParticleSystem); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void ParticleSystemBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<ParticleSystemBase *>(&other),
                          whichField);
}
#else
void ParticleSystemBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((ParticleSystemBase *) &other, whichField, sInfo);
}
void ParticleSystemBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ParticleSystemBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfInternalPositions.terminateShare(uiAspect, this->getContainerSize());
    _mfInternalSecPositions.terminateShare(uiAspect, this->getContainerSize());
    _mfInternalNormals.terminateShare(uiAspect, this->getContainerSize());
    _mfInternalColors.terminateShare(uiAspect, this->getContainerSize());
    _mfInternalSizes.terminateShare(uiAspect, this->getContainerSize());
    _mfInternalLifespans.terminateShare(uiAspect, this->getContainerSize());
    _mfInternalAges.terminateShare(uiAspect, this->getContainerSize());
    _mfInternalVelocities.terminateShare(uiAspect, this->getContainerSize());
    _mfInternalSecVelocities.terminateShare(uiAspect, this->getContainerSize());
    _mfInternalAccelerations.terminateShare(uiAspect, this->getContainerSize());
    _mfInternalAttributes.terminateShare(uiAspect, this->getContainerSize());
    _mfGenerators.terminateShare(uiAspect, this->getContainerSize());
    _mfAffectors.terminateShare(uiAspect, this->getContainerSize());
    _mfSystemAffectors.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

ParticleSystemBase::ParticleSystemBase(void) :
    _Producer(&getProducerType()),
    _mfInternalPositions      (), 
    _mfInternalSecPositions   (), 
    _mfInternalNormals        (), 
    _mfInternalColors         (), 
    _mfInternalSizes          (), 
    _mfInternalLifespans      (), 
    _mfInternalAges           (), 
    _mfInternalVelocities     (), 
    _mfInternalSecVelocities  (), 
    _mfInternalAccelerations  (), 
    _mfInternalAttributes     (), 
    _sfMaxParticles           (UInt32(4294967295)), 
    _sfDynamic                (bool(true)), 
    _sfUpdateSecAttribs       (), 
    _sfLastElapsedTime        (Time(0.0)), 
    _mfGenerators             (), 
    _mfAffectors              (), 
    _mfSystemAffectors        (), 
    _sfEventProducer(&_Producer),
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

ParticleSystemBase::ParticleSystemBase(const ParticleSystemBase &source) :
    _Producer(&getProducerType()),
    _mfInternalPositions      (source._mfInternalPositions      ), 
    _mfInternalSecPositions   (source._mfInternalSecPositions   ), 
    _mfInternalNormals        (source._mfInternalNormals        ), 
    _mfInternalColors         (source._mfInternalColors         ), 
    _mfInternalSizes          (source._mfInternalSizes          ), 
    _mfInternalLifespans      (source._mfInternalLifespans      ), 
    _mfInternalAges           (source._mfInternalAges           ), 
    _mfInternalVelocities     (source._mfInternalVelocities     ), 
    _mfInternalSecVelocities  (source._mfInternalSecVelocities  ), 
    _mfInternalAccelerations  (source._mfInternalAccelerations  ), 
    _mfInternalAttributes     (source._mfInternalAttributes     ), 
    _sfMaxParticles           (source._sfMaxParticles           ), 
    _sfDynamic                (source._sfDynamic                ), 
    _sfUpdateSecAttribs       (source._sfUpdateSecAttribs       ), 
    _sfLastElapsedTime        (source._sfLastElapsedTime        ), 
    _mfGenerators             (source._mfGenerators             ), 
    _mfAffectors              (source._mfAffectors              ), 
    _mfSystemAffectors        (source._mfSystemAffectors        ), 
    _sfEventProducer(&_Producer),
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

ParticleSystemBase::~ParticleSystemBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 ParticleSystemBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (InternalPositionsFieldMask & whichField))
    {
        returnValue += _mfInternalPositions.getBinSize();
    }

    if(FieldBits::NoField != (InternalSecPositionsFieldMask & whichField))
    {
        returnValue += _mfInternalSecPositions.getBinSize();
    }

    if(FieldBits::NoField != (InternalNormalsFieldMask & whichField))
    {
        returnValue += _mfInternalNormals.getBinSize();
    }

    if(FieldBits::NoField != (InternalColorsFieldMask & whichField))
    {
        returnValue += _mfInternalColors.getBinSize();
    }

    if(FieldBits::NoField != (InternalSizesFieldMask & whichField))
    {
        returnValue += _mfInternalSizes.getBinSize();
    }

    if(FieldBits::NoField != (InternalLifespansFieldMask & whichField))
    {
        returnValue += _mfInternalLifespans.getBinSize();
    }

    if(FieldBits::NoField != (InternalAgesFieldMask & whichField))
    {
        returnValue += _mfInternalAges.getBinSize();
    }

    if(FieldBits::NoField != (InternalVelocitiesFieldMask & whichField))
    {
        returnValue += _mfInternalVelocities.getBinSize();
    }

    if(FieldBits::NoField != (InternalSecVelocitiesFieldMask & whichField))
    {
        returnValue += _mfInternalSecVelocities.getBinSize();
    }

    if(FieldBits::NoField != (InternalAccelerationsFieldMask & whichField))
    {
        returnValue += _mfInternalAccelerations.getBinSize();
    }

    if(FieldBits::NoField != (InternalAttributesFieldMask & whichField))
    {
        returnValue += _mfInternalAttributes.getBinSize();
    }

    if(FieldBits::NoField != (MaxParticlesFieldMask & whichField))
    {
        returnValue += _sfMaxParticles.getBinSize();
    }

    if(FieldBits::NoField != (DynamicFieldMask & whichField))
    {
        returnValue += _sfDynamic.getBinSize();
    }

    if(FieldBits::NoField != (UpdateSecAttribsFieldMask & whichField))
    {
        returnValue += _sfUpdateSecAttribs.getBinSize();
    }

    if(FieldBits::NoField != (LastElapsedTimeFieldMask & whichField))
    {
        returnValue += _sfLastElapsedTime.getBinSize();
    }

    if(FieldBits::NoField != (GeneratorsFieldMask & whichField))
    {
        returnValue += _mfGenerators.getBinSize();
    }

    if(FieldBits::NoField != (AffectorsFieldMask & whichField))
    {
        returnValue += _mfAffectors.getBinSize();
    }

    if(FieldBits::NoField != (SystemAffectorsFieldMask & whichField))
    {
        returnValue += _mfSystemAffectors.getBinSize();
    }

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        returnValue += _sfEventProducer.getBinSize();
    }


    return returnValue;
}

void ParticleSystemBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (InternalPositionsFieldMask & whichField))
    {
        _mfInternalPositions.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InternalSecPositionsFieldMask & whichField))
    {
        _mfInternalSecPositions.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InternalNormalsFieldMask & whichField))
    {
        _mfInternalNormals.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InternalColorsFieldMask & whichField))
    {
        _mfInternalColors.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InternalSizesFieldMask & whichField))
    {
        _mfInternalSizes.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InternalLifespansFieldMask & whichField))
    {
        _mfInternalLifespans.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InternalAgesFieldMask & whichField))
    {
        _mfInternalAges.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InternalVelocitiesFieldMask & whichField))
    {
        _mfInternalVelocities.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InternalSecVelocitiesFieldMask & whichField))
    {
        _mfInternalSecVelocities.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InternalAccelerationsFieldMask & whichField))
    {
        _mfInternalAccelerations.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InternalAttributesFieldMask & whichField))
    {
        _mfInternalAttributes.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MaxParticlesFieldMask & whichField))
    {
        _sfMaxParticles.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DynamicFieldMask & whichField))
    {
        _sfDynamic.copyToBin(pMem);
    }

    if(FieldBits::NoField != (UpdateSecAttribsFieldMask & whichField))
    {
        _sfUpdateSecAttribs.copyToBin(pMem);
    }

    if(FieldBits::NoField != (LastElapsedTimeFieldMask & whichField))
    {
        _sfLastElapsedTime.copyToBin(pMem);
    }

    if(FieldBits::NoField != (GeneratorsFieldMask & whichField))
    {
        _mfGenerators.copyToBin(pMem);
    }

    if(FieldBits::NoField != (AffectorsFieldMask & whichField))
    {
        _mfAffectors.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SystemAffectorsFieldMask & whichField))
    {
        _mfSystemAffectors.copyToBin(pMem);
    }

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyToBin(pMem);
    }


}

void ParticleSystemBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (InternalPositionsFieldMask & whichField))
    {
        _mfInternalPositions.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InternalSecPositionsFieldMask & whichField))
    {
        _mfInternalSecPositions.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InternalNormalsFieldMask & whichField))
    {
        _mfInternalNormals.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InternalColorsFieldMask & whichField))
    {
        _mfInternalColors.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InternalSizesFieldMask & whichField))
    {
        _mfInternalSizes.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InternalLifespansFieldMask & whichField))
    {
        _mfInternalLifespans.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InternalAgesFieldMask & whichField))
    {
        _mfInternalAges.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InternalVelocitiesFieldMask & whichField))
    {
        _mfInternalVelocities.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InternalSecVelocitiesFieldMask & whichField))
    {
        _mfInternalSecVelocities.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InternalAccelerationsFieldMask & whichField))
    {
        _mfInternalAccelerations.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InternalAttributesFieldMask & whichField))
    {
        _mfInternalAttributes.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MaxParticlesFieldMask & whichField))
    {
        _sfMaxParticles.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DynamicFieldMask & whichField))
    {
        _sfDynamic.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (UpdateSecAttribsFieldMask & whichField))
    {
        _sfUpdateSecAttribs.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (LastElapsedTimeFieldMask & whichField))
    {
        _sfLastElapsedTime.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (GeneratorsFieldMask & whichField))
    {
        _mfGenerators.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (AffectorsFieldMask & whichField))
    {
        _mfAffectors.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SystemAffectorsFieldMask & whichField))
    {
        _mfSystemAffectors.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ParticleSystemBase::executeSyncImpl(      ParticleSystemBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (InternalPositionsFieldMask & whichField))
        _mfInternalPositions.syncWith(pOther->_mfInternalPositions);

    if(FieldBits::NoField != (InternalSecPositionsFieldMask & whichField))
        _mfInternalSecPositions.syncWith(pOther->_mfInternalSecPositions);

    if(FieldBits::NoField != (InternalNormalsFieldMask & whichField))
        _mfInternalNormals.syncWith(pOther->_mfInternalNormals);

    if(FieldBits::NoField != (InternalColorsFieldMask & whichField))
        _mfInternalColors.syncWith(pOther->_mfInternalColors);

    if(FieldBits::NoField != (InternalSizesFieldMask & whichField))
        _mfInternalSizes.syncWith(pOther->_mfInternalSizes);

    if(FieldBits::NoField != (InternalLifespansFieldMask & whichField))
        _mfInternalLifespans.syncWith(pOther->_mfInternalLifespans);

    if(FieldBits::NoField != (InternalAgesFieldMask & whichField))
        _mfInternalAges.syncWith(pOther->_mfInternalAges);

    if(FieldBits::NoField != (InternalVelocitiesFieldMask & whichField))
        _mfInternalVelocities.syncWith(pOther->_mfInternalVelocities);

    if(FieldBits::NoField != (InternalSecVelocitiesFieldMask & whichField))
        _mfInternalSecVelocities.syncWith(pOther->_mfInternalSecVelocities);

    if(FieldBits::NoField != (InternalAccelerationsFieldMask & whichField))
        _mfInternalAccelerations.syncWith(pOther->_mfInternalAccelerations);

    if(FieldBits::NoField != (InternalAttributesFieldMask & whichField))
        _mfInternalAttributes.syncWith(pOther->_mfInternalAttributes);

    if(FieldBits::NoField != (MaxParticlesFieldMask & whichField))
        _sfMaxParticles.syncWith(pOther->_sfMaxParticles);

    if(FieldBits::NoField != (DynamicFieldMask & whichField))
        _sfDynamic.syncWith(pOther->_sfDynamic);

    if(FieldBits::NoField != (UpdateSecAttribsFieldMask & whichField))
        _sfUpdateSecAttribs.syncWith(pOther->_sfUpdateSecAttribs);

    if(FieldBits::NoField != (LastElapsedTimeFieldMask & whichField))
        _sfLastElapsedTime.syncWith(pOther->_sfLastElapsedTime);

    if(FieldBits::NoField != (GeneratorsFieldMask & whichField))
        _mfGenerators.syncWith(pOther->_mfGenerators);

    if(FieldBits::NoField != (AffectorsFieldMask & whichField))
        _mfAffectors.syncWith(pOther->_mfAffectors);

    if(FieldBits::NoField != (SystemAffectorsFieldMask & whichField))
        _mfSystemAffectors.syncWith(pOther->_mfSystemAffectors);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
        _sfEventProducer.syncWith(pOther->_sfEventProducer);


}
#else
void ParticleSystemBase::executeSyncImpl(      ParticleSystemBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (MaxParticlesFieldMask & whichField))
        _sfMaxParticles.syncWith(pOther->_sfMaxParticles);

    if(FieldBits::NoField != (DynamicFieldMask & whichField))
        _sfDynamic.syncWith(pOther->_sfDynamic);

    if(FieldBits::NoField != (UpdateSecAttribsFieldMask & whichField))
        _sfUpdateSecAttribs.syncWith(pOther->_sfUpdateSecAttribs);

    if(FieldBits::NoField != (LastElapsedTimeFieldMask & whichField))
        _sfLastElapsedTime.syncWith(pOther->_sfLastElapsedTime);


    if(FieldBits::NoField != (InternalPositionsFieldMask & whichField))
        _mfInternalPositions.syncWith(pOther->_mfInternalPositions, sInfo);

    if(FieldBits::NoField != (InternalSecPositionsFieldMask & whichField))
        _mfInternalSecPositions.syncWith(pOther->_mfInternalSecPositions, sInfo);

    if(FieldBits::NoField != (InternalNormalsFieldMask & whichField))
        _mfInternalNormals.syncWith(pOther->_mfInternalNormals, sInfo);

    if(FieldBits::NoField != (InternalColorsFieldMask & whichField))
        _mfInternalColors.syncWith(pOther->_mfInternalColors, sInfo);

    if(FieldBits::NoField != (InternalSizesFieldMask & whichField))
        _mfInternalSizes.syncWith(pOther->_mfInternalSizes, sInfo);

    if(FieldBits::NoField != (InternalLifespansFieldMask & whichField))
        _mfInternalLifespans.syncWith(pOther->_mfInternalLifespans, sInfo);

    if(FieldBits::NoField != (InternalAgesFieldMask & whichField))
        _mfInternalAges.syncWith(pOther->_mfInternalAges, sInfo);

    if(FieldBits::NoField != (InternalVelocitiesFieldMask & whichField))
        _mfInternalVelocities.syncWith(pOther->_mfInternalVelocities, sInfo);

    if(FieldBits::NoField != (InternalSecVelocitiesFieldMask & whichField))
        _mfInternalSecVelocities.syncWith(pOther->_mfInternalSecVelocities, sInfo);

    if(FieldBits::NoField != (InternalAccelerationsFieldMask & whichField))
        _mfInternalAccelerations.syncWith(pOther->_mfInternalAccelerations, sInfo);

    if(FieldBits::NoField != (InternalAttributesFieldMask & whichField))
        _mfInternalAttributes.syncWith(pOther->_mfInternalAttributes, sInfo);

    if(FieldBits::NoField != (GeneratorsFieldMask & whichField))
        _mfGenerators.syncWith(pOther->_mfGenerators, sInfo);

    if(FieldBits::NoField != (AffectorsFieldMask & whichField))
        _mfAffectors.syncWith(pOther->_mfAffectors, sInfo);

    if(FieldBits::NoField != (SystemAffectorsFieldMask & whichField))
        _mfSystemAffectors.syncWith(pOther->_mfSystemAffectors, sInfo);


}

void ParticleSystemBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (InternalPositionsFieldMask & whichField))
        _mfInternalPositions.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (InternalSecPositionsFieldMask & whichField))
        _mfInternalSecPositions.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (InternalNormalsFieldMask & whichField))
        _mfInternalNormals.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (InternalColorsFieldMask & whichField))
        _mfInternalColors.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (InternalSizesFieldMask & whichField))
        _mfInternalSizes.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (InternalLifespansFieldMask & whichField))
        _mfInternalLifespans.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (InternalAgesFieldMask & whichField))
        _mfInternalAges.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (InternalVelocitiesFieldMask & whichField))
        _mfInternalVelocities.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (InternalSecVelocitiesFieldMask & whichField))
        _mfInternalSecVelocities.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (InternalAccelerationsFieldMask & whichField))
        _mfInternalAccelerations.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (InternalAttributesFieldMask & whichField))
        _mfInternalAttributes.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (GeneratorsFieldMask & whichField))
        _mfGenerators.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (AffectorsFieldMask & whichField))
        _mfAffectors.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (SystemAffectorsFieldMask & whichField))
        _mfSystemAffectors.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<ParticleSystemPtr>::_type("ParticleSystemPtr", "AttachmentContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ParticleSystemPtr, OSG_PARTICLESYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(ParticleSystemPtr, OSG_PARTICLESYSTEMLIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE

