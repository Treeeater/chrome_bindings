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
#include "V8SVGPathSegLinetoHorizontalAbs.h"

#if ENABLE(SVG)

#include "RuntimeEnabledFeatures.h"
#include "SVGElement.h"
#include "SVGPathSegLinetoHorizontal.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8SVGPathSeg.h"

namespace WebCore {

WrapperTypeInfo V8SVGPathSegLinetoHorizontalAbs::info = { V8SVGPathSegLinetoHorizontalAbs::GetTemplate, V8SVGPathSegLinetoHorizontalAbs::derefObject, 0 };

namespace SVGPathSegLinetoHorizontalAbsInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> xAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPathSegLinetoHorizontalAbs.x._get");
    SVGPathSegLinetoHorizontalAbs* imp = V8SVGPathSegLinetoHorizontalAbs::toNative(info.Holder());
    return v8::Number::New(imp->x());
}

static void xAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPathSegLinetoHorizontalAbs.x._set");
    SVGPathSegLinetoHorizontalAbs* imp = V8SVGPathSegLinetoHorizontalAbs::toNative(info.Holder());
    float v = static_cast<float>(value->NumberValue());
    imp->setX(v);
    if (SVGElement* context = V8Proxy::svgContext(imp))
        context->svgAttributeChanged(imp->associatedAttributeName());
    return;
}

} // namespace SVGPathSegLinetoHorizontalAbsInternal

static const BatchedAttribute SVGPathSegLinetoHorizontalAbsAttrs[] = {
    // Attribute 'x' (Type: 'attribute' ExtAttr: '')
    {"x", SVGPathSegLinetoHorizontalAbsInternal::xAttrGetter, SVGPathSegLinetoHorizontalAbsInternal::xAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGPathSegLinetoHorizontalAbsTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGPathSegLinetoHorizontalAbs", V8SVGPathSeg::GetTemplate(), V8SVGPathSegLinetoHorizontalAbs::internalFieldCount,
        SVGPathSegLinetoHorizontalAbsAttrs, sizeof(SVGPathSegLinetoHorizontalAbsAttrs) / sizeof(*SVGPathSegLinetoHorizontalAbsAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGPathSegLinetoHorizontalAbs::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGPathSegLinetoHorizontalAbsRawCache = createRawTemplate();
    return V8SVGPathSegLinetoHorizontalAbsRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8SVGPathSegLinetoHorizontalAbs::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGPathSegLinetoHorizontalAbsCache = ConfigureV8SVGPathSegLinetoHorizontalAbsTemplate(GetRawTemplate());
    return V8SVGPathSegLinetoHorizontalAbsCache;
}

SVGPathSegLinetoHorizontalAbs* V8SVGPathSegLinetoHorizontalAbs::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<SVGPathSegLinetoHorizontalAbs*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8SVGPathSegLinetoHorizontalAbs::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGPathSegLinetoHorizontalAbs::wrap(SVGPathSegLinetoHorizontalAbs* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<SVGPathSegLinetoHorizontalAbs > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(SVGPathSegLinetoHorizontalAbs* impl)
{
    if (!impl)
        return v8::Null();
    return V8SVGPathSegLinetoHorizontalAbs::wrap(impl);
}

void V8SVGPathSegLinetoHorizontalAbs::derefObject(void* object)
{
    static_cast<SVGPathSegLinetoHorizontalAbs*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
