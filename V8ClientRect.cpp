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
#include "V8ClientRect.h"

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8ClientRect::info = { V8ClientRect::GetTemplate, V8ClientRect::derefObject, 0 };

namespace ClientRectInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> topAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.ClientRect.top._get");
    ClientRect* imp = V8ClientRect::toNative(info.Holder());
    return v8::Number::New(imp->top());
}

static v8::Handle<v8::Value> rightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.ClientRect.right._get");
    ClientRect* imp = V8ClientRect::toNative(info.Holder());
    return v8::Number::New(imp->right());
}

static v8::Handle<v8::Value> bottomAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.ClientRect.bottom._get");
    ClientRect* imp = V8ClientRect::toNative(info.Holder());
    return v8::Number::New(imp->bottom());
}

static v8::Handle<v8::Value> leftAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.ClientRect.left._get");
    ClientRect* imp = V8ClientRect::toNative(info.Holder());
    return v8::Number::New(imp->left());
}

static v8::Handle<v8::Value> widthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.ClientRect.width._get");
    ClientRect* imp = V8ClientRect::toNative(info.Holder());
    return v8::Number::New(imp->width());
}

static v8::Handle<v8::Value> heightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.ClientRect.height._get");
    ClientRect* imp = V8ClientRect::toNative(info.Holder());
    return v8::Number::New(imp->height());
}

} // namespace ClientRectInternal

static const BatchedAttribute ClientRectAttrs[] = {
    // Attribute 'top' (Type: 'readonly attribute' ExtAttr: '')
    {"top", ClientRectInternal::topAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'right' (Type: 'readonly attribute' ExtAttr: '')
    {"right", ClientRectInternal::rightAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'bottom' (Type: 'readonly attribute' ExtAttr: '')
    {"bottom", ClientRectInternal::bottomAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'left' (Type: 'readonly attribute' ExtAttr: '')
    {"left", ClientRectInternal::leftAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'width' (Type: 'readonly attribute' ExtAttr: '')
    {"width", ClientRectInternal::widthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'height' (Type: 'readonly attribute' ExtAttr: '')
    {"height", ClientRectInternal::heightAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8ClientRectTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "ClientRect", v8::Persistent<v8::FunctionTemplate>(), V8ClientRect::internalFieldCount,
        ClientRectAttrs, sizeof(ClientRectAttrs) / sizeof(*ClientRectAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8ClientRect::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8ClientRectRawCache = createRawTemplate();
    return V8ClientRectRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8ClientRect::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8ClientRectCache = ConfigureV8ClientRectTemplate(GetRawTemplate());
    return V8ClientRectCache;
}

ClientRect* V8ClientRect::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<ClientRect*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8ClientRect::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8ClientRect::wrap(ClientRect* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<ClientRect > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(ClientRect* impl)
{
    if (!impl)
        return v8::Null();
    return V8ClientRect::wrap(impl);
}

void V8ClientRect::derefObject(void* object)
{
    static_cast<ClientRect*>(object)->deref();
}

} // namespace WebCore