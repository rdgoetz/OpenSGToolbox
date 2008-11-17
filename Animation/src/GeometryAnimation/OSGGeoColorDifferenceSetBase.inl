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
 **     class GeoColorDifferenceSet!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &GeoColorDifferenceSetBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 GeoColorDifferenceSetBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
GeoColorDifferenceSetPtr GeoColorDifferenceSetBase::create(void) 
{
    GeoColorDifferenceSetPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = GeoColorDifferenceSetPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
GeoColorDifferenceSetPtr GeoColorDifferenceSetBase::createEmpty(void) 
{ 
    GeoColorDifferenceSetPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the GeoColorDifferenceSet::_sfColors field.
inline
SFGeoColorsPtr *GeoColorDifferenceSetBase::getSFColors(void)
{
    return &_sfColors;
}

//! Get the GeoColorDifferenceSet::_sfIndices field.
inline
SFGeoIndicesPtr *GeoColorDifferenceSetBase::getSFIndices(void)
{
    return &_sfIndices;
}


//! Get the value of the GeoColorDifferenceSet::_sfColors field.
inline
GeoColorsPtr &GeoColorDifferenceSetBase::getColors(void)
{
    return _sfColors.getValue();
}

//! Get the value of the GeoColorDifferenceSet::_sfColors field.
inline
const GeoColorsPtr &GeoColorDifferenceSetBase::getColors(void) const
{
    return _sfColors.getValue();
}

//! Set the value of the GeoColorDifferenceSet::_sfColors field.
inline
void GeoColorDifferenceSetBase::setColors(const GeoColorsPtr &value)
{
    _sfColors.setValue(value);
}

//! Get the value of the GeoColorDifferenceSet::_sfIndices field.
inline
GeoIndicesPtr &GeoColorDifferenceSetBase::getIndices(void)
{
    return _sfIndices.getValue();
}

//! Get the value of the GeoColorDifferenceSet::_sfIndices field.
inline
const GeoIndicesPtr &GeoColorDifferenceSetBase::getIndices(void) const
{
    return _sfIndices.getValue();
}

//! Set the value of the GeoColorDifferenceSet::_sfIndices field.
inline
void GeoColorDifferenceSetBase::setIndices(const GeoIndicesPtr &value)
{
    _sfIndices.setValue(value);
}


OSG_END_NAMESPACE

#define OSGGEOCOLORDIFFERENCESETBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

