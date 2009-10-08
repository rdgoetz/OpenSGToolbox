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
 **     class ListModel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ListModelBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ListModelBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! access the producer type of the class
inline
const EventProducerType &ListModelBase::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 ListModelBase::getProducerClassTypeId(void)
{
    return _producerType.getId();
}


/*------------------------------ get -----------------------------------*/




inline
EventConnection ListModelBase::attachEventListener(EventListenerPtr Listener, UInt32 ProducedEventId)
{
    return _Producer.attachEventListener(Listener, ProducedEventId);
}

inline
bool ListModelBase::isEventListenerAttached(EventListenerPtr Listener, UInt32 ProducedEventId) const
{
    return _Producer.isEventListenerAttached(Listener, ProducedEventId);
}

inline
UInt32 ListModelBase::getNumListenersAttached(UInt32 ProducedEventId) const
{
    return _Producer.getNumListenersAttached(ProducedEventId);
}

inline
EventListenerPtr ListModelBase::getAttachedListener(UInt32 ProducedEventId, UInt32 ListenerIndex) const
{
    return _Producer.getAttachedListener(ProducedEventId,ListenerIndex);
}

inline
void ListModelBase::detachEventListener(EventListenerPtr Listener, UInt32 ProducedEventId)
{
    _Producer.detachEventListener(Listener, ProducedEventId);
}

inline
UInt32 ListModelBase::getNumProducedEvents(void) const
{
    return _Producer.getNumProducedEvents();
}

inline
const MethodDescription *ListModelBase::getProducedEventDescription(const Char8 *ProducedEventName) const
{
    return _Producer.getProducedEventDescription(ProducedEventName);
}

inline
const MethodDescription *ListModelBase::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return _Producer.getProducedEventDescription(ProducedEventId);
}

inline
UInt32 ListModelBase::getProducedEventId(const Char8 *ProducedEventName) const
{
    return _Producer.getProducedEventId(ProducedEventName);
}
OSG_END_NAMESPACE

