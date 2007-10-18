#ifndef _OSG_INTRUSIVE_PTR_IMPL_BASE_H_
#define _OSG_INTRUSIVE_PTR_IMPL_BASE_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include <boost/detail/atomic_count.hpp>
#include <boost/intrusive_ptr.hpp>

OSG_BEGIN_NAMESPACE

class IntrusivePtrImplBase;

OSG_END_NAMESPACE

namespace boost{
void intrusive_ptr_add_ref(osg::IntrusivePtrImplBase * p);
void intrusive_ptr_release(osg::IntrusivePtrImplBase * p);
}

OSG_BEGIN_NAMESPACE

class IntrusivePtrImplBase
{
    protected:
        boost::detail::atomic_count _ReferenceCount;

        IntrusivePtrImplBase(void);

        friend void ::boost::intrusive_ptr_add_ref(IntrusivePtrImplBase * p);
        friend void ::boost::intrusive_ptr_release(IntrusivePtrImplBase * p);
};

OSG_END_NAMESPACE

#include "OSGIntrusivePtrImplBase.inl"
#endif /* _OSG_INTRUSIVE_PTR_IMPL_BASE_H_ */
