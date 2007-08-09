/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>

#define OSG_COMPILEUSERINTERFACELIB

#include <OpenSG/OSGConfig.h>

#include "OSGUIFont.h"
#include <OpenSG/OSGTextTXFParam.h>
#include <OpenSG/OSGTextureChunk.h>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::UIFont
UI Font.  
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void UIFont::initMethod (void)
{
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

void UIFont::initText(void)
{
   // Cleanup
   if (_face != NULL)
      subRefP(_face);

   // Create the font
   TextTXFParam param;
   param.size = getGlyphPixelSize();
   param.gap = getGap();
   param.textureWidth = getTextureWidth();
   _face = TextTXFFace::create(getFamily(), static_cast<TextFace::Style>(getStyle()), param);
   if (_face != NULL)
   {
      beginEditCP(UIFontPtr(this), TextureFieldMask);
         setTexture(TextureChunk::create());
      endEditCP(UIFontPtr(this), TextureFieldMask);

      beginEditCP(getTexture());
      {
            ImagePtr image = _face->getTexture();
            getTexture()->setImage(image);
            getTexture()->setWrapS(GL_CLAMP);
            getTexture()->setWrapT(GL_CLAMP);
            getTexture()->setMinFilter(GL_LINEAR_MIPMAP_LINEAR);
            getTexture()->setMagFilter(GL_LINEAR);
            getTexture()->setEnvMode(GL_MODULATE);
      }
      endEditCP(getTexture());
   }

    // We failed to create the font - fallback to the default font
    //if (_face == 0)
    //{
    //    _face = getStatisticsDefaultFont();
    //    getTexture() = getStatisticsDefaultFontTexture();
    //}

    // Increment reference counters
    addRefP(_face);
}

void UIFont::getBounds(const std::string& Text, Pnt2s& TopLeft, Pnt2s& BottomRight)
{
   TextLayoutParam layoutParam;
   layoutParam.spacing = 1.1;
   layoutParam.majorAlignment = TextLayoutParam::ALIGN_BEGIN;
   layoutParam.minorAlignment = TextLayoutParam::ALIGN_BEGIN;
 
   TextLayoutResult layoutResult;
   layout(Text, layoutParam, layoutResult);

   //Vec2f BottomLeft, TopRight;
   Vec2s size = Vec2s(layoutResult.textBounds.x()*getSize(),layoutResult.textBounds.y()*getSize());
  // _face->calculateBoundingBox(layoutResult,BottomLeft, TopRight);

   TopLeft.setValues(0, 0);
   BottomRight.setValue(size);
}

Vec2s UIFont::getBounds(const std::string& Text)
{
   Pnt2s TopLeft, BottomRight;
   getBounds(Text, TopLeft, BottomRight);
   return (BottomRight-TopLeft);
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

UIFont::UIFont(void) :
    Inherited(),
       _face(NULL)
{
}

UIFont::UIFont(const UIFont &source) :
    Inherited(source),
       _face(NULL)
{
}

UIFont::~UIFont(void)
{
   if (_face != NULL)
      subRefP(_face);
}

/*----------------------------- class specific ----------------------------*/

void UIFont::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);
    
    if(whichField & 
        ( FamilyFieldMask
        | GlyphPixelSizeFieldMask
        | GapFieldMask
        | StyleFieldMask
        | TextureWidthFieldMask ) )
    {
        initText();
    }
}

void UIFont::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump UIFont NI" << std::endl;
}


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCTemplate_cpp.h,v 1.20 2006/03/16 17:01:53 dirk Exp $";
    static Char8 cvsid_hpp       [] = OSGUIFONTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGUIFONTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGUIFONTFIELDS_HEADER_CVSID;
}

#ifdef __sgi
#pragma reset woff 1174
#endif

OSG_END_NAMESPACE

