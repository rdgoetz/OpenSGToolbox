/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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

#ifndef _OSGBORDERLAYOUT_H_
#define _OSGBORDERLAYOUT_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include "OSGBorderLayoutBase.h"
#include "OSGBorderLayoutConstraints.h"

OSG_BEGIN_NAMESPACE

class OSG_USERINTERFACELIB_DLLMAPPING BorderLayout : public BorderLayoutBase
{
  private:

    typedef BorderLayoutBase Inherited;

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
	
    virtual void updateLayout(const MFComponentPtr Components,const ComponentPtr ParentComponent) const;
    virtual Vec2f minimumContentsLayoutSize(const MFComponentPtr Components,const ComponentPtr ParentComponent) const;
	virtual Vec2f requestedContentsLayoutSize(const MFComponentPtr Components,const ComponentPtr ParentComponent) const;
	virtual Vec2f preferredContentsLayoutSize(const MFComponentPtr Components,const ComponentPtr ParentComponent) const;
	virtual Vec2f maximumContentsLayoutSize(const MFComponentPtr Components,const ComponentPtr ParentComponent) const;
    /*=========================  PROTECTED  ===============================*/
  protected:

    // Variables should all be in BorderLayoutBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    BorderLayout(void);
    BorderLayout(const BorderLayout &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BorderLayout(void); 

    /*! \}                                                                 */
    virtual Vec2f layoutSize(const MFComponentPtr Components,const ComponentPtr ParentComponent, SizeType TheSizeType) const;
    
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;
    friend class BorderLayoutBase;

    static void initMethod(void);

    // prohibit default functions (move to 'public' if you need one)

    void operator =(const BorderLayout &source);
};

typedef BorderLayout *BorderLayoutP;

OSG_END_NAMESPACE

#include "OSGBorderLayoutBase.inl"
#include "OSGBorderLayout.inl"

#define OSGBORDERLAYOUT_HEADER_CVSID "@(#)$Id: FCTemplate_h.h,v 1.23 2005/03/05 11:27:26 dirk Exp $"

#endif /* _OSGBORDERLAYOUT_H_ */