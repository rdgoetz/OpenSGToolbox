/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
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
 **     class AbstractBranchElement!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEABSTRACTBRANCHELEMENTINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGAbstractBranchElementBase.h"
#include "OSGAbstractBranchElement.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  AbstractBranchElementBase::ChildElementsFieldMask = 
    (TypeTraits<BitVector>::One << AbstractBranchElementBase::ChildElementsFieldId);

const OSG::BitVector AbstractBranchElementBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var ElementPtr      AbstractBranchElementBase::_mfChildElements
    
*/

//! AbstractBranchElement description

FieldDescription *AbstractBranchElementBase::_desc[] = 
{
    new FieldDescription(MFElementPtr::getClassType(), 
                     "ChildElements", 
                     ChildElementsFieldId, ChildElementsFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AbstractBranchElementBase::editMFChildElements))
};


FieldContainerType AbstractBranchElementBase::_type(
    "AbstractBranchElement",
    "AbstractElement",
    NULL,
    NULL, 
    AbstractBranchElement::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(AbstractBranchElementBase, AbstractBranchElementPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &AbstractBranchElementBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &AbstractBranchElementBase::getType(void) const 
{
    return _type;
} 


UInt32 AbstractBranchElementBase::getContainerSize(void) const 
{ 
    return sizeof(AbstractBranchElement); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void AbstractBranchElementBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<AbstractBranchElementBase *>(&other),
                          whichField);
}
#else
void AbstractBranchElementBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((AbstractBranchElementBase *) &other, whichField, sInfo);
}
void AbstractBranchElementBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void AbstractBranchElementBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfChildElements.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

AbstractBranchElementBase::AbstractBranchElementBase(void) :
    _mfChildElements          (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

AbstractBranchElementBase::AbstractBranchElementBase(const AbstractBranchElementBase &source) :
    _mfChildElements          (source._mfChildElements          ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

AbstractBranchElementBase::~AbstractBranchElementBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 AbstractBranchElementBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ChildElementsFieldMask & whichField))
    {
        returnValue += _mfChildElements.getBinSize();
    }


    return returnValue;
}

void AbstractBranchElementBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ChildElementsFieldMask & whichField))
    {
        _mfChildElements.copyToBin(pMem);
    }


}

void AbstractBranchElementBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ChildElementsFieldMask & whichField))
    {
        _mfChildElements.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void AbstractBranchElementBase::executeSyncImpl(      AbstractBranchElementBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ChildElementsFieldMask & whichField))
        _mfChildElements.syncWith(pOther->_mfChildElements);


}
#else
void AbstractBranchElementBase::executeSyncImpl(      AbstractBranchElementBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);


    if(FieldBits::NoField != (ChildElementsFieldMask & whichField))
        _mfChildElements.syncWith(pOther->_mfChildElements, sInfo);


}

void AbstractBranchElementBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ChildElementsFieldMask & whichField))
        _mfChildElements.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<AbstractBranchElementPtr>::_type("AbstractBranchElementPtr", "AbstractElementPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(AbstractBranchElementPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(AbstractBranchElementPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE
