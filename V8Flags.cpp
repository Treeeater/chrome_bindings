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
#include "V8Flags.h"

#if ENABLE(FILE_SYSTEM)

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8Flags::info = { V8Flags::GetTemplate, V8Flags::derefObject, 0 };

namespace FlagsInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> CREATEAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Flags.CREATE._get");
    Flags* imp = V8Flags::toNative(info.Holder());
    return v8Boolean(imp->isCreate());
}

static void CREATEAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Flags.CREATE._set");
    Flags* imp = V8Flags::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setCreate(v);
    return;
}

static v8::Handle<v8::Value> EXCLUSIVEAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Flags.EXCLUSIVE._get");
    Flags* imp = V8Flags::toNative(info.Holder());
    return v8Boolean(imp->isExclusive());
}

static void EXCLUSIVEAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Flags.EXCLUSIVE._set");
    Flags* imp = V8Flags::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setExclusive(v);
    return;
}

} // namespace FlagsInternal

static const BatchedAttribute FlagsAttrs[] = {
    // Attribute 'CREATE' (Type: 'attribute' ExtAttr: '')
    {"CREATE", FlagsInternal::CREATEAttrGetter, FlagsInternal::CREATEAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'EXCLUSIVE' (Type: 'attribute' ExtAttr: '')
    {"EXCLUSIVE", FlagsInternal::EXCLUSIVEAttrGetter, FlagsInternal::EXCLUSIVEAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8FlagsTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "Flags", v8::Persistent<v8::FunctionTemplate>(), V8Flags::internalFieldCount,
        FlagsAttrs, sizeof(FlagsAttrs) / sizeof(*FlagsAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8Flags::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8FlagsRawCache = createRawTemplate();
    return V8FlagsRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8Flags::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8FlagsCache = ConfigureV8FlagsTemplate(GetRawTemplate());
    return V8FlagsCache;
}

Flags* V8Flags::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<Flags*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8Flags::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8Flags::wrap(Flags* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<Flags > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(Flags* impl)
{
    if (!impl)
        return v8::Null();
    return V8Flags::wrap(impl);
}

void V8Flags::derefObject(void* object)
{
    static_cast<Flags*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(FILE_SYSTEM)
