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
 **     class TableColumnModel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETABLECOLUMNMODELINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGTableColumnModelBase.h"
#include "OSGTableColumnModel.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  TableColumnModelBase::EventProducerFieldMask =
    (TypeTraits<BitVector>::One << TableColumnModelBase::EventProducerFieldId);
const OSG::BitVector TableColumnModelBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


//! TableColumnModel description

FieldDescription *TableColumnModelBase::_desc[] = 
{
    new FieldDescription(SFEventProducerPtr::getClassType(), 
                     "EventProducer", 
                     EventProducerFieldId,EventProducerFieldMask,
                     true,
                     FieldAccessMethod(NULL))
};


FieldContainerType TableColumnModelBase::_type(
    "TableColumnModel",
    "FieldContainer",
    NULL,
    NULL, 
    TableColumnModel::initMethod,
    _desc,
    sizeof(_desc));

//! TableColumnModel Produced Methods

MethodDescription *TableColumnModelBase::_methodDesc[] =
{
    new MethodDescription("ColumnAdded", 
                     ColumnAddedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("ColumnMoved", 
                     ColumnMovedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("ColumnRemoved", 
                     ColumnRemovedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("ColumnMarginChanged", 
                     ColumnMarginChangedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("ColumnSelectionChanged", 
                     ColumnSelectionChangedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod())
};

EventProducerType TableColumnModelBase::_producerType(
    "TableColumnModelProducerType",
    "EventProducerType",
    NULL,
    InitEventProducerFunctor(),
    _methodDesc,
    sizeof(_methodDesc));
//OSG_FIELD_CONTAINER_DEF(TableColumnModelBase, TableColumnModelPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &TableColumnModelBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &TableColumnModelBase::getType(void) const 
{
    return _type;
} 

const EventProducerType &TableColumnModelBase::getProducerType(void) const
{
    return _producerType;
}


UInt32 TableColumnModelBase::getContainerSize(void) const 
{ 
    return sizeof(TableColumnModel); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void TableColumnModelBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<TableColumnModelBase *>(&other),
                          whichField);
}
#else
void TableColumnModelBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((TableColumnModelBase *) &other, whichField, sInfo);
}
void TableColumnModelBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void TableColumnModelBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

TableColumnModelBase::TableColumnModelBase(void) :
    _Producer(&getProducerType()),
    _sfEventProducer(&_Producer),
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

TableColumnModelBase::TableColumnModelBase(const TableColumnModelBase &source) :
    _Producer(&getProducerType()),
    _sfEventProducer(&_Producer),
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

TableColumnModelBase::~TableColumnModelBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 TableColumnModelBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        returnValue += _sfEventProducer.getBinSize();
    }


    return returnValue;
}

void TableColumnModelBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyToBin(pMem);
    }


}

void TableColumnModelBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void TableColumnModelBase::executeSyncImpl(      TableColumnModelBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
        _sfEventProducer.syncWith(pOther->_sfEventProducer);


}
#else
void TableColumnModelBase::executeSyncImpl(      TableColumnModelBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);



}

void TableColumnModelBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<TableColumnModelPtr>::_type("TableColumnModelPtr", "FieldContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(TableColumnModelPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(TableColumnModelPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE

