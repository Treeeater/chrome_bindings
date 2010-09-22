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
#include "V8WebGLActiveInfo.h"

#if ENABLE(3D_CANVAS)

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8WebGLActiveInfo::info = { V8WebGLActiveInfo::GetTemplate, V8WebGLActiveInfo::derefObject, 0 };

namespace WebGLActiveInfoInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> sizeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebGLActiveInfo.size._get");
    WebGLActiveInfo* imp = V8WebGLActiveInfo::toNative(info.Holder());
    return v8::Integer::New(imp->size());
}

static v8::Handle<v8::Value> typeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebGLActiveInfo.type._get");
    WebGLActiveInfo* imp = V8WebGLActiveInfo::toNative(info.Holder());
    return v8::Integer::NewFromUnsigned(imp->type());
}

static v8::Handle<v8::Value> nameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebGLActiveInfo.name._get");
    WebGLActiveInfo* imp = V8WebGLActiveInfo::toNative(info.Holder());
    return v8String(imp->name());
}

} // namespace WebGLActiveInfoInternal

static const BatchedAttribute WebGLActiveInfoAttrs[] = {
    // Attribute 'size' (Type: 'readonly attribute' ExtAttr: '')
    {"size", WebGLActiveInfoInternal::sizeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'type' (Type: 'readonly attribute' ExtAttr: '')
    {"type", WebGLActiveInfoInternal::typeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'name' (Type: 'readonly attribute' ExtAttr: '')
    {"name", WebGLActiveInfoInternal::nameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8WebGLActiveInfoTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "WebGLActiveInfo", v8::Persistent<v8::FunctionTemplate>(), V8WebGLActiveInfo::internalFieldCount,
        WebGLActiveInfoAttrs, sizeof(WebGLActiveInfoAttrs) / sizeof(*WebGLActiveInfoAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8WebGLActiveInfo::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8WebGLActiveInfoRawCache = createRawTemplate();
    return V8WebGLActiveInfoRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8WebGLActiveInfo::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8WebGLActiveInfoCache = ConfigureV8WebGLActiveInfoTemplate(GetRawTemplate());
    return V8WebGLActiveInfoCache;
}

WebGLActiveInfo* V8WebGLActiveInfo::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<WebGLActiveInfo*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8WebGLActiveInfo::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8WebGLActiveInfo::wrap(WebGLActiveInfo* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<WebGLActiveInfo > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(WebGLActiveInfo* impl)
{
    if (!impl)
        return v8::Null();
    return V8WebGLActiveInfo::wrap(impl);
}

void V8WebGLActiveInfo::derefObject(void* object)
{
    static_cast<WebGLActiveInfo*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(3D_CANVAS)
