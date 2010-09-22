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
#include "V8ArrayBufferView.h"

#if ENABLE(3D_CANVAS)

#include "RuntimeEnabledFeatures.h"
#include "V8ArrayBuffer.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8ArrayBufferView::info = { V8ArrayBufferView::GetTemplate, V8ArrayBufferView::derefObject, 0 };

namespace ArrayBufferViewInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> bufferAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.ArrayBufferView.buffer._get");
    ArrayBufferView* imp = V8ArrayBufferView::toNative(info.Holder());
    RefPtr<ArrayBuffer> result = imp->buffer();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setHiddenReference(info.Holder(), wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> byteOffsetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.ArrayBufferView.byteOffset._get");
    ArrayBufferView* imp = V8ArrayBufferView::toNative(info.Holder());
    return v8::Integer::NewFromUnsigned(imp->byteOffset());
}

static v8::Handle<v8::Value> byteLengthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.ArrayBufferView.byteLength._get");
    ArrayBufferView* imp = V8ArrayBufferView::toNative(info.Holder());
    return v8::Integer::NewFromUnsigned(imp->byteLength());
}

static v8::Handle<v8::Value> lengthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.ArrayBufferView.length._get");
    ArrayBufferView* imp = V8ArrayBufferView::toNative(info.Holder());
    return v8::Integer::NewFromUnsigned(imp->length());
}

} // namespace ArrayBufferViewInternal

static const BatchedAttribute ArrayBufferViewAttrs[] = {
    // Attribute 'buffer' (Type: 'readonly attribute' ExtAttr: '')
    {"buffer", ArrayBufferViewInternal::bufferAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'byteOffset' (Type: 'readonly attribute' ExtAttr: '')
    {"byteOffset", ArrayBufferViewInternal::byteOffsetAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'byteLength' (Type: 'readonly attribute' ExtAttr: '')
    {"byteLength", ArrayBufferViewInternal::byteLengthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'length' (Type: 'readonly attribute' ExtAttr: '')
    {"length", ArrayBufferViewInternal::lengthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback ArrayBufferViewCallbacks[] = {
    {"slice", V8ArrayBufferView::sliceCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8ArrayBufferViewTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "ArrayBufferView", v8::Persistent<v8::FunctionTemplate>(), V8ArrayBufferView::internalFieldCount,
        ArrayBufferViewAttrs, sizeof(ArrayBufferViewAttrs) / sizeof(*ArrayBufferViewAttrs),
        ArrayBufferViewCallbacks, sizeof(ArrayBufferViewCallbacks) / sizeof(*ArrayBufferViewCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8ArrayBufferView::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8ArrayBufferViewRawCache = createRawTemplate();
    return V8ArrayBufferViewRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8ArrayBufferView::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8ArrayBufferViewCache = ConfigureV8ArrayBufferViewTemplate(GetRawTemplate());
    return V8ArrayBufferViewCache;
}

ArrayBufferView* V8ArrayBufferView::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<ArrayBufferView*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8ArrayBufferView::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8ArrayBufferView::wrap(ArrayBufferView* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<ArrayBufferView > impl)
{
    return toV8(impl.get());
}

void V8ArrayBufferView::derefObject(void* object)
{
    static_cast<ArrayBufferView*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(3D_CANVAS)
