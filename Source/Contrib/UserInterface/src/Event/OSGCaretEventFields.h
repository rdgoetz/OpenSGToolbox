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


#ifndef _OSGCARETEVENTFIELDS_H_
#define _OSGCARETEVENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class CaretEvent;

OSG_GEN_CONTAINERPTR(CaretEvent);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<CaretEvent *> :
    public FieldTraitsFCPtrBase<CaretEvent *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<CaretEvent *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFCaretEventPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFCaretEventPtr"; }
};

template<> inline
const Char8 *FieldTraits<CaretEvent *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecCaretEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<CaretEvent *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecCaretEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<CaretEvent *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakCaretEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<CaretEvent *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdCaretEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<CaretEvent *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecCaretEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<CaretEvent *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecCaretEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<CaretEvent *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakCaretEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<CaretEvent *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdCaretEventPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<CaretEvent *,
                      RecordedRefCountPolicy  > SFRecCaretEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<CaretEvent *,
                      UnrecordedRefCountPolicy> SFUnrecCaretEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<CaretEvent *,
                      WeakRefCountPolicy      > SFWeakCaretEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<CaretEvent *,
                      NoRefCountPolicy        > SFUncountedCaretEventPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<CaretEvent *,
                      RecordedRefCountPolicy  > MFRecCaretEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<CaretEvent *,
                      UnrecordedRefCountPolicy> MFUnrecCaretEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<CaretEvent *,
                      WeakRefCountPolicy      > MFWeakCaretEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<CaretEvent *,
                      NoRefCountPolicy        > MFUncountedCaretEventPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecCaretEventPtr : 
    public PointerSField<CaretEvent *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecCaretEventPtr : 
    public PointerSField<CaretEvent *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakCaretEventPtr :
    public PointerSField<CaretEvent *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedCaretEventPtr :
    public PointerSField<CaretEvent *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecCaretEventPtr :
    public PointerMField<CaretEvent *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecCaretEventPtr :
    public PointerMField<CaretEvent *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakCaretEventPtr :
    public PointerMField<CaretEvent *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedCaretEventPtr :
    public PointerMField<CaretEvent *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCARETEVENTFIELDS_H_ */
