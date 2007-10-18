#include <OpenSG/OSGConfig.h>


namespace boost
{

inline
void intrusive_ptr_add_ref(osg::IntrusivePtrImplBase * p)
{
    ++(p->_ReferenceCount);
}

inline
void intrusive_ptr_release(osg::IntrusivePtrImplBase * p)
{
    if( --(p->_ReferenceCount) == 0 )
    {
        delete p;
    }
}

}

OSG_BEGIN_NAMESPACE

inline
IntrusivePtrImplBase::IntrusivePtrImplBase(void) : _ReferenceCount(0)
{
}

OSG_END_NAMESPACE
