/*---------------------------------------------------------------------------*\
 *                       OpenSG ToolBox ImageProcessing                      *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>

#define OSG_COMPILEIMAGEPROCESSINGLIB

#include <OpenSG/OSGConfig.h>

#include "OSGTextureFilter.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::TextureFilter

*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void TextureFilter::initMethod (void)
{
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

const MFTextureFilterPtr& TextureFilter::getSinkFilters(void) const
{
    return getInternalSinkFilters();
}

Int32 TextureFilter::getNumSourceSlots(void) const
{
    return 1;
}

bool TextureFilter::attachSource(TextureFilterPtr Src, UInt32 Slot)
{
    if( (getNumSourceSlots() < -1 || Slot < getNumSourceSlots()) &&
        Src->isSource() &&
        isSink())
    {
        if(Src != NullFC)
        {
            //Check for Cycles
            if(wouldMakeCyclic(Src))
            {
                return false;
            }

            beginEditCP(TextureFilterPtr(this), TextureFilter::InternalSourceFiltersFieldMask);
                editInternalSourceFilters()[Slot] = Src;
            endEditCP(TextureFilterPtr(this), TextureFilter::InternalSourceFiltersFieldMask);

            Src->attachSink(TextureFilterPtr(this));

            return true;
        }
    }
    return false;
}

bool TextureFilter::detachSource(UInt32 Slot)
{
    if( getNumSourceSlots() < -1 || 
        Slot < getNumSourceSlots())
    {
        FieldContainerMap::iterator SearchItor( editInternalSourceFilters().find(Slot) );
        if(SearchItor != getInternalSourceFilters().end())
        {
            TextureFilterPtr::dcast((*SearchItor).second)->detachSink(TextureFilterPtr(this));

            beginEditCP(TextureFilterPtr(this), TextureFilter::InternalSourceFiltersFieldMask);
                editInternalSourceFilters().erase(SearchItor);
            endEditCP(TextureFilterPtr(this), TextureFilter::InternalSourceFiltersFieldMask);

            return true;
        }
    }
    return false;
}


TextureFilterPtr TextureFilter::getSource(UInt32 Slot)
{
    FieldContainerMap::iterator SearchItor( editInternalSourceFilters().find(Slot) );
    if(SearchItor != getInternalSourceFilters().end())
    {
        return TextureFilterPtr::dcast((*SearchItor).second);
    }
    else
    {
        return NullFC;
    }
}


bool TextureFilter::attachSink(TextureFilterPtr Sink)
{
    if(Sink != NullFC)
    {
        beginEditCP(TextureFilterPtr(this), TextureFilter::InternalSinkFiltersFieldMask);
            getInternalSinkFilters().push_back(Sink);
        endEditCP(TextureFilterPtr(this), TextureFilter::InternalSinkFiltersFieldMask);

        return true;
    }
    else
    {
        return false;
    }
}

bool TextureFilter::detachSink(TextureFilterPtr Sink)
{
    if(Sink != NullFC)
    {
        MFTextureFilterPtr::iterator SearchItor( getInternalSinkFilters().find(Sink) );
        if(SearchItor != getInternalSinkFilters().end() )
        {
            beginEditCP(TextureFilterPtr(this), TextureFilter::InternalSinkFiltersFieldMask);
                getInternalSinkFilters().erase(SearchItor);
            endEditCP(TextureFilterPtr(this), TextureFilter::InternalSinkFiltersFieldMask);

            return true;
        }
    }
    return false;
}

bool TextureFilter::dirty(void) const
{
    for(FieldContainerMap::const_iterator MapItor( getInternalSourceFilters().begin() );
        MapItor != getInternalSourceFilters().end();
        ++MapItor)
    {
        if(TextureFilterPtr::dcast((*MapItor).second)->dirty())
        {
            return true;
        }
    }

    return getInternalDirty();
}

void TextureFilter::setDirty(bool dirty)
{
    beginEditCP(TextureFilterPtr(this), TextureFilter::InternalDirtyFieldMask);
        setInternalDirty(dirty);
    endEditCP(TextureFilterPtr(this), TextureFilter::InternalDirtyFieldMask);
}

bool TextureFilter::wouldMakeCyclic(TextureFilterPtr Src)
{
    //Adding this source would make this Filter graph cyclic iff
    //this Filter is one of the downstream nodes

    if(Src == TextureFilterPtr(this))
    {
        return true;
    }

    bool Result(false);
    for(UInt32 i( 0 );
        i < getInternalSinkFilters().size();
        ++i)
    {
        if(getInternalSinkFilters(i)->wouldMakeCyclic(Src))
        {
            return true;
        }
    }

    return false;
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

TextureFilter::TextureFilter(void) :
    Inherited()
{
}

TextureFilter::TextureFilter(const TextureFilter &source) :
    Inherited(source)
{
}

TextureFilter::~TextureFilter(void)
{
}

/*----------------------------- class specific ----------------------------*/

void TextureFilter::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);

    if(whichField & InternalSourceFiltersFieldMask)
    {
        setDirty(true);
    }
}

void TextureFilter::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump TextureFilter NI" << std::endl;
}


OSG_END_NAMESPACE

