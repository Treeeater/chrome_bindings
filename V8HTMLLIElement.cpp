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
#include "V8HTMLLIElement.h"

#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8HTMLElement.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8HTMLLIElement::info = { V8HTMLLIElement::GetTemplate, V8HTMLLIElement::derefObject, 0 };

namespace HTMLLIElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> typeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLLIElement.type._get");
    return getElementStringAttr(info, HTMLNames::typeAttr);
}

static void typeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLLIElement.type._set");
    setElementStringAttr(info, HTMLNames::typeAttr, value);
}

static v8::Handle<v8::Value> valueAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLLIElement.value._get");
    HTMLLIElement* imp = V8HTMLLIElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8::Integer::New(imp->getIntegralAttribute(WebCore::HTMLNames::valueAttr));
}

static void valueAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLLIElement.value._set");
    HTMLLIElement* imp = V8HTMLLIElement::toNative(info.Holder());
    int v = toInt32(value);
    imp->setIntegralAttribute(WebCore::HTMLNames::valueAttr, v);
    return;
}

} // namespace HTMLLIElementInternal

static const BatchedAttribute HTMLLIElementAttrs[] = {
    // Attribute 'type' (Type: 'attribute' ExtAttr: 'Reflect')
    {"type", HTMLLIElementInternal::typeAttrGetter, HTMLLIElementInternal::typeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'value' (Type: 'attribute' ExtAttr: 'Reflect')
    {"value", HTMLLIElementInternal::valueAttrGetter, HTMLLIElementInternal::valueAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLLIElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLLIElement", V8HTMLElement::GetTemplate(), V8HTMLLIElement::internalFieldCount,
        HTMLLIElementAttrs, sizeof(HTMLLIElementAttrs) / sizeof(*HTMLLIElementAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLLIElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLLIElementRawCache = createRawTemplate();
    return V8HTMLLIElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLLIElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLLIElementCache = ConfigureV8HTMLLIElementTemplate(GetRawTemplate());
    return V8HTMLLIElementCache;
}

HTMLLIElement* V8HTMLLIElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<HTMLLIElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8HTMLLIElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLLIElement::wrap(HTMLLIElement* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<HTMLLIElement > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(HTMLLIElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8HTMLLIElement::wrap(impl);
}

void V8HTMLLIElement::derefObject(void* object)
{
    static_cast<HTMLLIElement*>(object)->deref();
}

} // namespace WebCore
