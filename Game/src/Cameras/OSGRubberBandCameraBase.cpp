/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Game                                *
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
 **     class RubberBandCamera!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILERUBBERBANDCAMERAINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGRubberBandCameraBase.h"
#include "OSGRubberBandCamera.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  RubberBandCameraBase::PositionCoefficientsFieldMask = 
    (TypeTraits<BitVector>::One << RubberBandCameraBase::PositionCoefficientsFieldId);

const OSG::BitVector  RubberBandCameraBase::OrientationCoefficientsFieldMask = 
    (TypeTraits<BitVector>::One << RubberBandCameraBase::OrientationCoefficientsFieldId);

const OSG::BitVector RubberBandCameraBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Vec3f           RubberBandCameraBase::_sfPositionCoefficients
    
*/
/*! \var Vec3f           RubberBandCameraBase::_sfOrientationCoefficients
    
*/

//! RubberBandCamera description

FieldDescription *RubberBandCameraBase::_desc[] = 
{
    new FieldDescription(SFVec3f::getClassType(), 
                     "PositionCoefficients", 
                     PositionCoefficientsFieldId, PositionCoefficientsFieldMask,
                     false,
                     (FieldAccessMethod) &RubberBandCameraBase::getSFPositionCoefficients),
    new FieldDescription(SFVec3f::getClassType(), 
                     "OrientationCoefficients", 
                     OrientationCoefficientsFieldId, OrientationCoefficientsFieldMask,
                     false,
                     (FieldAccessMethod) &RubberBandCameraBase::getSFOrientationCoefficients)
};


FieldContainerType RubberBandCameraBase::_type(
    "RubberBandCamera",
    "CameraDecorator",
    NULL,
    (PrototypeCreateF) &RubberBandCameraBase::createEmpty,
    RubberBandCamera::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(RubberBandCameraBase, RubberBandCameraPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &RubberBandCameraBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &RubberBandCameraBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr RubberBandCameraBase::shallowCopy(void) const 
{ 
    RubberBandCameraPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const RubberBandCamera *>(this)); 

    return returnValue; 
}

UInt32 RubberBandCameraBase::getContainerSize(void) const 
{ 
    return sizeof(RubberBandCamera); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void RubberBandCameraBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((RubberBandCameraBase *) &other, whichField);
}
#else
void RubberBandCameraBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((RubberBandCameraBase *) &other, whichField, sInfo);
}
void RubberBandCameraBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void RubberBandCameraBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

RubberBandCameraBase::RubberBandCameraBase(void) :
    _sfPositionCoefficients   (), 
    _sfOrientationCoefficients(), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

RubberBandCameraBase::RubberBandCameraBase(const RubberBandCameraBase &source) :
    _sfPositionCoefficients   (source._sfPositionCoefficients   ), 
    _sfOrientationCoefficients(source._sfOrientationCoefficients), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

RubberBandCameraBase::~RubberBandCameraBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 RubberBandCameraBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PositionCoefficientsFieldMask & whichField))
    {
        returnValue += _sfPositionCoefficients.getBinSize();
    }

    if(FieldBits::NoField != (OrientationCoefficientsFieldMask & whichField))
    {
        returnValue += _sfOrientationCoefficients.getBinSize();
    }


    return returnValue;
}

void RubberBandCameraBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PositionCoefficientsFieldMask & whichField))
    {
        _sfPositionCoefficients.copyToBin(pMem);
    }

    if(FieldBits::NoField != (OrientationCoefficientsFieldMask & whichField))
    {
        _sfOrientationCoefficients.copyToBin(pMem);
    }


}

void RubberBandCameraBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PositionCoefficientsFieldMask & whichField))
    {
        _sfPositionCoefficients.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (OrientationCoefficientsFieldMask & whichField))
    {
        _sfOrientationCoefficients.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void RubberBandCameraBase::executeSyncImpl(      RubberBandCameraBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (PositionCoefficientsFieldMask & whichField))
        _sfPositionCoefficients.syncWith(pOther->_sfPositionCoefficients);

    if(FieldBits::NoField != (OrientationCoefficientsFieldMask & whichField))
        _sfOrientationCoefficients.syncWith(pOther->_sfOrientationCoefficients);


}
#else
void RubberBandCameraBase::executeSyncImpl(      RubberBandCameraBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (PositionCoefficientsFieldMask & whichField))
        _sfPositionCoefficients.syncWith(pOther->_sfPositionCoefficients);

    if(FieldBits::NoField != (OrientationCoefficientsFieldMask & whichField))
        _sfOrientationCoefficients.syncWith(pOther->_sfOrientationCoefficients);



}

void RubberBandCameraBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif

/*------------------------------ get -----------------------------------*/

OSG_GAMELIB_DLLMAPPING
SFVec3f *RubberBandCameraBase::getSFPositionCoefficients(void)
{
    return &_sfPositionCoefficients;
}

OSG_GAMELIB_DLLMAPPING
SFVec3f *RubberBandCameraBase::getSFOrientationCoefficients(void)
{
    return &_sfOrientationCoefficients;
}


OSG_GAMELIB_DLLMAPPING
Vec3f &RubberBandCameraBase::getPositionCoefficients(void)
{
    return _sfPositionCoefficients.getValue();
}

OSG_GAMELIB_DLLMAPPING
const Vec3f &RubberBandCameraBase::getPositionCoefficients(void) const
{
    return _sfPositionCoefficients.getValue();
}

OSG_GAMELIB_DLLMAPPING
void RubberBandCameraBase::setPositionCoefficients(const Vec3f &value)
{
    _sfPositionCoefficients.setValue(value);
}

OSG_GAMELIB_DLLMAPPING
Vec3f &RubberBandCameraBase::getOrientationCoefficients(void)
{
    return _sfOrientationCoefficients.getValue();
}

OSG_GAMELIB_DLLMAPPING
const Vec3f &RubberBandCameraBase::getOrientationCoefficients(void) const
{
    return _sfOrientationCoefficients.getValue();
}

OSG_GAMELIB_DLLMAPPING
void RubberBandCameraBase::setOrientationCoefficients(const Vec3f &value)
{
    _sfOrientationCoefficients.setValue(value);
}




OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<RubberBandCameraPtr>::_type("RubberBandCameraPtr", "CameraDecoratorPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(RubberBandCameraPtr, OSG_GAMELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(RubberBandCameraPtr, OSG_GAMELIB_DLLTMPLMAPPING);


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.47 2006/03/17 17:03:19 pdaehne Exp $";
    static Char8 cvsid_hpp       [] = OSGRUBBERBANDCAMERABASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGRUBBERBANDCAMERABASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGRUBBERBANDCAMERAFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
