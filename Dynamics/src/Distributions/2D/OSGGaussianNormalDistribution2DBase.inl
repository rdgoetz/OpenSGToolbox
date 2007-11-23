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
 **     class GaussianNormalDistribution2D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &GaussianNormalDistribution2DBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 GaussianNormalDistribution2DBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
GaussianNormalDistribution2DPtr GaussianNormalDistribution2DBase::create(void) 
{
    GaussianNormalDistribution2DPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = GaussianNormalDistribution2DPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
GaussianNormalDistribution2DPtr GaussianNormalDistribution2DBase::createEmpty(void) 
{ 
    GaussianNormalDistribution2DPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the GaussianNormalDistribution2D::_sfMean field.
inline
SFPnt2f *GaussianNormalDistribution2DBase::getSFMean(void)
{
    return &_sfMean;
}

//! Get the GaussianNormalDistribution2D::_sfStandardDeviationX field.
inline
SFReal32 *GaussianNormalDistribution2DBase::getSFStandardDeviationX(void)
{
    return &_sfStandardDeviationX;
}

//! Get the GaussianNormalDistribution2D::_sfStandardDeviationY field.
inline
SFReal32 *GaussianNormalDistribution2DBase::getSFStandardDeviationY(void)
{
    return &_sfStandardDeviationY;
}


//! Get the value of the GaussianNormalDistribution2D::_sfMean field.
inline
Pnt2f &GaussianNormalDistribution2DBase::getMean(void)
{
    return _sfMean.getValue();
}

//! Get the value of the GaussianNormalDistribution2D::_sfMean field.
inline
const Pnt2f &GaussianNormalDistribution2DBase::getMean(void) const
{
    return _sfMean.getValue();
}

//! Set the value of the GaussianNormalDistribution2D::_sfMean field.
inline
void GaussianNormalDistribution2DBase::setMean(const Pnt2f &value)
{
    _sfMean.setValue(value);
}

//! Get the value of the GaussianNormalDistribution2D::_sfStandardDeviationX field.
inline
Real32 &GaussianNormalDistribution2DBase::getStandardDeviationX(void)
{
    return _sfStandardDeviationX.getValue();
}

//! Get the value of the GaussianNormalDistribution2D::_sfStandardDeviationX field.
inline
const Real32 &GaussianNormalDistribution2DBase::getStandardDeviationX(void) const
{
    return _sfStandardDeviationX.getValue();
}

//! Set the value of the GaussianNormalDistribution2D::_sfStandardDeviationX field.
inline
void GaussianNormalDistribution2DBase::setStandardDeviationX(const Real32 &value)
{
    _sfStandardDeviationX.setValue(value);
}

//! Get the value of the GaussianNormalDistribution2D::_sfStandardDeviationY field.
inline
Real32 &GaussianNormalDistribution2DBase::getStandardDeviationY(void)
{
    return _sfStandardDeviationY.getValue();
}

//! Get the value of the GaussianNormalDistribution2D::_sfStandardDeviationY field.
inline
const Real32 &GaussianNormalDistribution2DBase::getStandardDeviationY(void) const
{
    return _sfStandardDeviationY.getValue();
}

//! Set the value of the GaussianNormalDistribution2D::_sfStandardDeviationY field.
inline
void GaussianNormalDistribution2DBase::setStandardDeviationY(const Real32 &value)
{
    _sfStandardDeviationY.setValue(value);
}


OSG_END_NAMESPACE

#define OSGGAUSSIANNORMALDISTRIBUTION2DBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
