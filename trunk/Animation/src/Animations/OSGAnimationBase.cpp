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
 **     class Animation!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEANIMATIONINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGAnimationBase.h"
#include "OSGAnimation.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  AnimationBase::CyclingFieldMask = 
    (TypeTraits<BitVector>::One << AnimationBase::CyclingFieldId);

const OSG::BitVector  AnimationBase::CyclesFieldMask = 
    (TypeTraits<BitVector>::One << AnimationBase::CyclesFieldId);

const OSG::BitVector  AnimationBase::EventProducerFieldMask =
    (TypeTraits<BitVector>::One << AnimationBase::EventProducerFieldId);

const OSG::BitVector AnimationBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Int32           AnimationBase::_sfCycling
    
*/
/*! \var Real32          AnimationBase::_sfCycles
    
*/

//! Animation description

FieldDescription *AnimationBase::_desc[] = 
{
    new FieldDescription(SFInt32::getClassType(), 
                     "Cycling", 
                     CyclingFieldId, CyclingFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AnimationBase::editSFCycling)),
    new FieldDescription(SFReal32::getClassType(), 
                     "Cycles", 
                     CyclesFieldId, CyclesFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&AnimationBase::editSFCycles))
    , 
    new FieldDescription(SFEventProducerPtr::getClassType(), 
                     "EventProducer", 
                     EventProducerFieldId,EventProducerFieldMask,
                     true,
                     FieldAccessMethod(NULL))
};


FieldContainerType AnimationBase::_type(
    "Animation",
    "AttachmentContainer",
    NULL,
    NULL, 
    Animation::initMethod,
    _desc,
    sizeof(_desc));

//! Animation Produced Methods

MethodDescription *AnimationBase::_methodDesc[] =
{
    new MethodDescription("AnimationStarted", 
                     AnimationStartedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("AnimationStopped", 
                     AnimationStoppedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("AnimationPaused", 
                     AnimationPausedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("AnimationUnpaused", 
                     AnimationUnpausedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("AnimationEnded", 
                     AnimationEndedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("AnimationCycled", 
                     AnimationCycledMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod())
};

EventProducerType AnimationBase::_producerType(
    "AnimationProducerType",
    "EventProducerType",
    NULL,
    InitEventProducerFunctor(),
    _methodDesc,
    sizeof(_methodDesc));
//OSG_FIELD_CONTAINER_DEF(AnimationBase, AnimationPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &AnimationBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &AnimationBase::getType(void) const 
{
    return _type;
} 

const EventProducerType &AnimationBase::getProducerType(void) const
{
    return _producerType;
}


UInt32 AnimationBase::getContainerSize(void) const 
{ 
    return sizeof(Animation); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void AnimationBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<AnimationBase *>(&other),
                          whichField);
}
#else
void AnimationBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((AnimationBase *) &other, whichField, sInfo);
}
void AnimationBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void AnimationBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

AnimationBase::AnimationBase(void) :
    _Producer(&getProducerType()),
    _sfCycling                (Int32(-1)), 
    _sfCycles                 (Real32(0)), 
    _sfEventProducer(&_Producer),
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

AnimationBase::AnimationBase(const AnimationBase &source) :
    _Producer(&getProducerType()),
    _sfCycling                (source._sfCycling                ), 
    _sfCycles                 (source._sfCycles                 ), 
    _sfEventProducer(&_Producer),
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

AnimationBase::~AnimationBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 AnimationBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CyclingFieldMask & whichField))
    {
        returnValue += _sfCycling.getBinSize();
    }

    if(FieldBits::NoField != (CyclesFieldMask & whichField))
    {
        returnValue += _sfCycles.getBinSize();
    }

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        returnValue += _sfEventProducer.getBinSize();
    }


    return returnValue;
}

void AnimationBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CyclingFieldMask & whichField))
    {
        _sfCycling.copyToBin(pMem);
    }

    if(FieldBits::NoField != (CyclesFieldMask & whichField))
    {
        _sfCycles.copyToBin(pMem);
    }

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyToBin(pMem);
    }


}

void AnimationBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CyclingFieldMask & whichField))
    {
        _sfCycling.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (CyclesFieldMask & whichField))
    {
        _sfCycles.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void AnimationBase::executeSyncImpl(      AnimationBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (CyclingFieldMask & whichField))
        _sfCycling.syncWith(pOther->_sfCycling);

    if(FieldBits::NoField != (CyclesFieldMask & whichField))
        _sfCycles.syncWith(pOther->_sfCycles);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
        _sfEventProducer.syncWith(pOther->_sfEventProducer);


}
#else
void AnimationBase::executeSyncImpl(      AnimationBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (CyclingFieldMask & whichField))
        _sfCycling.syncWith(pOther->_sfCycling);

    if(FieldBits::NoField != (CyclesFieldMask & whichField))
        _sfCycles.syncWith(pOther->_sfCycles);



}

void AnimationBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<AnimationPtr>::_type("AnimationPtr", "AttachmentContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(AnimationPtr, OSG_ANIMATIONLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(AnimationPtr, OSG_ANIMATIONLIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE

