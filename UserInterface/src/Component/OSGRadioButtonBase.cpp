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
 **     class RadioButton!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILERADIOBUTTONINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGRadioButtonBase.h"
#include "OSGRadioButton.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  RadioButtonBase::DrawObjectFieldMask = 
    (TypeTraits<BitVector>::One << RadioButtonBase::DrawObjectFieldId);

const OSG::BitVector  RadioButtonBase::SelectedDrawObjectFieldMask = 
    (TypeTraits<BitVector>::One << RadioButtonBase::SelectedDrawObjectFieldId);

const OSG::BitVector  RadioButtonBase::ActiveDrawObjectFieldMask = 
    (TypeTraits<BitVector>::One << RadioButtonBase::ActiveDrawObjectFieldId);

const OSG::BitVector  RadioButtonBase::ActiveSelectedDrawObjectFieldMask = 
    (TypeTraits<BitVector>::One << RadioButtonBase::ActiveSelectedDrawObjectFieldId);

const OSG::BitVector RadioButtonBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var UIDrawObjectCanvasPtr RadioButtonBase::_sfDrawObject
    
*/
/*! \var UIDrawObjectCanvasPtr RadioButtonBase::_sfSelectedDrawObject
    
*/
/*! \var UIDrawObjectCanvasPtr RadioButtonBase::_sfActiveDrawObject
    
*/
/*! \var UIDrawObjectCanvasPtr RadioButtonBase::_sfActiveSelectedDrawObject
    
*/

//! RadioButton description

FieldDescription *RadioButtonBase::_desc[] = 
{
    new FieldDescription(SFUIDrawObjectCanvasPtr::getClassType(), 
                     "DrawObject", 
                     DrawObjectFieldId, DrawObjectFieldMask,
                     false,
                     (FieldAccessMethod) &RadioButtonBase::getSFDrawObject),
    new FieldDescription(SFUIDrawObjectCanvasPtr::getClassType(), 
                     "SelectedDrawObject", 
                     SelectedDrawObjectFieldId, SelectedDrawObjectFieldMask,
                     false,
                     (FieldAccessMethod) &RadioButtonBase::getSFSelectedDrawObject),
    new FieldDescription(SFUIDrawObjectCanvasPtr::getClassType(), 
                     "ActiveDrawObject", 
                     ActiveDrawObjectFieldId, ActiveDrawObjectFieldMask,
                     false,
                     (FieldAccessMethod) &RadioButtonBase::getSFActiveDrawObject),
    new FieldDescription(SFUIDrawObjectCanvasPtr::getClassType(), 
                     "ActiveSelectedDrawObject", 
                     ActiveSelectedDrawObjectFieldId, ActiveSelectedDrawObjectFieldMask,
                     false,
                     (FieldAccessMethod) &RadioButtonBase::getSFActiveSelectedDrawObject)
};


FieldContainerType RadioButtonBase::_type(
    "RadioButton",
    "ToggleButton",
    NULL,
    (PrototypeCreateF) &RadioButtonBase::createEmpty,
    RadioButton::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(RadioButtonBase, RadioButtonPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &RadioButtonBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &RadioButtonBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr RadioButtonBase::shallowCopy(void) const 
{ 
    RadioButtonPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const RadioButton *>(this)); 

    return returnValue; 
}

UInt32 RadioButtonBase::getContainerSize(void) const 
{ 
    return sizeof(RadioButton); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void RadioButtonBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((RadioButtonBase *) &other, whichField);
}
#else
void RadioButtonBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((RadioButtonBase *) &other, whichField, sInfo);
}
void RadioButtonBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void RadioButtonBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

RadioButtonBase::RadioButtonBase(void) :
    _sfDrawObject             (), 
    _sfSelectedDrawObject      (), 
    _sfActiveDrawObject       (), 
    _sfActiveSelectedDrawObject(), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

RadioButtonBase::RadioButtonBase(const RadioButtonBase &source) :
    _sfDrawObject             (source._sfDrawObject             ), 
    _sfSelectedDrawObject      (source._sfSelectedDrawObject      ), 
    _sfActiveDrawObject       (source._sfActiveDrawObject       ), 
    _sfActiveSelectedDrawObject(source._sfActiveSelectedDrawObject), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

RadioButtonBase::~RadioButtonBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 RadioButtonBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (DrawObjectFieldMask & whichField))
    {
        returnValue += _sfDrawObject.getBinSize();
    }

    if(FieldBits::NoField != (SelectedDrawObjectFieldMask & whichField))
    {
        returnValue += _sfSelectedDrawObject.getBinSize();
    }

    if(FieldBits::NoField != (ActiveDrawObjectFieldMask & whichField))
    {
        returnValue += _sfActiveDrawObject.getBinSize();
    }

    if(FieldBits::NoField != (ActiveSelectedDrawObjectFieldMask & whichField))
    {
        returnValue += _sfActiveSelectedDrawObject.getBinSize();
    }


    return returnValue;
}

void RadioButtonBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (DrawObjectFieldMask & whichField))
    {
        _sfDrawObject.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SelectedDrawObjectFieldMask & whichField))
    {
        _sfSelectedDrawObject.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ActiveDrawObjectFieldMask & whichField))
    {
        _sfActiveDrawObject.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ActiveSelectedDrawObjectFieldMask & whichField))
    {
        _sfActiveSelectedDrawObject.copyToBin(pMem);
    }


}

void RadioButtonBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DrawObjectFieldMask & whichField))
    {
        _sfDrawObject.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SelectedDrawObjectFieldMask & whichField))
    {
        _sfSelectedDrawObject.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ActiveDrawObjectFieldMask & whichField))
    {
        _sfActiveDrawObject.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ActiveSelectedDrawObjectFieldMask & whichField))
    {
        _sfActiveSelectedDrawObject.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void RadioButtonBase::executeSyncImpl(      RadioButtonBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (DrawObjectFieldMask & whichField))
        _sfDrawObject.syncWith(pOther->_sfDrawObject);

    if(FieldBits::NoField != (SelectedDrawObjectFieldMask & whichField))
        _sfSelectedDrawObject.syncWith(pOther->_sfSelectedDrawObject);

    if(FieldBits::NoField != (ActiveDrawObjectFieldMask & whichField))
        _sfActiveDrawObject.syncWith(pOther->_sfActiveDrawObject);

    if(FieldBits::NoField != (ActiveSelectedDrawObjectFieldMask & whichField))
        _sfActiveSelectedDrawObject.syncWith(pOther->_sfActiveSelectedDrawObject);


}
#else
void RadioButtonBase::executeSyncImpl(      RadioButtonBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (DrawObjectFieldMask & whichField))
        _sfDrawObject.syncWith(pOther->_sfDrawObject);

    if(FieldBits::NoField != (SelectedDrawObjectFieldMask & whichField))
        _sfSelectedDrawObject.syncWith(pOther->_sfSelectedDrawObject);

    if(FieldBits::NoField != (ActiveDrawObjectFieldMask & whichField))
        _sfActiveDrawObject.syncWith(pOther->_sfActiveDrawObject);

    if(FieldBits::NoField != (ActiveSelectedDrawObjectFieldMask & whichField))
        _sfActiveSelectedDrawObject.syncWith(pOther->_sfActiveSelectedDrawObject);



}

void RadioButtonBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<RadioButtonPtr>::_type("RadioButtonPtr", "ToggleButtonPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(RadioButtonPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(RadioButtonPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGRADIOBUTTONBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGRADIOBUTTONBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGRADIOBUTTONFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

