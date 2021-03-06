/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
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
 **     class Caption!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &CaptionBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 CaptionBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! access the producer type of the class
inline
const EventProducerType &CaptionBase::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 CaptionBase::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

//! create a new instance of the class
inline
CaptionPtr CaptionBase::create(void) 
{
    CaptionPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = CaptionPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
CaptionPtr CaptionBase::createEmpty(void) 
{ 
    CaptionPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the Caption::_mfSegment field.
inline
const MFString *CaptionBase::getMFSegment(void) const
{
    return &_mfSegment;
}

//! Get the Caption::_mfSegment field.
inline
MFString *CaptionBase::editMFSegment(void)
{
    return &_mfSegment;
}

//! Get the Caption::_mfStartStamps field.
inline
const MFReal32 *CaptionBase::getMFStartStamps(void) const
{
    return &_mfStartStamps;
}

//! Get the Caption::_mfStartStamps field.
inline
MFReal32 *CaptionBase::editMFStartStamps(void)
{
    return &_mfStartStamps;
}

//! Get the Caption::_mfEndStamps field.
inline
const MFReal32 *CaptionBase::getMFEndStamps(void) const
{
    return &_mfEndStamps;
}

//! Get the Caption::_mfEndStamps field.
inline
MFReal32 *CaptionBase::editMFEndStamps(void)
{
    return &_mfEndStamps;
}

//! Get the Caption::_sfCurrentSegmentIndex field.
inline
const SFInt32 *CaptionBase::getSFCurrentSegmentIndex(void) const
{
    return &_sfCurrentSegmentIndex;
}

//! Get the Caption::_sfCurrentSegmentIndex field.
inline
SFInt32 *CaptionBase::editSFCurrentSegmentIndex(void)
{
    return &_sfCurrentSegmentIndex;
}

//! Get the Caption::_sfCaptionDialogSound field.
inline
const SFSoundPtr *CaptionBase::getSFCaptionDialogSound(void) const
{
    return &_sfCaptionDialogSound;
}

//! Get the Caption::_sfCaptionDialogSound field.
inline
SFSoundPtr *CaptionBase::editSFCaptionDialogSound(void)
{
    return &_sfCaptionDialogSound;
}

//! Get the Caption::_sfParentContainer field.
inline
const SFContainerPtr *CaptionBase::getSFParentContainer(void) const
{
    return &_sfParentContainer;
}

//! Get the Caption::_sfParentContainer field.
inline
SFContainerPtr *CaptionBase::editSFParentContainer(void)
{
    return &_sfParentContainer;
}

//! Get the Caption::_sfChildIndex field.
inline
const SFUInt32 *CaptionBase::getSFChildIndex(void) const
{
    return &_sfChildIndex;
}

//! Get the Caption::_sfChildIndex field.
inline
SFUInt32 *CaptionBase::editSFChildIndex(void)
{
    return &_sfChildIndex;
}

//! Get the Caption::_sfComponentGenerator field.
inline
const SFCaptionComponentGeneratorPtr *CaptionBase::getSFComponentGenerator(void) const
{
    return &_sfComponentGenerator;
}

//! Get the Caption::_sfComponentGenerator field.
inline
SFCaptionComponentGeneratorPtr *CaptionBase::editSFComponentGenerator(void)
{
    return &_sfComponentGenerator;
}


//! Get the value of the Caption::_sfCurrentSegmentIndex field.
inline
Int32 &CaptionBase::editCurrentSegmentIndex(void)
{
    return _sfCurrentSegmentIndex.getValue();
}

//! Get the value of the Caption::_sfCurrentSegmentIndex field.
inline
const Int32 &CaptionBase::getCurrentSegmentIndex(void) const
{
    return _sfCurrentSegmentIndex.getValue();
}

//! Set the value of the Caption::_sfCurrentSegmentIndex field.
inline
void CaptionBase::setCurrentSegmentIndex(const Int32 &value)
{
    _sfCurrentSegmentIndex.setValue(value);
}

//! Get the value of the Caption::_sfCaptionDialogSound field.
inline
SoundPtr &CaptionBase::editCaptionDialogSound(void)
{
    return _sfCaptionDialogSound.getValue();
}

//! Get the value of the Caption::_sfCaptionDialogSound field.
inline
const SoundPtr &CaptionBase::getCaptionDialogSound(void) const
{
    return _sfCaptionDialogSound.getValue();
}

//! Set the value of the Caption::_sfCaptionDialogSound field.
inline
void CaptionBase::setCaptionDialogSound(const SoundPtr &value)
{
    _sfCaptionDialogSound.setValue(value);
}

//! Get the value of the Caption::_sfParentContainer field.
inline
ContainerPtr &CaptionBase::editParentContainer(void)
{
    return _sfParentContainer.getValue();
}

//! Get the value of the Caption::_sfParentContainer field.
inline
const ContainerPtr &CaptionBase::getParentContainer(void) const
{
    return _sfParentContainer.getValue();
}

//! Set the value of the Caption::_sfParentContainer field.
inline
void CaptionBase::setParentContainer(const ContainerPtr &value)
{
    _sfParentContainer.setValue(value);
}

//! Get the value of the Caption::_sfChildIndex field.
inline
UInt32 &CaptionBase::editChildIndex(void)
{
    return _sfChildIndex.getValue();
}

//! Get the value of the Caption::_sfChildIndex field.
inline
const UInt32 &CaptionBase::getChildIndex(void) const
{
    return _sfChildIndex.getValue();
}

//! Set the value of the Caption::_sfChildIndex field.
inline
void CaptionBase::setChildIndex(const UInt32 &value)
{
    _sfChildIndex.setValue(value);
}

//! Get the value of the Caption::_sfComponentGenerator field.
inline
CaptionComponentGeneratorPtr &CaptionBase::editComponentGenerator(void)
{
    return _sfComponentGenerator.getValue();
}

//! Get the value of the Caption::_sfComponentGenerator field.
inline
const CaptionComponentGeneratorPtr &CaptionBase::getComponentGenerator(void) const
{
    return _sfComponentGenerator.getValue();
}

//! Set the value of the Caption::_sfComponentGenerator field.
inline
void CaptionBase::setComponentGenerator(const CaptionComponentGeneratorPtr &value)
{
    _sfComponentGenerator.setValue(value);
}


//! Get the value of the \a index element the Caption::_mfSegment field.
inline
std::string &CaptionBase::editSegment(const UInt32 index)
{
    return _mfSegment[index];
}

//! Get the value of the \a index element the Caption::_mfSegment field.
inline
const std::string &CaptionBase::getSegment(const UInt32 index) const
{
    return _mfSegment[index];
}

#ifndef OSG_2_PREP
//! Get the Caption::_mfSegment field.
inline
MFString &CaptionBase::getSegment(void)
{
    return _mfSegment;
}

//! Get the Caption::_mfSegment field.
inline
const MFString &CaptionBase::getSegment(void) const
{
    return _mfSegment;
}

#endif
//! Get the value of the \a index element the Caption::_mfStartStamps field.
inline
Real32 &CaptionBase::editStartStamps(const UInt32 index)
{
    return _mfStartStamps[index];
}

//! Get the value of the \a index element the Caption::_mfStartStamps field.
inline
const Real32 &CaptionBase::getStartStamps(const UInt32 index) const
{
    return _mfStartStamps[index];
}

#ifndef OSG_2_PREP
//! Get the Caption::_mfStartStamps field.
inline
MFReal32 &CaptionBase::getStartStamps(void)
{
    return _mfStartStamps;
}

//! Get the Caption::_mfStartStamps field.
inline
const MFReal32 &CaptionBase::getStartStamps(void) const
{
    return _mfStartStamps;
}

#endif
//! Get the value of the \a index element the Caption::_mfEndStamps field.
inline
Real32 &CaptionBase::editEndStamps(const UInt32 index)
{
    return _mfEndStamps[index];
}

//! Get the value of the \a index element the Caption::_mfEndStamps field.
inline
const Real32 &CaptionBase::getEndStamps(const UInt32 index) const
{
    return _mfEndStamps[index];
}

#ifndef OSG_2_PREP
//! Get the Caption::_mfEndStamps field.
inline
MFReal32 &CaptionBase::getEndStamps(void)
{
    return _mfEndStamps;
}

//! Get the Caption::_mfEndStamps field.
inline
const MFReal32 &CaptionBase::getEndStamps(void) const
{
    return _mfEndStamps;
}

#endif

inline
EventConnection CaptionBase::attachActivity(ActivityPtr TheActivity, UInt32 ProducedEventId)
{
    return _Producer.attachActivity(TheActivity, ProducedEventId);
}

inline
bool CaptionBase::isActivityAttached(ActivityPtr TheActivity, UInt32 ProducedEventId) const
{
    return _Producer.isActivityAttached(TheActivity, ProducedEventId);
}

inline
UInt32 CaptionBase::getNumActivitiesAttached(UInt32 ProducedEventId) const
{
    return _Producer.getNumActivitiesAttached(ProducedEventId);
}

inline
ActivityPtr CaptionBase::getAttachedActivity(UInt32 ProducedEventId, UInt32 ActivityIndex) const
{
    return _Producer.getAttachedActivity(ProducedEventId,ActivityIndex);
}

inline
void CaptionBase::detachActivity(ActivityPtr TheActivity, UInt32 ProducedEventId)
{
    _Producer.detachActivity(TheActivity, ProducedEventId);
}

inline
UInt32 CaptionBase::getNumProducedEvents(void) const
{
    return _Producer.getNumProducedEvents();
}

inline
const MethodDescription *CaptionBase::getProducedEventDescription(const Char8 *ProducedEventName) const
{
    return _Producer.getProducedEventDescription(ProducedEventName);
}

inline
const MethodDescription *CaptionBase::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return _Producer.getProducedEventDescription(ProducedEventId);
}

inline
UInt32 CaptionBase::getProducedEventId(const Char8 *ProducedEventName) const
{
    return _Producer.getProducedEventId(ProducedEventName);
}

inline
SFEventProducerPtr *CaptionBase::editSFEventProducer(void)
{
    return &_sfEventProducer;
}

//! Get the value of the Caption::_sfEventProducer field.
inline
EventProducerPtr &CaptionBase::editEventProducer(void)
{
    return _sfEventProducer.getValue();
}

OSG_END_NAMESPACE
