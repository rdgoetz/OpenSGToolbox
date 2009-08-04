/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Game                                *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                  Authors: David Kabala, Eric Langkamp                     *
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
 **     class InventoryItem!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEINVENTORYITEMINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGInventoryItemBase.h"
#include "OSGInventoryItem.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  InventoryItemBase::NameFieldMask = 
    (TypeTraits<BitVector>::One << InventoryItemBase::NameFieldId);

const OSG::BitVector  InventoryItemBase::ClassesFieldMask = 
    (TypeTraits<BitVector>::One << InventoryItemBase::ClassesFieldId);

const OSG::BitVector InventoryItemBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var std::string     InventoryItemBase::_sfName
    
*/
/*! \var std::string     InventoryItemBase::_mfClasses
    
*/

//! InventoryItem description

FieldDescription *InventoryItemBase::_desc[] = 
{
    new FieldDescription(SFString::getClassType(), 
                     "Name", 
                     NameFieldId, NameFieldMask,
                     false,
                     (FieldAccessMethod) &InventoryItemBase::getSFName),
    new FieldDescription(MFString::getClassType(), 
                     "Classes", 
                     ClassesFieldId, ClassesFieldMask,
                     false,
                     (FieldAccessMethod) &InventoryItemBase::getMFClasses)
};


FieldContainerType InventoryItemBase::_type(
    "InventoryItem",
    "AttachmentContainer",
    NULL,
    NULL, 
    InventoryItem::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(InventoryItemBase, InventoryItemPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &InventoryItemBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &InventoryItemBase::getType(void) const 
{
    return _type;
} 


UInt32 InventoryItemBase::getContainerSize(void) const 
{ 
    return sizeof(InventoryItem); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void InventoryItemBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((InventoryItemBase *) &other, whichField);
}
#else
void InventoryItemBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((InventoryItemBase *) &other, whichField, sInfo);
}
void InventoryItemBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void InventoryItemBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfClasses.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

InventoryItemBase::InventoryItemBase(void) :
    _sfName                   (), 
    _mfClasses                (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

InventoryItemBase::InventoryItemBase(const InventoryItemBase &source) :
    _sfName                   (source._sfName                   ), 
    _mfClasses                (source._mfClasses                ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

InventoryItemBase::~InventoryItemBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 InventoryItemBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        returnValue += _sfName.getBinSize();
    }

    if(FieldBits::NoField != (ClassesFieldMask & whichField))
    {
        returnValue += _mfClasses.getBinSize();
    }


    return returnValue;
}

void InventoryItemBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        _sfName.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ClassesFieldMask & whichField))
    {
        _mfClasses.copyToBin(pMem);
    }


}

void InventoryItemBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        _sfName.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ClassesFieldMask & whichField))
    {
        _mfClasses.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void InventoryItemBase::executeSyncImpl(      InventoryItemBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
        _sfName.syncWith(pOther->_sfName);

    if(FieldBits::NoField != (ClassesFieldMask & whichField))
        _mfClasses.syncWith(pOther->_mfClasses);


}
#else
void InventoryItemBase::executeSyncImpl(      InventoryItemBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (NameFieldMask & whichField))
        _sfName.syncWith(pOther->_sfName);


    if(FieldBits::NoField != (ClassesFieldMask & whichField))
        _mfClasses.syncWith(pOther->_mfClasses, sInfo);


}

void InventoryItemBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ClassesFieldMask & whichField))
        _mfClasses.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<InventoryItemPtr>::_type("InventoryItemPtr", "AttachmentContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(InventoryItemPtr, OSG_GAMELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(InventoryItemPtr, OSG_GAMELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGINVENTORYITEMBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGINVENTORYITEMBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGINVENTORYITEMFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

