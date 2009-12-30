/*---------------------------------------------------------------------------*\
 *                         OpenSG ToolBox Physics                            *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                Authors: Behboud Kalantary, David Kabala                   *
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
 **     class PhysicsAMotorJoint!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PhysicsAMotorJointBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 PhysicsAMotorJointBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
PhysicsAMotorJointPtr PhysicsAMotorJointBase::create(void) 
{
    PhysicsAMotorJointPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = PhysicsAMotorJointPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
PhysicsAMotorJointPtr PhysicsAMotorJointBase::createEmpty(void) 
{ 
    PhysicsAMotorJointPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the PhysicsAMotorJoint::_sfMode field.
inline
SFInt8 *PhysicsAMotorJointBase::getSFMode(void)
{
    return &_sfMode;
}

//! Get the PhysicsAMotorJoint::_sfNumAxes field.
inline
SFUInt8 *PhysicsAMotorJointBase::getSFNumAxes(void)
{
    return &_sfNumAxes;
}

//! Get the PhysicsAMotorJoint::_sfAxis1 field.
inline
SFVec3f *PhysicsAMotorJointBase::getSFAxis1(void)
{
    return &_sfAxis1;
}

//! Get the PhysicsAMotorJoint::_sfAxis2 field.
inline
SFVec3f *PhysicsAMotorJointBase::getSFAxis2(void)
{
    return &_sfAxis2;
}

//! Get the PhysicsAMotorJoint::_sfAxis3 field.
inline
SFVec3f *PhysicsAMotorJointBase::getSFAxis3(void)
{
    return &_sfAxis3;
}

//! Get the PhysicsAMotorJoint::_sfAxis1ReferenceFrame field.
inline
SFUInt8 *PhysicsAMotorJointBase::getSFAxis1ReferenceFrame(void)
{
    return &_sfAxis1ReferenceFrame;
}

//! Get the PhysicsAMotorJoint::_sfAxis2ReferenceFrame field.
inline
SFUInt8 *PhysicsAMotorJointBase::getSFAxis2ReferenceFrame(void)
{
    return &_sfAxis2ReferenceFrame;
}

//! Get the PhysicsAMotorJoint::_sfAxis3ReferenceFrame field.
inline
SFUInt8 *PhysicsAMotorJointBase::getSFAxis3ReferenceFrame(void)
{
    return &_sfAxis3ReferenceFrame;
}

//! Get the PhysicsAMotorJoint::_sfVel field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFVel(void)
{
    return &_sfVel;
}

//! Get the PhysicsAMotorJoint::_sfFMax field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFFMax(void)
{
    return &_sfFMax;
}

//! Get the PhysicsAMotorJoint::_sfFudgeFactor field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFFudgeFactor(void)
{
    return &_sfFudgeFactor;
}

//! Get the PhysicsAMotorJoint::_sfVel2 field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFVel2(void)
{
    return &_sfVel2;
}

//! Get the PhysicsAMotorJoint::_sfFMax2 field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFFMax2(void)
{
    return &_sfFMax2;
}

//! Get the PhysicsAMotorJoint::_sfFudgeFactor2 field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFFudgeFactor2(void)
{
    return &_sfFudgeFactor2;
}

//! Get the PhysicsAMotorJoint::_sfVel3 field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFVel3(void)
{
    return &_sfVel3;
}

//! Get the PhysicsAMotorJoint::_sfFMax3 field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFFMax3(void)
{
    return &_sfFMax3;
}

//! Get the PhysicsAMotorJoint::_sfFudgeFactor3 field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFFudgeFactor3(void)
{
    return &_sfFudgeFactor3;
}

//! Get the PhysicsAMotorJoint::_sfHiStop field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFHiStop(void)
{
    return &_sfHiStop;
}

//! Get the PhysicsAMotorJoint::_sfLoStop field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFLoStop(void)
{
    return &_sfLoStop;
}

//! Get the PhysicsAMotorJoint::_sfBounce field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFBounce(void)
{
    return &_sfBounce;
}

//! Get the PhysicsAMotorJoint::_sfCFM field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFCFM(void)
{
    return &_sfCFM;
}

//! Get the PhysicsAMotorJoint::_sfStopERP field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFStopERP(void)
{
    return &_sfStopERP;
}

//! Get the PhysicsAMotorJoint::_sfStopCFM field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFStopCFM(void)
{
    return &_sfStopCFM;
}

//! Get the PhysicsAMotorJoint::_sfHiStop2 field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFHiStop2(void)
{
    return &_sfHiStop2;
}

//! Get the PhysicsAMotorJoint::_sfLoStop2 field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFLoStop2(void)
{
    return &_sfLoStop2;
}

//! Get the PhysicsAMotorJoint::_sfBounce2 field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFBounce2(void)
{
    return &_sfBounce2;
}

//! Get the PhysicsAMotorJoint::_sfCFM2 field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFCFM2(void)
{
    return &_sfCFM2;
}

//! Get the PhysicsAMotorJoint::_sfStopERP2 field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFStopERP2(void)
{
    return &_sfStopERP2;
}

//! Get the PhysicsAMotorJoint::_sfStopCFM2 field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFStopCFM2(void)
{
    return &_sfStopCFM2;
}

//! Get the PhysicsAMotorJoint::_sfHiStop3 field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFHiStop3(void)
{
    return &_sfHiStop3;
}

//! Get the PhysicsAMotorJoint::_sfLoStop3 field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFLoStop3(void)
{
    return &_sfLoStop3;
}

//! Get the PhysicsAMotorJoint::_sfBounce3 field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFBounce3(void)
{
    return &_sfBounce3;
}

//! Get the PhysicsAMotorJoint::_sfCFM3 field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFCFM3(void)
{
    return &_sfCFM3;
}

//! Get the PhysicsAMotorJoint::_sfStopERP3 field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFStopERP3(void)
{
    return &_sfStopERP3;
}

//! Get the PhysicsAMotorJoint::_sfStopCFM3 field.
inline
SFReal32 *PhysicsAMotorJointBase::getSFStopCFM3(void)
{
    return &_sfStopCFM3;
}


//! Get the value of the PhysicsAMotorJoint::_sfMode field.
inline
Int8 &PhysicsAMotorJointBase::getMode(void)
{
    return _sfMode.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfMode field.
inline
const Int8 &PhysicsAMotorJointBase::getMode(void) const
{
    return _sfMode.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfMode field.
inline
void PhysicsAMotorJointBase::setMode(const Int8 &value)
{
    _sfMode.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfNumAxes field.
inline
UInt8 &PhysicsAMotorJointBase::getNumAxes(void)
{
    return _sfNumAxes.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfNumAxes field.
inline
const UInt8 &PhysicsAMotorJointBase::getNumAxes(void) const
{
    return _sfNumAxes.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfNumAxes field.
inline
void PhysicsAMotorJointBase::setNumAxes(const UInt8 &value)
{
    _sfNumAxes.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfAxis1 field.
inline
Vec3f &PhysicsAMotorJointBase::getAxis1(void)
{
    return _sfAxis1.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfAxis1 field.
inline
const Vec3f &PhysicsAMotorJointBase::getAxis1(void) const
{
    return _sfAxis1.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfAxis1 field.
inline
void PhysicsAMotorJointBase::setAxis1(const Vec3f &value)
{
    _sfAxis1.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfAxis2 field.
inline
Vec3f &PhysicsAMotorJointBase::getAxis2(void)
{
    return _sfAxis2.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfAxis2 field.
inline
const Vec3f &PhysicsAMotorJointBase::getAxis2(void) const
{
    return _sfAxis2.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfAxis2 field.
inline
void PhysicsAMotorJointBase::setAxis2(const Vec3f &value)
{
    _sfAxis2.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfAxis3 field.
inline
Vec3f &PhysicsAMotorJointBase::getAxis3(void)
{
    return _sfAxis3.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfAxis3 field.
inline
const Vec3f &PhysicsAMotorJointBase::getAxis3(void) const
{
    return _sfAxis3.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfAxis3 field.
inline
void PhysicsAMotorJointBase::setAxis3(const Vec3f &value)
{
    _sfAxis3.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfAxis1ReferenceFrame field.
inline
UInt8 &PhysicsAMotorJointBase::getAxis1ReferenceFrame(void)
{
    return _sfAxis1ReferenceFrame.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfAxis1ReferenceFrame field.
inline
const UInt8 &PhysicsAMotorJointBase::getAxis1ReferenceFrame(void) const
{
    return _sfAxis1ReferenceFrame.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfAxis1ReferenceFrame field.
inline
void PhysicsAMotorJointBase::setAxis1ReferenceFrame(const UInt8 &value)
{
    _sfAxis1ReferenceFrame.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfAxis2ReferenceFrame field.
inline
UInt8 &PhysicsAMotorJointBase::getAxis2ReferenceFrame(void)
{
    return _sfAxis2ReferenceFrame.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfAxis2ReferenceFrame field.
inline
const UInt8 &PhysicsAMotorJointBase::getAxis2ReferenceFrame(void) const
{
    return _sfAxis2ReferenceFrame.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfAxis2ReferenceFrame field.
inline
void PhysicsAMotorJointBase::setAxis2ReferenceFrame(const UInt8 &value)
{
    _sfAxis2ReferenceFrame.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfAxis3ReferenceFrame field.
inline
UInt8 &PhysicsAMotorJointBase::getAxis3ReferenceFrame(void)
{
    return _sfAxis3ReferenceFrame.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfAxis3ReferenceFrame field.
inline
const UInt8 &PhysicsAMotorJointBase::getAxis3ReferenceFrame(void) const
{
    return _sfAxis3ReferenceFrame.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfAxis3ReferenceFrame field.
inline
void PhysicsAMotorJointBase::setAxis3ReferenceFrame(const UInt8 &value)
{
    _sfAxis3ReferenceFrame.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfVel field.
inline
Real32 &PhysicsAMotorJointBase::getVel(void)
{
    return _sfVel.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfVel field.
inline
const Real32 &PhysicsAMotorJointBase::getVel(void) const
{
    return _sfVel.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfVel field.
inline
void PhysicsAMotorJointBase::setVel(const Real32 &value)
{
    _sfVel.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfFMax field.
inline
Real32 &PhysicsAMotorJointBase::getFMax(void)
{
    return _sfFMax.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfFMax field.
inline
const Real32 &PhysicsAMotorJointBase::getFMax(void) const
{
    return _sfFMax.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfFMax field.
inline
void PhysicsAMotorJointBase::setFMax(const Real32 &value)
{
    _sfFMax.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfFudgeFactor field.
inline
Real32 &PhysicsAMotorJointBase::getFudgeFactor(void)
{
    return _sfFudgeFactor.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfFudgeFactor field.
inline
const Real32 &PhysicsAMotorJointBase::getFudgeFactor(void) const
{
    return _sfFudgeFactor.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfFudgeFactor field.
inline
void PhysicsAMotorJointBase::setFudgeFactor(const Real32 &value)
{
    _sfFudgeFactor.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfVel2 field.
inline
Real32 &PhysicsAMotorJointBase::getVel2(void)
{
    return _sfVel2.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfVel2 field.
inline
const Real32 &PhysicsAMotorJointBase::getVel2(void) const
{
    return _sfVel2.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfVel2 field.
inline
void PhysicsAMotorJointBase::setVel2(const Real32 &value)
{
    _sfVel2.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfFMax2 field.
inline
Real32 &PhysicsAMotorJointBase::getFMax2(void)
{
    return _sfFMax2.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfFMax2 field.
inline
const Real32 &PhysicsAMotorJointBase::getFMax2(void) const
{
    return _sfFMax2.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfFMax2 field.
inline
void PhysicsAMotorJointBase::setFMax2(const Real32 &value)
{
    _sfFMax2.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfFudgeFactor2 field.
inline
Real32 &PhysicsAMotorJointBase::getFudgeFactor2(void)
{
    return _sfFudgeFactor2.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfFudgeFactor2 field.
inline
const Real32 &PhysicsAMotorJointBase::getFudgeFactor2(void) const
{
    return _sfFudgeFactor2.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfFudgeFactor2 field.
inline
void PhysicsAMotorJointBase::setFudgeFactor2(const Real32 &value)
{
    _sfFudgeFactor2.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfVel3 field.
inline
Real32 &PhysicsAMotorJointBase::getVel3(void)
{
    return _sfVel3.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfVel3 field.
inline
const Real32 &PhysicsAMotorJointBase::getVel3(void) const
{
    return _sfVel3.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfVel3 field.
inline
void PhysicsAMotorJointBase::setVel3(const Real32 &value)
{
    _sfVel3.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfFMax3 field.
inline
Real32 &PhysicsAMotorJointBase::getFMax3(void)
{
    return _sfFMax3.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfFMax3 field.
inline
const Real32 &PhysicsAMotorJointBase::getFMax3(void) const
{
    return _sfFMax3.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfFMax3 field.
inline
void PhysicsAMotorJointBase::setFMax3(const Real32 &value)
{
    _sfFMax3.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfFudgeFactor3 field.
inline
Real32 &PhysicsAMotorJointBase::getFudgeFactor3(void)
{
    return _sfFudgeFactor3.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfFudgeFactor3 field.
inline
const Real32 &PhysicsAMotorJointBase::getFudgeFactor3(void) const
{
    return _sfFudgeFactor3.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfFudgeFactor3 field.
inline
void PhysicsAMotorJointBase::setFudgeFactor3(const Real32 &value)
{
    _sfFudgeFactor3.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfHiStop field.
inline
Real32 &PhysicsAMotorJointBase::getHiStop(void)
{
    return _sfHiStop.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfHiStop field.
inline
const Real32 &PhysicsAMotorJointBase::getHiStop(void) const
{
    return _sfHiStop.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfHiStop field.
inline
void PhysicsAMotorJointBase::setHiStop(const Real32 &value)
{
    _sfHiStop.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfLoStop field.
inline
Real32 &PhysicsAMotorJointBase::getLoStop(void)
{
    return _sfLoStop.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfLoStop field.
inline
const Real32 &PhysicsAMotorJointBase::getLoStop(void) const
{
    return _sfLoStop.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfLoStop field.
inline
void PhysicsAMotorJointBase::setLoStop(const Real32 &value)
{
    _sfLoStop.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfBounce field.
inline
Real32 &PhysicsAMotorJointBase::getBounce(void)
{
    return _sfBounce.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfBounce field.
inline
const Real32 &PhysicsAMotorJointBase::getBounce(void) const
{
    return _sfBounce.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfBounce field.
inline
void PhysicsAMotorJointBase::setBounce(const Real32 &value)
{
    _sfBounce.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfCFM field.
inline
Real32 &PhysicsAMotorJointBase::getCFM(void)
{
    return _sfCFM.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfCFM field.
inline
const Real32 &PhysicsAMotorJointBase::getCFM(void) const
{
    return _sfCFM.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfCFM field.
inline
void PhysicsAMotorJointBase::setCFM(const Real32 &value)
{
    _sfCFM.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfStopERP field.
inline
Real32 &PhysicsAMotorJointBase::getStopERP(void)
{
    return _sfStopERP.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfStopERP field.
inline
const Real32 &PhysicsAMotorJointBase::getStopERP(void) const
{
    return _sfStopERP.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfStopERP field.
inline
void PhysicsAMotorJointBase::setStopERP(const Real32 &value)
{
    _sfStopERP.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfStopCFM field.
inline
Real32 &PhysicsAMotorJointBase::getStopCFM(void)
{
    return _sfStopCFM.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfStopCFM field.
inline
const Real32 &PhysicsAMotorJointBase::getStopCFM(void) const
{
    return _sfStopCFM.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfStopCFM field.
inline
void PhysicsAMotorJointBase::setStopCFM(const Real32 &value)
{
    _sfStopCFM.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfHiStop2 field.
inline
Real32 &PhysicsAMotorJointBase::getHiStop2(void)
{
    return _sfHiStop2.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfHiStop2 field.
inline
const Real32 &PhysicsAMotorJointBase::getHiStop2(void) const
{
    return _sfHiStop2.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfHiStop2 field.
inline
void PhysicsAMotorJointBase::setHiStop2(const Real32 &value)
{
    _sfHiStop2.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfLoStop2 field.
inline
Real32 &PhysicsAMotorJointBase::getLoStop2(void)
{
    return _sfLoStop2.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfLoStop2 field.
inline
const Real32 &PhysicsAMotorJointBase::getLoStop2(void) const
{
    return _sfLoStop2.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfLoStop2 field.
inline
void PhysicsAMotorJointBase::setLoStop2(const Real32 &value)
{
    _sfLoStop2.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfBounce2 field.
inline
Real32 &PhysicsAMotorJointBase::getBounce2(void)
{
    return _sfBounce2.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfBounce2 field.
inline
const Real32 &PhysicsAMotorJointBase::getBounce2(void) const
{
    return _sfBounce2.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfBounce2 field.
inline
void PhysicsAMotorJointBase::setBounce2(const Real32 &value)
{
    _sfBounce2.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfCFM2 field.
inline
Real32 &PhysicsAMotorJointBase::getCFM2(void)
{
    return _sfCFM2.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfCFM2 field.
inline
const Real32 &PhysicsAMotorJointBase::getCFM2(void) const
{
    return _sfCFM2.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfCFM2 field.
inline
void PhysicsAMotorJointBase::setCFM2(const Real32 &value)
{
    _sfCFM2.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfStopERP2 field.
inline
Real32 &PhysicsAMotorJointBase::getStopERP2(void)
{
    return _sfStopERP2.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfStopERP2 field.
inline
const Real32 &PhysicsAMotorJointBase::getStopERP2(void) const
{
    return _sfStopERP2.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfStopERP2 field.
inline
void PhysicsAMotorJointBase::setStopERP2(const Real32 &value)
{
    _sfStopERP2.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfStopCFM2 field.
inline
Real32 &PhysicsAMotorJointBase::getStopCFM2(void)
{
    return _sfStopCFM2.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfStopCFM2 field.
inline
const Real32 &PhysicsAMotorJointBase::getStopCFM2(void) const
{
    return _sfStopCFM2.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfStopCFM2 field.
inline
void PhysicsAMotorJointBase::setStopCFM2(const Real32 &value)
{
    _sfStopCFM2.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfHiStop3 field.
inline
Real32 &PhysicsAMotorJointBase::getHiStop3(void)
{
    return _sfHiStop3.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfHiStop3 field.
inline
const Real32 &PhysicsAMotorJointBase::getHiStop3(void) const
{
    return _sfHiStop3.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfHiStop3 field.
inline
void PhysicsAMotorJointBase::setHiStop3(const Real32 &value)
{
    _sfHiStop3.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfLoStop3 field.
inline
Real32 &PhysicsAMotorJointBase::getLoStop3(void)
{
    return _sfLoStop3.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfLoStop3 field.
inline
const Real32 &PhysicsAMotorJointBase::getLoStop3(void) const
{
    return _sfLoStop3.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfLoStop3 field.
inline
void PhysicsAMotorJointBase::setLoStop3(const Real32 &value)
{
    _sfLoStop3.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfBounce3 field.
inline
Real32 &PhysicsAMotorJointBase::getBounce3(void)
{
    return _sfBounce3.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfBounce3 field.
inline
const Real32 &PhysicsAMotorJointBase::getBounce3(void) const
{
    return _sfBounce3.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfBounce3 field.
inline
void PhysicsAMotorJointBase::setBounce3(const Real32 &value)
{
    _sfBounce3.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfCFM3 field.
inline
Real32 &PhysicsAMotorJointBase::getCFM3(void)
{
    return _sfCFM3.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfCFM3 field.
inline
const Real32 &PhysicsAMotorJointBase::getCFM3(void) const
{
    return _sfCFM3.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfCFM3 field.
inline
void PhysicsAMotorJointBase::setCFM3(const Real32 &value)
{
    _sfCFM3.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfStopERP3 field.
inline
Real32 &PhysicsAMotorJointBase::getStopERP3(void)
{
    return _sfStopERP3.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfStopERP3 field.
inline
const Real32 &PhysicsAMotorJointBase::getStopERP3(void) const
{
    return _sfStopERP3.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfStopERP3 field.
inline
void PhysicsAMotorJointBase::setStopERP3(const Real32 &value)
{
    _sfStopERP3.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfStopCFM3 field.
inline
Real32 &PhysicsAMotorJointBase::getStopCFM3(void)
{
    return _sfStopCFM3.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfStopCFM3 field.
inline
const Real32 &PhysicsAMotorJointBase::getStopCFM3(void) const
{
    return _sfStopCFM3.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfStopCFM3 field.
inline
void PhysicsAMotorJointBase::setStopCFM3(const Real32 &value)
{
    _sfStopCFM3.setValue(value);
}


OSG_END_NAMESPACE

#define OSGPHYSICSAMOTORJOINTBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
