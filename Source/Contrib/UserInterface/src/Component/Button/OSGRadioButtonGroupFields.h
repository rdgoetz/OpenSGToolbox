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


#ifndef _OSGRADIOBUTTONGROUPFIELDS_H_
#define _OSGRADIOBUTTONGROUPFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class RadioButtonGroup;

OSG_GEN_CONTAINERPTR(RadioButtonGroup);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<RadioButtonGroup *> :
    public FieldTraitsFCPtrBase<RadioButtonGroup *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<RadioButtonGroup *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFRadioButtonGroupPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFRadioButtonGroupPtr"; }
};

template<> inline
const Char8 *FieldTraits<RadioButtonGroup *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecRadioButtonGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<RadioButtonGroup *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecRadioButtonGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<RadioButtonGroup *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakRadioButtonGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<RadioButtonGroup *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdRadioButtonGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<RadioButtonGroup *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecRadioButtonGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<RadioButtonGroup *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecRadioButtonGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<RadioButtonGroup *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakRadioButtonGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<RadioButtonGroup *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdRadioButtonGroupPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<RadioButtonGroup *,
                      RecordedRefCountPolicy  > SFRecRadioButtonGroupPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<RadioButtonGroup *,
                      UnrecordedRefCountPolicy> SFUnrecRadioButtonGroupPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<RadioButtonGroup *,
                      WeakRefCountPolicy      > SFWeakRadioButtonGroupPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<RadioButtonGroup *,
                      NoRefCountPolicy        > SFUncountedRadioButtonGroupPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<RadioButtonGroup *,
                      RecordedRefCountPolicy  > MFRecRadioButtonGroupPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<RadioButtonGroup *,
                      UnrecordedRefCountPolicy> MFUnrecRadioButtonGroupPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<RadioButtonGroup *,
                      WeakRefCountPolicy      > MFWeakRadioButtonGroupPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<RadioButtonGroup *,
                      NoRefCountPolicy        > MFUncountedRadioButtonGroupPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecRadioButtonGroupPtr : 
    public PointerSField<RadioButtonGroup *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecRadioButtonGroupPtr : 
    public PointerSField<RadioButtonGroup *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakRadioButtonGroupPtr :
    public PointerSField<RadioButtonGroup *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedRadioButtonGroupPtr :
    public PointerSField<RadioButtonGroup *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecRadioButtonGroupPtr :
    public PointerMField<RadioButtonGroup *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecRadioButtonGroupPtr :
    public PointerMField<RadioButtonGroup *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakRadioButtonGroupPtr :
    public PointerMField<RadioButtonGroup *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedRadioButtonGroupPtr :
    public PointerMField<RadioButtonGroup *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGRADIOBUTTONGROUPFIELDS_H_ */
