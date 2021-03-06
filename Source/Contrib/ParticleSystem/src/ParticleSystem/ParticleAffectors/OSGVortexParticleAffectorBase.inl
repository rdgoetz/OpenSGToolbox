/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com), Daniel Guilliams           *
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
 **     class VortexParticleAffector!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &VortexParticleAffectorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 VortexParticleAffectorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 VortexParticleAffectorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the VortexParticleAffector::_sfMagnitude field.

inline
Real32 &VortexParticleAffectorBase::editMagnitude(void)
{
    editSField(MagnitudeFieldMask);

    return _sfMagnitude.getValue();
}

//! Get the value of the VortexParticleAffector::_sfMagnitude field.
inline
      Real32  VortexParticleAffectorBase::getMagnitude(void) const
{
    return _sfMagnitude.getValue();
}

//! Set the value of the VortexParticleAffector::_sfMagnitude field.
inline
void VortexParticleAffectorBase::setMagnitude(const Real32 value)
{
    editSField(MagnitudeFieldMask);

    _sfMagnitude.setValue(value);
}
//! Get the value of the VortexParticleAffector::_sfVortexAxis field.

inline
Vec3f &VortexParticleAffectorBase::editVortexAxis(void)
{
    editSField(VortexAxisFieldMask);

    return _sfVortexAxis.getValue();
}

//! Get the value of the VortexParticleAffector::_sfVortexAxis field.
inline
const Vec3f &VortexParticleAffectorBase::getVortexAxis(void) const
{
    return _sfVortexAxis.getValue();
}

//! Set the value of the VortexParticleAffector::_sfVortexAxis field.
inline
void VortexParticleAffectorBase::setVortexAxis(const Vec3f &value)
{
    editSField(VortexAxisFieldMask);

    _sfVortexAxis.setValue(value);
}
//! Get the value of the VortexParticleAffector::_sfAttenuation field.

inline
Real32 &VortexParticleAffectorBase::editAttenuation(void)
{
    editSField(AttenuationFieldMask);

    return _sfAttenuation.getValue();
}

//! Get the value of the VortexParticleAffector::_sfAttenuation field.
inline
      Real32  VortexParticleAffectorBase::getAttenuation(void) const
{
    return _sfAttenuation.getValue();
}

//! Set the value of the VortexParticleAffector::_sfAttenuation field.
inline
void VortexParticleAffectorBase::setAttenuation(const Real32 value)
{
    editSField(AttenuationFieldMask);

    _sfAttenuation.setValue(value);
}
//! Get the value of the VortexParticleAffector::_sfMaxDistance field.

inline
Real32 &VortexParticleAffectorBase::editMaxDistance(void)
{
    editSField(MaxDistanceFieldMask);

    return _sfMaxDistance.getValue();
}

//! Get the value of the VortexParticleAffector::_sfMaxDistance field.
inline
      Real32  VortexParticleAffectorBase::getMaxDistance(void) const
{
    return _sfMaxDistance.getValue();
}

//! Set the value of the VortexParticleAffector::_sfMaxDistance field.
inline
void VortexParticleAffectorBase::setMaxDistance(const Real32 value)
{
    editSField(MaxDistanceFieldMask);

    _sfMaxDistance.setValue(value);
}

//! Get the value of the VortexParticleAffector::_sfBeacon field.
inline
Node * VortexParticleAffectorBase::getBeacon(void) const
{
    return _sfBeacon.getValue();
}

//! Set the value of the VortexParticleAffector::_sfBeacon field.
inline
void VortexParticleAffectorBase::setBeacon(Node * const value)
{
    editSField(BeaconFieldMask);

    _sfBeacon.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void VortexParticleAffectorBase::execSync (      VortexParticleAffectorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (MagnitudeFieldMask & whichField))
        _sfMagnitude.syncWith(pFrom->_sfMagnitude);

    if(FieldBits::NoField != (VortexAxisFieldMask & whichField))
        _sfVortexAxis.syncWith(pFrom->_sfVortexAxis);

    if(FieldBits::NoField != (AttenuationFieldMask & whichField))
        _sfAttenuation.syncWith(pFrom->_sfAttenuation);

    if(FieldBits::NoField != (MaxDistanceFieldMask & whichField))
        _sfMaxDistance.syncWith(pFrom->_sfMaxDistance);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
        _sfBeacon.syncWith(pFrom->_sfBeacon);
}
#endif


inline
const Char8 *VortexParticleAffectorBase::getClassname(void)
{
    return "VortexParticleAffector";
}
OSG_GEN_CONTAINERPTR(VortexParticleAffector);

OSG_END_NAMESPACE

