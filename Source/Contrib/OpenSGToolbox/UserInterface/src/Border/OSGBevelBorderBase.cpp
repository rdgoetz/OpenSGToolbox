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
 **     class BevelBorder!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEBEVELBORDERINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGBevelBorderBase.h"
#include "OSGBevelBorder.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  BevelBorderBase::HighlightInnerFieldMask = 
    (TypeTraits<BitVector>::One << BevelBorderBase::HighlightInnerFieldId);

const OSG::BitVector  BevelBorderBase::WidthFieldMask = 
    (TypeTraits<BitVector>::One << BevelBorderBase::WidthFieldId);

const OSG::BitVector  BevelBorderBase::HighlightOuterFieldMask = 
    (TypeTraits<BitVector>::One << BevelBorderBase::HighlightOuterFieldId);

const OSG::BitVector  BevelBorderBase::ShadowInnerFieldMask = 
    (TypeTraits<BitVector>::One << BevelBorderBase::ShadowInnerFieldId);

const OSG::BitVector  BevelBorderBase::ShadowOuterFieldMask = 
    (TypeTraits<BitVector>::One << BevelBorderBase::ShadowOuterFieldId);

const OSG::BitVector  BevelBorderBase::RaisedFieldMask = 
    (TypeTraits<BitVector>::One << BevelBorderBase::RaisedFieldId);

const OSG::BitVector BevelBorderBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Color4f         BevelBorderBase::_sfHighlightInner
    
*/
/*! \var Real32          BevelBorderBase::_sfWidth
    
*/
/*! \var Color4f         BevelBorderBase::_sfHighlightOuter
    
*/
/*! \var Color4f         BevelBorderBase::_sfShadowInner
    
*/
/*! \var Color4f         BevelBorderBase::_sfShadowOuter
    
*/
/*! \var bool            BevelBorderBase::_sfRaised
    
*/

//! BevelBorder description

FieldDescription *BevelBorderBase::_desc[] = 
{
    new FieldDescription(SFColor4f::getClassType(), 
                     "HighlightInner", 
                     HighlightInnerFieldId, HighlightInnerFieldMask,
                     false,
                     (FieldAccessMethod) &BevelBorderBase::getSFHighlightInner),
    new FieldDescription(SFReal32::getClassType(), 
                     "Width", 
                     WidthFieldId, WidthFieldMask,
                     false,
                     (FieldAccessMethod) &BevelBorderBase::getSFWidth),
    new FieldDescription(SFColor4f::getClassType(), 
                     "HighlightOuter", 
                     HighlightOuterFieldId, HighlightOuterFieldMask,
                     false,
                     (FieldAccessMethod) &BevelBorderBase::getSFHighlightOuter),
    new FieldDescription(SFColor4f::getClassType(), 
                     "ShadowInner", 
                     ShadowInnerFieldId, ShadowInnerFieldMask,
                     false,
                     (FieldAccessMethod) &BevelBorderBase::getSFShadowInner),
    new FieldDescription(SFColor4f::getClassType(), 
                     "ShadowOuter", 
                     ShadowOuterFieldId, ShadowOuterFieldMask,
                     false,
                     (FieldAccessMethod) &BevelBorderBase::getSFShadowOuter),
    new FieldDescription(SFBool::getClassType(), 
                     "Raised", 
                     RaisedFieldId, RaisedFieldMask,
                     false,
                     (FieldAccessMethod) &BevelBorderBase::getSFRaised)
};


FieldContainerType BevelBorderBase::_type(
    "BevelBorder",
    "Border",
    NULL,
    (PrototypeCreateF) &BevelBorderBase::createEmpty,
    BevelBorder::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(BevelBorderBase, BevelBorderPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &BevelBorderBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &BevelBorderBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr BevelBorderBase::shallowCopy(void) const 
{ 
    BevelBorderPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const BevelBorder *>(this)); 

    return returnValue; 
}

UInt32 BevelBorderBase::getContainerSize(void) const 
{ 
    return sizeof(BevelBorder); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void BevelBorderBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((BevelBorderBase *) &other, whichField);
}
#else
void BevelBorderBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((BevelBorderBase *) &other, whichField, sInfo);
}
void BevelBorderBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void BevelBorderBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

