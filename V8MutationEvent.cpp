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
#include "V8MutationEvent.h"

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8Event.h"
#include "V8IsolatedContext.h"
#include "V8Node.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8MutationEvent::info = { V8MutationEvent::GetTemplate, V8MutationEvent::derefObject, 0 };

namespace MutationEventInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> relatedNodeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MutationEvent.relatedNode._get");
    MutationEvent* imp = V8MutationEvent::toNative(info.Holder());
    return toV8(imp->relatedNode());
}

static v8::Handle<v8::Value> prevValueAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MutationEvent.prevValue._get");
    MutationEvent* imp = V8MutationEvent::toNative(info.Holder());
    return v8String(imp->prevValue());
}

static v8::Handle<v8::Value> newValueAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MutationEvent.newValue._get");
    MutationEvent* imp = V8MutationEvent::toNative(info.Holder());
    return v8String(imp->newValue());
}

static v8::Handle<v8::Value> attrNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MutationEvent.attrName._get");
    MutationEvent* imp = V8MutationEvent::toNative(info.Holder());
    return v8String(imp->attrName());
}

static v8::Handle<v8::Value> attrChangeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MutationEvent.attrChange._get");
    MutationEvent* imp = V8MutationEvent::toNative(info.Holder());
    return v8::Integer::New(imp->attrChange());
}

static v8::Handle<v8::Value> initMutationEventCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.MutationEvent.initMutationEvent");
    MutationEvent* imp = V8MutationEvent::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, type, args[0]);
    EXCEPTION_BLOCK(bool, canBubble, args[1]->BooleanValue());
    EXCEPTION_BLOCK(bool, cancelable, args[2]->BooleanValue());
    EXCEPTION_BLOCK(Node*, relatedNode, V8Node::HasInstance(args[3]) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(args[3])) : 0);
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, prevValue, args[4]);
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, newValue, args[5]);
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, attrName, args[6]);
    EXCEPTION_BLOCK(int, attrChange, toUInt32(args[7]));
    imp->initMutationEvent(type, canBubble, cancelable, relatedNode, prevValue, newValue, attrName, attrChange);
    return v8::Handle<v8::Value>();
}

} // namespace MutationEventInternal

static const BatchedAttribute MutationEventAttrs[] = {
    // Attribute 'relatedNode' (Type: 'readonly attribute' ExtAttr: '')
    {"relatedNode", MutationEventInternal::relatedNodeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'prevValue' (Type: 'readonly attribute' ExtAttr: '')
    {"prevValue", MutationEventInternal::prevValueAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'newValue' (Type: 'readonly attribute' ExtAttr: '')
    {"newValue", MutationEventInternal::newValueAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'attrName' (Type: 'readonly attribute' ExtAttr: '')
    {"attrName", MutationEventInternal::attrNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'attrChange' (Type: 'readonly attribute' ExtAttr: '')
    {"attrChange", MutationEventInternal::attrChangeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedConstant MutationEventConsts[] = {
    {"MODIFICATION", static_cast<signed int>(1)},
    {"ADDITION", static_cast<signed int>(2)},
    {"REMOVAL", static_cast<signed int>(3)},
};

COMPILE_ASSERT(1 == MutationEvent::MODIFICATION, MutationEventEnumMODIFICATIONIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == MutationEvent::ADDITION, MutationEventEnumADDITIONIsWrongUseDontCheckEnums);
COMPILE_ASSERT(3 == MutationEvent::REMOVAL, MutationEventEnumREMOVALIsWrongUseDontCheckEnums);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8MutationEventTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "MutationEvent", V8Event::GetTemplate(), V8MutationEvent::internalFieldCount,
        MutationEventAttrs, sizeof(MutationEventAttrs) / sizeof(*MutationEventAttrs),
        0, 0);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom Signature 'initMutationEvent'
    const int initMutationEventArgc = 8;
    v8::Handle<v8::FunctionTemplate> initMutationEventArgv[initMutationEventArgc] = { v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), V8Node::GetRawTemplate(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>() };
    v8::Handle<v8::Signature> initMutationEventSignature = v8::Signature::New(desc, initMutationEventArgc, initMutationEventArgv);
    proto->Set(v8::String::New("initMutationEvent"), v8::FunctionTemplate::New(MutationEventInternal::initMutationEventCallback, v8::Handle<v8::Value>(), initMutationEventSignature));
    batchConfigureConstants(desc, proto, MutationEventConsts, sizeof(MutationEventConsts) / sizeof(*MutationEventConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8MutationEvent::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8MutationEventRawCache = createRawTemplate();
    return V8MutationEventRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8MutationEvent::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8MutationEventCache = ConfigureV8MutationEventTemplate(GetRawTemplate());
    return V8MutationEventCache;
}

MutationEvent* V8MutationEvent::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<MutationEvent*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8MutationEvent::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8MutationEvent::wrap(MutationEvent* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<MutationEvent > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(MutationEvent* impl)
{
    if (!impl)
        return v8::Null();
    return V8MutationEvent::wrap(impl);
}

void V8MutationEvent::derefObject(void* object)
{
    static_cast<MutationEvent*>(object)->deref();
}

} // namespace WebCore
