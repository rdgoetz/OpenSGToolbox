/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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
 **     class GaussianNormalDistribution2D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEGAUSSIANNORMALDISTRIBUTION2DINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGGaussianNormalDistribution2DBase.h"
#include "OSGGaussianNormalDistribution2D.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  GaussianNormalDistribution2DBase::MeanFieldMask = 
    (TypeTraits<BitVector>::One << GaussianNormalDistribution2DBase::MeanFieldId);

const OSG::BitVector  GaussianNormalDistribution2DBase::StandardDeviationXFieldMask = 
    (TypeTraits<BitVector>::One << GaussianNormalDistribution2DBase::StandardDeviationXFieldId);

const OSG::BitVector  GaussianNormalDistribution2DBase::StandardDeviationYFieldMask = 
    (TypeTraits<BitVector>::One << GaussianNormalDistribution2DBase::StandardDeviationYFieldId);

const OSG::BitVector GaussianNormalDistribution2DBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Pnt2f           GaussianNormalDistribution2DBase::_sfMean
    
*/
/*! \var Real32          GaussianNormalDistribution2DBase::_sfStandardDeviationX
    
*/
/*! \var Real32          GaussianNormalDistribution2DBase::_sfStandardDeviationY
    
*/

//! GaussianNormalDistribution2D description

FieldDescription *GaussianNormalDistribution2DBase::_desc[] = 
{
    new FieldDescription(SFPnt2f::getClassType(), 
                     "Mean", 
                     MeanFieldId, MeanFieldMask,
                     false,
                     (FieldAccessMethod) &GaussianNormalDistribution2DBase::getSFMean),
    new FieldDescription(SFReal32::getClassType(), 
                     "StandardDeviationX", 
                     StandardDeviationXFieldId, StandardDeviationXFieldMask,
                     false,
                     (FieldAccessMethod) &GaussianNormalDistribution2DBase::getSFStandardDeviationX),
    new FieldDescription(SFReal32::getClassType(), 
                     "StandardDeviationY", 
                     StandardDeviationYFieldId, StandardDeviationYFieldMask,
                     false,
                     (FieldAccessMethod) &GaussianNormalDistribution2DBase::getSFStandardDeviationY)
};


FieldContainerType GaussianNormalDistribution2DBase::_type(
    "GaussianNormalDistribution2D",
    "Function",
    NULL,
    (PrototypeCreateF) &GaussianNormalDistribution2DBase::createEmpty,
    GaussianNormalDistribution2D::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(GaussianNormalDistribution2DBase, GaussianNormalDistribution2DPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &GaussianNormalDistribution2DBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &GaussianNormalDistribution2DBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr GaussianNormalDistribution2DBase::shallowCopy(void) const 
{ 
    GaussianNormalDistribution2DPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const GaussianNormalDistribution2D *>(this)); 

    return returnValue; 
}

UInt32 GaussianNormalDistribution2DBase::getContainerSize(void) const 
{ 
    return sizeof(GaussianNormalDistribution2D); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void GaussianNormalDistribution2DBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((GaussianNormalDistribution2DBase *) &other, whichField);
}
#else
void GaussianNormalDistribution2DBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((GaussianNormalDistribution2DBase *) &other, whichField, sInfo);
}
void GaussianNormalDistribution2DBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void GaussianNormalDistribution2DBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

GaussianNormalDistribution2DBase::GaussianNormalDistribution2DBase(void) :
    _sfMean                   (Pnt2f(0.0,0.0)), 
    _sfStandardDeviationX     (Real32(1.0)), 
    _sfStandardDeviationY     (Real32(1.0)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

GaussianNormalDistribution2DBase::GaussianNormalDistribution2DBase(const GaussianNormalDistribution2DBase &source) :
    _sfMean                   (source._sfMean                   ), 
    _sfStandardDeviationX     (source._sfStandardDeviationX     ), 
    _sfStandardDeviationY     (source._sfStandardDeviationY     ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

GaussianNormalDistribution2DBase::~GaussianNormalDistribution2DBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 GaussianNormalDistribution2DBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MeanFieldMask & whichField))
    {
        returnValue += _sfMean.getBinSize();
    }

    if(FieldBits::NoField != (StandardDeviationXFieldMask & whichField))
    {
        returnValue += _sfStandardDeviationX.getBinSize();
    }

    if(FieldBits::NoField != (StandardDeviationYFieldMask & whichField))
    {
        returnValue += _sfStandardDeviationY.getBinSize();
    }


    return returnValue;
}

void GaussianNormalDistribution2DBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MeanFieldMask & whichField))
    {
        _sfMean.copyToBin(pMem);
    }

    if(FieldBits::NoField != (StandardDeviationXFieldMask & whichField))
    {
        _sfStandardDeviationX.copyToBin(pMem);
    }

    if(FieldBits::NoField != (StandardDeviationYFieldMask & whichField))
    {
        _sfStandardDeviationY.copyToBin(pMem);
    }


}

void GaussianNormalDistribution2DBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MeanFieldMask & whichField))
    {
        _sfMean.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (StandardDeviationXFieldMask & whichField))
    {
        _sfStandardDeviationX.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (StandardDeviationYFieldMask & whichField))
    {
        _sfStandardDeviationY.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void GaussianNormalDistribution2DBase::executeSyncImpl(      GaussianNormalDistribution2DBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (MeanFieldMask & whichField))
        _sfMean.syncWith(pOther->_sfMean);

    if(FieldBits::NoField != (StandardDeviationXFieldMask & whichField))
        _sfStandardDeviationX.syncWith(pOther->_sfStandardDeviationX);

    if(FieldBits::NoField != (StandardDeviationYFieldMask & whichField))
        _sfStandardDeviationY.syncWith(pOther->_sfStandardDeviationY);


}
#else
void GaussianNormalDistribution2DBase::executeSyncImpl(      GaussianNormalDistribution2DBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (MeanFieldMask & whichField))
        _sfMean.syncWith(pOther->_sfMean);

    if(FieldBits::NoField != (StandardDeviationXFieldMask & whichField))
        _sfStandardDeviationX.syncWith(pOther->_sfStandardDeviationX);

    if(FieldBits::NoField != (StandardDeviationYFieldMask & whichField))
        _sfStandardDeviationY.syncWith(pOther->_sfStandardDeviationY);



}

void GaussianNormalDistribution2DBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<GaussianNormalDistribution2DPtr>::_type("GaussianNormalDistribution2DPtr", "FunctionPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(GaussianNormalDistribution2DPtr, OSG_DYNAMICSLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(GaussianNormalDistribution2DPtr, OSG_DYNAMICSLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGGAUSSIANNORMALDISTRIBUTION2DBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGGAUSSIANNORMALDISTRIBUTION2DBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGGAUSSIANNORMALDISTRIBUTION2DFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
