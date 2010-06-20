/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
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
 **     class GenericFieldContainerEditor!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGGenericFieldContainerEditorBase.h"
#include "OSGGenericFieldContainerEditor.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::GenericFieldContainerEditor
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<GenericFieldContainerEditor *>::_type("GenericFieldContainerEditorPtr", "FieldContainerEditorComponentPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(GenericFieldContainerEditor *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           GenericFieldContainerEditor *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           GenericFieldContainerEditor *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void GenericFieldContainerEditorBase::classDescInserter(TypeObject &oType)
{
}


GenericFieldContainerEditorBase::TypeObject GenericFieldContainerEditorBase::_type(
    GenericFieldContainerEditorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&GenericFieldContainerEditorBase::createEmptyLocal),
    GenericFieldContainerEditor::initMethod,
    GenericFieldContainerEditor::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&GenericFieldContainerEditor::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"GenericFieldContainerEditor\"\n"
    "\tparent=\"FieldContainerEditorComponent\"\n"
    "    library=\"ContribFieldContainerEditor\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GenericFieldContainerEditorBase::getType(void)
{
    return _type;
}

const FieldContainerType &GenericFieldContainerEditorBase::getType(void) const
{
    return _type;
}

UInt32 GenericFieldContainerEditorBase::getContainerSize(void) const
{
    return sizeof(GenericFieldContainerEditor);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 GenericFieldContainerEditorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void GenericFieldContainerEditorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void GenericFieldContainerEditorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
GenericFieldContainerEditorTransitPtr GenericFieldContainerEditorBase::createLocal(BitVector bFlags)
{
    GenericFieldContainerEditorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<GenericFieldContainerEditor>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
GenericFieldContainerEditorTransitPtr GenericFieldContainerEditorBase::createDependent(BitVector bFlags)
{
    GenericFieldContainerEditorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<GenericFieldContainerEditor>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
GenericFieldContainerEditorTransitPtr GenericFieldContainerEditorBase::create(void)
{
    GenericFieldContainerEditorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<GenericFieldContainerEditor>(tmpPtr);
    }

    return fc;
}

GenericFieldContainerEditor *GenericFieldContainerEditorBase::createEmptyLocal(BitVector bFlags)
{
    GenericFieldContainerEditor *returnValue;

    newPtr<GenericFieldContainerEditor>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
GenericFieldContainerEditor *GenericFieldContainerEditorBase::createEmpty(void)
{
    GenericFieldContainerEditor *returnValue;

    newPtr<GenericFieldContainerEditor>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr GenericFieldContainerEditorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    GenericFieldContainerEditor *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GenericFieldContainerEditor *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr GenericFieldContainerEditorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    GenericFieldContainerEditor *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GenericFieldContainerEditor *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr GenericFieldContainerEditorBase::shallowCopy(void) const
{
    GenericFieldContainerEditor *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const GenericFieldContainerEditor *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

GenericFieldContainerEditorBase::GenericFieldContainerEditorBase(void) :
    Inherited()
{
}

GenericFieldContainerEditorBase::GenericFieldContainerEditorBase(const GenericFieldContainerEditorBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

GenericFieldContainerEditorBase::~GenericFieldContainerEditorBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void GenericFieldContainerEditorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    GenericFieldContainerEditor *pThis = static_cast<GenericFieldContainerEditor *>(this);

    pThis->execSync(static_cast<GenericFieldContainerEditor *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *GenericFieldContainerEditorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    GenericFieldContainerEditor *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const GenericFieldContainerEditor *>(pRefAspect),
                  dynamic_cast<const GenericFieldContainerEditor *>(this));

    return returnValue;
}
#endif

void GenericFieldContainerEditorBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
