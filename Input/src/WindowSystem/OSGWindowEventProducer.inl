//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE

inline
WindowEventProducer::FileDialogFilter::FileDialogFilter(const std::string& Name, const std::string& Filter) : 
_Name(Name),
_Filter(Filter)
{
}

inline
const std::string& WindowEventProducer::FileDialogFilter::getName(void) const
{
    return _Name;
}

inline
const std::string& WindowEventProducer::FileDialogFilter::getFilter(void) const
{
    return _Filter;
}

inline
RenderAction * WindowEventProducer::getRenderAction(void)
{
	return _RenderAction;
}

inline
void WindowEventProducer::setRenderAction(RenderAction *action)
{
	_RenderAction = action;
}

inline
void WindowEventProducer::internalDraw(void)
{
	if(getUseCallbackForDraw())
	{
		_DisplayCallbackFunc();
	}
	else
	{
		getWindow()->render(_RenderAction);
	}
}

inline
void WindowEventProducer::internalReshape(Vec2f size)
{
	if(getUseCallbackForReshape())
	{
		_ReshapeCallbackFunc(size);
	}
	else
	{
		getWindow()->resize(size.x(), size.y());
	}
}

inline
void WindowEventProducer::draw(void)
{
}

inline
UInt32 WindowEventProducer::getCursorType(void) const
{
	return _CursorType;
}

inline
void WindowEventProducer::addUpdateListener(UpdateListenerPtr Listener)
{
   _UpdateListeners.insert(Listener);
}

inline
void WindowEventProducer::addMouseListener(MouseListenerPtr Listener)
{
   _MouseListeners.insert(Listener);
}

inline
void WindowEventProducer::addMouseMotionListener(MouseMotionListenerPtr Listener)
{
   _MouseMotionListeners.insert(Listener);
}

inline
void WindowEventProducer::addMouseWheelListener(MouseWheelListenerPtr Listener)
{
   _MouseWheelListeners.insert(Listener);
}

inline
void WindowEventProducer::addKeyListener(KeyListenerPtr Listener)
{
   _KeyListeners.insert(Listener);
}

inline
void WindowEventProducer::addWindowListener(WindowListenerPtr Listener)
{
   _WindowListeners.insert(Listener);
}

inline
void WindowEventProducer::removeMouseListener(MouseListenerPtr Listener)
{
   MouseListenerSetItor EraseIter(_MouseListeners.find(Listener));
   if(EraseIter != _MouseListeners.end())
   {
      _MouseListeners.erase(EraseIter);
   }
}

inline
void WindowEventProducer::removeUpdateListener(UpdateListenerPtr Listener)
{
   UpdateListenerSetItor EraseIter(_UpdateListeners.find(Listener));
   if(EraseIter != _UpdateListeners.end())
   {
      _UpdateListeners.erase(EraseIter);
   }
}

inline
void WindowEventProducer::removeMouseMotionListener(MouseMotionListenerPtr Listener)
{
   MouseMotionListenerSetItor EraseIter(_MouseMotionListeners.find(Listener));
   if(EraseIter != _MouseMotionListeners.end())
   {
      _MouseMotionListeners.erase(EraseIter);
   }
}

inline
void WindowEventProducer::removeMouseWheelListener(MouseWheelListenerPtr Listener)
{
   MouseWheelListenerSetItor EraseIter(_MouseWheelListeners.find(Listener));
   if(EraseIter != _MouseWheelListeners.end())
   {
      _MouseWheelListeners.erase(EraseIter);
   }
}

inline
void WindowEventProducer::removeKeyListener(KeyListenerPtr Listener)
{
   KeyListenerSetItor EraseIter(_KeyListeners.find(Listener));
   if(EraseIter != _KeyListeners.end())
   {
      _KeyListeners.erase(EraseIter);
   }
}

inline
void WindowEventProducer::removeWindowListener(WindowListenerPtr Listener)
{
   WindowListenerSetItor EraseIter(_WindowListeners.find(Listener));
   if(EraseIter != _WindowListeners.end())
   {
      _WindowListeners.erase(EraseIter);
   }
}

inline
WindowEventProducer::Click::Click(Time TimeStamp, Pnt2f Location) :
_TimeStamp(TimeStamp),
_Location(Location)
{
}

OSG_END_NAMESPACE
