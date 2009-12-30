/*---------------------------------------------------------------------------*\
 *                         OpenSG ToolBox Physics                            *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                          www.vrac.iastate.edu                             *
 *                                                                           *
 *                Authors: Behboud Kalantary, David Kabala                   *
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
 **     class PhysicsHingeJoint
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPHYSICSHINGEJOINTBASE_H_
#define _OSGPHYSICSHINGEJOINTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGPhysicsDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGPhysicsJoint.h" // Parent

#include <OpenSG/OSGVec3fFields.h> // Anchor type
#include <OpenSG/OSGVec3fFields.h> // Axis type
#include <OpenSG/OSGReal32Fields.h> // HiStop type
#include <OpenSG/OSGReal32Fields.h> // LoStop type
#include <OpenSG/OSGReal32Fields.h> // Bounce type
#include <OpenSG/OSGReal32Fields.h> // CFM type
#include <OpenSG/OSGReal32Fields.h> // StopERP type
#include <OpenSG/OSGReal32Fields.h> // StopCFM type

#include "OSGPhysicsHingeJointFields.h"

OSG_BEGIN_NAMESPACE

class PhysicsHingeJoint;
class BinaryDataHandler;

//! \brief PhysicsHingeJoint Base Class.

class OSG_PHYSICSLIB_DLLMAPPING PhysicsHingeJointBase : public PhysicsJoint
{
  private:

    typedef PhysicsJoint    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef PhysicsHingeJointPtr  Ptr;

    enum
    {
        AnchorFieldId  = Inherited::NextFieldId,
        AxisFieldId    = AnchorFieldId  + 1,
        HiStopFieldId  = AxisFieldId    + 1,
        LoStopFieldId  = HiStopFieldId  + 1,
        BounceFieldId  = LoStopFieldId  + 1,
        CFMFieldId     = BounceFieldId  + 1,
        StopERPFieldId = CFMFieldId     + 1,
        StopCFMFieldId = StopERPFieldId + 1,
        NextFieldId    = StopCFMFieldId + 1
    };

    static const OSG::BitVector AnchorFieldMask;
    static const OSG::BitVector AxisFieldMask;
    static const OSG::BitVector HiStopFieldMask;
    static const OSG::BitVector LoStopFieldMask;
    static const OSG::BitVector BounceFieldMask;
    static const OSG::BitVector CFMFieldMask;
    static const OSG::BitVector StopERPFieldMask;
    static const OSG::BitVector StopCFMFieldMask;


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

           SFVec3f             *getSFAnchor         (void);
           SFVec3f             *getSFAxis           (void);
           SFReal32            *getSFHiStop         (void);
           SFReal32            *getSFLoStop         (void);
           SFReal32            *getSFBounce         (void);
           SFReal32            *getSFCFM            (void);
           SFReal32            *getSFStopERP        (void);
           SFReal32            *getSFStopCFM        (void);

           Vec3f               &getAnchor         (void);
     const Vec3f               &getAnchor         (void) const;
           Vec3f               &getAxis           (void);
     const Vec3f               &getAxis           (void) const;
           Real32              &getHiStop         (void);
     const Real32              &getHiStop         (void) const;
           Real32              &getLoStop         (void);
     const Real32              &getLoStop         (void) const;
           Real32              &getBounce         (void);
     const Real32              &getBounce         (void) const;
           Real32              &getCFM            (void);
     const Real32              &getCFM            (void) const;
           Real32              &getStopERP        (void);
     const Real32              &getStopERP        (void) const;
           Real32              &getStopCFM        (void);
     const Real32              &getStopCFM        (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setAnchor         ( const Vec3f &value );
     void setAxis           ( const Vec3f &value );
     void setHiStop         ( const Real32 &value );
     void setLoStop         ( const Real32 &value );
     void setBounce         ( const Real32 &value );
     void setCFM            ( const Real32 &value );
     void setStopERP        ( const Real32 &value );
     void setStopCFM        ( const Real32 &value );

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

    static  PhysicsHingeJointPtr      createEmpty     (void); 

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

    SFVec3f             _sfAnchor;
    SFVec3f             _sfAxis;
    SFReal32            _sfHiStop;
    SFReal32            _sfLoStop;
    SFReal32            _sfBounce;
    SFReal32            _sfCFM;
    SFReal32            _sfStopERP;
    SFReal32            _sfStopCFM;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    PhysicsHingeJointBase(void);
    PhysicsHingeJointBase(const PhysicsHingeJointBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~PhysicsHingeJointBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      PhysicsHingeJointBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      PhysicsHingeJointBase *pOther,
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
    void operator =(const PhysicsHingeJointBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef PhysicsHingeJointBase *PhysicsHingeJointBaseP;

typedef osgIF<PhysicsHingeJointBase::isNodeCore,
              CoredNodePtr<PhysicsHingeJoint>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet PhysicsHingeJointNodePtr;

typedef RefPtr<PhysicsHingeJointPtr> PhysicsHingeJointRefPtr;

OSG_END_NAMESPACE

#define OSGPHYSICSHINGEJOINTBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGPHYSICSHINGEJOINTBASE_H_ */