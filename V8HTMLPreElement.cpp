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
#include "V8HTMLPreElement.h"

#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8HTMLElement.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8HTMLPreElement::info = { V8HTMLPreElement::GetTemplate, V8HTMLPreElement::derefObject, 0 };

namespace HTMLPreElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> widthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLPreElement.width._get");
    HTMLPreElement* imp = V8HTMLPreElement::toNative(info.Holder());
    return v8::Integer::New(imp->getIntegralAttribute(WebCore::HTMLNames::widthAttr));
}

static void widthAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLPreElement.width._set");
    HTMLPreElement* imp = V8HTMLPreElement::toNative(info.Holder());
    int v = toInt32(value);
    imp->setIntegralAttribute(WebCore::HTMLNames::widthAttr, v);
    return;
}

static v8::Handle<v8::Value> wrapAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLPreElement.wrap._get");
    HTMLPreElement* imp = V8HTMLPreElement::toNative(info.Holder());
    return v8Boolean(imp->hasAttribute(WebCore::HTMLNames::wrapAttr));
}

static void wrapAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLPreElement.wrap._set");
    HTMLPreElement* imp = V8HTMLPreElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setBooleanAttribute(WebCore::HTMLNames::wrapAttr, v);
    return;
}

} // namespace HTMLPreElementInternal

static const BatchedAttribute HTMLPreElementAttrs[] = {
    // Attribute 'width' (Type: 'attribute' ExtAttr: 'Reflect')
    {"width", HTMLPreElementInternal::widthAttrGetter, HTMLPreElementInternal::widthAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'wrap' (Type: 'attribute' ExtAttr: 'Reflect')
    {"wrap", HTMLPreElementInternal::wrapAttrGetter, HTMLPreElementInternal::wrapAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLPreElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLPreElement", V8HTMLElement::GetTemplate(), V8HTMLPreElement::internalFieldCount,
        HTMLPreElementAttrs, sizeof(HTMLPreElementAttrs) / sizeof(*HTMLPreElementAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLPreElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLPreElementRawCache = createRawTemplate();
    return V8HTMLPreElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLPreElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLPreElementCache = ConfigureV8HTMLPreElementTemplate(GetRawTemplate());
    return V8HTMLPreElementCache;
}

HTMLPreElement* V8HTMLPreElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<HTMLPreElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8HTMLPreElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLPreElement::wrap(HTMLPreElement* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<HTMLPreElement > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(HTMLPreElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8HTMLPreElement::wrap(impl);
}

void V8HTMLPreElement::derefObject(void* object)
{
    static_cast<HTMLPreElement*>(object)->deref();
}

} // namespace WebCore