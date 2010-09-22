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
#include "V8CustomEvent.h"

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "ScriptValue.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8Event.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8CustomEvent::info = { V8CustomEvent::GetTemplate, V8CustomEvent::derefObject, 0 };

namespace CustomEventInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> detailAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.CustomEvent.detail._get");
    CustomEvent* imp = V8CustomEvent::toNative(info.Holder());
    return imp->detail().v8Value();
}

static v8::Handle<v8::Value> initCustomEventCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.CustomEvent.initCustomEvent");
    CustomEvent* imp = V8CustomEvent::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, typeArg, args[0]);
    EXCEPTION_BLOCK(bool, canBubbleArg, args[1]->BooleanValue());
    EXCEPTION_BLOCK(bool, cancelableArg, args[2]->BooleanValue());
    EXCEPTION_BLOCK(ScriptValue, detailArg, ScriptValue(args[3]));
    imp->initCustomEvent(typeArg, canBubbleArg, cancelableArg, detailArg);
    return v8::Handle<v8::Value>();
}

} // namespace CustomEventInternal

static const BatchedAttribute CustomEventAttrs[] = {
    // Attribute 'detail' (Type: 'readonly attribute' ExtAttr: '')
    {"detail", CustomEventInternal::detailAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback CustomEventCallbacks[] = {
    {"initCustomEvent", CustomEventInternal::initCustomEventCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8CustomEventTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "CustomEvent", V8Event::GetTemplate(), V8CustomEvent::internalFieldCount,
        CustomEventAttrs, sizeof(CustomEventAttrs) / sizeof(*CustomEventAttrs),
        CustomEventCallbacks, sizeof(CustomEventCallbacks) / sizeof(*CustomEventCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8CustomEvent::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8CustomEventRawCache = createRawTemplate();
    return V8CustomEventRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8CustomEvent::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8CustomEventCache = ConfigureV8CustomEventTemplate(GetRawTemplate());
    return V8CustomEventCache;
}

CustomEvent* V8CustomEvent::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<CustomEvent*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8CustomEvent::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8CustomEvent::wrap(CustomEvent* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<CustomEvent > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(CustomEvent* impl)
{
    if (!impl)
        return v8::Null();
    return V8CustomEvent::wrap(impl);
}

void V8CustomEvent::derefObject(void* object)
{
    static_cast<CustomEvent*>(object)->deref();
}

} // namespace WebCore
