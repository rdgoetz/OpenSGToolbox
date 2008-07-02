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
 **     class AgeSizeParticleAffector!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &AgeSizeParticleAffectorBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 AgeSizeParticleAffectorBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
AgeSizeParticleAffectorPtr AgeSizeParticleAffectorBase::create(void) 
{
    AgeSizeParticleAffectorPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = AgeSizeParticleAffectorPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
AgeSizeParticleAffectorPtr AgeSizeParticleAffectorBase::createEmpty(void) 
{ 
    AgeSizeParticleAffectorPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the AgeSizeParticleAffector::_mfAges field.
inline
MFReal32 *AgeSizeParticleAffectorBase::getMFAges(void)
{
    return &_mfAges;
}

//! Get the AgeSizeParticleAffector::_mfSizes field.
inline
MFVec3f *AgeSizeParticleAffectorBase::getMFSizes(void)
{
    return &_mfSizes;
}



//! Get the value of the \a index element the AgeSizeParticleAffector::_mfAges field.
inline
Real32 &AgeSizeParticleAffectorBase::getAges(const UInt32 index)
{
    return _mfAges[index];
}

//! Get the AgeSizeParticleAffector::_mfAges field.
inline
MFReal32 &AgeSizeParticleAffectorBase::getAges(void)
{
    return _mfAges;
}

//! Get the AgeSizeParticleAffector::_mfAges field.
inline
const MFReal32 &AgeSizeParticleAffectorBase::getAges(void) const
{
    return _mfAges;
}

//! Get the value of the \a index element the AgeSizeParticleAffector::_mfSizes field.
inline
Vec3f &AgeSizeParticleAffectorBase::getSizes(const UInt32 index)
{
    return _mfSizes[index];
}

//! Get the AgeSizeParticleAffector::_mfSizes field.
inline
MFVec3f &AgeSizeParticleAffectorBase::getSizes(void)
{
    return _mfSizes;
}

//! Get the AgeSizeParticleAffector::_mfSizes field.
inline
const MFVec3f &AgeSizeParticleAffectorBase::getSizes(void) const
{
    return _mfSizes;
}

OSG_END_NAMESPACE

#define OSGAGESIZEPARTICLEAFFECTORBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
