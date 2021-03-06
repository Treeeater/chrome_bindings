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
#include "V8SVGPolygonElement.h"

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
#include "V8SVGAnimatedString.h"
#include "V8SVGAnimatedTransformList.h"
#include "V8SVGElement.h"
#include "V8SVGMatrix.h"
#include "V8SVGPODTypeWrapper.h"
#include "V8SVGPointList.h"
#include "V8SVGRect.h"
#include "V8SVGStringList.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8SVGPolygonElement::info = { V8SVGPolygonElement::GetTemplate, V8SVGPolygonElement::derefObject, 0 };

namespace SVGPolygonElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> requiredFeaturesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPolygonElement.requiredFeatures._get");
    SVGPolygonElement* imp = V8SVGPolygonElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGStringList> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->requiredFeatures(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> requiredExtensionsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPolygonElement.requiredExtensions._get");
    SVGPolygonElement* imp = V8SVGPolygonElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGStringList> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->requiredExtensions(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> systemLanguageAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPolygonElement.systemLanguage._get");
    SVGPolygonElement* imp = V8SVGPolygonElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGStringList> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->systemLanguage(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> xmllangAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPolygonElement.xmllang._get");
    SVGPolygonElement* imp = V8SVGPolygonElement::toNative(info.Holder());
    return v8String(imp->xmllang());
}

static void xmllangAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPolygonElement.xmllang._set");
    SVGPolygonElement* imp = V8SVGPolygonElement::toNative(info.Holder());
    V8Parameter<> v = value;
    imp->setXmllang(v);
    return;
}

static v8::Handle<v8::Value> xmlspaceAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPolygonElement.xmlspace._get");
    SVGPolygonElement* imp = V8SVGPolygonElement::toNative(info.Holder());
    return v8String(imp->xmlspace());
}

static void xmlspaceAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPolygonElement.xmlspace._set");
    SVGPolygonElement* imp = V8SVGPolygonElement::toNative(info.Holder());
    V8Parameter<> v = value;
    imp->setXmlspace(v);
    return;
}

static v8::Handle<v8::Value> externalResourcesRequiredAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPolygonElement.externalResourcesRequired._get");
    SVGPolygonElement* imp = V8SVGPolygonElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedBoolean> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->externalResourcesRequiredAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> classNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPolygonElement.className._get");
    SVGPolygonElement* imp = V8SVGPolygonElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedString> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->classNameAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> styleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPolygonElement.style._get");
    SVGPolygonElement* imp = V8SVGPolygonElement::toNative(info.Holder());
    return toV8(imp->style());
}

static v8::Handle<v8::Value> transformAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPolygonElement.transform._get");
    SVGPolygonElement* imp = V8SVGPolygonElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedTransformList> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->transformAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> nearestViewportElementAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPolygonElement.nearestViewportElement._get");
    SVGPolygonElement* imp = V8SVGPolygonElement::toNative(info.Holder());
    return toV8(imp->nearestViewportElement());
}

static v8::Handle<v8::Value> farthestViewportElementAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPolygonElement.farthestViewportElement._get");
    SVGPolygonElement* imp = V8SVGPolygonElement::toNative(info.Holder());
    return toV8(imp->farthestViewportElement());
}

static v8::Handle<v8::Value> pointsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPolygonElement.points._get");
    SVGPolygonElement* imp = V8SVGPolygonElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGPointList> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->points(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> animatedPointsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPolygonElement.animatedPoints._get");
    SVGPolygonElement* imp = V8SVGPolygonElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGPointList> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->animatedPoints(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> hasExtensionCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPolygonElement.hasExtension");
    SVGPolygonElement* imp = V8SVGPolygonElement::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, extension, args[0]);
    return v8Boolean(imp->hasExtension(extension));
}

static v8::Handle<v8::Value> getPresentationAttributeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPolygonElement.getPresentationAttribute");
    SVGPolygonElement* imp = V8SVGPolygonElement::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, name, args[0]);
    return toV8(imp->getPresentationAttribute(name));
}

static v8::Handle<v8::Value> getBBoxCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPolygonElement.getBBox");
    SVGPolygonElement* imp = V8SVGPolygonElement::toNative(args.Holder());
    FloatRect result = imp->getBBox();
    RefPtr<V8SVGPODTypeWrapper<FloatRect> > wrapper = V8SVGStaticPODTypeWrapper<FloatRect>::create(result);
    SVGElement* context = imp;
    V8Proxy::setSVGContext(wrapper.get(), context);
    return toV8(wrapper.release());
}

static v8::Handle<v8::Value> getCTMCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPolygonElement.getCTM");
    SVGPolygonElement* imp = V8SVGPolygonElement::toNative(args.Holder());
    AffineTransform result = imp->getCTM();
    RefPtr<V8SVGPODTypeWrapper<AffineTransform> > wrapper = V8SVGStaticPODTypeWrapper<AffineTransform>::create(result);
    SVGElement* context = imp;
    V8Proxy::setSVGContext(wrapper.get(), context);
    return toV8(wrapper.release());
}

