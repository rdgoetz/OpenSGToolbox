/*---------------------------------------------------------------------------*\
 *                            OpenSGToolbox                                  *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *   contact: dkabala@vrac.iastate.edu                                       *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 3.                               *
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

#ifndef _OSGKEYLISTENER_H_
#define _OSGKEYLISTENER_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGInputDef.h"

#include "OSGEventListener.h"
#include "OSGKeyEvent.h"

OSG_BEGIN_NAMESPACE

class OSG_INPUTLIB_DLLMAPPING KeyListener : public EventListener
{
   /*=========================  PUBLIC  ===============================*/
public:

   virtual void keyPressed(const KeyEvent& e) = 0;
   virtual void keyReleased(const KeyEvent& e) = 0;
   virtual void keyTyped(const KeyEvent& e) = 0;
};

typedef KeyListener* KeyListenerPtr;

OSG_END_NAMESPACE

#endif /* _OSGKEYLISTENER_H_ */
