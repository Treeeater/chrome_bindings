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
#include "V8WheelEvent.h"

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWindow.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8UIEvent.h"

namespace WebCore {

WrapperTypeInfo V8WheelEvent::info = { V8WheelEvent::GetTemplate, V8WheelEvent::derefObject, 0 };

namespace WheelEventInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> screenXAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WheelEvent.screenX._get");
    WheelEvent* imp = V8WheelEvent::toNative(info.Holder());
    return v8::Integer::New(imp->screenX());
}

static v8::Handle<v8::Value> screenYAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WheelEvent.screenY._get");
    WheelEvent* imp = V8WheelEvent::toNative(info.Holder());
    return v8::Integer::New(imp->screenY());
}

static v8::Handle<v8::Value> clientXAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WheelEvent.clientX._get");
    WheelEvent* imp = V8WheelEvent::toNative(info.Holder());
    return v8::Integer::New(imp->clientX());
}

static v8::Handle<v8::Value> clientYAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WheelEvent.clientY._get");
    WheelEvent* imp = V8WheelEvent::toNative(info.Holder());
    return v8::Integer::New(imp->clientY());
}

static v8::Handle<v8::Value> ctrlKeyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WheelEvent.ctrlKey._get");
    WheelEvent* imp = V8WheelEvent::toNative(info.Holder());
    return v8Boolean(imp->ctrlKey());
}

static v8::Handle<v8::Value> shiftKeyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WheelEvent.shiftKey._get");
    WheelEvent* imp = V8WheelEvent::toNative(info.Holder());
    return v8Boolean(imp->shiftKey());
}

static v8::Handle<v8::Value> altKeyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WheelEvent.altKey._get");
    WheelEvent* imp = V8WheelEvent::toNative(info.Holder());
    return v8Boolean(imp->altKey());
}

static v8::Handle<v8::Value> metaKeyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WheelEvent.metaKey._get");
    WheelEvent* imp = V8WheelEvent::toNative(info.Holder());
    return v8Boolean(imp->metaKey());
}

static v8::Handle<v8::Value> wheelDeltaAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WheelEvent.wheelDelta._get");
    WheelEvent* imp = V8WheelEvent::toNative(info.Holder());
    return v8::Integer::New(imp->wheelDelta());
}

static v8::Handle<v8::Value> wheelDeltaXAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WheelEvent.wheelDeltaX._get");
    WheelEvent* imp = V8WheelEvent::toNative(info.Holder());
    return v8::Integer::New(imp->wheelDeltaX());
}

static v8::Handle<v8::Value> wheelDeltaYAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WheelEvent.wheelDeltaY._get");
    WheelEvent* imp = V8WheelEvent::toNative(info.Holder());
    return v8::Integer::New(imp->wheelDeltaY());
}

static v8::Handle<v8::Value> offsetXAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WheelEvent.offsetX._get");
    WheelEvent* imp = V8WheelEvent::toNative(info.Holder());
    return v8::Integer::New(imp->offsetX());
}

static v8::Handle<v8::Value> offsetYAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WheelEvent.offsetY._get");
    WheelEvent* imp = V8WheelEvent::toNative(info.Holder());
    return v8::Integer::New(imp->offsetY());
}

static v8::Handle<v8::Value> xAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WheelEvent.x._get");
    WheelEvent* imp = V8WheelEvent::toNative(info.Holder());
    return v8::Integer::New(imp->x());
}

static v8::Handle<v8::Value> yAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WheelEvent.y._get");
    WheelEvent* imp = V8WheelEvent::toNative(info.Holder());
    return v8::Integer::New(imp->y());
}

static v8::Handle<v8::Value> initWebKitWheelEventCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.WheelEvent.initWebKitWheelEvent");
    WheelEvent* imp = V8WheelEvent::toNative(args.Holder());
    EXCEPTION_BLOCK(int, wheelDeltaX, toInt32(args[0]));
    EXCEPTION_BLOCK(int, wheelDeltaY, toInt32(args[1]));
    EXCEPTION_BLOCK(DOMWindow*, view, V8DOMWindow::HasInstance(args[2]) ? V8DOMWindow::toNative(v8::Handle<v8::Object>::Cast(args[2])) : 0);
    EXCEPTION_BLOCK(int, screenX, toInt32(args[3]));
    EXCEPTION_BLOCK(int, screenY, toInt32(args[4]));
    EXCEPTION_BLOCK(int, clientX, toInt32(args[5]));
    EXCEPTION_BLOCK(int, clientY, toInt32(args[6]));
    EXCEPTION_BLOCK(bool, ctrlKey, args[7]->BooleanValue());
    EXCEPTION_BLOCK(bool, altKey, args[8]->BooleanValue());
    EXCEPTION_BLOCK(bool, shiftKey, args[9]->BooleanValue());
    EXCEPTION_BLOCK(bool, metaKey, args[10]->BooleanValue());
    imp->initWebKitWheelEvent(wheelDeltaX, wheelDeltaY, view, screenX, screenY, clientX, clientY, ctrlKey, altKey, shiftKey, metaKey);
    return v8::Handle<v8::Value>();
}

} // namespace WheelEventInternal

