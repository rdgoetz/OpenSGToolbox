/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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
 **     class LineDistribution2D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &LineDistribution2DBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 LineDistribution2DBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
LineDistribution2DPtr LineDistribution2DBase::create(void) 
{
    LineDistribution2DPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = LineDistribution2DPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
LineDistribution2DPtr LineDistribution2DBase::createEmpty(void) 
{ 
    LineDistribution2DPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the LineDistribution2D::_sfPoint1 field.
inline
SFPnt2f *LineDistribution2DBase::getSFPoint1(void)
{
    return &_sfPoint1;
}

//! Get the LineDistribution2D::_sfPoint2 field.
inline
SFPnt2f *LineDistribution2DBase::getSFPoint2(void)
{
    return &_sfPoint2;
}


//! Get the value of the LineDistribution2D::_sfPoint1 field.
inline
Pnt2f &LineDistribution2DBase::getPoint1(void)
{
    return _sfPoint1.getValue();
}

//! Get the value of the LineDistribution2D::_sfPoint1 field.
inline
const Pnt2f &LineDistribution2DBase::getPoint1(void) const
{
    return _sfPoint1.getValue();
}

//! Set the value of the LineDistribution2D::_sfPoint1 field.
inline
void LineDistribution2DBase::setPoint1(const Pnt2f &value)
{
    _sfPoint1.setValue(value);
}

//! Get the value of the LineDistribution2D::_sfPoint2 field.
inline
Pnt2f &LineDistribution2DBase::getPoint2(void)
{
    return _sfPoint2.getValue();
}

//! Get the value of the LineDistribution2D::_sfPoint2 field.
inline
const Pnt2f &LineDistribution2DBase::getPoint2(void) const
{
    return _sfPoint2.getValue();
}

//! Set the value of the LineDistribution2D::_sfPoint2 field.
inline
void LineDistribution2DBase::setPoint2(const Pnt2f &value)
{
    _sfPoint2.setValue(value);
}


OSG_END_NAMESPACE

#define OSGLINEDISTRIBUTION2DBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

