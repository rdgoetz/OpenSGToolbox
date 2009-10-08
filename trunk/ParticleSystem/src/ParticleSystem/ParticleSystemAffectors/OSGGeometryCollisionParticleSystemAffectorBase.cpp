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
 **     class GeometryCollisionParticleSystemAffector!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEGEOMETRYCOLLISIONPARTICLESYSTEMAFFECTORINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGGeometryCollisionParticleSystemAffectorBase.h"
#include "OSGGeometryCollisionParticleSystemAffector.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  GeometryCollisionParticleSystemAffectorBase::CollisionAffectorsFieldMask = 
    (TypeTraits<BitVector>::One << GeometryCollisionParticleSystemAffectorBase::CollisionAffectorsFieldId);

const OSG::BitVector  GeometryCollisionParticleSystemAffectorBase::CollisionNodeFieldMask = 
    (TypeTraits<BitVector>::One << GeometryCollisionParticleSystemAffectorBase::CollisionNodeFieldId);

const OSG::BitVector  GeometryCollisionParticleSystemAffectorBase::EventProducerFieldMask =
    (TypeTraits<BitVector>::One << GeometryCollisionParticleSystemAffectorBase::EventProducerFieldId);

const OSG::BitVector GeometryCollisionParticleSystemAffectorBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var ParticleAffectorPtr GeometryCollisionParticleSystemAffectorBase::_mfCollisionAffectors
    
*/
/*! \var NodePtr         GeometryCollisionParticleSystemAffectorBase::_sfCollisionNode
    
*/

//! GeometryCollisionParticleSystemAffector description

FieldDescription *GeometryCollisionParticleSystemAffectorBase::_desc[] = 
{
    new FieldDescription(MFParticleAffectorPtr::getClassType(), 
                     "CollisionAffectors", 
                     CollisionAffectorsFieldId, CollisionAffectorsFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&GeometryCollisionParticleSystemAffectorBase::editMFCollisionAffectors)),
    new FieldDescription(SFNodePtr::getClassType(), 
                     "CollisionNode", 
                     CollisionNodeFieldId, CollisionNodeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&GeometryCollisionParticleSystemAffectorBase::editSFCollisionNode))
    , 
    new FieldDescription(SFEventProducerPtr::getClassType(), 
                     "EventProducer", 
                     EventProducerFieldId,EventProducerFieldMask,
                     true,
                     FieldAccessMethod(NULL))
};


FieldContainerType GeometryCollisionParticleSystemAffectorBase::_type(
    "GeometryCollisionParticleSystemAffector",
    "ParticleSystemAffector",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&GeometryCollisionParticleSystemAffectorBase::createEmpty),
    GeometryCollisionParticleSystemAffector::initMethod,
    _desc,
    sizeof(_desc));

//! GeometryCollisionParticleSystemAffector Produced Methods

MethodDescription *GeometryCollisionParticleSystemAffectorBase::_methodDesc[] =
{
    new MethodDescription("ParticleCollision", 
                     ParticleCollisionMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod())
};

EventProducerType GeometryCollisionParticleSystemAffectorBase::_producerType(
    "GeometryCollisionParticleSystemAffectorProducerType",
    "EventProducerType",
    NULL,
    InitEventProducerFunctor(),
    _methodDesc,
    sizeof(_methodDesc));
//OSG_FIELD_CONTAINER_DEF(GeometryCollisionParticleSystemAffectorBase, GeometryCollisionParticleSystemAffectorPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &GeometryCollisionParticleSystemAffectorBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &GeometryCollisionParticleSystemAffectorBase::getType(void) const 
{
    return _type;
} 

const EventProducerType &GeometryCollisionParticleSystemAffectorBase::getProducerType(void) const
{
    return _producerType;
}


FieldContainerPtr GeometryCollisionParticleSystemAffectorBase::shallowCopy(void) const 
{ 
    GeometryCollisionParticleSystemAffectorPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const GeometryCollisionParticleSystemAffector *>(this)); 

    return returnValue; 
}

