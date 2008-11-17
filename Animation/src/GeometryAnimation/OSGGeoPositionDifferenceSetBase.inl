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
 **     class GeoPositionDifferenceSet!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &GeoPositionDifferenceSetBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 GeoPositionDifferenceSetBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
GeoPositionDifferenceSetPtr GeoPositionDifferenceSetBase::create(void) 
{
    GeoPositionDifferenceSetPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = GeoPositionDifferenceSetPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
GeoPositionDifferenceSetPtr GeoPositionDifferenceSetBase::createEmpty(void) 
{ 
    GeoPositionDifferenceSetPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the GeoPositionDifferenceSet::_sfPositions field.
inline
SFGeoPositionsPtr *GeoPositionDifferenceSetBase::getSFPositions(void)
{
    return &_sfPositions;
}

//! Get the GeoPositionDifferenceSet::_sfIndices field.
inline
SFGeoIndicesPtr *GeoPositionDifferenceSetBase::getSFIndices(void)
{
    return &_sfIndices;
}


//! Get the value of the GeoPositionDifferenceSet::_sfPositions field.
inline
GeoPositionsPtr &GeoPositionDifferenceSetBase::getPositions(void)
{
    return _sfPositions.getValue();
}

//! Get the value of the GeoPositionDifferenceSet::_sfPositions field.
inline
const GeoPositionsPtr &GeoPositionDifferenceSetBase::getPositions(void) const
{
    return _sfPositions.getValue();
}

//! Set the value of the GeoPositionDifferenceSet::_sfPositions field.
inline
void GeoPositionDifferenceSetBase::setPositions(const GeoPositionsPtr &value)
{
    _sfPositions.setValue(value);
}

//! Get the value of the GeoPositionDifferenceSet::_sfIndices field.
inline
GeoIndicesPtr &GeoPositionDifferenceSetBase::getIndices(void)
{
    return _sfIndices.getValue();
}

//! Get the value of the GeoPositionDifferenceSet::_sfIndices field.
inline
const GeoIndicesPtr &GeoPositionDifferenceSetBase::getIndices(void) const
{
    return _sfIndices.getValue();
}

//! Set the value of the GeoPositionDifferenceSet::_sfIndices field.
inline
void GeoPositionDifferenceSetBase::setIndices(const GeoIndicesPtr &value)
{
    _sfIndices.setValue(value);
}


OSG_END_NAMESPACE

#define OSGGEOPOSITIONDIFFERENCESETBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

