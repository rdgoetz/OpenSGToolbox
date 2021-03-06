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


#ifndef _OSGQUATERNIONEULERFIELDEDITORFIELDS_H_
#define _OSGQUATERNIONEULERFIELDEDITORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribFieldContainerEditorDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class QuaternionEulerFieldEditor;

OSG_GEN_CONTAINERPTR(QuaternionEulerFieldEditor);

/*! \ingroup GrpContribFieldContainerEditorFieldTraits
    \ingroup GrpLibOSGContribFieldContainerEditor
 */
template <>
struct FieldTraits<QuaternionEulerFieldEditor *> :
    public FieldTraitsFCPtrBase<QuaternionEulerFieldEditor *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<QuaternionEulerFieldEditor *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBFIELDCONTAINEREDITOR_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFQuaternionEulerFieldEditorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFQuaternionEulerFieldEditorPtr"; }
};

template<> inline
const Char8 *FieldTraits<QuaternionEulerFieldEditor *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecQuaternionEulerFieldEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<QuaternionEulerFieldEditor *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecQuaternionEulerFieldEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<QuaternionEulerFieldEditor *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakQuaternionEulerFieldEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<QuaternionEulerFieldEditor *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdQuaternionEulerFieldEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<QuaternionEulerFieldEditor *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecQuaternionEulerFieldEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<QuaternionEulerFieldEditor *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecQuaternionEulerFieldEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<QuaternionEulerFieldEditor *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakQuaternionEulerFieldEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<QuaternionEulerFieldEditor *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdQuaternionEulerFieldEditorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribFieldContainerEditorFieldSFields */
typedef PointerSField<QuaternionEulerFieldEditor *,
                      RecordedRefCountPolicy  > SFRecQuaternionEulerFieldEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldSFields */
typedef PointerSField<QuaternionEulerFieldEditor *,
                      UnrecordedRefCountPolicy> SFUnrecQuaternionEulerFieldEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldSFields */
typedef PointerSField<QuaternionEulerFieldEditor *,
                      WeakRefCountPolicy      > SFWeakQuaternionEulerFieldEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldSFields */
typedef PointerSField<QuaternionEulerFieldEditor *,
                      NoRefCountPolicy        > SFUncountedQuaternionEulerFieldEditorPtr;


/*! \ingroup GrpContribFieldContainerEditorFieldMFields */
typedef PointerMField<QuaternionEulerFieldEditor *,
                      RecordedRefCountPolicy  > MFRecQuaternionEulerFieldEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldMFields */
typedef PointerMField<QuaternionEulerFieldEditor *,
                      UnrecordedRefCountPolicy> MFUnrecQuaternionEulerFieldEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldMFields */
typedef PointerMField<QuaternionEulerFieldEditor *,
                      WeakRefCountPolicy      > MFWeakQuaternionEulerFieldEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldMFields */
typedef PointerMField<QuaternionEulerFieldEditor *,
                      NoRefCountPolicy        > MFUncountedQuaternionEulerFieldEditorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribFieldContainerEditorFieldSFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct SFRecQuaternionEulerFieldEditorPtr : 
    public PointerSField<QuaternionEulerFieldEditor *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribFieldContainerEditorFieldSFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct SFUnrecQuaternionEulerFieldEditorPtr : 
    public PointerSField<QuaternionEulerFieldEditor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribFieldContainerEditorFieldSFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct SFWeakQuaternionEulerFieldEditorPtr :
    public PointerSField<QuaternionEulerFieldEditor *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribFieldContainerEditorFieldSFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct SFUncountedQuaternionEulerFieldEditorPtr :
    public PointerSField<QuaternionEulerFieldEditor *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribFieldContainerEditorFieldMFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct MFRecQuaternionEulerFieldEditorPtr :
    public PointerMField<QuaternionEulerFieldEditor *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribFieldContainerEditorFieldMFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct MFUnrecQuaternionEulerFieldEditorPtr :
    public PointerMField<QuaternionEulerFieldEditor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribFieldContainerEditorFieldMFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct MFWeakQuaternionEulerFieldEditorPtr :
    public PointerMField<QuaternionEulerFieldEditor *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribFieldContainerEditorFieldMFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct MFUncountedQuaternionEulerFieldEditorPtr :
    public PointerMField<QuaternionEulerFieldEditor *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGQUATERNIONEULERFIELDEDITORFIELDS_H_ */
