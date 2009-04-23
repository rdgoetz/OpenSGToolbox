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
 **     class TextComponent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TextComponentBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 TextComponentBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 


/*------------------------------ get -----------------------------------*/

//! Get the TextComponent::_sfText field.
inline
SFString *TextComponentBase::getSFText(void)
{
    return &_sfText;
}

//! Get the TextComponent::_sfCaretPosition field.
inline
SFUInt32 *TextComponentBase::getSFCaretPosition(void)
{
    return &_sfCaretPosition;
}

//! Get the TextComponent::_sfFont field.
inline
SFUIFontPtr *TextComponentBase::getSFFont(void)
{
    return &_sfFont;
}

//! Get the TextComponent::_sfSelectionBoxColor field.
inline
SFColor4f *TextComponentBase::getSFSelectionBoxColor(void)
{
    return &_sfSelectionBoxColor;
}

//! Get the TextComponent::_sfSelectionTextColor field.
inline
SFColor4f *TextComponentBase::getSFSelectionTextColor(void)
{
    return &_sfSelectionTextColor;
}

//! Get the TextComponent::_sfActiveTextColor field.
inline
SFColor4f *TextComponentBase::getSFActiveTextColor(void)
{
    return &_sfActiveTextColor;
}

//! Get the TextComponent::_sfFocusedTextColor field.
inline
SFColor4f *TextComponentBase::getSFFocusedTextColor(void)
{
    return &_sfFocusedTextColor;
}

//! Get the TextComponent::_sfRolloverTextColor field.
inline
SFColor4f *TextComponentBase::getSFRolloverTextColor(void)
{
    return &_sfRolloverTextColor;
}

//! Get the TextComponent::_sfDisabledTextColor field.
inline
SFColor4f *TextComponentBase::getSFDisabledTextColor(void)
{
    return &_sfDisabledTextColor;
}

//! Get the TextComponent::_sfTextColor field.
inline
SFColor4f *TextComponentBase::getSFTextColor(void)
{
    return &_sfTextColor;
}


//! Get the value of the TextComponent::_sfText field.
inline
std::string &TextComponentBase::getText(void)
{
    return _sfText.getValue();
}

//! Get the value of the TextComponent::_sfText field.
inline
const std::string &TextComponentBase::getText(void) const
{
    return _sfText.getValue();
}

//! Set the value of the TextComponent::_sfText field.
inline
void TextComponentBase::setText(const std::string &value)
{
    _sfText.setValue(value);
}

//! Get the value of the TextComponent::_sfCaretPosition field.
inline
UInt32 &TextComponentBase::getCaretPosition(void)
{
    return _sfCaretPosition.getValue();
}

//! Get the value of the TextComponent::_sfCaretPosition field.
inline
const UInt32 &TextComponentBase::getCaretPosition(void) const
{
    return _sfCaretPosition.getValue();
}

//! Set the value of the TextComponent::_sfCaretPosition field.
inline
void TextComponentBase::setCaretPosition(const UInt32 &value)
{
    _sfCaretPosition.setValue(value);
}

//! Get the value of the TextComponent::_sfFont field.
inline
UIFontPtr &TextComponentBase::getFont(void)
{
    return _sfFont.getValue();
}

//! Get the value of the TextComponent::_sfFont field.
inline
const UIFontPtr &TextComponentBase::getFont(void) const
{
    return _sfFont.getValue();
}

//! Set the value of the TextComponent::_sfFont field.
inline
void TextComponentBase::setFont(const UIFontPtr &value)
{
    _sfFont.setValue(value);
}

//! Get the value of the TextComponent::_sfSelectionBoxColor field.
inline
Color4f &TextComponentBase::getSelectionBoxColor(void)
{
    return _sfSelectionBoxColor.getValue();
}

//! Get the value of the TextComponent::_sfSelectionBoxColor field.
inline
const Color4f &TextComponentBase::getSelectionBoxColor(void) const
{
    return _sfSelectionBoxColor.getValue();
}

