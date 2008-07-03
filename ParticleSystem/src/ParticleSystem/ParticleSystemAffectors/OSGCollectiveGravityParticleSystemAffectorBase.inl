/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox Particle System                        *
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
 **     class CollectiveGravityParticleSystemAffector!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &CollectiveGravityParticleSystemAffectorBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 CollectiveGravityParticleSystemAffectorBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
CollectiveGravityParticleSystemAffectorPtr CollectiveGravityParticleSystemAffectorBase::create(void) 
{
    CollectiveGravityParticleSystemAffectorPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = CollectiveGravityParticleSystemAffectorPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
CollectiveGravityParticleSystemAffectorPtr CollectiveGravityParticleSystemAffectorBase::createEmpty(void) 
{ 
    CollectiveGravityParticleSystemAffectorPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the CollectiveGravityParticleSystemAffector::_sfParticleMass field.
inline
SFReal32 *CollectiveGravityParticleSystemAffectorBase::getSFParticleMass(void)
{
    return &_sfParticleMass;
}

//! Get the CollectiveGravityParticleSystemAffector::_sfGravitationalConstant field.
inline
SFReal32 *CollectiveGravityParticleSystemAffectorBase::getSFGravitationalConstant(void)
{
    return &_sfGravitationalConstant;
}

//! Get the CollectiveGravityParticleSystemAffector::_sfParticleMassSource field.
inline
SFUInt32 *CollectiveGravityParticleSystemAffectorBase::getSFParticleMassSource(void)
{
    return &_sfParticleMassSource;
}


//! Get the value of the CollectiveGravityParticleSystemAffector::_sfParticleMass field.
inline
Real32 &CollectiveGravityParticleSystemAffectorBase::getParticleMass(void)
{
    return _sfParticleMass.getValue();
}

//! Get the value of the CollectiveGravityParticleSystemAffector::_sfParticleMass field.
inline
const Real32 &CollectiveGravityParticleSystemAffectorBase::getParticleMass(void) const
{
    return _sfParticleMass.getValue();
}

//! Set the value of the CollectiveGravityParticleSystemAffector::_sfParticleMass field.
inline
void CollectiveGravityParticleSystemAffectorBase::setParticleMass(const Real32 &value)
{
    _sfParticleMass.setValue(value);
}

//! Get the value of the CollectiveGravityParticleSystemAffector::_sfGravitationalConstant field.
inline
Real32 &CollectiveGravityParticleSystemAffectorBase::getGravitationalConstant(void)
{
    return _sfGravitationalConstant.getValue();
}

//! Get the value of the CollectiveGravityParticleSystemAffector::_sfGravitationalConstant field.
inline
const Real32 &CollectiveGravityParticleSystemAffectorBase::getGravitationalConstant(void) const
{
    return _sfGravitationalConstant.getValue();
}

//! Set the value of the CollectiveGravityParticleSystemAffector::_sfGravitationalConstant field.
inline
void CollectiveGravityParticleSystemAffectorBase::setGravitationalConstant(const Real32 &value)
{
    _sfGravitationalConstant.setValue(value);
}

//! Get the value of the CollectiveGravityParticleSystemAffector::_sfParticleMassSource field.
inline
UInt32 &CollectiveGravityParticleSystemAffectorBase::getParticleMassSource(void)
{
    return _sfParticleMassSource.getValue();
}

//! Get the value of the CollectiveGravityParticleSystemAffector::_sfParticleMassSource field.
inline
const UInt32 &CollectiveGravityParticleSystemAffectorBase::getParticleMassSource(void) const
{
    return _sfParticleMassSource.getValue();
}

//! Set the value of the CollectiveGravityParticleSystemAffector::_sfParticleMassSource field.
inline
void CollectiveGravityParticleSystemAffectorBase::setParticleMassSource(const UInt32 &value)
{
    _sfParticleMassSource.setValue(value);
}


OSG_END_NAMESPACE

#define OSGCOLLECTIVEGRAVITYPARTICLESYSTEMAFFECTORBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

