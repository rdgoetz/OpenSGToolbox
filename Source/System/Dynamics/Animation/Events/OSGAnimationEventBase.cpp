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
 **     class AnimationEvent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGAnimationEventBase.h"
#include "OSGAnimationEvent.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::AnimationEvent
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<AnimationEvent *>::_type("AnimationEventPtr", "EventPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(AnimationEvent *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           AnimationEvent *,
                           0);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void AnimationEventBase::classDescInserter(TypeObject &oType)
{
}


AnimationEventBase::TypeObject AnimationEventBase::_type(
    AnimationEventBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&AnimationEventBase::createEmptyLocal),
    AnimationEvent::initMethod,
    AnimationEvent::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&AnimationEvent::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"AnimationEvent\"\n"
    "\tparent=\"Event\"\n"
    "    library=\"TBAnimation\"\n"
    "\tpointerfieldtypes=\"single\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &AnimationEventBase::getType(void)
{
    return _type;
}

const FieldContainerType &AnimationEventBase::getType(void) const
{
    return _type;
}

UInt32 AnimationEventBase::getContainerSize(void) const
{
    return sizeof(AnimationEvent);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 AnimationEventBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void AnimationEventBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void AnimationEventBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
AnimationEventTransitPtr AnimationEventBase::createLocal(BitVector bFlags)
{
    AnimationEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<AnimationEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
AnimationEventTransitPtr AnimationEventBase::createDependent(BitVector bFlags)
{
    AnimationEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<AnimationEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
AnimationEventTransitPtr AnimationEventBase::create(void)
{
    AnimationEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<AnimationEvent>(tmpPtr);
    }

    return fc;
}

AnimationEvent *AnimationEventBase::createEmptyLocal(BitVector bFlags)
{
    AnimationEvent *returnValue;

    newPtr<AnimationEvent>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
AnimationEvent *AnimationEventBase::createEmpty(void)
{
    AnimationEvent *returnValue;

    newPtr<AnimationEvent>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr AnimationEventBase::shallowCopyLocal(
    BitVector bFlags) const
{
    AnimationEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const AnimationEvent *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr AnimationEventBase::shallowCopyDependent(
    BitVector bFlags) const
{
    AnimationEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const AnimationEvent *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr AnimationEventBase::shallowCopy(void) const
{
    AnimationEvent *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const AnimationEvent *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

AnimationEventBase::AnimationEventBase(void) :
    Inherited()
{
}

AnimationEventBase::AnimationEventBase(const AnimationEventBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

AnimationEventBase::~AnimationEventBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void AnimationEventBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    AnimationEvent *pThis = static_cast<AnimationEvent *>(this);

    pThis->execSync(static_cast<AnimationEvent *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *AnimationEventBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    AnimationEvent *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const AnimationEvent *>(pRefAspect),
                  dynamic_cast<const AnimationEvent *>(this));

    return returnValue;
}
#endif

void AnimationEventBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
