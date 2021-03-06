/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSEGMENTSETDISTRIBUTION1DFIELDS_H_
#define _OSGSEGMENTSETDISTRIBUTION1DFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class SegmentSetDistribution1D;

OSG_GEN_CONTAINERPTR(SegmentSetDistribution1D);

/*! \ingroup GrpContribParticleSystemFieldTraits
    \ingroup GrpLibOSGContribParticleSystem
 */
template <>
struct FieldTraits<SegmentSetDistribution1D *> :
    public FieldTraitsFCPtrBase<SegmentSetDistribution1D *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<SegmentSetDistribution1D *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFSegmentSetDistribution1DPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFSegmentSetDistribution1DPtr"; }
};

template<> inline
const Char8 *FieldTraits<SegmentSetDistribution1D *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecSegmentSetDistribution1DPtr"; 
}

template<> inline
const Char8 *FieldTraits<SegmentSetDistribution1D *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecSegmentSetDistribution1DPtr"; 
}

template<> inline
const Char8 *FieldTraits<SegmentSetDistribution1D *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakSegmentSetDistribution1DPtr"; 
}

template<> inline
const Char8 *FieldTraits<SegmentSetDistribution1D *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdSegmentSetDistribution1DPtr"; 
}

template<> inline
const Char8 *FieldTraits<SegmentSetDistribution1D *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecSegmentSetDistribution1DPtr"; 
}

template<> inline
const Char8 *FieldTraits<SegmentSetDistribution1D *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecSegmentSetDistribution1DPtr"; 
}

template<> inline
const Char8 *FieldTraits<SegmentSetDistribution1D *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakSegmentSetDistribution1DPtr"; 
}

template<> inline
const Char8 *FieldTraits<SegmentSetDistribution1D *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdSegmentSetDistribution1DPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<SegmentSetDistribution1D *,
                      RecordedRefCountPolicy  > SFRecSegmentSetDistribution1DPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<SegmentSetDistribution1D *,
                      UnrecordedRefCountPolicy> SFUnrecSegmentSetDistribution1DPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<SegmentSetDistribution1D *,
                      WeakRefCountPolicy      > SFWeakSegmentSetDistribution1DPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<SegmentSetDistribution1D *,
                      NoRefCountPolicy        > SFUncountedSegmentSetDistribution1DPtr;


/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<SegmentSetDistribution1D *,
                      RecordedRefCountPolicy  > MFRecSegmentSetDistribution1DPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<SegmentSetDistribution1D *,
                      UnrecordedRefCountPolicy> MFUnrecSegmentSetDistribution1DPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<SegmentSetDistribution1D *,
                      WeakRefCountPolicy      > MFWeakSegmentSetDistribution1DPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<SegmentSetDistribution1D *,
                      NoRefCountPolicy        > MFUncountedSegmentSetDistribution1DPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFRecSegmentSetDistribution1DPtr : 
    public PointerSField<SegmentSetDistribution1D *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUnrecSegmentSetDistribution1DPtr : 
    public PointerSField<SegmentSetDistribution1D *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFWeakSegmentSetDistribution1DPtr :
    public PointerSField<SegmentSetDistribution1D *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUncountedSegmentSetDistribution1DPtr :
    public PointerSField<SegmentSetDistribution1D *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFRecSegmentSetDistribution1DPtr :
    public PointerMField<SegmentSetDistribution1D *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUnrecSegmentSetDistribution1DPtr :
    public PointerMField<SegmentSetDistribution1D *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFWeakSegmentSetDistribution1DPtr :
    public PointerMField<SegmentSetDistribution1D *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUncountedSegmentSetDistribution1DPtr :
    public PointerMField<SegmentSetDistribution1D *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSEGMENTSETDISTRIBUTION1DFIELDS_H_ */