BevelBorderBase::BevelBorderBase(void) :
    _sfHighlightInner         (), 
    _sfWidth                  (Real32(1)), 
    _sfHighlightOuter         (), 
    _sfShadowInner            (), 
    _sfShadowOuter            (), 
    _sfRaised                 (bool(true)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

BevelBorderBase::BevelBorderBase(const BevelBorderBase &source) :
    _sfHighlightInner         (source._sfHighlightInner         ), 
    _sfWidth                  (source._sfWidth                  ), 
    _sfHighlightOuter         (source._sfHighlightOuter         ), 
    _sfShadowInner            (source._sfShadowInner            ), 
    _sfShadowOuter            (source._sfShadowOuter            ), 
    _sfRaised                 (source._sfRaised                 ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

BevelBorderBase::~BevelBorderBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 BevelBorderBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (HighlightInnerFieldMask & whichField))
    {
        returnValue += _sfHighlightInner.getBinSize();
    }

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        returnValue += _sfWidth.getBinSize();
    }

    if(FieldBits::NoField != (HighlightOuterFieldMask & whichField))
    {
        returnValue += _sfHighlightOuter.getBinSize();
    }

    if(FieldBits::NoField != (ShadowInnerFieldMask & whichField))
    {
        returnValue += _sfShadowInner.getBinSize();
    }

    if(FieldBits::NoField != (ShadowOuterFieldMask & whichField))
    {
        returnValue += _sfShadowOuter.getBinSize();
    }

    if(FieldBits::NoField != (RaisedFieldMask & whichField))
    {
        returnValue += _sfRaised.getBinSize();
    }


    return returnValue;
}

void BevelBorderBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (HighlightInnerFieldMask & whichField))
    {
        _sfHighlightInner.copyToBin(pMem);
    }

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyToBin(pMem);
    }

    if(FieldBits::NoField != (HighlightOuterFieldMask & whichField))
    {
        _sfHighlightOuter.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ShadowInnerFieldMask & whichField))
    {
        _sfShadowInner.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ShadowOuterFieldMask & whichField))
    {
        _sfShadowOuter.copyToBin(pMem);
    }

    if(FieldBits::NoField != (RaisedFieldMask & whichField))
    {
        _sfRaised.copyToBin(pMem);
    }


}

void BevelBorderBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (HighlightInnerFieldMask & whichField))
    {
        _sfHighlightInner.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (HighlightOuterFieldMask & whichField))
    {
        _sfHighlightOuter.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ShadowInnerFieldMask & whichField))
    {
        _sfShadowInner.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ShadowOuterFieldMask & whichField))
    {
        _sfShadowOuter.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (RaisedFieldMask & whichField))
    {
        _sfRaised.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void BevelBorderBase::executeSyncImpl(      BevelBorderBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (HighlightInnerFieldMask & whichField))
        _sfHighlightInner.syncWith(pOther->_sfHighlightInner);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pOther->_sfWidth);

    if(FieldBits::NoField != (HighlightOuterFieldMask & whichField))
        _sfHighlightOuter.syncWith(pOther->_sfHighlightOuter);

    if(FieldBits::NoField != (ShadowInnerFieldMask & whichField))
        _sfShadowInner.syncWith(pOther->_sfShadowInner);

    if(FieldBits::NoField != (ShadowOuterFieldMask & whichField))
        _sfShadowOuter.syncWith(pOther->_sfShadowOuter);

    if(FieldBits::NoField != (RaisedFieldMask & whichField))
        _sfRaised.syncWith(pOther->_sfRaised);


}
#else
void BevelBorderBase::executeSyncImpl(      BevelBorderBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (HighlightInnerFieldMask & whichField))
        _sfHighlightInner.syncWith(pOther->_sfHighlightInner);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pOther->_sfWidth);

    if(FieldBits::NoField != (HighlightOuterFieldMask & whichField))
        _sfHighlightOuter.syncWith(pOther->_sfHighlightOuter);

    if(FieldBits::NoField != (ShadowInnerFieldMask & whichField))
        _sfShadowInner.syncWith(pOther->_sfShadowInner);

    if(FieldBits::NoField != (ShadowOuterFieldMask & whichField))
        _sfShadowOuter.syncWith(pOther->_sfShadowOuter);

    if(FieldBits::NoField != (RaisedFieldMask & whichField))
        _sfRaised.syncWith(pOther->_sfRaised);



}

void BevelBorderBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<BevelBorderPtr>::_type("BevelBorderPtr", "BorderPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(BevelBorderPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(BevelBorderPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGBEVELBORDERBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGBEVELBORDERBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGBEVELBORDERFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
