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
#include "V8SVGAnimatedLength.h"

#if ENABLE(SVG)

#include "RuntimeEnabledFeatures.h"
#include "SVGAnimatedTemplate.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8SVGLength.h"
#include "V8SVGPODTypeWrapper.h"

namespace WebCore {

WrapperTypeInfo V8SVGAnimatedLength::info = { V8SVGAnimatedLength::GetTemplate, V8SVGAnimatedLength::derefObject, 0 };

namespace SVGAnimatedLengthInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> baseValAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGAnimatedLength.baseVal._get");
    SVGAnimatedLength* imp = V8SVGAnimatedLength::toNative(info.Holder());
    RefPtr<V8SVGPODTypeWrapper<SVGLength> > wrapper = V8SVGDynamicPODTypeWrapperCache<SVGLength, SVGAnimatedLength>::lookupOrCreateWrapper(imp, &SVGAnimatedLength::baseVal, &SVGAnimatedLength::setBaseVal, 0x7e4ad0cd);
    SVGElement* context = V8Proxy::svgContext(imp);
    V8Proxy::setSVGContext(wrapper.get(), context);
    return toV8(wrapper.release().get());
}

static v8::Handle<v8::Value> animValAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGAnimatedLength.animVal._get");
    SVGAnimatedLength* imp = V8SVGAnimatedLength::toNative(info.Holder());
    RefPtr<V8SVGPODTypeWrapper<SVGLength> > wrapper = V8SVGDynamicPODTypeWrapperCache<SVGLength, SVGAnimatedLength>::lookupOrCreateWrapper(imp, &SVGAnimatedLength::animVal, &SVGAnimatedLength::setAnimVal, 0x6ba9e2dd);
    SVGElement* context = V8Proxy::svgContext(imp);
    V8Proxy::setSVGContext(wrapper.get(), context);
    return toV8(wrapper.release().get());
}

} // namespace SVGAnimatedLengthInternal

static const BatchedAttribute SVGAnimatedLengthAttrs[] = {
    // Attribute 'baseVal' (Type: 'readonly attribute' ExtAttr: '')
    {"baseVal", SVGAnimatedLengthInternal::baseValAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'animVal' (Type: 'readonly attribute' ExtAttr: '')
    {"animVal", SVGAnimatedLengthInternal::animValAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGAnimatedLengthTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGAnimatedLength", v8::Persistent<v8::FunctionTemplate>(), V8SVGAnimatedLength::internalFieldCount,
        SVGAnimatedLengthAttrs, sizeof(SVGAnimatedLengthAttrs) / sizeof(*SVGAnimatedLengthAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGAnimatedLength::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGAnimatedLengthRawCache = createRawTemplate();
    return V8SVGAnimatedLengthRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8SVGAnimatedLength::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGAnimatedLengthCache = ConfigureV8SVGAnimatedLengthTemplate(GetRawTemplate());
    return V8SVGAnimatedLengthCache;
}

SVGAnimatedLength* V8SVGAnimatedLength::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<SVGAnimatedLength*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8SVGAnimatedLength::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGAnimatedLength::wrap(SVGAnimatedLength* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<SVGAnimatedLength > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(SVGAnimatedLength* impl)
{
    if (!impl)
        return v8::Null();
    return V8SVGAnimatedLength::wrap(impl);
}

void V8SVGAnimatedLength::derefObject(void* object)
{
    static_cast<SVGAnimatedLength*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)