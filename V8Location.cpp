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
#include "V8Location.h"

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8Location::info = { V8Location::GetTemplate, V8Location::derefObject, 0 };

namespace LocationInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> hrefAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Location.href._get");
    v8::Handle<v8::Object> holder = V8DOMWrapper::lookupDOMWrapper(V8Location::GetTemplate(), info.This());
    if (holder.IsEmpty())
        return v8::Handle<v8::Value>();
    Location* imp = V8Location::toNative(holder);
    return v8String(imp->href());
}

static v8::Handle<v8::Value> protocolAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Location.protocol._get");
    Location* imp = V8Location::toNative(info.Holder());
    return v8String(imp->protocol());
}

static v8::Handle<v8::Value> hostAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Location.host._get");
    Location* imp = V8Location::toNative(info.Holder());
    return v8String(imp->host());
}

static v8::Handle<v8::Value> hostnameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Location.hostname._get");
    Location* imp = V8Location::toNative(info.Holder());
    return v8String(imp->hostname());
}

static v8::Handle<v8::Value> portAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Location.port._get");
    Location* imp = V8Location::toNative(info.Holder());
    return v8String(imp->port());
}

static v8::Handle<v8::Value> pathnameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Location.pathname._get");
    Location* imp = V8Location::toNative(info.Holder());
    return v8String(imp->pathname());
}

static v8::Handle<v8::Value> searchAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Location.search._get");
    Location* imp = V8Location::toNative(info.Holder());
    return v8String(imp->search());
}

static v8::Handle<v8::Value> hashAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Location.hash._get");
    Location* imp = V8Location::toNative(info.Holder());
    return v8String(imp->hash());
}

} // namespace LocationInternal

static const BatchedAttribute LocationAttrs[] = {
    // Attribute 'href' (Type: 'attribute' ExtAttr: 'V8DisallowShadowing CustomSetter DoNotCheckDomainSecurityOnSet')
    {"href", LocationInternal::hrefAttrGetter, V8Location::hrefAccessorSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::ALL_CAN_WRITE | v8::PROHIBITS_OVERWRITING), static_cast<v8::PropertyAttribute>(v8::None | v8::DontDelete), 0 /* on instance */},
    // Attribute 'protocol' (Type: 'attribute' ExtAttr: 'CustomSetter')
    {"protocol", LocationInternal::protocolAttrGetter, V8Location::protocolAccessorSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'host' (Type: 'attribute' ExtAttr: 'CustomSetter')
    {"host", LocationInternal::hostAttrGetter, V8Location::hostAccessorSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'hostname' (Type: 'attribute' ExtAttr: 'CustomSetter')
    {"hostname", LocationInternal::hostnameAttrGetter, V8Location::hostnameAccessorSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'port' (Type: 'attribute' ExtAttr: 'CustomSetter')
    {"port", LocationInternal::portAttrGetter, V8Location::portAccessorSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'pathname' (Type: 'attribute' ExtAttr: 'CustomSetter')
    {"pathname", LocationInternal::pathnameAttrGetter, V8Location::pathnameAccessorSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'search' (Type: 'attribute' ExtAttr: 'CustomSetter')
    {"search", LocationInternal::searchAttrGetter, V8Location::searchAccessorSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'hash' (Type: 'attribute' ExtAttr: 'CustomSetter')
    {"hash", LocationInternal::hashAttrGetter, V8Location::hashAccessorSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8LocationTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "Location", v8::Persistent<v8::FunctionTemplate>(), V8Location::internalFieldCount,
        LocationAttrs, sizeof(LocationAttrs) / sizeof(*LocationAttrs),
        0, 0);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    instance->SetAccessCheckCallbacks(V8Location::namedSecurityCheck, V8Location::indexedSecurityCheck, v8::External::Wrap(&V8Location::info));
    instance->Set(v8::String::New("assign"), v8::FunctionTemplate::New(V8Location::assignCallback, v8::Handle<v8::Value>(), defaultSignature));
    instance->Set(v8::String::New("replace"), v8::FunctionTemplate::New(V8Location::replaceCallback, v8::Handle<v8::Value>(), defaultSignature));
    instance->Set(v8::String::New("reload"), v8::FunctionTemplate::New(V8Location::reloadCallback, v8::Handle<v8::Value>(), defaultSignature));
    instance->Set(v8::String::New("toString"), v8::FunctionTemplate::New(V8Location::toStringCallback, v8::Handle<v8::Value>(), defaultSignature), static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum | v8::ReadOnly));
    instance->Set(v8::String::New("valueOf"), v8::FunctionTemplate::New(V8Location::valueOfCallback, v8::Handle<v8::Value>(), defaultSignature), static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum | v8::ReadOnly));

    // For security reasons, these functions are on the instance instead
    // of on the prototype object to ensure that they cannot be overwritten.
    instance->SetAccessor(v8::String::New("reload"), V8Location::reloadAccessorGetter, 0, v8::Handle<v8::Value>(), v8::ALL_CAN_READ, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly));
    instance->SetAccessor(v8::String::New("replace"), V8Location::replaceAccessorGetter, 0, v8::Handle<v8::Value>(), v8::ALL_CAN_READ, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly));
    instance->SetAccessor(v8::String::New("assign"), V8Location::assignAccessorGetter, 0, v8::Handle<v8::Value>(), v8::ALL_CAN_READ, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8Location::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8LocationRawCache = createRawTemplate();
    return V8LocationRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8Location::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8LocationCache = ConfigureV8LocationTemplate(GetRawTemplate());
    return V8LocationCache;
}

Location* V8Location::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<Location*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8Location::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8Location::wrap(Location* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<Location > impl)
{
    return toV8(impl.get());
}

void V8Location::derefObject(void* object)
{
    static_cast<Location*>(object)->deref();
}

} // namespace WebCore
