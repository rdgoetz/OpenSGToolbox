/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>

#define OSG_COMPILEUSERINTERFACELIB

#include <OpenSG/OSGConfig.h>

#include "OSGAbstractTreeLayoutCache.h"
#include "OSGTreeSelectionListener.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::AbstractTreeLayoutCache
A AbstractTreeLayoutCache. 
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

std::vector<UInt32> AbstractTreeLayoutCache::getRowsForPaths(std::vector<TreePath> path)
{
	//TODO:Implement
	return std::vector<UInt32>();
}

TreeModelPtr AbstractTreeLayoutCache::getModel(void) const
{
	//TODO: Implement
	return NULL;
}

//AbstractLayoutCache.NodeDimensions AbstractTreeLayoutCache::getNodeDimensions(void) const;

UInt32 AbstractTreeLayoutCache::getPreferredHeight(void) const
{
	//TODO: Implement
	return 0;
}

UInt32 AbstractTreeLayoutCache::getPreferredWidth(Pnt2s& TopLeft, Pnt2s& BottomRight) const
{
	//TODO: Implement
	return 0;
}

UInt32 AbstractTreeLayoutCache::getRowHeight(void) const
{
	//TODO: Implement
	return 0;
}

std::vector<UInt32> AbstractTreeLayoutCache::getRowsForPaths(std::vector<TreePath> paths) const
{
	//TODO: Implement
	return std::vector<UInt32>();
}

TreeSelectionModelPtr AbstractTreeLayoutCache::getSelectionModel(void) const
{
	//TODO: Implement
	return NULL;
}

bool AbstractTreeLayoutCache::isFixedRowHeight(void) const
{
	//TODO: Implement
	return false;
}

bool AbstractTreeLayoutCache::isRootVisible(void) const
{
	//TODO: Implement
	return false;
}

void AbstractTreeLayoutCache::setModel(TreeModelPtr newModel)
{
	//TODO: Implement
}

//void AbstractTreeLayoutCache::setNodeDimensions(AbstractLayoutCache.NodeDimensions nd);

void AbstractTreeLayoutCache::setRootVisible(bool rootVisible)
{
	//TODO: Implement
}

void AbstractTreeLayoutCache::setRowHeight(const UInt32& rowHeight)
{
	//TODO: Implement
}

void AbstractTreeLayoutCache::setSelectionModel(TreeSelectionModelPtr newLSM)
{
	//TODO: Implement
}

void AbstractTreeLayoutCache::getNodeDimensions(Pnt2s& TopLeft, Pnt2s& BottomRight, SharedFieldPtr value, const UInt32& row, const UInt32& depth, bool expanded, Pnt2s TopLeftPlaceIn, Pnt2s BottomRightPlaceIn)
{
	//TODO: Implement
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

/*----------------------------- class specific ----------------------------*/

/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

#ifdef __sgi
#pragma reset woff 1174
#endif

OSG_END_NAMESPACE
