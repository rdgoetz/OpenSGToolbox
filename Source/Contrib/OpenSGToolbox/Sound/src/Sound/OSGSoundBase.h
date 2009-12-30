/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
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
 **     class Sound
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSOUNDBASE_H_
#define _OSGSOUNDBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGSoundDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include <OpenSG/OSGAttachmentContainer.h> // Parent

#include <OpenSG/OSGPnt3fFields.h> // Position type
#include <OpenSG/OSGVec3fFields.h> // Velocity type
#include <OpenSG/OSGReal32Fields.h> // Volume type
#include <OpenSG/OSGReal32Fields.h> // Pan type
#include <OpenSG/OSGReal32Fields.h> // Frequency type
#include <OpenSG/OSGInt32Fields.h> // Looping type
#include <OpenSG/OSGBoolFields.h> // Streaming type
#include <OpenSG/Toolbox/OSGPathType.h> // File type
#include <OpenSG/OSGBoolFields.h> // Enable3D type

#include "OSGSoundFields.h"
#include <OpenSG/Toolbox/OSGEventProducer.h>
#include <OpenSG/Toolbox/OSGEventProducerType.h>
#include <OpenSG/Toolbox/OSGMethodDescription.h>
#include <OpenSG/Toolbox/OSGEventProducerPtrType.h>

OSG_BEGIN_NAMESPACE

class Sound;
class BinaryDataHandler;

//! \brief Sound Base Class.

class OSG_SOUNDLIB_DLLMAPPING SoundBase : public AttachmentContainer
{
  private:

    typedef AttachmentContainer    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef SoundPtr  Ptr;

    enum
    {
        PositionFieldId      = Inherited::NextFieldId,
        VelocityFieldId      = PositionFieldId      + 1,
        VolumeFieldId        = VelocityFieldId      + 1,
        PanFieldId           = VolumeFieldId        + 1,
        FrequencyFieldId     = PanFieldId           + 1,
        LoopingFieldId       = FrequencyFieldId     + 1,
        StreamingFieldId     = LoopingFieldId       + 1,
        FileFieldId          = StreamingFieldId     + 1,
        Enable3DFieldId      = FileFieldId          + 1,
        EventProducerFieldId = Enable3DFieldId      + 1,
        NextFieldId          = EventProducerFieldId + 1
    };

    static const OSG::BitVector PositionFieldMask;
    static const OSG::BitVector VelocityFieldMask;
    static const OSG::BitVector VolumeFieldMask;
    static const OSG::BitVector PanFieldMask;
    static const OSG::BitVector FrequencyFieldMask;
    static const OSG::BitVector LoopingFieldMask;
    static const OSG::BitVector StreamingFieldMask;
    static const OSG::BitVector FileFieldMask;
    static const OSG::BitVector Enable3DFieldMask;
    static const OSG::BitVector EventProducerFieldMask;


    enum
    {
        SoundPlayedMethodId   = 1,
        SoundStoppedMethodId  = SoundPlayedMethodId   + 1,
        SoundPausedMethodId   = SoundStoppedMethodId  + 1,
        SoundUnpausedMethodId = SoundPausedMethodId   + 1,
        SoundLoopedMethodId   = SoundUnpausedMethodId + 1,
        SoundEndedMethodId    = SoundLoopedMethodId   + 1,
        NextMethodId          = SoundEndedMethodId    + 1
    };



    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 
    static const  EventProducerType  &getProducerClassType  (void); 
    static        UInt32              getProducerClassTypeId(void); 

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


           SFPnt3f             *editSFPosition       (void);
     const SFPnt3f             *getSFPosition       (void) const;

           SFVec3f             *editSFVelocity       (void);
     const SFVec3f             *getSFVelocity       (void) const;

           SFReal32            *editSFVolume         (void);
     const SFReal32            *getSFVolume         (void) const;

           SFReal32            *editSFPan            (void);
     const SFReal32            *getSFPan            (void) const;

           SFReal32            *editSFFrequency      (void);
     const SFReal32            *getSFFrequency      (void) const;

           SFInt32             *editSFLooping        (void);
     const SFInt32             *getSFLooping        (void) const;

           SFBool              *editSFStreaming      (void);
     const SFBool              *getSFStreaming      (void) const;

           SFPath              *editSFFile           (void);
     const SFPath              *getSFFile           (void) const;

           SFBool              *editSFEnable3D       (void);
     const SFBool              *getSFEnable3D       (void) const;


           Pnt3f               &editPosition       (void);
     const Pnt3f               &getPosition       (void) const;

           Vec3f               &editVelocity       (void);
     const Vec3f               &getVelocity       (void) const;

           Real32              &editVolume         (void);
     const Real32              &getVolume         (void) const;

           Real32              &editPan            (void);
     const Real32              &getPan            (void) const;

           Real32              &editFrequency      (void);
     const Real32              &getFrequency      (void) const;

           Int32               &editLooping        (void);
     const Int32               &getLooping        (void) const;

           bool                &editStreaming      (void);
     const bool                &getStreaming      (void) const;

           Path                &editFile           (void);
     const Path                &getFile           (void) const;

           bool                &editEnable3D       (void);
     const bool                &getEnable3D       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setPosition       ( const Pnt3f &value );
     void setVelocity       ( const Vec3f &value );
     void setVolume         ( const Real32 &value );
     void setPan            ( const Real32 &value );
     void setFrequency      ( const Real32 &value );
     void setLooping        ( const Int32 &value );
     void setStreaming      ( const bool &value );
     void setFile           ( const Path &value );
     void setEnable3D       ( const bool &value );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Method Produced Get                           */
    /*! \{                                                                 */

    virtual const EventProducerType &getProducerType(void) const; 
    EventConnection attachActivity(ActivityPtr TheActivity, UInt32 ProducedEventId);
    bool isActivityAttached(ActivityPtr TheActivity, UInt32 ProducedEventId) const;
    UInt32 getNumActivitiesAttached(UInt32 ProducedEventId) const;
    ActivityPtr getAttachedActivity(UInt32 ProducedEventId, UInt32 ActivityIndex) const;
    void detachActivity(ActivityPtr TheActivity, UInt32 ProducedEventId);
    UInt32 getNumProducedEvents(void) const;
    const MethodDescription *getProducedEventDescription(const Char8 *ProducedEventName) const;
    const MethodDescription *getProducedEventDescription(UInt32 ProducedEventId) const;
    UInt32 getProducedEventId(const Char8 *ProducedEventName) const;

    SFEventProducerPtr *editSFEventProducer(void);
    EventProducerPtr &editEventProducer(void);

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
    /*=========================  PROTECTED  ===============================*/
  protected:
    EventProducer _Producer;


    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFPnt3f             _sfPosition;
    SFVec3f             _sfVelocity;
    SFReal32            _sfVolume;
    SFReal32            _sfPan;
    SFReal32            _sfFrequency;
    SFInt32             _sfLooping;
    SFBool              _sfStreaming;
    SFPath              _sfFile;
    SFBool              _sfEnable3D;

    /*! \}                                                                 */
    SFEventProducerPtr _sfEventProducer;
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SoundBase(void);
    SoundBase(const SoundBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SoundBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      SoundBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      SoundBase *pOther,
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

    static MethodDescription   *_methodDesc[];
    static EventProducerType _producerType;

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const SoundBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef SoundBase *SoundBaseP;

typedef osgIF<SoundBase::isNodeCore,
              CoredNodePtr<Sound>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet SoundNodePtr;

typedef RefPtr<SoundPtr> SoundRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGSOUNDBASE_H_ */