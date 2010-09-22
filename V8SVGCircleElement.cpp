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
#include "V8SVGCircleElement.h"

#if ENABLE(SVG)

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
#include "V8SVGAnimatedBoolean.h"
#include "V8SVGAnimatedLength.h"
#include "V8SVGAnimatedString.h"
#include "V8SVGAnimatedTransformList.h"
#include "V8SVGElement.h"
#include "V8SVGMatrix.h"
#include "V8SVGPODTypeWrapper.h"
#include "V8SVGRect.h"
#include "V8SVGStringList.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8SVGCircleElement::info = { V8SVGCircleElement::GetTemplate, V8SVGCircleElement::derefObject, 0 };

namespace SVGCircleElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> cxAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGCircleElement.cx._get");
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedLength> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->cxAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> cyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGCircleElement.cy._get");
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedLength> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->cyAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> rAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGCircleElement.r._get");
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedLength> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->rAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> requiredFeaturesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGCircleElement.requiredFeatures._get");
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGStringList> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->requiredFeatures(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> requiredExtensionsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGCircleElement.requiredExtensions._get");
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGStringList> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->requiredExtensions(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> systemLanguageAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGCircleElement.systemLanguage._get");
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGStringList> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->systemLanguage(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> xmllangAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGCircleElement.xmllang._get");
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    return v8String(imp->xmllang());
}

static void xmllangAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGCircleElement.xmllang._set");
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    V8Parameter<> v = value;
    imp->setXmllang(v);
    return;
}

static v8::Handle<v8::Value> xmlspaceAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGCircleElement.xmlspace._get");
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    return v8String(imp->xmlspace());
}

static void xmlspaceAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGCircleElement.xmlspace._set");
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    V8Parameter<> v = value;
    imp->setXmlspace(v);
    return;
}

static v8::Handle<v8::Value> externalResourcesRequiredAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGCircleElement.externalResourcesRequired._get");
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedBoolean> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->externalResourcesRequiredAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> classNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGCircleElement.className._get");
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedString> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->classNameAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> styleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGCircleElement.style._get");
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    return toV8(imp->style());
}

static v8::Handle<v8::Value> transformAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGCircleElement.transform._get");
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedTransformList> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->transformAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> nearestViewportElementAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGCircleElement.nearestViewportElement._get");
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    return toV8(imp->nearestViewportElement());
}

static v8::Handle<v8::Value> farthestViewportElementAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGCircleElement.farthestViewportElement._get");
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    return toV8(imp->farthestViewportElement());
}

static v8::Handle<v8::Value> hasExtensionCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGCircleElement.hasExtension");
    SVGCircleElement* imp = V8SVGCircleElement::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, extension, args[0]);
    return v8Boolean(imp->hasExtension(extension));
}

static v8::Handle<v8::Value> getPresentationAttributeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGCircleElement.getPresentationAttribute");
    SVGCircleElement* imp = V8SVGCircleElement::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, name, args[0]);
    return toV8(imp->getPresentationAttribute(name));
}

static v8::Handle<v8::Value> getBBoxCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGCircleElement.getBBox");
    SVGCircleElement* imp = V8SVGCircleElement::toNative(args.Holder());
    FloatRect result = imp->getBBox();
    RefPtr<V8SVGPODTypeWrapper<FloatRect> > wrapper = V8SVGStaticPODTypeWrapper<FloatRect>::create(result);
    SVGElement* context = imp;
    V8Proxy::setSVGContext(wrapper.get(), context);
    return toV8(wrapper.release());
}

static v8::Handle<v8::Value> getCTMCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGCircleElement.getCTM");
    SVGCircleElement* imp = V8SVGCircleElement::toNative(args.Holder());
    AffineTransform result = imp->getCTM();
    RefPtr<V8SVGPODTypeWrapper<AffineTransform> > wrapper = V8SVGStaticPODTypeWrapper<AffineTransform>::create(result);
    SVGElement* context = imp;
    V8Proxy::setSVGContext(wrapper.get(), context);
    return toV8(wrapper.release());
}

static v8::Handle<v8::Value> getScreenCTMCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGCircleElement.getScreenCTM");
    SVGCircleElement* imp = V8SVGCircleElement::toNative(args.Holder());
    AffineTransform result = imp->getScreenCTM();
    RefPtr<V8SVGPODTypeWrapper<AffineTransform> > wrapper = V8SVGStaticPODTypeWrapper<AffineTransform>::create(result);
    SVGElement* context = imp;
    V8Proxy::setSVGContext(wrapper.get(), context);
    return toV8(wrapper.release());
}

