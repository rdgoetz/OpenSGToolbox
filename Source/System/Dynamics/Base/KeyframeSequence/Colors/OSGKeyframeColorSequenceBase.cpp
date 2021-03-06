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
 **     class KeyframeColorSequence!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGKeyframeColorSequenceBase.h"
#include "OSGKeyframeColorSequence.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::KeyframeColorSequence
    KeyframeSequence is the base class of all Point Keyframe Sequences.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<KeyframeColorSequence *>::_type("KeyframeColorSequencePtr", "KeyframeSequencePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(KeyframeColorSequence *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           KeyframeColorSequence *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           KeyframeColorSequence *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void KeyframeColorSequenceBase::classDescInserter(TypeObject &oType)
{
}


KeyframeColorSequenceBase::TypeObject KeyframeColorSequenceBase::_type(
    KeyframeColorSequenceBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    KeyframeColorSequence::initMethod,
    KeyframeColorSequence::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&KeyframeColorSequence::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"KeyframeColorSequence\"\n"
    "\tparent=\"KeyframeSequence\"\n"
    "    library=\"TBAnimation\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "KeyframeSequence is the base class of all Point Keyframe Sequences.\n"
    "</FieldContainer>\n",
    "KeyframeSequence is the base class of all Point Keyframe Sequences.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &KeyframeColorSequenceBase::getType(void)
{
    return _type;
}

const FieldContainerType &KeyframeColorSequenceBase::getType(void) const
{
    return _type;
}

UInt32 KeyframeColorSequenceBase::getContainerSize(void) const
{
    return sizeof(KeyframeColorSequence);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 KeyframeColorSequenceBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void KeyframeColorSequenceBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void KeyframeColorSequenceBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}




/*------------------------- constructors ----------------------------------*/

KeyframeColorSequenceBase::KeyframeColorSequenceBase(void) :
    Inherited()
{
}

KeyframeColorSequenceBase::KeyframeColorSequenceBase(const KeyframeColorSequenceBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

KeyframeColorSequenceBase::~KeyframeColorSequenceBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void KeyframeColorSequenceBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    KeyframeColorSequence *pThis = static_cast<KeyframeColorSequence *>(this);

    pThis->execSync(static_cast<KeyframeColorSequence *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void KeyframeColorSequenceBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
