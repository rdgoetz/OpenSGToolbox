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
 **     class VideoWrapper!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGVideoWrapperBase.h"
#include "OSGVideoWrapper.h"

#include <boost/bind.hpp>

#include "OSGEvent.h"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::VideoWrapper
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<VideoWrapper *>::_type("VideoWrapperPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(VideoWrapper *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           VideoWrapper *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           VideoWrapper *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void VideoWrapperBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;

    pDesc = new SFEventProducerPtr::Description(
        SFEventProducerPtr::getClassType(),
        "EventProducer",
        "Event Producer",
        EventProducerFieldId,EventProducerFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&VideoWrapper::editHandleEventProducer),
        static_cast     <FieldGetMethodSig >(&VideoWrapper::getHandleEventProducer));

    oType.addInitialDesc(pDesc);
}


VideoWrapperBase::TypeObject VideoWrapperBase::_type(
    VideoWrapperBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    VideoWrapper::initMethod,
    VideoWrapper::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&VideoWrapper::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"VideoWrapper\"\n"
    "\tparent=\"AttachmentContainer\"\n"
    "\tlibrary=\"ContribVideo\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"abstract\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"VideoStarted\"\n"
    "\t\ttype=\"VideoEvent\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"VideoStopped\"\n"
    "\t\ttype=\"VideoEvent\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"VideoPaused\"\n"
    "\t\ttype=\"VideoEvent\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"VideoUnpaused\"\n"
    "\t\ttype=\"VideoEvent\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"VideoEnded\"\n"
    "\t\ttype=\"VideoEvent\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"VideoCycled\"\n"
    "\t\ttype=\"VideoEvent\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"VideoOpened\"\n"
    "\t\ttype=\"VideoEvent\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"VideoClosed\"\n"
    "\t\ttype=\"VideoEvent\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"VideoSeeked\"\n"
    "\t\ttype=\"VideoEvent\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "</FieldContainer>\n",
    ""
    );

//! VideoWrapper Produced Methods

MethodDescription *VideoWrapperBase::_methodDesc[] =
{
    new MethodDescription("VideoStarted", 
                    "",
                     VideoStartedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("VideoStopped", 
                    "",
                     VideoStoppedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("VideoPaused", 
                    "",
                     VideoPausedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("VideoUnpaused", 
                    "",
                     VideoUnpausedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("VideoEnded", 
                    "",
                     VideoEndedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("VideoCycled", 
                    "",
                     VideoCycledMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("VideoOpened", 
                    "",
                     VideoOpenedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("VideoClosed", 
                    "",
                     VideoClosedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("VideoSeeked", 
                    "",
                     VideoSeekedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod())
};

EventProducerType VideoWrapperBase::_producerType(
    "VideoWrapperProducerType",
    "EventProducerType",
    "",
    InitEventProducerFunctor(),
    _methodDesc,
    sizeof(_methodDesc));

/*------------------------------ get -----------------------------------*/

FieldContainerType &VideoWrapperBase::getType(void)
{
    return _type;
}

const FieldContainerType &VideoWrapperBase::getType(void) const
{
    return _type;
}

const EventProducerType &VideoWrapperBase::getProducerType(void) const
{
    return _producerType;
}

UInt32 VideoWrapperBase::getContainerSize(void) const
{
    return sizeof(VideoWrapper);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 VideoWrapperBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        returnValue += _sfEventProducer.getBinSize();
    }

    return returnValue;
}

void VideoWrapperBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyToBin(pMem);
    }
}

void VideoWrapperBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

VideoWrapperBase::VideoWrapperBase(void) :
    _Producer(&getProducerType()),
    Inherited(),
    _sfEventProducer(&_Producer)
{
}

VideoWrapperBase::VideoWrapperBase(const VideoWrapperBase &source) :
    _Producer(&source.getProducerType()),
    Inherited(source),
    _sfEventProducer(&_Producer)
{
}


/*-------------------------- destructors ----------------------------------*/

VideoWrapperBase::~VideoWrapperBase(void)
{
}



GetFieldHandlePtr VideoWrapperBase::getHandleEventProducer        (void) const
{
    SFEventProducerPtr::GetHandlePtr returnValue(
        new  SFEventProducerPtr::GetHandle(
             &_sfEventProducer,
             this->getType().getFieldDesc(EventProducerFieldId),
             const_cast<VideoWrapperBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr VideoWrapperBase::editHandleEventProducer       (void)
{
    SFEventProducerPtr::EditHandlePtr returnValue(
        new  SFEventProducerPtr::EditHandle(
             &_sfEventProducer,
             this->getType().getFieldDesc(EventProducerFieldId),
             this));


    editSField(EventProducerFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void VideoWrapperBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    VideoWrapper *pThis = static_cast<VideoWrapper *>(this);

    pThis->execSync(static_cast<VideoWrapper *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void VideoWrapperBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