static const BatchedAttribute WheelEventAttrs[] = {
    // Attribute 'screenX' (Type: 'readonly attribute' ExtAttr: '')
    {"screenX", WheelEventInternal::screenXAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'screenY' (Type: 'readonly attribute' ExtAttr: '')
    {"screenY", WheelEventInternal::screenYAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'clientX' (Type: 'readonly attribute' ExtAttr: '')
    {"clientX", WheelEventInternal::clientXAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'clientY' (Type: 'readonly attribute' ExtAttr: '')
    {"clientY", WheelEventInternal::clientYAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'ctrlKey' (Type: 'readonly attribute' ExtAttr: '')
    {"ctrlKey", WheelEventInternal::ctrlKeyAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'shiftKey' (Type: 'readonly attribute' ExtAttr: '')
    {"shiftKey", WheelEventInternal::shiftKeyAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'altKey' (Type: 'readonly attribute' ExtAttr: '')
    {"altKey", WheelEventInternal::altKeyAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'metaKey' (Type: 'readonly attribute' ExtAttr: '')
    {"metaKey", WheelEventInternal::metaKeyAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'wheelDelta' (Type: 'readonly attribute' ExtAttr: '')
    {"wheelDelta", WheelEventInternal::wheelDeltaAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'wheelDeltaX' (Type: 'readonly attribute' ExtAttr: '')
    {"wheelDeltaX", WheelEventInternal::wheelDeltaXAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'wheelDeltaY' (Type: 'readonly attribute' ExtAttr: '')
    {"wheelDeltaY", WheelEventInternal::wheelDeltaYAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'offsetX' (Type: 'readonly attribute' ExtAttr: '')
    {"offsetX", WheelEventInternal::offsetXAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'offsetY' (Type: 'readonly attribute' ExtAttr: '')
    {"offsetY", WheelEventInternal::offsetYAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'x' (Type: 'readonly attribute' ExtAttr: '')
    {"x", WheelEventInternal::xAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'y' (Type: 'readonly attribute' ExtAttr: '')
    {"y", WheelEventInternal::yAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8WheelEventTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "WheelEvent", V8UIEvent::GetTemplate(), V8WheelEvent::internalFieldCount,
        WheelEventAttrs, sizeof(WheelEventAttrs) / sizeof(*WheelEventAttrs),
        0, 0);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom Signature 'initWebKitWheelEvent'
    const int initWebKitWheelEventArgc = 11;
    v8::Handle<v8::FunctionTemplate> initWebKitWheelEventArgv[initWebKitWheelEventArgc] = { v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), V8DOMWindow::GetRawTemplate(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>() };
    v8::Handle<v8::Signature> initWebKitWheelEventSignature = v8::Signature::New(desc, initWebKitWheelEventArgc, initWebKitWheelEventArgv);
    proto->Set(v8::String::New("initWebKitWheelEvent"), v8::FunctionTemplate::New(WheelEventInternal::initWebKitWheelEventCallback, v8::Handle<v8::Value>(), initWebKitWheelEventSignature));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8WheelEvent::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8WheelEventRawCache = createRawTemplate();
    return V8WheelEventRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8WheelEvent::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8WheelEventCache = ConfigureV8WheelEventTemplate(GetRawTemplate());
    return V8WheelEventCache;
}

WheelEvent* V8WheelEvent::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<WheelEvent*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8WheelEvent::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8WheelEvent::wrap(WheelEvent* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<WheelEvent > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(WheelEvent* impl)
{
    if (!impl)
        return v8::Null();
    return V8WheelEvent::wrap(impl);
}

void V8WheelEvent::derefObject(void* object)
{
    static_cast<WheelEvent*>(object)->deref();
}

} // namespace WebCore
