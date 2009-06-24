/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Game                                *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                   Authors: David Kabala, Eric Langkamp                    *
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
 **     class DefaultDialogComponentGenerator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEDEFAULTDIALOGCOMPONENTGENERATORINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGDefaultDialogComponentGeneratorBase.h"
#include "OSGDefaultDialogComponentGenerator.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  DefaultDialogComponentGeneratorBase::ResponseButtonPrototypeFieldMask = 
    (TypeTraits<BitVector>::One << DefaultDialogComponentGeneratorBase::ResponseButtonPrototypeFieldId);

const OSG::BitVector  DefaultDialogComponentGeneratorBase::QuestionPrototypeFieldMask = 
    (TypeTraits<BitVector>::One << DefaultDialogComponentGeneratorBase::QuestionPrototypeFieldId);

const OSG::BitVector DefaultDialogComponentGeneratorBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var ButtonPtr       DefaultDialogComponentGeneratorBase::_sfResponseButtonPrototype
    
*/
/*! \var LabelPtr        DefaultDialogComponentGeneratorBase::_sfQuestionPrototype
    
*/

//! DefaultDialogComponentGenerator description

FieldDescription *DefaultDialogComponentGeneratorBase::_desc[] = 
{
    new FieldDescription(SFButtonPtr::getClassType(), 
                     "ResponseButtonPrototype", 
                     ResponseButtonPrototypeFieldId, ResponseButtonPrototypeFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultDialogComponentGeneratorBase::getSFResponseButtonPrototype),
    new FieldDescription(SFLabelPtr::getClassType(), 
                     "QuestionPrototype", 
                     QuestionPrototypeFieldId, QuestionPrototypeFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultDialogComponentGeneratorBase::getSFQuestionPrototype)
};


FieldContainerType DefaultDialogComponentGeneratorBase::_type(
    "DefaultDialogComponentGenerator",
    "DialogComponentGenerator",
    NULL,
    (PrototypeCreateF) &DefaultDialogComponentGeneratorBase::createEmpty,
    DefaultDialogComponentGenerator::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(DefaultDialogComponentGeneratorBase, DefaultDialogComponentGeneratorPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &DefaultDialogComponentGeneratorBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &DefaultDialogComponentGeneratorBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr DefaultDialogComponentGeneratorBase::shallowCopy(void) const 
{ 
    DefaultDialogComponentGeneratorPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const DefaultDialogComponentGenerator *>(this)); 

    return returnValue; 
}

UInt32 DefaultDialogComponentGeneratorBase::getContainerSize(void) const 
{ 
    return sizeof(DefaultDialogComponentGenerator); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void DefaultDialogComponentGeneratorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((DefaultDialogComponentGeneratorBase *) &other, whichField);
}
#else
void DefaultDialogComponentGeneratorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((DefaultDialogComponentGeneratorBase *) &other, whichField, sInfo);
}
void DefaultDialogComponentGeneratorBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void DefaultDialogComponentGeneratorBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

DefaultDialogComponentGeneratorBase::DefaultDialogComponentGeneratorBase(void) :
    _sfResponseButtonPrototype(ButtonPtr(NullFC)), 
    _sfQuestionPrototype      (LabelPtr(NullFC)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

DefaultDialogComponentGeneratorBase::DefaultDialogComponentGeneratorBase(const DefaultDialogComponentGeneratorBase &source) :
    _sfResponseButtonPrototype(source._sfResponseButtonPrototype), 
    _sfQuestionPrototype      (source._sfQuestionPrototype      ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

DefaultDialogComponentGeneratorBase::~DefaultDialogComponentGeneratorBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 DefaultDialogComponentGeneratorBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ResponseButtonPrototypeFieldMask & whichField))
    {
        returnValue += _sfResponseButtonPrototype.getBinSize();
    }

    if(FieldBits::NoField != (QuestionPrototypeFieldMask & whichField))
    {
        returnValue += _sfQuestionPrototype.getBinSize();
    }


    return returnValue;
}

void DefaultDialogComponentGeneratorBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ResponseButtonPrototypeFieldMask & whichField))
    {
        _sfResponseButtonPrototype.copyToBin(pMem);
    }

    if(FieldBits::NoField != (QuestionPrototypeFieldMask & whichField))
    {
        _sfQuestionPrototype.copyToBin(pMem);
    }


}

void DefaultDialogComponentGeneratorBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ResponseButtonPrototypeFieldMask & whichField))
    {
        _sfResponseButtonPrototype.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (QuestionPrototypeFieldMask & whichField))
    {
        _sfQuestionPrototype.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void DefaultDialogComponentGeneratorBase::executeSyncImpl(      DefaultDialogComponentGeneratorBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ResponseButtonPrototypeFieldMask & whichField))
        _sfResponseButtonPrototype.syncWith(pOther->_sfResponseButtonPrototype);

    if(FieldBits::NoField != (QuestionPrototypeFieldMask & whichField))
        _sfQuestionPrototype.syncWith(pOther->_sfQuestionPrototype);


}
#else
void DefaultDialogComponentGeneratorBase::executeSyncImpl(      DefaultDialogComponentGeneratorBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ResponseButtonPrototypeFieldMask & whichField))
        _sfResponseButtonPrototype.syncWith(pOther->_sfResponseButtonPrototype);

    if(FieldBits::NoField != (QuestionPrototypeFieldMask & whichField))
        _sfQuestionPrototype.syncWith(pOther->_sfQuestionPrototype);



}

void DefaultDialogComponentGeneratorBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<DefaultDialogComponentGeneratorPtr>::_type("DefaultDialogComponentGeneratorPtr", "DialogComponentGeneratorPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(DefaultDialogComponentGeneratorPtr, OSG_GAMELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(DefaultDialogComponentGeneratorPtr, OSG_GAMELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGDEFAULTDIALOGCOMPONENTGENERATORBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGDEFAULTDIALOGCOMPONENTGENERATORBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGDEFAULTDIALOGCOMPONENTGENERATORFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

