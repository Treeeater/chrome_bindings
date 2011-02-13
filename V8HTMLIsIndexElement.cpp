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
#include "V8HTMLIsIndexElement.h"

#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8HTMLFormElement.h"
#include "V8HTMLInputElement.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8HTMLIsIndexElement::info = { V8HTMLIsIndexElement::GetTemplate, V8HTMLIsIndexElement::derefObject, 0 };

namespace HTMLIsIndexElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> formAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLIsIndexElement.form._get");
    HTMLIsIndexElement* imp = V8HTMLIsIndexElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return toV8(imp->form());
}

static v8::Handle<v8::Value> promptAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLIsIndexElement.prompt._get");
    return getElementStringAttr(info, HTMLNames::promptAttr);
}

static void promptAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLIsIndexElement.prompt._set");
    setElementStringAttr(info, HTMLNames::promptAttr, value);
}

} // namespace HTMLIsIndexElementInternal

static const BatchedAttribute HTMLIsIndexElementAttrs[] = {
    // Attribute 'form' (Type: 'readonly attribute' ExtAttr: '')
    {"form", HTMLIsIndexElementInternal::formAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'prompt' (Type: 'attribute' ExtAttr: 'Reflect')
    {"prompt", HTMLIsIndexElementInternal::promptAttrGetter, HTMLIsIndexElementInternal::promptAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLIsIndexElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLIsIndexElement", V8HTMLInputElement::GetTemplate(), V8HTMLIsIndexElement::internalFieldCount,
        HTMLIsIndexElementAttrs, sizeof(HTMLIsIndexElementAttrs) / sizeof(*HTMLIsIndexElementAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLIsIndexElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLIsIndexElementRawCache = createRawTemplate();
    return V8HTMLIsIndexElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLIsIndexElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLIsIndexElementCache = ConfigureV8HTMLIsIndexElementTemplate(GetRawTemplate());
    return V8HTMLIsIndexElementCache;
}

HTMLIsIndexElement* V8HTMLIsIndexElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<HTMLIsIndexElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8HTMLIsIndexElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLIsIndexElement::wrap(HTMLIsIndexElement* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<HTMLIsIndexElement > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(HTMLIsIndexElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8HTMLIsIndexElement::wrap(impl);
}

void V8HTMLIsIndexElement::derefObject(void* object)
{
    static_cast<HTMLIsIndexElement*>(object)->deref();
}

} // namespace WebCore