static v8::Handle<v8::Value> getTransformToElementCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGCircleElement.getTransformToElement");
    SVGCircleElement* imp = V8SVGCircleElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(SVGElement*, element, V8SVGElement::HasInstance(args[0]) ? V8SVGElement::toNative(v8::Handle<v8::Object>::Cast(args[0])) : 0);
    AffineTransform result = imp->getTransformToElement(element, ec);
    if (UNLIKELY(ec))
        goto fail;
    RefPtr<V8SVGPODTypeWrapper<AffineTransform> > wrapper = V8SVGStaticPODTypeWrapper<AffineTransform>::create(result);
    SVGElement* context = imp;
    V8Proxy::setSVGContext(wrapper.get(), context);
    return toV8(wrapper.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

} // namespace SVGCircleElementInternal

static const BatchedAttribute SVGCircleElementAttrs[] = {
    // Attribute 'cx' (Type: 'readonly attribute' ExtAttr: '')
    {"cx", SVGCircleElementInternal::cxAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'cy' (Type: 'readonly attribute' ExtAttr: '')
    {"cy", SVGCircleElementInternal::cyAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'r' (Type: 'readonly attribute' ExtAttr: '')
    {"r", SVGCircleElementInternal::rAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'requiredFeatures' (Type: 'readonly attribute' ExtAttr: '')
    {"requiredFeatures", SVGCircleElementInternal::requiredFeaturesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'requiredExtensions' (Type: 'readonly attribute' ExtAttr: '')
    {"requiredExtensions", SVGCircleElementInternal::requiredExtensionsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'systemLanguage' (Type: 'readonly attribute' ExtAttr: '')
    {"systemLanguage", SVGCircleElementInternal::systemLanguageAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'xmllang' (Type: 'attribute' ExtAttr: '')
    {"xmllang", SVGCircleElementInternal::xmllangAttrGetter, SVGCircleElementInternal::xmllangAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'xmlspace' (Type: 'attribute' ExtAttr: '')
    {"xmlspace", SVGCircleElementInternal::xmlspaceAttrGetter, SVGCircleElementInternal::xmlspaceAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'externalResourcesRequired' (Type: 'readonly attribute' ExtAttr: '')
    {"externalResourcesRequired", SVGCircleElementInternal::externalResourcesRequiredAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'className' (Type: 'readonly attribute' ExtAttr: '')
    {"className", SVGCircleElementInternal::classNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'style' (Type: 'readonly attribute' ExtAttr: '')
    {"style", SVGCircleElementInternal::styleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'transform' (Type: 'readonly attribute' ExtAttr: '')
    {"transform", SVGCircleElementInternal::transformAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'nearestViewportElement' (Type: 'readonly attribute' ExtAttr: '')
    {"nearestViewportElement", SVGCircleElementInternal::nearestViewportElementAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'farthestViewportElement' (Type: 'readonly attribute' ExtAttr: '')
    {"farthestViewportElement", SVGCircleElementInternal::farthestViewportElementAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback SVGCircleElementCallbacks[] = {
    {"hasExtension", SVGCircleElementInternal::hasExtensionCallback},
    {"getPresentationAttribute", SVGCircleElementInternal::getPresentationAttributeCallback},
    {"getBBox", SVGCircleElementInternal::getBBoxCallback},
    {"getCTM", SVGCircleElementInternal::getCTMCallback},
    {"getScreenCTM", SVGCircleElementInternal::getScreenCTMCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGCircleElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGCircleElement", V8SVGElement::GetTemplate(), V8SVGCircleElement::internalFieldCount,
        SVGCircleElementAttrs, sizeof(SVGCircleElementAttrs) / sizeof(*SVGCircleElementAttrs),
        SVGCircleElementCallbacks, sizeof(SVGCircleElementCallbacks) / sizeof(*SVGCircleElementCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom Signature 'getTransformToElement'
    const int getTransformToElementArgc = 1;
    v8::Handle<v8::FunctionTemplate> getTransformToElementArgv[getTransformToElementArgc] = { V8SVGElement::GetRawTemplate() };
    v8::Handle<v8::Signature> getTransformToElementSignature = v8::Signature::New(desc, getTransformToElementArgc, getTransformToElementArgv);
    proto->Set(v8::String::New("getTransformToElement"), v8::FunctionTemplate::New(SVGCircleElementInternal::getTransformToElementCallback, v8::Handle<v8::Value>(), getTransformToElementSignature));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGCircleElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGCircleElementRawCache = createRawTemplate();
    return V8SVGCircleElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8SVGCircleElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGCircleElementCache = ConfigureV8SVGCircleElementTemplate(GetRawTemplate());
    return V8SVGCircleElementCache;
}

SVGCircleElement* V8SVGCircleElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<SVGCircleElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8SVGCircleElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGCircleElement::wrap(SVGCircleElement* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<SVGCircleElement > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(SVGCircleElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8SVGCircleElement::wrap(impl);
}

void V8SVGCircleElement::derefObject(void* object)
{
    static_cast<SVGCircleElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)