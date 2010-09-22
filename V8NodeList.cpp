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
#include "V8NodeList.h"

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8Collection.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Node.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8NodeList::info = { V8NodeList::GetTemplate, V8NodeList::derefObject, 0 };

namespace NodeListInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> lengthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.NodeList.length._get");
    NodeList* imp = V8NodeList::toNative(info.Holder());
    return v8::Integer::NewFromUnsigned(imp->length());
}

static v8::Handle<v8::Value> itemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.NodeList.item");
    NodeList* imp = V8NodeList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(int, index, toUInt32(args[0]));
    if (UNLIKELY(index < 0)) {
        ec = INDEX_SIZE_ERR;
        goto fail;
    }
    return toV8(imp->item(index));
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

} // namespace NodeListInternal

static const BatchedAttribute NodeListAttrs[] = {
    // Attribute 'length' (Type: 'readonly attribute' ExtAttr: '')
    {"length", NodeListInternal::lengthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback NodeListCallbacks[] = {
    {"item", NodeListInternal::itemCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8NodeListTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "NodeList", v8::Persistent<v8::FunctionTemplate>(), V8NodeList::internalFieldCount,
        NodeListAttrs, sizeof(NodeListAttrs) / sizeof(*NodeListAttrs),
        NodeListCallbacks, sizeof(NodeListCallbacks) / sizeof(*NodeListCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    setCollectionIndexedGetter<NodeList, Node>(desc);
    desc->InstanceTemplate()->SetNamedPropertyHandler(V8NodeList::namedPropertyGetter, 0, 0, 0, 0);
    desc->InstanceTemplate()->SetCallAsFunctionHandler(V8NodeList::callAsFunctionCallback);

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8NodeList::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8NodeListRawCache = createRawTemplate();
    return V8NodeListRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8NodeList::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8NodeListCache = ConfigureV8NodeListTemplate(GetRawTemplate());
    return V8NodeListCache;
}

NodeList* V8NodeList::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<NodeList*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8NodeList::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8NodeList::wrap(NodeList* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<NodeList > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(NodeList* impl)
{
    if (!impl)
        return v8::Null();
    return V8NodeList::wrap(impl);
}

void V8NodeList::derefObject(void* object)
{
    static_cast<NodeList*>(object)->deref();
}

} // namespace WebCore