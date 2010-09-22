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
#include "V8SVGFEPointLightElement.h"

#if ENABLE(SVG) && ENABLE(FILTERS)

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8SVGAnimatedNumber.h"
#include "V8SVGElement.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8SVGFEPointLightElement::info = { V8SVGFEPointLightElement::GetTemplate, V8SVGFEPointLightElement::derefObject, 0 };

namespace SVGFEPointLightElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> xAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEPointLightElement.x._get");
    SVGFEPointLightElement* imp = V8SVGFEPointLightElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedNumber> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->xAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> yAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEPointLightElement.y._get");
    SVGFEPointLightElement* imp = V8SVGFEPointLightElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedNumber> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->yAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> zAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEPointLightElement.z._get");
    SVGFEPointLightElement* imp = V8SVGFEPointLightElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedNumber> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->zAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

} // namespace SVGFEPointLightElementInternal

static const BatchedAttribute SVGFEPointLightElementAttrs[] = {
    // Attribute 'x' (Type: 'readonly attribute' ExtAttr: '')
    {"x", SVGFEPointLightElementInternal::xAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'y' (Type: 'readonly attribute' ExtAttr: '')
    {"y", SVGFEPointLightElementInternal::yAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'z' (Type: 'readonly attribute' ExtAttr: '')
    {"z", SVGFEPointLightElementInternal::zAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGFEPointLightElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGFEPointLightElement", V8SVGElement::GetTemplate(), V8SVGFEPointLightElement::internalFieldCount,
        SVGFEPointLightElementAttrs, sizeof(SVGFEPointLightElementAttrs) / sizeof(*SVGFEPointLightElementAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGFEPointLightElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGFEPointLightElementRawCache = createRawTemplate();
    return V8SVGFEPointLightElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8SVGFEPointLightElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGFEPointLightElementCache = ConfigureV8SVGFEPointLightElementTemplate(GetRawTemplate());
    return V8SVGFEPointLightElementCache;
}

SVGFEPointLightElement* V8SVGFEPointLightElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<SVGFEPointLightElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8SVGFEPointLightElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGFEPointLightElement::wrap(SVGFEPointLightElement* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<SVGFEPointLightElement > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(SVGFEPointLightElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8SVGFEPointLightElement::wrap(impl);
}

void V8SVGFEPointLightElement::derefObject(void* object)
{
    static_cast<SVGFEPointLightElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG) && ENABLE(FILTERS)
