/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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
 **     Do not change this file, changes should be done in the derived      **
 **     class WindowsLookAndFeel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEWINDOWSLOOKANDFEELINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGWindowsLookAndFeelBase.h"
#include "OSGWindowsLookAndFeel.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector WindowsLookAndFeelBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 



FieldContainerType WindowsLookAndFeelBase::_type(
    "WindowsLookAndFeel",
    "LookAndFeel",
    NULL,
    (PrototypeCreateF) &WindowsLookAndFeelBase::createEmpty,
    WindowsLookAndFeel::initMethod,
    NULL,
    0);

//OSG_FIELD_CONTAINER_DEF(WindowsLookAndFeelBase, WindowsLookAndFeelPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &WindowsLookAndFeelBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &WindowsLookAndFeelBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr WindowsLookAndFeelBase::shallowCopy(void) const 
{ 
    WindowsLookAndFeelPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const WindowsLookAndFeel *>(this)); 

    return returnValue; 
}

UInt32 WindowsLookAndFeelBase::getContainerSize(void) const 
{ 
    return sizeof(WindowsLookAndFeel); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void WindowsLookAndFeelBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((WindowsLookAndFeelBase *) &other, whichField);
}
#else
void WindowsLookAndFeelBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((WindowsLookAndFeelBase *) &other, whichField, sInfo);
}
void WindowsLookAndFeelBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void WindowsLookAndFeelBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

WindowsLookAndFeelBase::WindowsLookAndFeelBase(void) :
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

WindowsLookAndFeelBase::WindowsLookAndFeelBase(const WindowsLookAndFeelBase &source) :
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

WindowsLookAndFeelBase::~WindowsLookAndFeelBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 WindowsLookAndFeelBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void WindowsLookAndFeelBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);


}

void WindowsLookAndFeelBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void WindowsLookAndFeelBase::executeSyncImpl(      WindowsLookAndFeelBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);


}
#else
void WindowsLookAndFeelBase::executeSyncImpl(      WindowsLookAndFeelBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);



}

void WindowsLookAndFeelBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<WindowsLookAndFeelPtr>::_type("WindowsLookAndFeelPtr", "LookAndFeelPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(WindowsLookAndFeelPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(WindowsLookAndFeelPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.47 2006/03/17 17:03:19 pdaehne Exp $";
    static Char8 cvsid_hpp       [] = OSGWINDOWSLOOKANDFEELBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGWINDOWSLOOKANDFEELBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGWINDOWSLOOKANDFEELFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