static v8::Handle<v8::Value> getScreenCTMCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPolygonElement.getScreenCTM");
    SVGPolygonElement* imp = V8SVGPolygonElement::toNative(args.Holder());
    AffineTransform result = imp->getScreenCTM();
    RefPtr<V8SVGPODTypeWrapper<AffineTransform> > wrapper = V8SVGStaticPODTypeWrapper<AffineTransform>::create(result);
    SVGElement* context = imp;
    V8Proxy::setSVGContext(wrapper.get(), context);
    return toV8(wrapper.release());
}

static v8::Handle<v8::Value> getTransformToElementCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPolygonElement.getTransformToElement");
    SVGPolygonElement* imp = V8SVGPolygonElement::toNative(args.Holder());
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

} // namespace SVGPolygonElementInternal

static const BatchedAttribute SVGPolygonElementAttrs[] = {
    // Attribute 'requiredFeatures' (Type: 'readonly attribute' ExtAttr: '')
    {"requiredFeatures", SVGPolygonElementInternal::requiredFeaturesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'requiredExtensions' (Type: 'readonly attribute' ExtAttr: '')
    {"requiredExtensions", SVGPolygonElementInternal::requiredExtensionsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'systemLanguage' (Type: 'readonly attribute' ExtAttr: '')
    {"systemLanguage", SVGPolygonElementInternal::systemLanguageAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'xmllang' (Type: 'attribute' ExtAttr: '')
    {"xmllang", SVGPolygonElementInternal::xmllangAttrGetter, SVGPolygonElementInternal::xmllangAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'xmlspace' (Type: 'attribute' ExtAttr: '')
    {"xmlspace", SVGPolygonElementInternal::xmlspaceAttrGetter, SVGPolygonElementInternal::xmlspaceAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'externalResourcesRequired' (Type: 'readonly attribute' ExtAttr: '')
    {"externalResourcesRequired", SVGPolygonElementInternal::externalResourcesRequiredAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'className' (Type: 'readonly attribute' ExtAttr: '')
    {"className", SVGPolygonElementInternal::classNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'style' (Type: 'readonly attribute' ExtAttr: '')
    {"style", SVGPolygonElementInternal::styleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'transform' (Type: 'readonly attribute' ExtAttr: '')
    {"transform", SVGPolygonElementInternal::transformAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'nearestViewportElement' (Type: 'readonly attribute' ExtAttr: '')
    {"nearestViewportElement", SVGPolygonElementInternal::nearestViewportElementAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'farthestViewportElement' (Type: 'readonly attribute' ExtAttr: '')
    {"farthestViewportElement", SVGPolygonElementInternal::farthestViewportElementAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'points' (Type: 'readonly attribute' ExtAttr: '')
    {"points", SVGPolygonElementInternal::pointsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'animatedPoints' (Type: 'readonly attribute' ExtAttr: '')
    {"animatedPoints", SVGPolygonElementInternal::animatedPointsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback SVGPolygonElementCallbacks[] = {
    {"hasExtension", SVGPolygonElementInternal::hasExtensionCallback},
    {"getPresentationAttribute", SVGPolygonElementInternal::getPresentationAttributeCallback},
    {"getBBox", SVGPolygonElementInternal::getBBoxCallback},
    {"getCTM", SVGPolygonElementInternal::getCTMCallback},
    {"getScreenCTM", SVGPolygonElementInternal::getScreenCTMCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGPolygonElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGPolygonElement", V8SVGElement::GetTemplate(), V8SVGPolygonElement::internalFieldCount,
        SVGPolygonElementAttrs, sizeof(SVGPolygonElementAttrs) / sizeof(*SVGPolygonElementAttrs),
        SVGPolygonElementCallbacks, sizeof(SVGPolygonElementCallbacks) / sizeof(*SVGPolygonElementCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom Signature 'getTransformToElement'
    const int getTransformToElementArgc = 1;
    v8::Handle<v8::FunctionTemplate> getTransformToElementArgv[getTransformToElementArgc] = { V8SVGElement::GetRawTemplate() };
    v8::Handle<v8::Signature> getTransformToElementSignature = v8::Signature::New(desc, getTransformToElementArgc, getTransformToElementArgv);
    proto->Set(v8::String::New("getTransformToElement"), v8::FunctionTemplate::New(SVGPolygonElementInternal::getTransformToElementCallback, v8::Handle<v8::Value>(), getTransformToElementSignature));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGPolygonElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGPolygonElementRawCache = createRawTemplate();
    return V8SVGPolygonElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8SVGPolygonElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGPolygonElementCache = ConfigureV8SVGPolygonElementTemplate(GetRawTemplate());
    return V8SVGPolygonElementCache;
}

SVGPolygonElement* V8SVGPolygonElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<SVGPolygonElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8SVGPolygonElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGPolygonElement::wrap(SVGPolygonElement* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<SVGPolygonElement > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(SVGPolygonElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8SVGPolygonElement::wrap(impl);
}

void V8SVGPolygonElement::derefObject(void* object)
{
    static_cast<SVGPolygonElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
