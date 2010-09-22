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
#include "V8Rect.h"

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8CSSPrimitiveValue.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8Rect::info = { V8Rect::GetTemplate, V8Rect::derefObject, 0 };

namespace RectInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> topAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Rect.top._get");
    Rect* imp = V8Rect::toNative(info.Holder());
    RefPtr<CSSPrimitiveValue> result = imp->top();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setHiddenReference(info.Holder(), wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> rightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Rect.right._get");
    Rect* imp = V8Rect::toNative(info.Holder());
    RefPtr<CSSPrimitiveValue> result = imp->right();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setHiddenReference(info.Holder(), wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> bottomAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Rect.bottom._get");
    Rect* imp = V8Rect::toNative(info.Holder());
    RefPtr<CSSPrimitiveValue> result = imp->bottom();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setHiddenReference(info.Holder(), wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> leftAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Rect.left._get");
    Rect* imp = V8Rect::toNative(info.Holder());
    RefPtr<CSSPrimitiveValue> result = imp->left();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setHiddenReference(info.Holder(), wrapper);
    }
    return wrapper;
}

} // namespace RectInternal

static const BatchedAttribute RectAttrs[] = {
    // Attribute 'top' (Type: 'readonly attribute' ExtAttr: '')
    {"top", RectInternal::topAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'right' (Type: 'readonly attribute' ExtAttr: '')
    {"right", RectInternal::rightAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'bottom' (Type: 'readonly attribute' ExtAttr: '')
    {"bottom", RectInternal::bottomAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'left' (Type: 'readonly attribute' ExtAttr: '')
    {"left", RectInternal::leftAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8RectTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "Rect", v8::Persistent<v8::FunctionTemplate>(), V8Rect::internalFieldCount,
        RectAttrs, sizeof(RectAttrs) / sizeof(*RectAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8Rect::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8RectRawCache = createRawTemplate();
    return V8RectRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8Rect::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8RectCache = ConfigureV8RectTemplate(GetRawTemplate());
    return V8RectCache;
}

Rect* V8Rect::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<Rect*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8Rect::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8Rect::wrap(Rect* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<Rect > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(Rect* impl)
{
    if (!impl)
        return v8::Null();
    return V8Rect::wrap(impl);
}

void V8Rect::derefObject(void* object)
{
    static_cast<Rect*>(object)->deref();
}

} // namespace WebCore
