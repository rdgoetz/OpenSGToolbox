/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox Particle System                        *
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

#define OSG_COMPILEPARTICLESYSTEMLIB

#include <OpenSG/OSGConfig.h>

#include "OSGAgeFadeParticleAffector.h"

#include <OpenSG/Toolbox/OSGInterpolations.h>
#include "ParticleSystem/OSGParticleSystem.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::AgeFadeParticleAffector

*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void AgeFadeParticleAffector::initMethod (void)
{
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/



bool AgeFadeParticleAffector::affect(ParticleSystemPtr System, Int32 ParticleIndex, const Time& elps)
{
	Real32 Alpha(0.0f);
	if(System->getAge(ParticleIndex)<getFadeInTime())
	{
		lerp<Real32>(getStartAlpha(), getFadeToAlpha(),1.0f-((getFadeInTime() - System->getAge(ParticleIndex))/getFadeInTime()), Alpha); 
	}
	else if(System->getAge(ParticleIndex)< System->getLifespan(ParticleIndex)-getFadeOutTime())
	{
		Alpha = getFadeToAlpha();
	}
	else
	{
		//lerp
		lerp<Real32>(getFadeToAlpha(), getEndAlpha(), ((System->getAge(ParticleIndex)-System->getLifespan(ParticleIndex)+getFadeOutTime())/(getFadeOutTime())), Alpha);
	}

	Color4f Color = System->getColor(ParticleIndex);
	Color[3] = Alpha;
	System->setColor(Color, ParticleIndex);

	
    return false;
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

AgeFadeParticleAffector::AgeFadeParticleAffector(void) :
    Inherited()
{
}

AgeFadeParticleAffector::AgeFadeParticleAffector(const AgeFadeParticleAffector &source) :
    Inherited(source)
{
}

AgeFadeParticleAffector::~AgeFadeParticleAffector(void)
{
}

/*----------------------------- class specific ----------------------------*/

void AgeFadeParticleAffector::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);
}

void AgeFadeParticleAffector::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump AgeFadeParticleAffector NI" << std::endl;
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
    static Char8 cvsid_hpp       [] = OSGAGEFADEPARTICLEAFFECTORBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGAGEFADEPARTICLEAFFECTORBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGAGEFADEPARTICLEAFFECTORFIELDS_HEADER_CVSID;
}

#ifdef __sgi
#pragma reset woff 1174
#endif

OSG_END_NAMESPACE

