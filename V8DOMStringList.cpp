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
#include "V8DOMStringList.h"

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

WrapperTypeInfo V8DOMStringList::info = { V8DOMStringList::GetTemplate, V8DOMStringList::derefObject, 0 };

namespace DOMStringListInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> lengthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.DOMStringList.length._get");
    DOMStringList* imp = V8DOMStringList::toNative(info.Holder());
    return v8::Integer::NewFromUnsigned(imp->length());
}

static v8::Handle<v8::Value> itemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.DOMStringList.item");
    DOMStringList* imp = V8DOMStringList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(int, index, toUInt32(args[0]));
    if (UNLIKELY(index < 0)) {
        ec = INDEX_SIZE_ERR;
        goto fail;
    }
    return v8String(imp->item(index));
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> containsCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.DOMStringList.contains");
    DOMStringList* imp = V8DOMStringList::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, string, args[0]);
    return v8Boolean(imp->contains(string));
}

} // namespace DOMStringListInternal

static const BatchedAttribute DOMStringListAttrs[] = {
    // Attribute 'length' (Type: 'readonly attribute' ExtAttr: '')
    {"length", DOMStringListInternal::lengthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback DOMStringListCallbacks[] = {
    {"item", DOMStringListInternal::itemCallback},
    {"contains", DOMStringListInternal::containsCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8DOMStringListTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "DOMStringList", v8::Persistent<v8::FunctionTemplate>(), V8DOMStringList::internalFieldCount,
        DOMStringListAttrs, sizeof(DOMStringListAttrs) / sizeof(*DOMStringListAttrs),
        DOMStringListCallbacks, sizeof(DOMStringListCallbacks) / sizeof(*DOMStringListCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    setCollectionStringIndexedGetter<DOMStringList>(desc);

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8DOMStringList::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8DOMStringListRawCache = createRawTemplate();
    return V8DOMStringListRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8DOMStringList::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8DOMStringListCache = ConfigureV8DOMStringListTemplate(GetRawTemplate());
    return V8DOMStringListCache;
}

DOMStringList* V8DOMStringList::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<DOMStringList*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8DOMStringList::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8DOMStringList::wrap(DOMStringList* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<DOMStringList > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(DOMStringList* impl)
{
    if (!impl)
        return v8::Null();
    return V8DOMStringList::wrap(impl);
}

void V8DOMStringList::derefObject(void* object)
{
    static_cast<DOMStringList*>(object)->deref();
}

} // namespace WebCore
