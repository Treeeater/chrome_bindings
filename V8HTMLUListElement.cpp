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
#include "V8HTMLUListElement.h"

#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8HTMLElement.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8HTMLUListElement::info = { V8HTMLUListElement::GetTemplate, V8HTMLUListElement::derefObject, 0 };

namespace HTMLUListElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> compactAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLUListElement.compact._get");
    HTMLUListElement* imp = V8HTMLUListElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8Boolean(imp->hasAttribute(WebCore::HTMLNames::compactAttr));
}

static void compactAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLUListElement.compact._set");
    HTMLUListElement* imp = V8HTMLUListElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setBooleanAttribute(WebCore::HTMLNames::compactAttr, v);
    return;
}

static v8::Handle<v8::Value> typeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLUListElement.type._get");
    return getElementStringAttr(info, HTMLNames::typeAttr);
}

static void typeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLUListElement.type._set");
    setElementStringAttr(info, HTMLNames::typeAttr, value);
}

} // namespace HTMLUListElementInternal

static const BatchedAttribute HTMLUListElementAttrs[] = {
    // Attribute 'compact' (Type: 'attribute' ExtAttr: 'Reflect')
    {"compact", HTMLUListElementInternal::compactAttrGetter, HTMLUListElementInternal::compactAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'type' (Type: 'attribute' ExtAttr: 'Reflect')
    {"type", HTMLUListElementInternal::typeAttrGetter, HTMLUListElementInternal::typeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLUListElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLUListElement", V8HTMLElement::GetTemplate(), V8HTMLUListElement::internalFieldCount,
        HTMLUListElementAttrs, sizeof(HTMLUListElementAttrs) / sizeof(*HTMLUListElementAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLUListElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLUListElementRawCache = createRawTemplate();
    return V8HTMLUListElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLUListElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLUListElementCache = ConfigureV8HTMLUListElementTemplate(GetRawTemplate());
    return V8HTMLUListElementCache;
}

HTMLUListElement* V8HTMLUListElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<HTMLUListElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8HTMLUListElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLUListElement::wrap(HTMLUListElement* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
    if (impl->document()) {
        proxy = V8Proxy::retrieve(impl->document()->frame());
        if (proxy && static_cast<Node*>(impl->document()) == static_cast<Node*>(impl))
            proxy->windowShell()->initContextIfNeeded();
    }

        wrapper = V8DOMWrapper::getWrapper(impl);
        if (!wrapper.IsEmpty())
            return wrapper;

    v8::Handle<v8::Context> context;
    if (proxy)
        context = proxy->context();

    // Enter the node's context and create the wrapper in that context.
    if (!context.IsEmpty())
        context->Enter();
    wrapper = V8DOMWrapper::instantiateV8Object(proxy, &info, impl);
    // Exit the node's context if it was entered.
    if (!context.IsEmpty())
        context->Exit();
    if (wrapper.IsEmpty())
        return wrapper;

    impl->ref();
    getDOMNodeMap().set(impl, v8::Persistent<v8::Object>::New(wrapper));
    return wrapper;
}

v8::Handle<v8::Value> toV8(PassRefPtr<HTMLUListElement > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(HTMLUListElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8HTMLUListElement::wrap(impl);
}

void V8HTMLUListElement::derefObject(void* object)
{
    static_cast<HTMLUListElement*>(object)->deref();
}

} // namespace WebCore
