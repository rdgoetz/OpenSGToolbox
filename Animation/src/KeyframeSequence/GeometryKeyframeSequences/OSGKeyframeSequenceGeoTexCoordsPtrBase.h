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
 **     class KeyframeSequenceGeoTexCoordsPtr
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGKEYFRAMESEQUENCEGEOTEXCOORDSPTRBASE_H_
#define _OSGKEYFRAMESEQUENCEGEOTEXCOORDSPTRBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGAnimationDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "KeyframeSequence/OSGKeyframeSequence.h" // Parent

#include <OpenSG/OSGGeoTexCoordsFields.h> // BaseValues type
#include "GeometryAnimation/OSGGeoTexCoordDifferenceSet.h" // KeyframeDifferenceSets type

#include "OSGKeyframeSequenceGeoTexCoordsPtrFields.h"

OSG_BEGIN_NAMESPACE

class KeyframeSequenceGeoTexCoordsPtr;
class BinaryDataHandler;

//! \brief KeyframeSequenceGeoTexCoordsPtr Base Class.

class OSG_ANIMATIONLIB_DLLMAPPING KeyframeSequenceGeoTexCoordsPtrBase : public KeyframeSequence
{
  private:

    typedef KeyframeSequence    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef KeyframeSequenceGeoTexCoordsPtrPtr  Ptr;

    enum
    {
        BaseValuesFieldId             = Inherited::NextFieldId,
        KeyframeDifferenceSetsFieldId = BaseValuesFieldId             + 1,
        NextFieldId                   = KeyframeDifferenceSetsFieldId + 1
    };

    static const OSG::BitVector BaseValuesFieldMask;
    static const OSG::BitVector KeyframeDifferenceSetsFieldMask;


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

           SFGeoTexCoordsPtr   *getSFBaseValues     (void);
           MFGeoTexCoordDifferenceSetPtr *getMFKeyframeDifferenceSets(void);

           GeoTexCoordsPtr     &getBaseValues     (void);
     const GeoTexCoordsPtr     &getBaseValues     (void) const;
           GeoTexCoordDifferenceSetPtr &getKeyframeDifferenceSets(const UInt32 index);
           MFGeoTexCoordDifferenceSetPtr &getKeyframeDifferenceSets(void);
     const MFGeoTexCoordDifferenceSetPtr &getKeyframeDifferenceSets(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setBaseValues     ( const GeoTexCoordsPtr &value );

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

    static  KeyframeSequenceGeoTexCoordsPtrPtr      create          (void); 
    static  KeyframeSequenceGeoTexCoordsPtrPtr      createEmpty     (void); 

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

    SFGeoTexCoordsPtr   _sfBaseValues;
    MFGeoTexCoordDifferenceSetPtr   _mfKeyframeDifferenceSets;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    KeyframeSequenceGeoTexCoordsPtrBase(void);
    KeyframeSequenceGeoTexCoordsPtrBase(const KeyframeSequenceGeoTexCoordsPtrBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~KeyframeSequenceGeoTexCoordsPtrBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      KeyframeSequenceGeoTexCoordsPtrBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      KeyframeSequenceGeoTexCoordsPtrBase *pOther,
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
    void operator =(const KeyframeSequenceGeoTexCoordsPtrBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef KeyframeSequenceGeoTexCoordsPtrBase *KeyframeSequenceGeoTexCoordsPtrBaseP;

typedef osgIF<KeyframeSequenceGeoTexCoordsPtrBase::isNodeCore,
              CoredNodePtr<KeyframeSequenceGeoTexCoordsPtr>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet KeyframeSequenceGeoTexCoordsPtrNodePtr;

typedef RefPtr<KeyframeSequenceGeoTexCoordsPtrPtr> KeyframeSequenceGeoTexCoordsPtrRefPtr;

OSG_END_NAMESPACE

#define OSGKEYFRAMESEQUENCEGEOTEXCOORDSPTRBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGKEYFRAMESEQUENCEGEOTEXCOORDSPTRBASE_H_ */
