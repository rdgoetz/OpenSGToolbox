/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Toolbox                             *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class Phong2Material
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPHONG2MATERIALBASE_H_
#define _OSGPHONG2MATERIALBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGToolboxDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGLambertMaterial.h" // Parent

#include <OpenSG/OSGReal32Fields.h> // SpecularCosinePower type
#include <OpenSG/OSGTextureChunkFields.h> // SpecularCosinePowerTexture type
#include <OpenSG/OSGColor3fFields.h> // SpecularColor type
#include <OpenSG/OSGTextureChunkFields.h> // SpecularColorTexture type

#include "OSGPhong2MaterialFields.h"

OSG_BEGIN_NAMESPACE

class Phong2Material;
class BinaryDataHandler;

//! \brief Phong2Material Base Class.

class OSG_TOOLBOXLIB_DLLMAPPING Phong2MaterialBase : public LambertMaterial
{
  private:

    typedef LambertMaterial    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef Phong2MaterialPtr  Ptr;

    enum
    {
        SpecularCosinePowerFieldId        = Inherited::NextFieldId,
        SpecularCosinePowerTextureFieldId = SpecularCosinePowerFieldId        + 1,
        SpecularColorFieldId              = SpecularCosinePowerTextureFieldId + 1,
        SpecularColorTextureFieldId       = SpecularColorFieldId              + 1,
        NextFieldId                       = SpecularColorTextureFieldId       + 1
    };

    static const OSG::BitVector SpecularCosinePowerFieldMask;
    static const OSG::BitVector SpecularCosinePowerTextureFieldMask;
    static const OSG::BitVector SpecularColorFieldMask;
    static const OSG::BitVector SpecularColorTextureFieldMask;


    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType  (void); 
    virtual const FieldContainerType &getType  (void) const; 

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


           SFReal32            *editSFSpecularCosinePower(void);
     const SFReal32            *getSFSpecularCosinePower(void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFSpecularCosinePower(void);
#endif

           SFTextureChunkPtr   *editSFSpecularCosinePowerTexture(void);
     const SFTextureChunkPtr   *getSFSpecularCosinePowerTexture(void) const;
#ifndef OSG_2_PREP
           SFTextureChunkPtr   *getSFSpecularCosinePowerTexture(void);
#endif

           SFColor3f           *editSFSpecularColor  (void);
     const SFColor3f           *getSFSpecularColor  (void) const;
#ifndef OSG_2_PREP
           SFColor3f           *getSFSpecularColor  (void);
#endif

           SFTextureChunkPtr   *editSFSpecularColorTexture(void);
     const SFTextureChunkPtr   *getSFSpecularColorTexture(void) const;
#ifndef OSG_2_PREP
           SFTextureChunkPtr   *getSFSpecularColorTexture(void);
#endif


           Real32              &editSpecularCosinePower(void);
     const Real32              &getSpecularCosinePower(void) const;
#ifndef OSG_2_PREP
           Real32              &getSpecularCosinePower(void);
#endif

           TextureChunkPtr     &editSpecularCosinePowerTexture(void);
     const TextureChunkPtr     &getSpecularCosinePowerTexture(void) const;
#ifndef OSG_2_PREP
           TextureChunkPtr     &getSpecularCosinePowerTexture(void);
#endif

           Color3f             &editSpecularColor  (void);
     const Color3f             &getSpecularColor  (void) const;
#ifndef OSG_2_PREP
           Color3f             &getSpecularColor  (void);
#endif

           TextureChunkPtr     &editSpecularColorTexture(void);
     const TextureChunkPtr     &getSpecularColorTexture(void) const;
#ifndef OSG_2_PREP
           TextureChunkPtr     &getSpecularColorTexture(void);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setSpecularCosinePower( const Real32 &value );
     void setSpecularCosinePowerTexture( const TextureChunkPtr &value );
     void setSpecularColor  ( const Color3f &value );
     void setSpecularColorTexture( const TextureChunkPtr &value );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (const BitVector         &whichField);
    virtual void   copyToBin  (      BinaryDataHandler &pMem,
                               const BitVector         &whichField);
    virtual void   copyFromBin(      BinaryDataHandler &pMem,
                               const BitVector         &whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  Phong2MaterialPtr      create          (void); 
    static  Phong2MaterialPtr      createEmpty     (void); 

    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr     shallowCopy     (void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFReal32            _sfSpecularCosinePower;
    SFTextureChunkPtr   _sfSpecularCosinePowerTexture;
    SFColor3f           _sfSpecularColor;
    SFTextureChunkPtr   _sfSpecularColorTexture;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    Phong2MaterialBase(void);
    Phong2MaterialBase(const Phong2MaterialBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~Phong2MaterialBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      Phong2MaterialBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      Phong2MaterialBase *pOther,
                         const BitVector         &whichField,
                         const SyncInfo          &sInfo     );

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField,
                               const SyncInfo          &sInfo);

    virtual void execBeginEdit     (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

            void execBeginEditImpl (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

    virtual void onDestroyAspect(UInt32 uiId, UInt32 uiAspect);
#endif

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const Phong2MaterialBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef Phong2MaterialBase *Phong2MaterialBaseP;

typedef osgIF<Phong2MaterialBase::isNodeCore,
              CoredNodePtr<Phong2Material>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet Phong2MaterialNodePtr;

typedef RefPtr<Phong2MaterialPtr> Phong2MaterialRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGPHONG2MATERIALBASE_H_ */