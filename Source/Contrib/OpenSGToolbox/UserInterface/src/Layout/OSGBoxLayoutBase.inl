/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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
 **     class BoxLayout!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &BoxLayoutBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 BoxLayoutBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
BoxLayoutPtr BoxLayoutBase::create(void) 
{
    BoxLayoutPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = BoxLayoutPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
BoxLayoutPtr BoxLayoutBase::createEmpty(void) 
{ 
    BoxLayoutPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the BoxLayout::_sfOrientation field.
inline
SFUInt32 *BoxLayoutBase::getSFOrientation(void)
{
    return &_sfOrientation;
}

//! Get the BoxLayout::_sfMajorAxisAlignment field.
inline
SFReal32 *BoxLayoutBase::getSFMajorAxisAlignment(void)
{
    return &_sfMajorAxisAlignment;
}

//! Get the BoxLayout::_sfMinorAxisAlignment field.
inline
SFReal32 *BoxLayoutBase::getSFMinorAxisAlignment(void)
{
    return &_sfMinorAxisAlignment;
}

//! Get the BoxLayout::_sfComponentAlignment field.
inline
SFReal32 *BoxLayoutBase::getSFComponentAlignment(void)
{
    return &_sfComponentAlignment;
}

//! Get the BoxLayout::_sfMajorAxisMinimumGap field.
inline
SFReal32 *BoxLayoutBase::getSFMajorAxisMinimumGap(void)
{
    return &_sfMajorAxisMinimumGap;
}

//! Get the BoxLayout::_sfMajorAxisMaximumGap field.
inline
SFReal32 *BoxLayoutBase::getSFMajorAxisMaximumGap(void)
{
    return &_sfMajorAxisMaximumGap;
}


//! Get the value of the BoxLayout::_sfOrientation field.
inline
UInt32 &BoxLayoutBase::getOrientation(void)
{
    return _sfOrientation.getValue();
}

//! Get the value of the BoxLayout::_sfOrientation field.
inline
const UInt32 &BoxLayoutBase::getOrientation(void) const
{
    return _sfOrientation.getValue();
}

//! Set the value of the BoxLayout::_sfOrientation field.
inline
void BoxLayoutBase::setOrientation(const UInt32 &value)
{
    _sfOrientation.setValue(value);
}

//! Get the value of the BoxLayout::_sfMajorAxisAlignment field.
inline
Real32 &BoxLayoutBase::getMajorAxisAlignment(void)
{
    return _sfMajorAxisAlignment.getValue();
}

//! Get the value of the BoxLayout::_sfMajorAxisAlignment field.
inline
const Real32 &BoxLayoutBase::getMajorAxisAlignment(void) const
{
    return _sfMajorAxisAlignment.getValue();
}

//! Set the value of the BoxLayout::_sfMajorAxisAlignment field.
inline
void BoxLayoutBase::setMajorAxisAlignment(const Real32 &value)
{
    _sfMajorAxisAlignment.setValue(value);
}

//! Get the value of the BoxLayout::_sfMinorAxisAlignment field.
inline
Real32 &BoxLayoutBase::getMinorAxisAlignment(void)
{
    return _sfMinorAxisAlignment.getValue();
}

//! Get the value of the BoxLayout::_sfMinorAxisAlignment field.
inline
const Real32 &BoxLayoutBase::getMinorAxisAlignment(void) const
{
    return _sfMinorAxisAlignment.getValue();
}

//! Set the value of the BoxLayout::_sfMinorAxisAlignment field.
inline
void BoxLayoutBase::setMinorAxisAlignment(const Real32 &value)
{
    _sfMinorAxisAlignment.setValue(value);
}

//! Get the value of the BoxLayout::_sfComponentAlignment field.
inline
Real32 &BoxLayoutBase::getComponentAlignment(void)
{
    return _sfComponentAlignment.getValue();
}

//! Get the value of the BoxLayout::_sfComponentAlignment field.
inline
const Real32 &BoxLayoutBase::getComponentAlignment(void) const
{
    return _sfComponentAlignment.getValue();
}

//! Set the value of the BoxLayout::_sfComponentAlignment field.
inline
void BoxLayoutBase::setComponentAlignment(const Real32 &value)
{
    _sfComponentAlignment.setValue(value);
}

//! Get the value of the BoxLayout::_sfMajorAxisMinimumGap field.
inline
Real32 &BoxLayoutBase::getMajorAxisMinimumGap(void)
{
    return _sfMajorAxisMinimumGap.getValue();
}

//! Get the value of the BoxLayout::_sfMajorAxisMinimumGap field.
inline
const Real32 &BoxLayoutBase::getMajorAxisMinimumGap(void) const
{
    return _sfMajorAxisMinimumGap.getValue();
}

//! Set the value of the BoxLayout::_sfMajorAxisMinimumGap field.
inline
void BoxLayoutBase::setMajorAxisMinimumGap(const Real32 &value)
{
    _sfMajorAxisMinimumGap.setValue(value);
}

//! Get the value of the BoxLayout::_sfMajorAxisMaximumGap field.
inline
Real32 &BoxLayoutBase::getMajorAxisMaximumGap(void)
{
    return _sfMajorAxisMaximumGap.getValue();
}

//! Get the value of the BoxLayout::_sfMajorAxisMaximumGap field.
inline
const Real32 &BoxLayoutBase::getMajorAxisMaximumGap(void) const
{
    return _sfMajorAxisMaximumGap.getValue();
}

//! Set the value of the BoxLayout::_sfMajorAxisMaximumGap field.
inline
void BoxLayoutBase::setMajorAxisMaximumGap(const Real32 &value)
{
    _sfMajorAxisMaximumGap.setValue(value);
}


OSG_END_NAMESPACE

#define OSGBOXLAYOUTBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
