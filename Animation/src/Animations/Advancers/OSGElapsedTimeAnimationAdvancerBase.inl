/*---------------------------------------------------------------------------*\
 *                       OpenSG ToolBox Animation                            *
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
 **     class ElapsedTimeAnimationAdvancer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ElapsedTimeAnimationAdvancerBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ElapsedTimeAnimationAdvancerBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ElapsedTimeAnimationAdvancerPtr ElapsedTimeAnimationAdvancerBase::create(void) 
{
    ElapsedTimeAnimationAdvancerPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ElapsedTimeAnimationAdvancerPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ElapsedTimeAnimationAdvancerPtr ElapsedTimeAnimationAdvancerBase::createEmpty(void) 
{ 
    ElapsedTimeAnimationAdvancerPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the ElapsedTimeAnimationAdvancer::_sfStartTime field.
inline
SFReal32 *ElapsedTimeAnimationAdvancerBase::getSFStartTime(void)
{
    return &_sfStartTime;
}

//! Get the ElapsedTimeAnimationAdvancer::_sfElpsTime field.
inline
SFReal32 *ElapsedTimeAnimationAdvancerBase::getSFElpsTime(void)
{
    return &_sfElpsTime;
}

//! Get the ElapsedTimeAnimationAdvancer::_sfPrevElpsTime field.
inline
SFReal32 *ElapsedTimeAnimationAdvancerBase::getSFPrevElpsTime(void)
{
    return &_sfPrevElpsTime;
}


//! Get the value of the ElapsedTimeAnimationAdvancer::_sfStartTime field.
inline
Real32 &ElapsedTimeAnimationAdvancerBase::getStartTime(void)
{
    return _sfStartTime.getValue();
}

//! Get the value of the ElapsedTimeAnimationAdvancer::_sfStartTime field.
inline
const Real32 &ElapsedTimeAnimationAdvancerBase::getStartTime(void) const
{
    return _sfStartTime.getValue();
}

//! Set the value of the ElapsedTimeAnimationAdvancer::_sfStartTime field.
inline
void ElapsedTimeAnimationAdvancerBase::setStartTime(const Real32 &value)
{
    _sfStartTime.setValue(value);
}

//! Get the value of the ElapsedTimeAnimationAdvancer::_sfElpsTime field.
inline
Real32 &ElapsedTimeAnimationAdvancerBase::getElpsTime(void)
{
    return _sfElpsTime.getValue();
}

//! Get the value of the ElapsedTimeAnimationAdvancer::_sfElpsTime field.
inline
const Real32 &ElapsedTimeAnimationAdvancerBase::getElpsTime(void) const
{
    return _sfElpsTime.getValue();
}

//! Set the value of the ElapsedTimeAnimationAdvancer::_sfElpsTime field.
inline
void ElapsedTimeAnimationAdvancerBase::setElpsTime(const Real32 &value)
{
    _sfElpsTime.setValue(value);
}

//! Get the value of the ElapsedTimeAnimationAdvancer::_sfPrevElpsTime field.
inline
Real32 &ElapsedTimeAnimationAdvancerBase::getPrevElpsTime(void)
{
    return _sfPrevElpsTime.getValue();
}

//! Get the value of the ElapsedTimeAnimationAdvancer::_sfPrevElpsTime field.
inline
const Real32 &ElapsedTimeAnimationAdvancerBase::getPrevElpsTime(void) const
{
    return _sfPrevElpsTime.getValue();
}

//! Set the value of the ElapsedTimeAnimationAdvancer::_sfPrevElpsTime field.
inline
void ElapsedTimeAnimationAdvancerBase::setPrevElpsTime(const Real32 &value)
{
    _sfPrevElpsTime.setValue(value);
}


OSG_END_NAMESPACE

#define OSGELAPSEDTIMEANIMATIONADVANCERBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

