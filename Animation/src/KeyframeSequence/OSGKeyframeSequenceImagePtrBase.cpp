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
 **     class KeyframeSequenceImagePtr!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEKEYFRAMESEQUENCEIMAGEPTRINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGKeyframeSequenceImagePtrBase.h"
#include "OSGKeyframeSequenceImagePtr.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  KeyframeSequenceImagePtrBase::ValuesFieldMask = 
    (TypeTraits<BitVector>::One << KeyframeSequenceImagePtrBase::ValuesFieldId);

const OSG::BitVector KeyframeSequenceImagePtrBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var ImagePtr        KeyframeSequenceImagePtrBase::_mfValues
    
*/

//! KeyframeSequenceImagePtr description

FieldDescription *KeyframeSequenceImagePtrBase::_desc[] = 
{
    new FieldDescription(MFImagePtr::getClassType(), 
                     "Values", 
                     ValuesFieldId, ValuesFieldMask,
                     false,
                     (FieldAccessMethod) &KeyframeSequenceImagePtrBase::getMFValues)
};


FieldContainerType KeyframeSequenceImagePtrBase::_type(
    "KeyframeSequenceImagePtr",
    "KeyframeSequence",
    NULL,
    (PrototypeCreateF) &KeyframeSequenceImagePtrBase::createEmpty,
    KeyframeSequenceImagePtr::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(KeyframeSequenceImagePtrBase, KeyframeSequenceImagePtrPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &KeyframeSequenceImagePtrBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &KeyframeSequenceImagePtrBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr KeyframeSequenceImagePtrBase::shallowCopy(void) const 
{ 
    KeyframeSequenceImagePtrPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const KeyframeSequenceImagePtr *>(this)); 

    return returnValue; 
}

UInt32 KeyframeSequenceImagePtrBase::getContainerSize(void) const 
{ 
    return sizeof(KeyframeSequenceImagePtr); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void KeyframeSequenceImagePtrBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((KeyframeSequenceImagePtrBase *) &other, whichField);
}
#else
void KeyframeSequenceImagePtrBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((KeyframeSequenceImagePtrBase *) &other, whichField, sInfo);
}
void KeyframeSequenceImagePtrBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void KeyframeSequenceImagePtrBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfValues.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

KeyframeSequenceImagePtrBase::KeyframeSequenceImagePtrBase(void) :
    _mfValues                 (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

KeyframeSequenceImagePtrBase::KeyframeSequenceImagePtrBase(const KeyframeSequenceImagePtrBase &source) :
    _mfValues                 (source._mfValues                 ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

KeyframeSequenceImagePtrBase::~KeyframeSequenceImagePtrBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 KeyframeSequenceImagePtrBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        returnValue += _mfValues.getBinSize();
    }


    return returnValue;
}

void KeyframeSequenceImagePtrBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        _mfValues.copyToBin(pMem);
    }


}

void KeyframeSequenceImagePtrBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        _mfValues.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void KeyframeSequenceImagePtrBase::executeSyncImpl(      KeyframeSequenceImagePtrBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
        _mfValues.syncWith(pOther->_mfValues);


}
#else
void KeyframeSequenceImagePtrBase::executeSyncImpl(      KeyframeSequenceImagePtrBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);


    if(FieldBits::NoField != (ValuesFieldMask & whichField))
        _mfValues.syncWith(pOther->_mfValues, sInfo);


}

void KeyframeSequenceImagePtrBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<KeyframeSequenceImagePtrPtr>::_type("KeyframeSequenceImagePtrPtr", "KeyframeSequencePtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(KeyframeSequenceImagePtrPtr, OSG_ANIMATIONLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(KeyframeSequenceImagePtrPtr, OSG_ANIMATIONLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGKEYFRAMESEQUENCEIMAGEPTRBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGKEYFRAMESEQUENCEIMAGEPTRBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGKEYFRAMESEQUENCEIMAGEPTRFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

