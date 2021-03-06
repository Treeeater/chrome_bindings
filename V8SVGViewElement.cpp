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
#include "V8SVGViewElement.h"

#if ENABLE(SVG)

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8SVGAnimatedBoolean.h"
#include "V8SVGAnimatedPreserveAspectRatio.h"
#include "V8SVGAnimatedRect.h"
#include "V8SVGElement.h"
#include "V8SVGStringList.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8SVGViewElement::info = { V8SVGViewElement::GetTemplate, V8SVGViewElement::derefObject, 0 };

namespace SVGViewElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> viewTargetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGViewElement.viewTarget._get");
    SVGViewElement* imp = V8SVGViewElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGStringList> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->viewTarget(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> externalResourcesRequiredAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGViewElement.externalResourcesRequired._get");
    SVGViewElement* imp = V8SVGViewElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedBoolean> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->externalResourcesRequiredAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> viewBoxAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGViewElement.viewBox._get");
    SVGViewElement* imp = V8SVGViewElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedRect> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->viewBoxAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> preserveAspectRatioAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGViewElement.preserveAspectRatio._get");
    SVGViewElement* imp = V8SVGViewElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedPreserveAspectRatio> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->preserveAspectRatioAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> zoomAndPanAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGViewElement.zoomAndPan._get");
    SVGViewElement* imp = V8SVGViewElement::toNative(info.Holder());
    return v8::Integer::New(imp->zoomAndPan());
}

static void zoomAndPanAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGViewElement.zoomAndPan._set");
    SVGViewElement* imp = V8SVGViewElement::toNative(info.Holder());
    int v = toUInt32(value);
    imp->setZoomAndPan(v);
    return;
}

} // namespace SVGViewElementInternal

static const BatchedAttribute SVGViewElementAttrs[] = {
    // Attribute 'viewTarget' (Type: 'readonly attribute' ExtAttr: '')
    {"viewTarget", SVGViewElementInternal::viewTargetAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'externalResourcesRequired' (Type: 'readonly attribute' ExtAttr: '')
    {"externalResourcesRequired", SVGViewElementInternal::externalResourcesRequiredAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'viewBox' (Type: 'readonly attribute' ExtAttr: '')
    {"viewBox", SVGViewElementInternal::viewBoxAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'preserveAspectRatio' (Type: 'readonly attribute' ExtAttr: '')
    {"preserveAspectRatio", SVGViewElementInternal::preserveAspectRatioAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'zoomAndPan' (Type: 'attribute' ExtAttr: '')
    {"zoomAndPan", SVGViewElementInternal::zoomAndPanAttrGetter, SVGViewElementInternal::zoomAndPanAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedConstant SVGViewElementConsts[] = {
    {"SVG_ZOOMANDPAN_UNKNOWN", static_cast<signed int>(0)},
    {"SVG_ZOOMANDPAN_DISABLE", static_cast<signed int>(1)},
    {"SVG_ZOOMANDPAN_MAGNIFY", static_cast<signed int>(2)},
};

COMPILE_ASSERT(0 == SVGViewElement::SVG_ZOOMANDPAN_UNKNOWN, SVGViewElementEnumSVG_ZOOMANDPAN_UNKNOWNIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == SVGViewElement::SVG_ZOOMANDPAN_DISABLE, SVGViewElementEnumSVG_ZOOMANDPAN_DISABLEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == SVGViewElement::SVG_ZOOMANDPAN_MAGNIFY, SVGViewElementEnumSVG_ZOOMANDPAN_MAGNIFYIsWrongUseDontCheckEnums);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGViewElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGViewElement", V8SVGElement::GetTemplate(), V8SVGViewElement::internalFieldCount,
        SVGViewElementAttrs, sizeof(SVGViewElementAttrs) / sizeof(*SVGViewElementAttrs),
        0, 0);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    batchConfigureConstants(desc, proto, SVGViewElementConsts, sizeof(SVGViewElementConsts) / sizeof(*SVGViewElementConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGViewElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGViewElementRawCache = createRawTemplate();
    return V8SVGViewElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8SVGViewElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGViewElementCache = ConfigureV8SVGViewElementTemplate(GetRawTemplate());
    return V8SVGViewElementCache;
}

SVGViewElement* V8SVGViewElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<SVGViewElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8SVGViewElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGViewElement::wrap(SVGViewElement* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<SVGViewElement > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(SVGViewElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8SVGViewElement::wrap(impl);
}

void V8SVGViewElement::derefObject(void* object)
{
    static_cast<SVGViewElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
