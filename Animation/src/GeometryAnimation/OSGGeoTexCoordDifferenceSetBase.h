/*---------------------------------------------------------------------------*\
 *                       OpenSG ToolBox Animation                            *
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
 **     class GeoTexCoordDifferenceSet
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGGEOTEXCOORDDIFFERENCESETBASE_H_
#define _OSGGEOTEXCOORDDIFFERENCESETBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGAnimationDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGGeoDifferenceSet.h" // Parent

#include <OpenSG/OSGGeoTexCoordsFields.h> // TexCoords type
#include <OpenSG/OSGGeoIndicesFields.h> // Indices type
#include <OpenSG/OSGBoolFields.h> // TreatAsNormals type

#include "OSGGeoTexCoordDifferenceSetFields.h"

OSG_BEGIN_NAMESPACE

class GeoTexCoordDifferenceSet;
class BinaryDataHandler;

//! \brief GeoTexCoordDifferenceSet Base Class.

class OSG_ANIMATIONLIB_DLLMAPPING GeoTexCoordDifferenceSetBase : public GeoDifferenceSet
{
  private:

    typedef GeoDifferenceSet    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef GeoTexCoordDifferenceSetPtr  Ptr;

    enum
    {
        TexCoordsFieldId      = Inherited::NextFieldId,
        IndicesFieldId        = TexCoordsFieldId      + 1,
        TreatAsNormalsFieldId = IndicesFieldId        + 1,
        NextFieldId           = TreatAsNormalsFieldId + 1
    };

    static const OSG::BitVector TexCoordsFieldMask;
    static const OSG::BitVector IndicesFieldMask;
    static const OSG::BitVector TreatAsNormalsFieldMask;


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

           SFGeoTexCoordsPtr   *getSFTexCoords      (void);
           SFGeoIndicesPtr     *getSFIndices        (void);
           SFBool              *getSFTreatAsNormals (void);

           GeoTexCoordsPtr     &getTexCoords      (void);
     const GeoTexCoordsPtr     &getTexCoords      (void) const;
           GeoIndicesPtr       &getIndices        (void);
     const GeoIndicesPtr       &getIndices        (void) const;
           bool                &getTreatAsNormals (void);
     const bool                &getTreatAsNormals (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setTexCoords      ( const GeoTexCoordsPtr &value );
     void setIndices        ( const GeoIndicesPtr &value );
     void setTreatAsNormals ( const bool &value );

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

    static  GeoTexCoordDifferenceSetPtr      create          (void); 
    static  GeoTexCoordDifferenceSetPtr      createEmpty     (void); 

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

    SFGeoTexCoordsPtr   _sfTexCoords;
    SFGeoIndicesPtr     _sfIndices;
    SFBool              _sfTreatAsNormals;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    GeoTexCoordDifferenceSetBase(void);
    GeoTexCoordDifferenceSetBase(const GeoTexCoordDifferenceSetBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~GeoTexCoordDifferenceSetBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      GeoTexCoordDifferenceSetBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      GeoTexCoordDifferenceSetBase *pOther,
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
    void operator =(const GeoTexCoordDifferenceSetBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef GeoTexCoordDifferenceSetBase *GeoTexCoordDifferenceSetBaseP;

typedef osgIF<GeoTexCoordDifferenceSetBase::isNodeCore,
              CoredNodePtr<GeoTexCoordDifferenceSet>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet GeoTexCoordDifferenceSetNodePtr;

typedef RefPtr<GeoTexCoordDifferenceSetPtr> GeoTexCoordDifferenceSetRefPtr;

OSG_END_NAMESPACE

#define OSGGEOTEXCOORDDIFFERENCESETBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGGEOTEXCOORDDIFFERENCESETBASE_H_ */
