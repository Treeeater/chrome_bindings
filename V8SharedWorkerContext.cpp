/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
    Boston, MA 02111-1307, USA.
*/

#include "config.h"
#include "V8SharedWorkerContext.h"

#if ENABLE(SHARED_WORKERS)

#include "EventListener.h"
#include "RuntimeEnabledFeatures.h"
#include "V8AbstractEventListener.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8WorkerContext.h"

namespace WebCore {

WrapperTypeInfo V8SharedWorkerContext::info = { V8SharedWorkerContext::GetTemplate, V8SharedWorkerContext::derefObject, 0 };

namespace SharedWorkerContextInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> nameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SharedWorkerContext.name._get");
    SharedWorkerContext* imp = V8SharedWorkerContext::toNative(info.Holder());
    return v8String(imp->name());
}

static v8::Handle<v8::Value> onconnectAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SharedWorkerContext.onconnect._get");
    SharedWorkerContext* imp = V8SharedWorkerContext::toNative(info.Holder());
    return imp->onconnect() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onconnect())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void onconnectAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SharedWorkerContext.onconnect._set");
    SharedWorkerContext* imp = V8SharedWorkerContext::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onconnect(), value, V8SharedWorkerContext::eventListenerCacheIndex);
    imp->setOnconnect(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

} // namespace SharedWorkerContextInternal

static const BatchedAttribute SharedWorkerContextAttrs[] = {
    // Attribute 'name' (Type: 'readonly attribute' ExtAttr: '')
    {"name", SharedWorkerContextInternal::nameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onconnect' (Type: 'attribute' ExtAttr: '')
    {"onconnect", SharedWorkerContextInternal::onconnectAttrGetter, SharedWorkerContextInternal::onconnectAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8SharedWorkerContextTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SharedWorkerContext", V8WorkerContext::GetTemplate(), V8SharedWorkerContext::internalFieldCount,
        SharedWorkerContextAttrs, sizeof(SharedWorkerContextAttrs) / sizeof(*SharedWorkerContextAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SharedWorkerContext::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SharedWorkerContextRawCache = createRawTemplate();
    return V8SharedWorkerContextRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8SharedWorkerContext::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SharedWorkerContextCache = ConfigureV8SharedWorkerContextTemplate(GetRawTemplate());
    return V8SharedWorkerContextCache;
}

SharedWorkerContext* V8SharedWorkerContext::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<SharedWorkerContext*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8SharedWorkerContext::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SharedWorkerContext::wrap(SharedWorkerContext* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
        wrapper = getDOMObjectMap().get(impl);
        if (!wrapper.IsEmpty())
            return wrapper;
    wrapper = V8DOMWrapper::instantiateV8Object(proxy, &info, impl);
    if (wrapper.IsEmpty())
        return wrapper;

    impl->ref();
    getDOMObjectMap().set(impl, v8::Persistent<v8::Object>::New(wrapper));
    return wrapper;
}

v8::Handle<v8::Value> toV8(PassRefPtr<SharedWorkerContext > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(SharedWorkerContext* impl)
{
    if (!impl)
        return v8::Null();
    return V8SharedWorkerContext::wrap(impl);
}

void V8SharedWorkerContext::derefObject(void* object)
{
    static_cast<SharedWorkerContext*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SHARED_WORKERS)