//! Set the value of the TextComponent::_sfSelectionBoxColor field.
inline
void TextComponentBase::setSelectionBoxColor(const Color4f &value)
{
    _sfSelectionBoxColor.setValue(value);
}

//! Get the value of the TextComponent::_sfSelectionTextColor field.
inline
Color4f &TextComponentBase::getSelectionTextColor(void)
{
    return _sfSelectionTextColor.getValue();
}

//! Get the value of the TextComponent::_sfSelectionTextColor field.
inline
const Color4f &TextComponentBase::getSelectionTextColor(void) const
{
    return _sfSelectionTextColor.getValue();
}

//! Set the value of the TextComponent::_sfSelectionTextColor field.
inline
void TextComponentBase::setSelectionTextColor(const Color4f &value)
{
    _sfSelectionTextColor.setValue(value);
}

//! Get the value of the TextComponent::_sfActiveTextColor field.
inline
Color4f &TextComponentBase::getActiveTextColor(void)
{
    return _sfActiveTextColor.getValue();
}

//! Get the value of the TextComponent::_sfActiveTextColor field.
inline
const Color4f &TextComponentBase::getActiveTextColor(void) const
{
    return _sfActiveTextColor.getValue();
}

//! Set the value of the TextComponent::_sfActiveTextColor field.
inline
void TextComponentBase::setActiveTextColor(const Color4f &value)
{
    _sfActiveTextColor.setValue(value);
}

//! Get the value of the TextComponent::_sfFocusedTextColor field.
inline
Color4f &TextComponentBase::getFocusedTextColor(void)
{
    return _sfFocusedTextColor.getValue();
}

//! Get the value of the TextComponent::_sfFocusedTextColor field.
inline
const Color4f &TextComponentBase::getFocusedTextColor(void) const
{
    return _sfFocusedTextColor.getValue();
}

//! Set the value of the TextComponent::_sfFocusedTextColor field.
inline
void TextComponentBase::setFocusedTextColor(const Color4f &value)
{
    _sfFocusedTextColor.setValue(value);
}

//! Get the value of the TextComponent::_sfRolloverTextColor field.
inline
Color4f &TextComponentBase::getRolloverTextColor(void)
{
    return _sfRolloverTextColor.getValue();
}

//! Get the value of the TextComponent::_sfRolloverTextColor field.
inline
const Color4f &TextComponentBase::getRolloverTextColor(void) const
{
    return _sfRolloverTextColor.getValue();
}

//! Set the value of the TextComponent::_sfRolloverTextColor field.
inline
void TextComponentBase::setRolloverTextColor(const Color4f &value)
{
    _sfRolloverTextColor.setValue(value);
}

//! Get the value of the TextComponent::_sfDisabledTextColor field.
inline
Color4f &TextComponentBase::getDisabledTextColor(void)
{
    return _sfDisabledTextColor.getValue();
}

//! Get the value of the TextComponent::_sfDisabledTextColor field.
inline
const Color4f &TextComponentBase::getDisabledTextColor(void) const
{
    return _sfDisabledTextColor.getValue();
}

//! Set the value of the TextComponent::_sfDisabledTextColor field.
inline
void TextComponentBase::setDisabledTextColor(const Color4f &value)
{
    _sfDisabledTextColor.setValue(value);
}

//! Get the value of the TextComponent::_sfTextColor field.
inline
Color4f &TextComponentBase::getTextColor(void)
{
    return _sfTextColor.getValue();
}

//! Get the value of the TextComponent::_sfTextColor field.
inline
const Color4f &TextComponentBase::getTextColor(void) const
{
    return _sfTextColor.getValue();
}

//! Set the value of the TextComponent::_sfTextColor field.
inline
void TextComponentBase::setTextColor(const Color4f &value)
{
    _sfTextColor.setValue(value);
}


OSG_END_NAMESPACE

#define OSGTEXTCOMPONENTBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
