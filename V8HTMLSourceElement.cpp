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
#include "V8HTMLSourceElement.h"

#if ENABLE(VIDEO)

#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8HTMLElement.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8HTMLSourceElement::info = { V8HTMLSourceElement::GetTemplate, V8HTMLSourceElement::derefObject, 0 };

namespace HTMLSourceElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> srcAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLSourceElement.src._get");
    HTMLSourceElement* imp = V8HTMLSourceElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8String(imp->getURLAttribute(WebCore::HTMLNames::srcAttr));
}

static void srcAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLSourceElement.src._set");
    setElementStringAttr(info, HTMLNames::srcAttr, value);
}

static v8::Handle<v8::Value> typeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLSourceElement.type._get");
    HTMLSourceElement* imp = V8HTMLSourceElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8String(imp->type());
}

static void typeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLSourceElement.type._set");
    HTMLSourceElement* imp = V8HTMLSourceElement::toNative(info.Holder());
    V8Parameter<> v = value;
    imp->setType(v);
    return;
}

static v8::Handle<v8::Value> mediaAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLSourceElement.media._get");
    HTMLSourceElement* imp = V8HTMLSourceElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8String(imp->media());
}

static void mediaAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLSourceElement.media._set");
    HTMLSourceElement* imp = V8HTMLSourceElement::toNative(info.Holder());
    V8Parameter<> v = value;
    imp->setMedia(v);
    return;
}

} // namespace HTMLSourceElementInternal

static const BatchedAttribute HTMLSourceElementAttrs[] = {
    // Attribute 'src' (Type: 'attribute' ExtAttr: 'URL Reflect')
    {"src", HTMLSourceElementInternal::srcAttrGetter, HTMLSourceElementInternal::srcAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'type' (Type: 'attribute' ExtAttr: '')
    {"type", HTMLSourceElementInternal::typeAttrGetter, HTMLSourceElementInternal::typeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'media' (Type: 'attribute' ExtAttr: '')
    {"media", HTMLSourceElementInternal::mediaAttrGetter, HTMLSourceElementInternal::mediaAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLSourceElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLSourceElement", V8HTMLElement::GetTemplate(), V8HTMLSourceElement::internalFieldCount,
        HTMLSourceElementAttrs, sizeof(HTMLSourceElementAttrs) / sizeof(*HTMLSourceElementAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLSourceElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLSourceElementRawCache = createRawTemplate();
    return V8HTMLSourceElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLSourceElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLSourceElementCache = ConfigureV8HTMLSourceElementTemplate(GetRawTemplate());
    return V8HTMLSourceElementCache;
}

HTMLSourceElement* V8HTMLSourceElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<HTMLSourceElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8HTMLSourceElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLSourceElement::wrap(HTMLSourceElement* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<HTMLSourceElement > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(HTMLSourceElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8HTMLSourceElement::wrap(impl);
}

void V8HTMLSourceElement::derefObject(void* object)
{
    static_cast<HTMLSourceElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(VIDEO)
