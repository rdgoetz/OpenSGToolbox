/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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
 **     class DiscDistribution2D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEDISCDISTRIBUTION2DINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGDiscDistribution2DBase.h"
#include "OSGDiscDistribution2D.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  DiscDistribution2DBase::CenterFieldMask = 
    (TypeTraits<BitVector>::One << DiscDistribution2DBase::CenterFieldId);

const OSG::BitVector  DiscDistribution2DBase::MinRadiusFieldMask = 
    (TypeTraits<BitVector>::One << DiscDistribution2DBase::MinRadiusFieldId);

const OSG::BitVector  DiscDistribution2DBase::MaxRadiusFieldMask = 
    (TypeTraits<BitVector>::One << DiscDistribution2DBase::MaxRadiusFieldId);

const OSG::BitVector  DiscDistribution2DBase::MinThetaFieldMask = 
    (TypeTraits<BitVector>::One << DiscDistribution2DBase::MinThetaFieldId);

const OSG::BitVector  DiscDistribution2DBase::MaxThetaFieldMask = 
    (TypeTraits<BitVector>::One << DiscDistribution2DBase::MaxThetaFieldId);

const OSG::BitVector DiscDistribution2DBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Pnt2f           DiscDistribution2DBase::_sfCenter
    
*/
/*! \var Real32          DiscDistribution2DBase::_sfMinRadius
    
*/
/*! \var Real32          DiscDistribution2DBase::_sfMaxRadius
    
*/
/*! \var Real32          DiscDistribution2DBase::_sfMinTheta
    
*/
/*! \var Real32          DiscDistribution2DBase::_sfMaxTheta
    
*/

//! DiscDistribution2D description

FieldDescription *DiscDistribution2DBase::_desc[] = 
{
    new FieldDescription(SFPnt2f::getClassType(), 
                     "Center", 
                     CenterFieldId, CenterFieldMask,
                     false,
                     (FieldAccessMethod) &DiscDistribution2DBase::getSFCenter),
    new FieldDescription(SFReal32::getClassType(), 
                     "MinRadius", 
                     MinRadiusFieldId, MinRadiusFieldMask,
                     false,
                     (FieldAccessMethod) &DiscDistribution2DBase::getSFMinRadius),
    new FieldDescription(SFReal32::getClassType(), 
                     "MaxRadius", 
                     MaxRadiusFieldId, MaxRadiusFieldMask,
                     false,
                     (FieldAccessMethod) &DiscDistribution2DBase::getSFMaxRadius),
    new FieldDescription(SFReal32::getClassType(), 
                     "MinTheta", 
                     MinThetaFieldId, MinThetaFieldMask,
                     false,
                     (FieldAccessMethod) &DiscDistribution2DBase::getSFMinTheta),
    new FieldDescription(SFReal32::getClassType(), 
                     "MaxTheta", 
                     MaxThetaFieldId, MaxThetaFieldMask,
                     false,
                     (FieldAccessMethod) &DiscDistribution2DBase::getSFMaxTheta)
};


FieldContainerType DiscDistribution2DBase::_type(
    "DiscDistribution2D",
    "Distribution2D",
    NULL,
    (PrototypeCreateF) &DiscDistribution2DBase::createEmpty,
    DiscDistribution2D::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(DiscDistribution2DBase, DiscDistribution2DPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &DiscDistribution2DBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &DiscDistribution2DBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr DiscDistribution2DBase::shallowCopy(void) const 
{ 
    DiscDistribution2DPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const DiscDistribution2D *>(this)); 

    return returnValue; 
}

UInt32 DiscDistribution2DBase::getContainerSize(void) const 
{ 
    return sizeof(DiscDistribution2D); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void DiscDistribution2DBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((DiscDistribution2DBase *) &other, whichField);
}
#else
void DiscDistribution2DBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((DiscDistribution2DBase *) &other, whichField, sInfo);
}
void DiscDistribution2DBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void DiscDistribution2DBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

