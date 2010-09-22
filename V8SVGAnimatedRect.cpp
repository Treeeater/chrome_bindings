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
#include "V8SVGAnimatedRect.h"

#if ENABLE(SVG)

#include "FloatRect.h"
#include "RuntimeEnabledFeatures.h"
#include "SVGAnimatedTemplate.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8SVGPODTypeWrapper.h"
#include "V8SVGRect.h"

namespace WebCore {

WrapperTypeInfo V8SVGAnimatedRect::info = { V8SVGAnimatedRect::GetTemplate, V8SVGAnimatedRect::derefObject, 0 };

namespace SVGAnimatedRectInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> baseValAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGAnimatedRect.baseVal._get");
    SVGAnimatedRect* imp = V8SVGAnimatedRect::toNative(info.Holder());
    RefPtr<V8SVGPODTypeWrapper<FloatRect> > wrapper = V8SVGDynamicPODTypeWrapperCache<FloatRect, SVGAnimatedRect>::lookupOrCreateWrapper(imp, &SVGAnimatedRect::baseVal, &SVGAnimatedRect::setBaseVal, 0x208d3292);
    SVGElement* context = V8Proxy::svgContext(imp);
    V8Proxy::setSVGContext(wrapper.get(), context);
    return toV8(wrapper.release().get());
}

static v8::Handle<v8::Value> animValAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGAnimatedRect.animVal._get");
    SVGAnimatedRect* imp = V8SVGAnimatedRect::toNative(info.Holder());
    RefPtr<V8SVGPODTypeWrapper<FloatRect> > wrapper = V8SVGDynamicPODTypeWrapperCache<FloatRect, SVGAnimatedRect>::lookupOrCreateWrapper(imp, &SVGAnimatedRect::animVal, &SVGAnimatedRect::setAnimVal, 0x88cea743);
    SVGElement* context = V8Proxy::svgContext(imp);
    V8Proxy::setSVGContext(wrapper.get(), context);
    return toV8(wrapper.release().get());
}

} // namespace SVGAnimatedRectInternal

static const BatchedAttribute SVGAnimatedRectAttrs[] = {
    // Attribute 'baseVal' (Type: 'readonly attribute' ExtAttr: '')
    {"baseVal", SVGAnimatedRectInternal::baseValAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'animVal' (Type: 'readonly attribute' ExtAttr: '')
    {"animVal", SVGAnimatedRectInternal::animValAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGAnimatedRectTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGAnimatedRect", v8::Persistent<v8::FunctionTemplate>(), V8SVGAnimatedRect::internalFieldCount,
        SVGAnimatedRectAttrs, sizeof(SVGAnimatedRectAttrs) / sizeof(*SVGAnimatedRectAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGAnimatedRect::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGAnimatedRectRawCache = createRawTemplate();
    return V8SVGAnimatedRectRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8SVGAnimatedRect::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGAnimatedRectCache = ConfigureV8SVGAnimatedRectTemplate(GetRawTemplate());
    return V8SVGAnimatedRectCache;
}

SVGAnimatedRect* V8SVGAnimatedRect::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<SVGAnimatedRect*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8SVGAnimatedRect::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGAnimatedRect::wrap(SVGAnimatedRect* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
        wrapper = getDOMSVGObjectWithContextMap().get(impl);
        if (!wrapper.IsEmpty())
            return wrapper;
    wrapper = V8DOMWrapper::instantiateV8Object(proxy, &info, impl);
    if (wrapper.IsEmpty())
        return wrapper;

    impl->ref();
    getDOMSVGObjectWithContextMap().set(impl, v8::Persistent<v8::Object>::New(wrapper));
    return wrapper;
}

v8::Handle<v8::Value> toV8(PassRefPtr<SVGAnimatedRect > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(SVGAnimatedRect* impl)
{
    if (!impl)
        return v8::Null();
    return V8SVGAnimatedRect::wrap(impl);
}

void V8SVGAnimatedRect::derefObject(void* object)
{
    static_cast<SVGAnimatedRect*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)