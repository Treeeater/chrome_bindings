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
#include "V8Storage.h"

#if ENABLE(DOM_STORAGE)

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8Collection.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8Storage::info = { V8Storage::GetTemplate, V8Storage::derefObject, 0 };

namespace StorageInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> lengthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Storage.length._get");
    Storage* imp = V8Storage::toNative(info.Holder());
    return v8::Integer::NewFromUnsigned(imp->length());
}

static v8::Handle<v8::Value> keyCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Storage.key");
    Storage* imp = V8Storage::toNative(args.Holder());
    EXCEPTION_BLOCK(unsigned, index, toUInt32(args[0]));
    return v8StringOrNull(imp->key(index));
}

static v8::Handle<v8::Value> getItemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Storage.getItem");
    Storage* imp = V8Storage::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, key, args[0]);
    return v8StringOrNull(imp->getItem(key));
}

static v8::Handle<v8::Value> setItemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Storage.setItem");
    Storage* imp = V8Storage::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, key, args[0]);
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, data, args[1]);
    imp->setItem(key, data, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> removeItemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Storage.removeItem");
    Storage* imp = V8Storage::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, key, args[0]);
    imp->removeItem(key);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> clearCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Storage.clear");
    Storage* imp = V8Storage::toNative(args.Holder());
    imp->clear();
    return v8::Handle<v8::Value>();
}

} // namespace StorageInternal

static const BatchedAttribute StorageAttrs[] = {
    // Attribute 'length' (Type: 'readonly attribute' ExtAttr: 'DontEnum')
    {"length", StorageInternal::lengthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None | v8::DontEnum), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8StorageTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "Storage", v8::Persistent<v8::FunctionTemplate>(), V8Storage::internalFieldCount,
        StorageAttrs, sizeof(StorageAttrs) / sizeof(*StorageAttrs),
        0, 0);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    desc->InstanceTemplate()->SetIndexedPropertyHandler(V8Storage::indexedPropertyGetter, V8Storage::indexedPropertySetter, 0, V8Storage::indexedPropertyDeleter);
    desc->InstanceTemplate()->SetNamedPropertyHandler(V8Storage::namedPropertyGetter, V8Storage::namedPropertySetter, V8Storage::namedPropertyQuery, V8Storage::namedPropertyDeleter, V8Storage::namedPropertyEnumerator);
    proto->Set(v8::String::New("key"), v8::FunctionTemplate::New(StorageInternal::keyCallback, v8::Handle<v8::Value>(), defaultSignature), static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum));
    proto->Set(v8::String::New("getItem"), v8::FunctionTemplate::New(StorageInternal::getItemCallback, v8::Handle<v8::Value>(), defaultSignature), static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum));
    proto->Set(v8::String::New("setItem"), v8::FunctionTemplate::New(StorageInternal::setItemCallback, v8::Handle<v8::Value>(), defaultSignature), static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum));
    proto->Set(v8::String::New("removeItem"), v8::FunctionTemplate::New(StorageInternal::removeItemCallback, v8::Handle<v8::Value>(), defaultSignature), static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum));
    proto->Set(v8::String::New("clear"), v8::FunctionTemplate::New(StorageInternal::clearCallback, v8::Handle<v8::Value>(), defaultSignature), static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8Storage::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8StorageRawCache = createRawTemplate();
    return V8StorageRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8Storage::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8StorageCache = ConfigureV8StorageTemplate(GetRawTemplate());
    return V8StorageCache;
}

Storage* V8Storage::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<Storage*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8Storage::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8Storage::wrap(Storage* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<Storage > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(Storage* impl)
{
    if (!impl)
        return v8::Null();
    return V8Storage::wrap(impl);
}

void V8Storage::derefObject(void* object)
{
    static_cast<Storage*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(DOM_STORAGE)
