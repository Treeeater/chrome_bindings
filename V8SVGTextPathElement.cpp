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
#include "V8SVGTextPathElement.h"

#if ENABLE(SVG)

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8SVGAnimatedEnumeration.h"
#include "V8SVGAnimatedLength.h"
#include "V8SVGAnimatedString.h"
#include "V8SVGTextContentElement.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8SVGTextPathElement::info = { V8SVGTextPathElement::GetTemplate, V8SVGTextPathElement::derefObject, 0 };

namespace SVGTextPathElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> startOffsetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGTextPathElement.startOffset._get");
    SVGTextPathElement* imp = V8SVGTextPathElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedLength> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->startOffsetAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> methodAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGTextPathElement.method._get");
    SVGTextPathElement* imp = V8SVGTextPathElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedEnumeration> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->methodAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> spacingAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGTextPathElement.spacing._get");
    SVGTextPathElement* imp = V8SVGTextPathElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedEnumeration> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->spacingAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> hrefAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGTextPathElement.href._get");
    SVGTextPathElement* imp = V8SVGTextPathElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedString> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->hrefAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

} // namespace SVGTextPathElementInternal

static const BatchedAttribute SVGTextPathElementAttrs[] = {
    // Attribute 'startOffset' (Type: 'readonly attribute' ExtAttr: '')
    {"startOffset", SVGTextPathElementInternal::startOffsetAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'method' (Type: 'readonly attribute' ExtAttr: '')
    {"method", SVGTextPathElementInternal::methodAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'spacing' (Type: 'readonly attribute' ExtAttr: '')
    {"spacing", SVGTextPathElementInternal::spacingAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'href' (Type: 'readonly attribute' ExtAttr: '')
    {"href", SVGTextPathElementInternal::hrefAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedConstant SVGTextPathElementConsts[] = {
    {"TEXTPATH_METHODTYPE_UNKNOWN", static_cast<signed int>(0)},
    {"TEXTPATH_METHODTYPE_ALIGN", static_cast<signed int>(1)},
    {"TEXTPATH_METHODTYPE_STRETCH", static_cast<signed int>(2)},
    {"TEXTPATH_SPACINGTYPE_UNKNOWN", static_cast<signed int>(0)},
    {"TEXTPATH_SPACINGTYPE_AUTO", static_cast<signed int>(1)},
    {"TEXTPATH_SPACINGTYPE_EXACT", static_cast<signed int>(2)},
};

COMPILE_ASSERT(0 == SVGTextPathElement::TEXTPATH_METHODTYPE_UNKNOWN, SVGTextPathElementEnumTEXTPATH_METHODTYPE_UNKNOWNIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == SVGTextPathElement::TEXTPATH_METHODTYPE_ALIGN, SVGTextPathElementEnumTEXTPATH_METHODTYPE_ALIGNIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == SVGTextPathElement::TEXTPATH_METHODTYPE_STRETCH, SVGTextPathElementEnumTEXTPATH_METHODTYPE_STRETCHIsWrongUseDontCheckEnums);
COMPILE_ASSERT(0 == SVGTextPathElement::TEXTPATH_SPACINGTYPE_UNKNOWN, SVGTextPathElementEnumTEXTPATH_SPACINGTYPE_UNKNOWNIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == SVGTextPathElement::TEXTPATH_SPACINGTYPE_AUTO, SVGTextPathElementEnumTEXTPATH_SPACINGTYPE_AUTOIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == SVGTextPathElement::TEXTPATH_SPACINGTYPE_EXACT, SVGTextPathElementEnumTEXTPATH_SPACINGTYPE_EXACTIsWrongUseDontCheckEnums);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGTextPathElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGTextPathElement", V8SVGTextContentElement::GetTemplate(), V8SVGTextPathElement::internalFieldCount,
        SVGTextPathElementAttrs, sizeof(SVGTextPathElementAttrs) / sizeof(*SVGTextPathElementAttrs),
        0, 0);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    batchConfigureConstants(desc, proto, SVGTextPathElementConsts, sizeof(SVGTextPathElementConsts) / sizeof(*SVGTextPathElementConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGTextPathElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGTextPathElementRawCache = createRawTemplate();
    return V8SVGTextPathElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8SVGTextPathElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGTextPathElementCache = ConfigureV8SVGTextPathElementTemplate(GetRawTemplate());
    return V8SVGTextPathElementCache;
}

SVGTextPathElement* V8SVGTextPathElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<SVGTextPathElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8SVGTextPathElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGTextPathElement::wrap(SVGTextPathElement* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<SVGTextPathElement > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(SVGTextPathElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8SVGTextPathElement::wrap(impl);
}

void V8SVGTextPathElement::derefObject(void* object)
{
    static_cast<SVGTextPathElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
