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
 **     class KeyframeSequenceVec2f!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEKEYFRAMESEQUENCEVEC2FINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGKeyframeSequenceVec2fBase.h"
#include "OSGKeyframeSequenceVec2f.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  KeyframeSequenceVec2fBase::ValuesFieldMask = 
    (TypeTraits<BitVector>::One << KeyframeSequenceVec2fBase::ValuesFieldId);

const OSG::BitVector KeyframeSequenceVec2fBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Vec2f           KeyframeSequenceVec2fBase::_mfValues
    
*/

//! KeyframeSequenceVec2f description

FieldDescription *KeyframeSequenceVec2fBase::_desc[] = 
{
    new FieldDescription(MFVec2f::getClassType(), 
                     "Values", 
                     ValuesFieldId, ValuesFieldMask,
                     false,
                     (FieldAccessMethod) &KeyframeSequenceVec2fBase::getMFValues)
};


FieldContainerType KeyframeSequenceVec2fBase::_type(
    "KeyframeSequenceVec2f",
    "KeyframeSequence",
    NULL,
    (PrototypeCreateF) &KeyframeSequenceVec2fBase::createEmpty,
    KeyframeSequenceVec2f::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(KeyframeSequenceVec2fBase, KeyframeSequenceVec2fPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &KeyframeSequenceVec2fBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &KeyframeSequenceVec2fBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr KeyframeSequenceVec2fBase::shallowCopy(void) const 
{ 
    KeyframeSequenceVec2fPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const KeyframeSequenceVec2f *>(this)); 

    return returnValue; 
}

UInt32 KeyframeSequenceVec2fBase::getContainerSize(void) const 
{ 
    return sizeof(KeyframeSequenceVec2f); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void KeyframeSequenceVec2fBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((KeyframeSequenceVec2fBase *) &other, whichField);
}
#else
void KeyframeSequenceVec2fBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((KeyframeSequenceVec2fBase *) &other, whichField, sInfo);
}
void KeyframeSequenceVec2fBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void KeyframeSequenceVec2fBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfValues.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

KeyframeSequenceVec2fBase::KeyframeSequenceVec2fBase(void) :
    _mfValues                 (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

KeyframeSequenceVec2fBase::KeyframeSequenceVec2fBase(const KeyframeSequenceVec2fBase &source) :
    _mfValues                 (source._mfValues                 ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

KeyframeSequenceVec2fBase::~KeyframeSequenceVec2fBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 KeyframeSequenceVec2fBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        returnValue += _mfValues.getBinSize();
    }


    return returnValue;
}

void KeyframeSequenceVec2fBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        _mfValues.copyToBin(pMem);
    }


}

void KeyframeSequenceVec2fBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        _mfValues.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void KeyframeSequenceVec2fBase::executeSyncImpl(      KeyframeSequenceVec2fBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
        _mfValues.syncWith(pOther->_mfValues);


}
#else
void KeyframeSequenceVec2fBase::executeSyncImpl(      KeyframeSequenceVec2fBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);


    if(FieldBits::NoField != (ValuesFieldMask & whichField))
        _mfValues.syncWith(pOther->_mfValues, sInfo);


}

void KeyframeSequenceVec2fBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
        _mfValues.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<KeyframeSequenceVec2fPtr>::_type("KeyframeSequenceVec2fPtr", "KeyframeSequencePtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(KeyframeSequenceVec2fPtr, OSG_ANIMATIONLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(KeyframeSequenceVec2fPtr, OSG_ANIMATIONLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGKEYFRAMESEQUENCEVEC2FBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGKEYFRAMESEQUENCEVEC2FBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGKEYFRAMESEQUENCEVEC2FFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

