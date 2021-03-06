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
#include "V8SVGFEFloodElement.h"

#if ENABLE(SVG) && ENABLE(FILTERS)

#include "CSSMutableStyleDeclaration.h"
#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8CSSStyleDeclaration.h"
#include "V8CSSValue.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8SVGAnimatedLength.h"
#include "V8SVGAnimatedString.h"
#include "V8SVGElement.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8SVGFEFloodElement::info = { V8SVGFEFloodElement::GetTemplate, V8SVGFEFloodElement::derefObject, 0 };

namespace SVGFEFloodElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> xAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEFloodElement.x._get");
    SVGFEFloodElement* imp = V8SVGFEFloodElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedLength> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->xAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> yAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEFloodElement.y._get");
    SVGFEFloodElement* imp = V8SVGFEFloodElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedLength> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->yAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> widthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEFloodElement.width._get");
    SVGFEFloodElement* imp = V8SVGFEFloodElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedLength> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->widthAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> heightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEFloodElement.height._get");
    SVGFEFloodElement* imp = V8SVGFEFloodElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedLength> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->heightAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> resultAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEFloodElement.result._get");
    SVGFEFloodElement* imp = V8SVGFEFloodElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedString> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->resultAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> classNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEFloodElement.className._get");
    SVGFEFloodElement* imp = V8SVGFEFloodElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedString> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->classNameAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> styleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEFloodElement.style._get");
    SVGFEFloodElement* imp = V8SVGFEFloodElement::toNative(info.Holder());
    return toV8(imp->style());
}

static v8::Handle<v8::Value> getPresentationAttributeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGFEFloodElement.getPresentationAttribute");
    SVGFEFloodElement* imp = V8SVGFEFloodElement::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, name, args[0]);
    return toV8(imp->getPresentationAttribute(name));
}

} // namespace SVGFEFloodElementInternal

static const BatchedAttribute SVGFEFloodElementAttrs[] = {
    // Attribute 'x' (Type: 'readonly attribute' ExtAttr: '')
    {"x", SVGFEFloodElementInternal::xAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'y' (Type: 'readonly attribute' ExtAttr: '')
    {"y", SVGFEFloodElementInternal::yAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'width' (Type: 'readonly attribute' ExtAttr: '')
    {"width", SVGFEFloodElementInternal::widthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'height' (Type: 'readonly attribute' ExtAttr: '')
    {"height", SVGFEFloodElementInternal::heightAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'result' (Type: 'readonly attribute' ExtAttr: '')
    {"result", SVGFEFloodElementInternal::resultAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'className' (Type: 'readonly attribute' ExtAttr: '')
    {"className", SVGFEFloodElementInternal::classNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'style' (Type: 'readonly attribute' ExtAttr: '')
    {"style", SVGFEFloodElementInternal::styleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback SVGFEFloodElementCallbacks[] = {
    {"getPresentationAttribute", SVGFEFloodElementInternal::getPresentationAttributeCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGFEFloodElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGFEFloodElement", V8SVGElement::GetTemplate(), V8SVGFEFloodElement::internalFieldCount,
        SVGFEFloodElementAttrs, sizeof(SVGFEFloodElementAttrs) / sizeof(*SVGFEFloodElementAttrs),
        SVGFEFloodElementCallbacks, sizeof(SVGFEFloodElementCallbacks) / sizeof(*SVGFEFloodElementCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGFEFloodElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGFEFloodElementRawCache = createRawTemplate();
    return V8SVGFEFloodElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8SVGFEFloodElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGFEFloodElementCache = ConfigureV8SVGFEFloodElementTemplate(GetRawTemplate());
    return V8SVGFEFloodElementCache;
}

SVGFEFloodElement* V8SVGFEFloodElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<SVGFEFloodElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8SVGFEFloodElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGFEFloodElement::wrap(SVGFEFloodElement* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<SVGFEFloodElement > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(SVGFEFloodElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8SVGFEFloodElement::wrap(impl);
}

void V8SVGFEFloodElement::derefObject(void* object)
{
    static_cast<SVGFEFloodElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG) && ENABLE(FILTERS)
