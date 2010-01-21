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


#ifndef _OSGDISCPARTICLESYSTEMDRAWERFIELDS_H_
#define _OSGDISCPARTICLESYSTEMDRAWERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class DiscParticleSystemDrawer;

OSG_GEN_CONTAINERPTR(DiscParticleSystemDrawer);

/*! \ingroup GrpContribParticleSystemFieldTraits
    \ingroup GrpLibOSGContribParticleSystem
 */
template <>
struct FieldTraits<DiscParticleSystemDrawer *> :
    public FieldTraitsFCPtrBase<DiscParticleSystemDrawer *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<DiscParticleSystemDrawer *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFDiscParticleSystemDrawerPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFDiscParticleSystemDrawerPtr"; }
};

template<> inline
const Char8 *FieldTraits<DiscParticleSystemDrawer *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecDiscParticleSystemDrawerPtr"; 
}

template<> inline
const Char8 *FieldTraits<DiscParticleSystemDrawer *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecDiscParticleSystemDrawerPtr"; 
}

template<> inline
const Char8 *FieldTraits<DiscParticleSystemDrawer *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakDiscParticleSystemDrawerPtr"; 
}

template<> inline
const Char8 *FieldTraits<DiscParticleSystemDrawer *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdDiscParticleSystemDrawerPtr"; 
}

template<> inline
const Char8 *FieldTraits<DiscParticleSystemDrawer *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecDiscParticleSystemDrawerPtr"; 
}

template<> inline
const Char8 *FieldTraits<DiscParticleSystemDrawer *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecDiscParticleSystemDrawerPtr"; 
}

template<> inline
const Char8 *FieldTraits<DiscParticleSystemDrawer *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakDiscParticleSystemDrawerPtr"; 
}

template<> inline
const Char8 *FieldTraits<DiscParticleSystemDrawer *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdDiscParticleSystemDrawerPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<DiscParticleSystemDrawer *,
                      RecordedRefCountPolicy  > SFRecDiscParticleSystemDrawerPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<DiscParticleSystemDrawer *,
                      UnrecordedRefCountPolicy> SFUnrecDiscParticleSystemDrawerPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<DiscParticleSystemDrawer *,
                      WeakRefCountPolicy      > SFWeakDiscParticleSystemDrawerPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<DiscParticleSystemDrawer *,
                      NoRefCountPolicy        > SFUncountedDiscParticleSystemDrawerPtr;


/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<DiscParticleSystemDrawer *,
                      RecordedRefCountPolicy  > MFRecDiscParticleSystemDrawerPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<DiscParticleSystemDrawer *,
                      UnrecordedRefCountPolicy> MFUnrecDiscParticleSystemDrawerPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<DiscParticleSystemDrawer *,
                      WeakRefCountPolicy      > MFWeakDiscParticleSystemDrawerPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<DiscParticleSystemDrawer *,
                      NoRefCountPolicy        > MFUncountedDiscParticleSystemDrawerPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFRecDiscParticleSystemDrawerPtr : 
    public PointerSField<DiscParticleSystemDrawer *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUnrecDiscParticleSystemDrawerPtr : 
    public PointerSField<DiscParticleSystemDrawer *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFWeakDiscParticleSystemDrawerPtr :
    public PointerSField<DiscParticleSystemDrawer *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUncountedDiscParticleSystemDrawerPtr :
    public PointerSField<DiscParticleSystemDrawer *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFRecDiscParticleSystemDrawerPtr :
    public PointerMField<DiscParticleSystemDrawer *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUnrecDiscParticleSystemDrawerPtr :
    public PointerMField<DiscParticleSystemDrawer *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFWeakDiscParticleSystemDrawerPtr :
    public PointerMField<DiscParticleSystemDrawer *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUncountedDiscParticleSystemDrawerPtr :
    public PointerMField<DiscParticleSystemDrawer *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGDISCPARTICLESYSTEMDRAWERFIELDS_H_ */