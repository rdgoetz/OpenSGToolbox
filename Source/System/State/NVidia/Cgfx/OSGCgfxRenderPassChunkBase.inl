/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class CgfxRenderPassChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &CgfxRenderPassChunkBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 CgfxRenderPassChunkBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 CgfxRenderPassChunkBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the CgfxRenderPassChunk::_sfSemanticParameters field.

inline
UInt32 &CgfxRenderPassChunkBase::editSemanticParameters(void)
{
    editSField(SemanticParametersFieldMask);

    return _sfSemanticParameters.getValue();
}

//! Get the value of the CgfxRenderPassChunk::_sfSemanticParameters field.
inline
      UInt32  CgfxRenderPassChunkBase::getSemanticParameters(void) const
{
    return _sfSemanticParameters.getValue();
}

//! Set the value of the CgfxRenderPassChunk::_sfSemanticParameters field.
inline
void CgfxRenderPassChunkBase::setSemanticParameters(const UInt32 value)
{
    editSField(SemanticParametersFieldMask);

    _sfSemanticParameters.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void CgfxRenderPassChunkBase::execSync (      CgfxRenderPassChunkBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (SemanticParametersFieldMask & whichField))
        _sfSemanticParameters.syncWith(pFrom->_sfSemanticParameters);
}
#endif


inline
const Char8 *CgfxRenderPassChunkBase::getClassname(void)
{
    return "CgfxRenderPassChunk";
}
OSG_GEN_CONTAINERPTR(CgfxRenderPassChunk);

OSG_END_NAMESPACE

