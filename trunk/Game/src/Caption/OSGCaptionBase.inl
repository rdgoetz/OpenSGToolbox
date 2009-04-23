/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Game                                *
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
 **     class Caption!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &CaptionBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 CaptionBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
CaptionPtr CaptionBase::create(void) 
{
    CaptionPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = CaptionPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
CaptionPtr CaptionBase::createEmpty(void) 
{ 
    CaptionPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the Caption::_mfSegment field.
inline
MFString *CaptionBase::getMFSegment(void)
{
    return &_mfSegment;
}

//! Get the Caption::_mfStartStamps field.
inline
MFReal32 *CaptionBase::getMFStartStamps(void)
{
    return &_mfStartStamps;
}

//! Get the Caption::_mfEndStamps field.
inline
MFReal32 *CaptionBase::getMFEndStamps(void)
{
    return &_mfEndStamps;
}

//! Get the Caption::_sfCurrentSegmentIndex field.
inline
SFUInt32 *CaptionBase::getSFCurrentSegmentIndex(void)
{
    return &_sfCurrentSegmentIndex;
}

//! Get the Caption::_sfCaptionDialogSound field.
inline
SFSoundPtr *CaptionBase::getSFCaptionDialogSound(void)
{
    return &_sfCaptionDialogSound;
}

//! Get the Caption::_sfParentContainer field.
inline
SFContainerPtr *CaptionBase::getSFParentContainer(void)
{
    return &_sfParentContainer;
}

//! Get the Caption::_sfChildIndex field.
inline
SFUInt32 *CaptionBase::getSFChildIndex(void)
{
    return &_sfChildIndex;
}

//! Get the Caption::_sfComponentGenerator field.
inline
SFComponentGeneratorPtr *CaptionBase::getSFComponentGenerator(void)
{
    return &_sfComponentGenerator;
}


//! Get the value of the Caption::_sfCurrentSegmentIndex field.
inline
UInt32 &CaptionBase::getCurrentSegmentIndex(void)
{
    return _sfCurrentSegmentIndex.getValue();
}

//! Get the value of the Caption::_sfCurrentSegmentIndex field.
inline
const UInt32 &CaptionBase::getCurrentSegmentIndex(void) const
{
    return _sfCurrentSegmentIndex.getValue();
}

//! Set the value of the Caption::_sfCurrentSegmentIndex field.
inline
void CaptionBase::setCurrentSegmentIndex(const UInt32 &value)
{
    _sfCurrentSegmentIndex.setValue(value);
}

//! Get the value of the Caption::_sfCaptionDialogSound field.
inline
SoundPtr &CaptionBase::getCaptionDialogSound(void)
{
    return _sfCaptionDialogSound.getValue();
}

//! Get the value of the Caption::_sfCaptionDialogSound field.
inline
const SoundPtr &CaptionBase::getCaptionDialogSound(void) const
{
    return _sfCaptionDialogSound.getValue();
}

//! Set the value of the Caption::_sfCaptionDialogSound field.
inline
void CaptionBase::setCaptionDialogSound(const SoundPtr &value)
{
    _sfCaptionDialogSound.setValue(value);
}

//! Get the value of the Caption::_sfParentContainer field.
inline
ContainerPtr &CaptionBase::getParentContainer(void)
{
    return _sfParentContainer.getValue();
}

//! Get the value of the Caption::_sfParentContainer field.
inline
const ContainerPtr &CaptionBase::getParentContainer(void) const
{
    return _sfParentContainer.getValue();
}

//! Set the value of the Caption::_sfParentContainer field.
inline
void CaptionBase::setParentContainer(const ContainerPtr &value)
{
    _sfParentContainer.setValue(value);
}

//! Get the value of the Caption::_sfChildIndex field.
inline
UInt32 &CaptionBase::getChildIndex(void)
{
    return _sfChildIndex.getValue();
}

//! Get the value of the Caption::_sfChildIndex field.
inline
const UInt32 &CaptionBase::getChildIndex(void) const
{
    return _sfChildIndex.getValue();
}

//! Set the value of the Caption::_sfChildIndex field.
inline
void CaptionBase::setChildIndex(const UInt32 &value)
{
    _sfChildIndex.setValue(value);
}

//! Get the value of the Caption::_sfComponentGenerator field.
inline
ComponentGeneratorPtr &CaptionBase::getComponentGenerator(void)
{
    return _sfComponentGenerator.getValue();
}

//! Get the value of the Caption::_sfComponentGenerator field.
inline
const ComponentGeneratorPtr &CaptionBase::getComponentGenerator(void) const
{
    return _sfComponentGenerator.getValue();
}

//! Set the value of the Caption::_sfComponentGenerator field.
inline
void CaptionBase::setComponentGenerator(const ComponentGeneratorPtr &value)
{
    _sfComponentGenerator.setValue(value);
}


//! Get the value of the \a index element the Caption::_mfSegment field.
inline
std::string &CaptionBase::getSegment(const UInt32 index)
{
    return _mfSegment[index];
}

//! Get the Caption::_mfSegment field.
inline
MFString &CaptionBase::getSegment(void)
{
    return _mfSegment;
}

//! Get the Caption::_mfSegment field.
inline
const MFString &CaptionBase::getSegment(void) const
{
    return _mfSegment;
}

//! Get the value of the \a index element the Caption::_mfStartStamps field.
inline
Real32 &CaptionBase::getStartStamps(const UInt32 index)
{
    return _mfStartStamps[index];
}

//! Get the Caption::_mfStartStamps field.
inline
MFReal32 &CaptionBase::getStartStamps(void)
{
    return _mfStartStamps;
}

//! Get the Caption::_mfStartStamps field.
inline
const MFReal32 &CaptionBase::getStartStamps(void) const
{
    return _mfStartStamps;
}

//! Get the value of the \a index element the Caption::_mfEndStamps field.
inline
Real32 &CaptionBase::getEndStamps(const UInt32 index)
{
    return _mfEndStamps[index];
}

//! Get the Caption::_mfEndStamps field.
inline
MFReal32 &CaptionBase::getEndStamps(void)
{
    return _mfEndStamps;
}

//! Get the Caption::_mfEndStamps field.
inline
const MFReal32 &CaptionBase::getEndStamps(void) const
{
    return _mfEndStamps;
}

OSG_END_NAMESPACE

#define OSGCAPTIONBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
