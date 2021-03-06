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
#include "V8IDBTransaction.h"

#if ENABLE(INDEXED_DATABASE)

#include "EventListener.h"
#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8AbstractEventListener.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8Event.h"
#include "V8IDBDatabase.h"
#include "V8IDBObjectStore.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8IDBTransaction::info = { V8IDBTransaction::GetTemplate, V8IDBTransaction::derefObject, 0 };

namespace IDBTransactionInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> modeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBTransaction.mode._get");
    IDBTransaction* imp = V8IDBTransaction::toNative(info.Holder());
    return v8::Integer::New(imp->mode());
}

static v8::Handle<v8::Value> dbAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBTransaction.db._get");
    IDBTransaction* imp = V8IDBTransaction::toNative(info.Holder());
    RefPtr<IDBDatabase> result = imp->db();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setHiddenReference(info.Holder(), wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> onabortAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBTransaction.onabort._get");
    IDBTransaction* imp = V8IDBTransaction::toNative(info.Holder());
    return imp->onabort() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onabort())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void onabortAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBTransaction.onabort._set");
    IDBTransaction* imp = V8IDBTransaction::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onabort(), value, V8IDBTransaction::eventListenerCacheIndex);
    imp->setOnabort(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> oncompleteAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBTransaction.oncomplete._get");
    IDBTransaction* imp = V8IDBTransaction::toNative(info.Holder());
    return imp->oncomplete() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->oncomplete())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void oncompleteAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBTransaction.oncomplete._set");
    IDBTransaction* imp = V8IDBTransaction::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->oncomplete(), value, V8IDBTransaction::eventListenerCacheIndex);
    imp->setOncomplete(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> ontimeoutAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBTransaction.ontimeout._get");
    IDBTransaction* imp = V8IDBTransaction::toNative(info.Holder());
    return imp->ontimeout() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->ontimeout())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void ontimeoutAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBTransaction.ontimeout._set");
    IDBTransaction* imp = V8IDBTransaction::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->ontimeout(), value, V8IDBTransaction::eventListenerCacheIndex);
    imp->setOntimeout(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> objectStoreCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBTransaction.objectStore");
    IDBTransaction* imp = V8IDBTransaction::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, name, args[0]);
    RefPtr<IDBObjectStore> result = imp->objectStore(name, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> abortCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBTransaction.abort");
    IDBTransaction* imp = V8IDBTransaction::toNative(args.Holder());
    imp->abort();
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> addEventListenerCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBTransaction.addEventListener()");
    RefPtr<EventListener> listener = V8DOMWrapper::getEventListener(args[1], false, ListenerFindOrCreate);
    if (listener) {
        V8IDBTransaction::toNative(args.Holder())->addEventListener(v8ValueToAtomicWebCoreString(args[0]), listener, args[2]->BooleanValue());
        createHiddenDependency(args.Holder(), args[1], V8IDBTransaction::eventListenerCacheIndex);
    }
    return v8::Undefined();
}

static v8::Handle<v8::Value> removeEventListenerCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBTransaction.removeEventListener()");
    RefPtr<EventListener> listener = V8DOMWrapper::getEventListener(args[1], false, ListenerFindOnly);
    if (listener) {
        V8IDBTransaction::toNative(args.Holder())->removeEventListener(v8ValueToAtomicWebCoreString(args[0]), listener.get(), args[2]->BooleanValue());
        removeHiddenDependency(args.Holder(), args[1], V8IDBTransaction::eventListenerCacheIndex);
    }
    return v8::Undefined();
}

static v8::Handle<v8::Value> dispatchEventCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBTransaction.dispatchEvent");
    IDBTransaction* imp = V8IDBTransaction::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Event*, evt, V8Event::HasInstance(args[0]) ? V8Event::toNative(v8::Handle<v8::Object>::Cast(args[0])) : 0);
    bool result = imp->dispatchEvent(evt, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Boolean(result);
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

} // namespace IDBTransactionInternal

static const BatchedAttribute IDBTransactionAttrs[] = {
    // Attribute 'mode' (Type: 'readonly attribute' ExtAttr: '')
    {"mode", IDBTransactionInternal::modeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'db' (Type: 'readonly attribute' ExtAttr: '')
    {"db", IDBTransactionInternal::dbAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onabort' (Type: 'attribute' ExtAttr: '')
    {"onabort", IDBTransactionInternal::onabortAttrGetter, IDBTransactionInternal::onabortAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'oncomplete' (Type: 'attribute' ExtAttr: '')
    {"oncomplete", IDBTransactionInternal::oncompleteAttrGetter, IDBTransactionInternal::oncompleteAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'ontimeout' (Type: 'attribute' ExtAttr: '')
    {"ontimeout", IDBTransactionInternal::ontimeoutAttrGetter, IDBTransactionInternal::ontimeoutAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback IDBTransactionCallbacks[] = {
    {"objectStore", IDBTransactionInternal::objectStoreCallback},
    {"abort", IDBTransactionInternal::abortCallback},
    {"addEventListener", IDBTransactionInternal::addEventListenerCallback},
    {"removeEventListener", IDBTransactionInternal::removeEventListenerCallback},
};
static const BatchedConstant IDBTransactionConsts[] = {
    {"READ_WRITE", static_cast<signed int>(0)},
    {"READ_ONLY", static_cast<signed int>(1)},
    {"SNAPSHOT_READ", static_cast<signed int>(2)},
};

COMPILE_ASSERT(0 == IDBTransaction::READ_WRITE, IDBTransactionEnumREAD_WRITEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == IDBTransaction::READ_ONLY, IDBTransactionEnumREAD_ONLYIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == IDBTransaction::SNAPSHOT_READ, IDBTransactionEnumSNAPSHOT_READIsWrongUseDontCheckEnums);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8IDBTransactionTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "IDBTransaction", v8::Persistent<v8::FunctionTemplate>(), V8IDBTransaction::internalFieldCount,
        IDBTransactionAttrs, sizeof(IDBTransactionAttrs) / sizeof(*IDBTransactionAttrs),
        IDBTransactionCallbacks, sizeof(IDBTransactionCallbacks) / sizeof(*IDBTransactionCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom Signature 'dispatchEvent'
    const int dispatchEventArgc = 1;
    v8::Handle<v8::FunctionTemplate> dispatchEventArgv[dispatchEventArgc] = { V8Event::GetRawTemplate() };
    v8::Handle<v8::Signature> dispatchEventSignature = v8::Signature::New(desc, dispatchEventArgc, dispatchEventArgv);
    proto->Set(v8::String::New("dispatchEvent"), v8::FunctionTemplate::New(IDBTransactionInternal::dispatchEventCallback, v8::Handle<v8::Value>(), dispatchEventSignature));
    batchConfigureConstants(desc, proto, IDBTransactionConsts, sizeof(IDBTransactionConsts) / sizeof(*IDBTransactionConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8IDBTransaction::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8IDBTransactionRawCache = createRawTemplate();
    return V8IDBTransactionRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8IDBTransaction::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8IDBTransactionCache = ConfigureV8IDBTransactionTemplate(GetRawTemplate());
    return V8IDBTransactionCache;
}

IDBTransaction* V8IDBTransaction::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<IDBTransaction*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8IDBTransaction::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8IDBTransaction::wrap(IDBTransaction* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<IDBTransaction > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(IDBTransaction* impl)
{
    if (!impl)
        return v8::Null();
    return V8IDBTransaction::wrap(impl);
}

void V8IDBTransaction::derefObject(void* object)
{
    static_cast<IDBTransaction*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(INDEXED_DATABASE)
