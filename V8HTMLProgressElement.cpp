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
#include "V8HTMLProgressElement.h"

#if ENABLE(PROGRESS_TAG)

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8HTMLElement.h"
#include "V8HTMLFormElement.h"
#include "V8IsolatedContext.h"
#include "V8NodeList.h"
#include "V8Proxy.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8HTMLProgressElement::info = { V8HTMLProgressElement::GetTemplate, V8HTMLProgressElement::derefObject, 0 };

namespace HTMLProgressElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> valueAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLProgressElement.value._get");
    HTMLProgressElement* imp = V8HTMLProgressElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8::Number::New(imp->value());
}

static void valueAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLProgressElement.value._set");
    HTMLProgressElement* imp = V8HTMLProgressElement::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    ExceptionCode ec = 0;
    imp->setValue(v, ec);
    if (UNLIKELY(ec))
        V8Proxy::setDOMException(ec);
    return;
}

static v8::Handle<v8::Value> maxAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLProgressElement.max._get");
    HTMLProgressElement* imp = V8HTMLProgressElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8::Number::New(imp->max());
}

static void maxAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLProgressElement.max._set");
    HTMLProgressElement* imp = V8HTMLProgressElement::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    ExceptionCode ec = 0;
    imp->setMax(v, ec);
    if (UNLIKELY(ec))
        V8Proxy::setDOMException(ec);
    return;
}

static v8::Handle<v8::Value> positionAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLProgressElement.position._get");
    HTMLProgressElement* imp = V8HTMLProgressElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8::Number::New(imp->position());
}

static v8::Handle<v8::Value> formAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLProgressElement.form._get");
    HTMLProgressElement* imp = V8HTMLProgressElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return toV8(imp->form());
}

static v8::Handle<v8::Value> labelsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLProgressElement.labels._get");
    HTMLProgressElement* imp = V8HTMLProgressElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return toV8(imp->labels());
}

} // namespace HTMLProgressElementInternal

static const BatchedAttribute HTMLProgressElementAttrs[] = {
    // Attribute 'value' (Type: 'attribute' ExtAttr: '')
    {"value", HTMLProgressElementInternal::valueAttrGetter, HTMLProgressElementInternal::valueAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'max' (Type: 'attribute' ExtAttr: '')
    {"max", HTMLProgressElementInternal::maxAttrGetter, HTMLProgressElementInternal::maxAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'position' (Type: 'readonly attribute' ExtAttr: '')
    {"position", HTMLProgressElementInternal::positionAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'form' (Type: 'readonly attribute' ExtAttr: '')
    {"form", HTMLProgressElementInternal::formAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'labels' (Type: 'readonly attribute' ExtAttr: '')
    {"labels", HTMLProgressElementInternal::labelsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLProgressElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLProgressElement", V8HTMLElement::GetTemplate(), V8HTMLProgressElement::internalFieldCount,
        HTMLProgressElementAttrs, sizeof(HTMLProgressElementAttrs) / sizeof(*HTMLProgressElementAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLProgressElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLProgressElementRawCache = createRawTemplate();
    return V8HTMLProgressElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLProgressElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLProgressElementCache = ConfigureV8HTMLProgressElementTemplate(GetRawTemplate());
    return V8HTMLProgressElementCache;
}

HTMLProgressElement* V8HTMLProgressElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<HTMLProgressElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8HTMLProgressElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLProgressElement::wrap(HTMLProgressElement* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<HTMLProgressElement > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(HTMLProgressElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8HTMLProgressElement::wrap(impl);
}

void V8HTMLProgressElement::derefObject(void* object)
{
    static_cast<HTMLProgressElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(PROGRESS_TAG)