DiscDistribution2DBase::DiscDistribution2DBase(void) :
    _sfCenter                 (Pnt2f(0.0,0.0)), 
    _sfMinRadius              (Real32(0.0)), 
    _sfMaxRadius              (Real32(1.0)), 
    _sfMinTheta               (Real32(0.0)), 
    _sfMaxTheta               (Real32(6.28319)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

DiscDistribution2DBase::DiscDistribution2DBase(const DiscDistribution2DBase &source) :
    _sfCenter                 (source._sfCenter                 ), 
    _sfMinRadius              (source._sfMinRadius              ), 
    _sfMaxRadius              (source._sfMaxRadius              ), 
    _sfMinTheta               (source._sfMinTheta               ), 
    _sfMaxTheta               (source._sfMaxTheta               ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

DiscDistribution2DBase::~DiscDistribution2DBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 DiscDistribution2DBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
    {
        returnValue += _sfCenter.getBinSize();
    }

    if(FieldBits::NoField != (MinRadiusFieldMask & whichField))
    {
        returnValue += _sfMinRadius.getBinSize();
    }

    if(FieldBits::NoField != (MaxRadiusFieldMask & whichField))
    {
        returnValue += _sfMaxRadius.getBinSize();
    }

    if(FieldBits::NoField != (MinThetaFieldMask & whichField))
    {
        returnValue += _sfMinTheta.getBinSize();
    }

    if(FieldBits::NoField != (MaxThetaFieldMask & whichField))
    {
        returnValue += _sfMaxTheta.getBinSize();
    }


    return returnValue;
}

void DiscDistribution2DBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
    {
        _sfCenter.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MinRadiusFieldMask & whichField))
    {
        _sfMinRadius.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MaxRadiusFieldMask & whichField))
    {
        _sfMaxRadius.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MinThetaFieldMask & whichField))
    {
        _sfMinTheta.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MaxThetaFieldMask & whichField))
    {
        _sfMaxTheta.copyToBin(pMem);
    }


}

void DiscDistribution2DBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
    {
        _sfCenter.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MinRadiusFieldMask & whichField))
    {
        _sfMinRadius.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MaxRadiusFieldMask & whichField))
    {
        _sfMaxRadius.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MinThetaFieldMask & whichField))
    {
        _sfMinTheta.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MaxThetaFieldMask & whichField))
    {
        _sfMaxTheta.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void DiscDistribution2DBase::executeSyncImpl(      DiscDistribution2DBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
        _sfCenter.syncWith(pOther->_sfCenter);

    if(FieldBits::NoField != (MinRadiusFieldMask & whichField))
        _sfMinRadius.syncWith(pOther->_sfMinRadius);

    if(FieldBits::NoField != (MaxRadiusFieldMask & whichField))
        _sfMaxRadius.syncWith(pOther->_sfMaxRadius);

    if(FieldBits::NoField != (MinThetaFieldMask & whichField))
        _sfMinTheta.syncWith(pOther->_sfMinTheta);

    if(FieldBits::NoField != (MaxThetaFieldMask & whichField))
        _sfMaxTheta.syncWith(pOther->_sfMaxTheta);


}
#else
void DiscDistribution2DBase::executeSyncImpl(      DiscDistribution2DBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
        _sfCenter.syncWith(pOther->_sfCenter);

    if(FieldBits::NoField != (MinRadiusFieldMask & whichField))
        _sfMinRadius.syncWith(pOther->_sfMinRadius);

    if(FieldBits::NoField != (MaxRadiusFieldMask & whichField))
        _sfMaxRadius.syncWith(pOther->_sfMaxRadius);

    if(FieldBits::NoField != (MinThetaFieldMask & whichField))
        _sfMinTheta.syncWith(pOther->_sfMinTheta);

    if(FieldBits::NoField != (MaxThetaFieldMask & whichField))
        _sfMaxTheta.syncWith(pOther->_sfMaxTheta);



}

void DiscDistribution2DBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<DiscDistribution2DPtr>::_type("DiscDistribution2DPtr", "Distribution2DPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(DiscDistribution2DPtr, );
OSG_DLLEXPORT_MFIELD_DEF1(DiscDistribution2DPtr, );


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
    static Char8 cvsid_hpp       [] = OSGDISCDISTRIBUTION2DBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGDISCDISTRIBUTION2DBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGDISCDISTRIBUTION2DFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

