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


#ifndef _OSGTITLEBARFIELDS_H_
#define _OSGTITLEBARFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class Titlebar;

OSG_GEN_CONTAINERPTR(Titlebar);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<Titlebar *> :
    public FieldTraitsFCPtrBase<Titlebar *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<Titlebar *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFTitlebarPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFTitlebarPtr"; }
};

template<> inline
const Char8 *FieldTraits<Titlebar *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecTitlebarPtr"; 
}

template<> inline
const Char8 *FieldTraits<Titlebar *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecTitlebarPtr"; 
}

template<> inline
const Char8 *FieldTraits<Titlebar *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakTitlebarPtr"; 
}

template<> inline
const Char8 *FieldTraits<Titlebar *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdTitlebarPtr"; 
}

template<> inline
const Char8 *FieldTraits<Titlebar *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecTitlebarPtr"; 
}

template<> inline
const Char8 *FieldTraits<Titlebar *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecTitlebarPtr"; 
}

template<> inline
const Char8 *FieldTraits<Titlebar *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakTitlebarPtr"; 
}

template<> inline
const Char8 *FieldTraits<Titlebar *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdTitlebarPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Titlebar *,
                      RecordedRefCountPolicy  > SFRecTitlebarPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Titlebar *,
                      UnrecordedRefCountPolicy> SFUnrecTitlebarPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Titlebar *,
                      WeakRefCountPolicy      > SFWeakTitlebarPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Titlebar *,
                      NoRefCountPolicy        > SFUncountedTitlebarPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Titlebar *,
                      RecordedRefCountPolicy  > MFRecTitlebarPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Titlebar *,
                      UnrecordedRefCountPolicy> MFUnrecTitlebarPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Titlebar *,
                      WeakRefCountPolicy      > MFWeakTitlebarPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Titlebar *,
                      NoRefCountPolicy        > MFUncountedTitlebarPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecTitlebarPtr : 
    public PointerSField<Titlebar *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecTitlebarPtr : 
    public PointerSField<Titlebar *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakTitlebarPtr :
    public PointerSField<Titlebar *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedTitlebarPtr :
    public PointerSField<Titlebar *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecTitlebarPtr :
    public PointerMField<Titlebar *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecTitlebarPtr :
    public PointerMField<Titlebar *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakTitlebarPtr :
    public PointerMField<Titlebar *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedTitlebarPtr :
    public PointerMField<Titlebar *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGTITLEBARFIELDS_H_ */