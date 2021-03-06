/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Game                                *
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

#ifndef _OSGDIRECTIONALINDICATORMINIMAPOVERLAY_H_
#define _OSGDIRECTIONALINDICATORMINIMAPOVERLAY_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGGameDef.h"

#include "OSGDirectionalIndicatorMiniMapOverlayBase.h"

OSG_BEGIN_NAMESPACE

/*! \brief DirectionalIndicatorMiniMapOverlay class. See \ref 
           PageGameDirectionalIndicatorMiniMapOverlay for a description.
*/

class OSG_GAMELIB_DLLMAPPING DirectionalIndicatorMiniMapOverlay : public DirectionalIndicatorMiniMapOverlayBase
{
  private:

    typedef DirectionalIndicatorMiniMapOverlayBase Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(BitVector  whichField, 
                         UInt32     origin    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0, 
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */
    virtual void update(MiniMapPtr TheMiniMap, PanelPtr OverlayPanel, const Vec2f& TopLeft, const Vec3f& BottomRight);
    virtual PanelPtr getPanel(void) const;
    /*=========================  PROTECTED  ===============================*/
  protected:

    // Variables should all be in DirectionalIndicatorMiniMapOverlayBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    DirectionalIndicatorMiniMapOverlay(void);
    DirectionalIndicatorMiniMapOverlay(const DirectionalIndicatorMiniMapOverlay &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DirectionalIndicatorMiniMapOverlay(void); 

    /*! \}                                                                 */
    
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;
    friend class DirectionalIndicatorMiniMapOverlayBase;

    static void initMethod(void);

    // prohibit default functions (move to 'public' if you need one)

    void operator =(const DirectionalIndicatorMiniMapOverlay &source);
};

typedef DirectionalIndicatorMiniMapOverlay *DirectionalIndicatorMiniMapOverlayP;

OSG_END_NAMESPACE

#include "OSGDirectionalIndicatorMiniMapOverlayBase.inl"
#include "OSGDirectionalIndicatorMiniMapOverlay.inl"

#define OSGDIRECTIONALINDICATORMINIMAPOVERLAY_HEADER_CVSID "@(#)$Id: FCTemplate_h.h,v 1.23 2005/03/05 11:27:26 dirk Exp $"

#endif /* _OSGDIRECTIONALINDICATORMINIMAPOVERLAY_H_ */
