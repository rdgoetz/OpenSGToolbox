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


#ifndef _OSGDEFAULTTREEMODELFIELDS_H_
#define _OSGDEFAULTTREEMODELFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class DefaultTreeModel;

OSG_GEN_CONTAINERPTR(DefaultTreeModel);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<DefaultTreeModel *> :
    public FieldTraitsFCPtrBase<DefaultTreeModel *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<DefaultTreeModel *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFDefaultTreeModelPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFDefaultTreeModelPtr"; }
};

template<> inline
const Char8 *FieldTraits<DefaultTreeModel *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecDefaultTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<DefaultTreeModel *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecDefaultTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<DefaultTreeModel *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakDefaultTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<DefaultTreeModel *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdDefaultTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<DefaultTreeModel *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecDefaultTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<DefaultTreeModel *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecDefaultTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<DefaultTreeModel *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakDefaultTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<DefaultTreeModel *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdDefaultTreeModelPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<DefaultTreeModel *,
                      RecordedRefCountPolicy  > SFRecDefaultTreeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<DefaultTreeModel *,
                      UnrecordedRefCountPolicy> SFUnrecDefaultTreeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<DefaultTreeModel *,
                      WeakRefCountPolicy      > SFWeakDefaultTreeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<DefaultTreeModel *,
                      NoRefCountPolicy        > SFUncountedDefaultTreeModelPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<DefaultTreeModel *,
                      RecordedRefCountPolicy  > MFRecDefaultTreeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<DefaultTreeModel *,
                      UnrecordedRefCountPolicy> MFUnrecDefaultTreeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<DefaultTreeModel *,
                      WeakRefCountPolicy      > MFWeakDefaultTreeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<DefaultTreeModel *,
                      NoRefCountPolicy        > MFUncountedDefaultTreeModelPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecDefaultTreeModelPtr : 
    public PointerSField<DefaultTreeModel *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecDefaultTreeModelPtr : 
    public PointerSField<DefaultTreeModel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakDefaultTreeModelPtr :
    public PointerSField<DefaultTreeModel *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedDefaultTreeModelPtr :
    public PointerSField<DefaultTreeModel *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecDefaultTreeModelPtr :
    public PointerMField<DefaultTreeModel *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecDefaultTreeModelPtr :
    public PointerMField<DefaultTreeModel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakDefaultTreeModelPtr :
    public PointerMField<DefaultTreeModel *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedDefaultTreeModelPtr :
    public PointerMField<DefaultTreeModel *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGDEFAULTTREEMODELFIELDS_H_ */
