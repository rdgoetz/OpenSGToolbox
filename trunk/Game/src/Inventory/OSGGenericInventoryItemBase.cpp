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
 **     class GenericInventoryItem!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEGENERICINVENTORYITEMINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGGenericInventoryItemBase.h"
#include "OSGGenericInventoryItem.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  GenericInventoryItemBase::DetailsFieldMask = 
    (TypeTraits<BitVector>::One << GenericInventoryItemBase::DetailsFieldId);

const OSG::BitVector GenericInventoryItemBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var std::string     GenericInventoryItemBase::_sfDetails
    
*/

//! GenericInventoryItem description

FieldDescription *GenericInventoryItemBase::_desc[] = 
{
    new FieldDescription(SFString::getClassType(), 
                     "Details", 
                     DetailsFieldId, DetailsFieldMask,
                     false,
                     (FieldAccessMethod) &GenericInventoryItemBase::getSFDetails)
};


FieldContainerType GenericInventoryItemBase::_type(
    "GenericInventoryItem",
    "InventoryItem",
    NULL,
    (PrototypeCreateF) &GenericInventoryItemBase::createEmpty,
    GenericInventoryItem::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(GenericInventoryItemBase, GenericInventoryItemPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &GenericInventoryItemBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &GenericInventoryItemBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr GenericInventoryItemBase::shallowCopy(void) const 
{ 
    GenericInventoryItemPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const GenericInventoryItem *>(this)); 

    return returnValue; 
}

UInt32 GenericInventoryItemBase::getContainerSize(void) const 
{ 
    return sizeof(GenericInventoryItem); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void GenericInventoryItemBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((GenericInventoryItemBase *) &other, whichField);
}
#else
void GenericInventoryItemBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((GenericInventoryItemBase *) &other, whichField, sInfo);
}
void GenericInventoryItemBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void GenericInventoryItemBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

GenericInventoryItemBase::GenericInventoryItemBase(void) :
    _sfDetails                (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

GenericInventoryItemBase::GenericInventoryItemBase(const GenericInventoryItemBase &source) :
    _sfDetails                (source._sfDetails                ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

GenericInventoryItemBase::~GenericInventoryItemBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 GenericInventoryItemBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (DetailsFieldMask & whichField))
    {
        returnValue += _sfDetails.getBinSize();
    }


    return returnValue;
}

void GenericInventoryItemBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (DetailsFieldMask & whichField))
    {
        _sfDetails.copyToBin(pMem);
    }


}

void GenericInventoryItemBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DetailsFieldMask & whichField))
    {
        _sfDetails.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void GenericInventoryItemBase::executeSyncImpl(      GenericInventoryItemBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (DetailsFieldMask & whichField))
        _sfDetails.syncWith(pOther->_sfDetails);


}
#else
void GenericInventoryItemBase::executeSyncImpl(      GenericInventoryItemBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (DetailsFieldMask & whichField))
        _sfDetails.syncWith(pOther->_sfDetails);



}

void GenericInventoryItemBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<GenericInventoryItemPtr>::_type("GenericInventoryItemPtr", "InventoryItemPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(GenericInventoryItemPtr, OSG_GAMELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(GenericInventoryItemPtr, OSG_GAMELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGGENERICINVENTORYITEMBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGGENERICINVENTORYITEMBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGGENERICINVENTORYITEMFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

