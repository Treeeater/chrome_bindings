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
#include "V8CSSRule.h"

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8CSSStyleSheet.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8CSSRule::info = { V8CSSRule::GetTemplate, V8CSSRule::derefObject, 0 };

namespace CSSRuleInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> typeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.CSSRule.type._get");
    CSSRule* imp = V8CSSRule::toNative(info.Holder());
    return v8::Integer::New(imp->type());
}

static v8::Handle<v8::Value> cssTextAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.CSSRule.cssText._get");
    CSSRule* imp = V8CSSRule::toNative(info.Holder());
    return v8StringOrNull(imp->cssText());
}

static void cssTextAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.CSSRule.cssText._set");
    CSSRule* imp = V8CSSRule::toNative(info.Holder());
    V8Parameter<WithNullCheck> v = value;
    ExceptionCode ec = 0;
    imp->setCssText(v, ec);
    if (UNLIKELY(ec))
        V8Proxy::setDOMException(ec);
    return;
}

static v8::Handle<v8::Value> parentStyleSheetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.CSSRule.parentStyleSheet._get");
    CSSRule* imp = V8CSSRule::toNative(info.Holder());
    RefPtr<CSSStyleSheet> result = imp->parentStyleSheet();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setHiddenReference(info.Holder(), wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> parentRuleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.CSSRule.parentRule._get");
    CSSRule* imp = V8CSSRule::toNative(info.Holder());
    RefPtr<CSSRule> result = imp->parentRule();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setHiddenReference(info.Holder(), wrapper);
    }
    return wrapper;
}

} // namespace CSSRuleInternal

static const BatchedAttribute CSSRuleAttrs[] = {
    // Attribute 'type' (Type: 'readonly attribute' ExtAttr: '')
    {"type", CSSRuleInternal::typeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'cssText' (Type: 'attribute' ExtAttr: 'ConvertNullToNullString ConvertNullStringTo')
    {"cssText", CSSRuleInternal::cssTextAttrGetter, CSSRuleInternal::cssTextAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'parentStyleSheet' (Type: 'readonly attribute' ExtAttr: '')
    {"parentStyleSheet", CSSRuleInternal::parentStyleSheetAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'parentRule' (Type: 'readonly attribute' ExtAttr: '')
    {"parentRule", CSSRuleInternal::parentRuleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedConstant CSSRuleConsts[] = {
    {"UNKNOWN_RULE", static_cast<signed int>(0)},
    {"STYLE_RULE", static_cast<signed int>(1)},
    {"CHARSET_RULE", static_cast<signed int>(2)},
    {"IMPORT_RULE", static_cast<signed int>(3)},
    {"MEDIA_RULE", static_cast<signed int>(4)},
    {"FONT_FACE_RULE", static_cast<signed int>(5)},
    {"PAGE_RULE", static_cast<signed int>(6)},
    {"VARIABLES_RULE", static_cast<signed int>(7)},
    {"WEBKIT_KEYFRAMES_RULE", static_cast<signed int>(8)},
    {"WEBKIT_KEYFRAME_RULE", static_cast<signed int>(9)},
};

COMPILE_ASSERT(0 == CSSRule::UNKNOWN_RULE, CSSRuleEnumUNKNOWN_RULEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == CSSRule::STYLE_RULE, CSSRuleEnumSTYLE_RULEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == CSSRule::CHARSET_RULE, CSSRuleEnumCHARSET_RULEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(3 == CSSRule::IMPORT_RULE, CSSRuleEnumIMPORT_RULEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(4 == CSSRule::MEDIA_RULE, CSSRuleEnumMEDIA_RULEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(5 == CSSRule::FONT_FACE_RULE, CSSRuleEnumFONT_FACE_RULEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(6 == CSSRule::PAGE_RULE, CSSRuleEnumPAGE_RULEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(7 == CSSRule::VARIABLES_RULE, CSSRuleEnumVARIABLES_RULEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(8 == CSSRule::WEBKIT_KEYFRAMES_RULE, CSSRuleEnumWEBKIT_KEYFRAMES_RULEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(9 == CSSRule::WEBKIT_KEYFRAME_RULE, CSSRuleEnumWEBKIT_KEYFRAME_RULEIsWrongUseDontCheckEnums);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8CSSRuleTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "CSSRule", v8::Persistent<v8::FunctionTemplate>(), V8CSSRule::internalFieldCount,
        CSSRuleAttrs, sizeof(CSSRuleAttrs) / sizeof(*CSSRuleAttrs),
        0, 0);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    batchConfigureConstants(desc, proto, CSSRuleConsts, sizeof(CSSRuleConsts) / sizeof(*CSSRuleConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8CSSRule::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8CSSRuleRawCache = createRawTemplate();
    return V8CSSRuleRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8CSSRule::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8CSSRuleCache = ConfigureV8CSSRuleTemplate(GetRawTemplate());
    return V8CSSRuleCache;
}

CSSRule* V8CSSRule::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<CSSRule*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8CSSRule::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8CSSRule::wrap(CSSRule* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
        wrapper = getDOMObjectMap().get(impl);
        if (!wrapper.IsEmpty())
            return wrapper;
    wrapper = V8DOMWrapper::instantiateV8Object(proxy, &info, impl);
    if (wrapper.IsEmpty())
        return wrapper;

    impl->ref();
    getDOMObjectMap().set(impl, v8::Persistent<v8::Object>::New(wrapper));
    return wrapper;
}

v8::Handle<v8::Value> toV8(PassRefPtr<CSSRule > impl)
{
    return toV8(impl.get());
}

void V8CSSRule::derefObject(void* object)
{
    static_cast<CSSRule*>(object)->deref();
}

} // namespace WebCore
