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
#include "V8SVGFEMorphologyElement.h"

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
#include "V8SVGAnimatedEnumeration.h"
#include "V8SVGAnimatedLength.h"
#include "V8SVGAnimatedNumber.h"
#include "V8SVGAnimatedString.h"
#include "V8SVGElement.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8SVGFEMorphologyElement::info = { V8SVGFEMorphologyElement::GetTemplate, V8SVGFEMorphologyElement::derefObject, 0 };

namespace SVGFEMorphologyElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> in1AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEMorphologyElement.in1._get");
    SVGFEMorphologyElement* imp = V8SVGFEMorphologyElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedString> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->in1Animated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> operatorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEMorphologyElement.operator._get");
    SVGFEMorphologyElement* imp = V8SVGFEMorphologyElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedEnumeration> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->_operatorAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> radiusXAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEMorphologyElement.radiusX._get");
    SVGFEMorphologyElement* imp = V8SVGFEMorphologyElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedNumber> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->radiusXAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> radiusYAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEMorphologyElement.radiusY._get");
    SVGFEMorphologyElement* imp = V8SVGFEMorphologyElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedNumber> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->radiusYAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> xAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEMorphologyElement.x._get");
    SVGFEMorphologyElement* imp = V8SVGFEMorphologyElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedLength> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->xAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> yAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEMorphologyElement.y._get");
    SVGFEMorphologyElement* imp = V8SVGFEMorphologyElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedLength> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->yAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> widthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEMorphologyElement.width._get");
    SVGFEMorphologyElement* imp = V8SVGFEMorphologyElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedLength> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->widthAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> heightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEMorphologyElement.height._get");
    SVGFEMorphologyElement* imp = V8SVGFEMorphologyElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedLength> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->heightAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> resultAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEMorphologyElement.result._get");
    SVGFEMorphologyElement* imp = V8SVGFEMorphologyElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedString> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->resultAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> classNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEMorphologyElement.className._get");
    SVGFEMorphologyElement* imp = V8SVGFEMorphologyElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedString> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->classNameAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> styleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEMorphologyElement.style._get");
    SVGFEMorphologyElement* imp = V8SVGFEMorphologyElement::toNative(info.Holder());
    return toV8(imp->style());
}

static v8::Handle<v8::Value> setRadiusCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGFEMorphologyElement.setRadius");
    SVGFEMorphologyElement* imp = V8SVGFEMorphologyElement::toNative(args.Holder());
    EXCEPTION_BLOCK(float, radiusX, static_cast<float>(args[0]->NumberValue()));
    EXCEPTION_BLOCK(float, radiusY, static_cast<float>(args[1]->NumberValue()));
    imp->setRadius(radiusX, radiusY);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> getPresentationAttributeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGFEMorphologyElement.getPresentationAttribute");
    SVGFEMorphologyElement* imp = V8SVGFEMorphologyElement::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, name, args[0]);
    return toV8(imp->getPresentationAttribute(name));
}

} // namespace SVGFEMorphologyElementInternal

static const BatchedAttribute SVGFEMorphologyElementAttrs[] = {
    // Attribute 'in1' (Type: 'readonly attribute' ExtAttr: '')
    {"in1", SVGFEMorphologyElementInternal::in1AttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'operator' (Type: 'readonly attribute' ExtAttr: '')
    {"operator", SVGFEMorphologyElementInternal::operatorAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'radiusX' (Type: 'readonly attribute' ExtAttr: '')
    {"radiusX", SVGFEMorphologyElementInternal::radiusXAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'radiusY' (Type: 'readonly attribute' ExtAttr: '')
    {"radiusY", SVGFEMorphologyElementInternal::radiusYAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'x' (Type: 'readonly attribute' ExtAttr: '')
    {"x", SVGFEMorphologyElementInternal::xAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'y' (Type: 'readonly attribute' ExtAttr: '')
    {"y", SVGFEMorphologyElementInternal::yAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'width' (Type: 'readonly attribute' ExtAttr: '')
    {"width", SVGFEMorphologyElementInternal::widthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'height' (Type: 'readonly attribute' ExtAttr: '')
    {"height", SVGFEMorphologyElementInternal::heightAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'result' (Type: 'readonly attribute' ExtAttr: '')
    {"result", SVGFEMorphologyElementInternal::resultAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'className' (Type: 'readonly attribute' ExtAttr: '')
    {"className", SVGFEMorphologyElementInternal::classNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'style' (Type: 'readonly attribute' ExtAttr: '')
    {"style", SVGFEMorphologyElementInternal::styleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback SVGFEMorphologyElementCallbacks[] = {
    {"setRadius", SVGFEMorphologyElementInternal::setRadiusCallback},
    {"getPresentationAttribute", SVGFEMorphologyElementInternal::getPresentationAttributeCallback},
};
static const BatchedConstant SVGFEMorphologyElementConsts[] = {
    {"SVG_MORPHOLOGY_OPERATOR_UNKNOWN", static_cast<signed int>(0)},
    {"SVG_MORPHOLOGY_OPERATOR_ERODE", static_cast<signed int>(1)},
    {"SVG_MORPHOLOGY_OPERATOR_DILATE", static_cast<signed int>(2)},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGFEMorphologyElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGFEMorphologyElement", V8SVGElement::GetTemplate(), V8SVGFEMorphologyElement::internalFieldCount,
        SVGFEMorphologyElementAttrs, sizeof(SVGFEMorphologyElementAttrs) / sizeof(*SVGFEMorphologyElementAttrs),
        SVGFEMorphologyElementCallbacks, sizeof(SVGFEMorphologyElementCallbacks) / sizeof(*SVGFEMorphologyElementCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    batchConfigureConstants(desc, proto, SVGFEMorphologyElementConsts, sizeof(SVGFEMorphologyElementConsts) / sizeof(*SVGFEMorphologyElementConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGFEMorphologyElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGFEMorphologyElementRawCache = createRawTemplate();
    return V8SVGFEMorphologyElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8SVGFEMorphologyElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGFEMorphologyElementCache = ConfigureV8SVGFEMorphologyElementTemplate(GetRawTemplate());
    return V8SVGFEMorphologyElementCache;
}

SVGFEMorphologyElement* V8SVGFEMorphologyElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<SVGFEMorphologyElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8SVGFEMorphologyElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGFEMorphologyElement::wrap(SVGFEMorphologyElement* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<SVGFEMorphologyElement > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(SVGFEMorphologyElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8SVGFEMorphologyElement::wrap(impl);
}

void V8SVGFEMorphologyElement::derefObject(void* object)
{
    static_cast<SVGFEMorphologyElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG) && ENABLE(FILTERS)