UInt32 GeometryCollisionParticleSystemAffectorBase::getContainerSize(void) const 
{ 
    return sizeof(GeometryCollisionParticleSystemAffector); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void GeometryCollisionParticleSystemAffectorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<GeometryCollisionParticleSystemAffectorBase *>(&other),
                          whichField);
}
#else
void GeometryCollisionParticleSystemAffectorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((GeometryCollisionParticleSystemAffectorBase *) &other, whichField, sInfo);
}
void GeometryCollisionParticleSystemAffectorBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void GeometryCollisionParticleSystemAffectorBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfCollisionAffectors.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

GeometryCollisionParticleSystemAffectorBase::GeometryCollisionParticleSystemAffectorBase(void) :
    _Producer(&getProducerType()),
    _mfCollisionAffectors     (), 
    _sfCollisionNode          (NodePtr(NullFC)), 
    _sfEventProducer(&_Producer),
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

GeometryCollisionParticleSystemAffectorBase::GeometryCollisionParticleSystemAffectorBase(const GeometryCollisionParticleSystemAffectorBase &source) :
    _Producer(&getProducerType()),
    _mfCollisionAffectors     (source._mfCollisionAffectors     ), 
    _sfCollisionNode          (source._sfCollisionNode          ), 
    _sfEventProducer(&_Producer),
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

GeometryCollisionParticleSystemAffectorBase::~GeometryCollisionParticleSystemAffectorBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 GeometryCollisionParticleSystemAffectorBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CollisionAffectorsFieldMask & whichField))
    {
        returnValue += _mfCollisionAffectors.getBinSize();
    }

    if(FieldBits::NoField != (CollisionNodeFieldMask & whichField))
    {
        returnValue += _sfCollisionNode.getBinSize();
    }

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        returnValue += _sfEventProducer.getBinSize();
    }


    return returnValue;
}

void GeometryCollisionParticleSystemAffectorBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CollisionAffectorsFieldMask & whichField))
    {
        _mfCollisionAffectors.copyToBin(pMem);
    }

    if(FieldBits::NoField != (CollisionNodeFieldMask & whichField))
    {
        _sfCollisionNode.copyToBin(pMem);
    }

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyToBin(pMem);
    }


}

void GeometryCollisionParticleSystemAffectorBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CollisionAffectorsFieldMask & whichField))
    {
        _mfCollisionAffectors.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (CollisionNodeFieldMask & whichField))
    {
        _sfCollisionNode.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void GeometryCollisionParticleSystemAffectorBase::executeSyncImpl(      GeometryCollisionParticleSystemAffectorBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (CollisionAffectorsFieldMask & whichField))
        _mfCollisionAffectors.syncWith(pOther->_mfCollisionAffectors);

    if(FieldBits::NoField != (CollisionNodeFieldMask & whichField))
        _sfCollisionNode.syncWith(pOther->_sfCollisionNode);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
        _sfEventProducer.syncWith(pOther->_sfEventProducer);


}
#else
void GeometryCollisionParticleSystemAffectorBase::executeSyncImpl(      GeometryCollisionParticleSystemAffectorBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (CollisionNodeFieldMask & whichField))
        _sfCollisionNode.syncWith(pOther->_sfCollisionNode);


    if(FieldBits::NoField != (CollisionAffectorsFieldMask & whichField))
        _mfCollisionAffectors.syncWith(pOther->_mfCollisionAffectors, sInfo);


}

void GeometryCollisionParticleSystemAffectorBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (CollisionAffectorsFieldMask & whichField))
        _mfCollisionAffectors.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<GeometryCollisionParticleSystemAffectorPtr>::_type("GeometryCollisionParticleSystemAffectorPtr", "ParticleSystemAffectorPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(GeometryCollisionParticleSystemAffectorPtr, OSG_PARTICLESYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(GeometryCollisionParticleSystemAffectorPtr, OSG_PARTICLESYSTEMLIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE

