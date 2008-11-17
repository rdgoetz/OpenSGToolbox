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
 **     class KeyframeSequenceMatrix!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEKEYFRAMESEQUENCEMATRIXINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGKeyframeSequenceMatrixBase.h"
#include "OSGKeyframeSequenceMatrix.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  KeyframeSequenceMatrixBase::ValuesFieldMask = 
    (TypeTraits<BitVector>::One << KeyframeSequenceMatrixBase::ValuesFieldId);

const OSG::BitVector KeyframeSequenceMatrixBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Matrix          KeyframeSequenceMatrixBase::_mfValues
    
*/

//! KeyframeSequenceMatrix description

FieldDescription *KeyframeSequenceMatrixBase::_desc[] = 
{
    new FieldDescription(MFMatrix::getClassType(), 
                     "Values", 
                     ValuesFieldId, ValuesFieldMask,
                     false,
                     (FieldAccessMethod) &KeyframeSequenceMatrixBase::getMFValues)
};


FieldContainerType KeyframeSequenceMatrixBase::_type(
    "KeyframeSequenceMatrix",
    "KeyframeSequence",
    NULL,
    (PrototypeCreateF) &KeyframeSequenceMatrixBase::createEmpty,
    KeyframeSequenceMatrix::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(KeyframeSequenceMatrixBase, KeyframeSequenceMatrixPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &KeyframeSequenceMatrixBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &KeyframeSequenceMatrixBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr KeyframeSequenceMatrixBase::shallowCopy(void) const 
{ 
    KeyframeSequenceMatrixPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const KeyframeSequenceMatrix *>(this)); 

    return returnValue; 
}

UInt32 KeyframeSequenceMatrixBase::getContainerSize(void) const 
{ 
    return sizeof(KeyframeSequenceMatrix); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void KeyframeSequenceMatrixBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((KeyframeSequenceMatrixBase *) &other, whichField);
}
#else
void KeyframeSequenceMatrixBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((KeyframeSequenceMatrixBase *) &other, whichField, sInfo);
}
void KeyframeSequenceMatrixBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void KeyframeSequenceMatrixBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfValues.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

KeyframeSequenceMatrixBase::KeyframeSequenceMatrixBase(void) :
    _mfValues                 (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

KeyframeSequenceMatrixBase::KeyframeSequenceMatrixBase(const KeyframeSequenceMatrixBase &source) :
    _mfValues                 (source._mfValues                 ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

KeyframeSequenceMatrixBase::~KeyframeSequenceMatrixBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 KeyframeSequenceMatrixBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        returnValue += _mfValues.getBinSize();
    }


    return returnValue;
}

void KeyframeSequenceMatrixBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        _mfValues.copyToBin(pMem);
    }


}

void KeyframeSequenceMatrixBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        _mfValues.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void KeyframeSequenceMatrixBase::executeSyncImpl(      KeyframeSequenceMatrixBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
        _mfValues.syncWith(pOther->_mfValues);


}
#else
void KeyframeSequenceMatrixBase::executeSyncImpl(      KeyframeSequenceMatrixBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);


    if(FieldBits::NoField != (ValuesFieldMask & whichField))
        _mfValues.syncWith(pOther->_mfValues, sInfo);


}

void KeyframeSequenceMatrixBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<KeyframeSequenceMatrixPtr>::_type("KeyframeSequenceMatrixPtr", "KeyframeSequencePtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(KeyframeSequenceMatrixPtr, OSG_ANIMATIONLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(KeyframeSequenceMatrixPtr, OSG_ANIMATIONLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGKEYFRAMESEQUENCEMATRIXBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGKEYFRAMESEQUENCEMATRIXBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGKEYFRAMESEQUENCEMATRIXFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

