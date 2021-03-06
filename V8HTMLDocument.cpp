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
#include "V8HTMLDocument.h"

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8Document.h"
#include "V8Element.h"
#include "V8HTMLCollection.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8HTMLDocument::info = { V8HTMLDocument::GetTemplate, V8HTMLDocument::derefObject, 0 };

namespace HTMLDocumentInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> embedsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDocument.embeds._get");
    HTMLDocument* imp = V8HTMLDocument::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return toV8(imp->embeds());
}

static v8::Handle<v8::Value> pluginsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDocument.plugins._get");
    HTMLDocument* imp = V8HTMLDocument::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return toV8(imp->plugins());
}

static v8::Handle<v8::Value> scriptsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDocument.scripts._get");
    HTMLDocument* imp = V8HTMLDocument::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return toV8(imp->scripts());
}

static v8::Handle<v8::Value> widthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDocument.width._get");
    HTMLDocument* imp = V8HTMLDocument::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8::Integer::New(imp->width());
}

static v8::Handle<v8::Value> heightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDocument.height._get");
    HTMLDocument* imp = V8HTMLDocument::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8::Integer::New(imp->height());
}

static v8::Handle<v8::Value> dirAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDocument.dir._get");
    HTMLDocument* imp = V8HTMLDocument::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8String(imp->dir());
}

static void dirAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDocument.dir._set");
    HTMLDocument* imp = V8HTMLDocument::toNative(info.Holder());
    V8Parameter<WithNullCheck> v = value;
    imp->setDir(v);
    return;
}

static v8::Handle<v8::Value> designModeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDocument.designMode._get");
    HTMLDocument* imp = V8HTMLDocument::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8String(imp->designMode());
}

static void designModeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDocument.designMode._set");
    HTMLDocument* imp = V8HTMLDocument::toNative(info.Holder());
    V8Parameter<WithNullCheck> v = value;
    imp->setDesignMode(v);
    return;
}

static v8::Handle<v8::Value> compatModeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDocument.compatMode._get");
    HTMLDocument* imp = V8HTMLDocument::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8String(imp->compatMode());
}

static v8::Handle<v8::Value> activeElementAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDocument.activeElement._get");
    HTMLDocument* imp = V8HTMLDocument::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return toV8(imp->activeElement());
}

static v8::Handle<v8::Value> bgColorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDocument.bgColor._get");
    HTMLDocument* imp = V8HTMLDocument::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8String(imp->bgColor());
}

static void bgColorAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDocument.bgColor._set");
    HTMLDocument* imp = V8HTMLDocument::toNative(info.Holder());
    V8Parameter<WithNullCheck> v = value;
    imp->setBgColor(v);
    return;
}

static v8::Handle<v8::Value> fgColorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDocument.fgColor._get");
    HTMLDocument* imp = V8HTMLDocument::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8String(imp->fgColor());
}

static void fgColorAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDocument.fgColor._set");
    HTMLDocument* imp = V8HTMLDocument::toNative(info.Holder());
    V8Parameter<WithNullCheck> v = value;
    imp->setFgColor(v);
    return;
}

static v8::Handle<v8::Value> alinkColorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDocument.alinkColor._get");
    HTMLDocument* imp = V8HTMLDocument::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8String(imp->alinkColor());
}

static void alinkColorAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDocument.alinkColor._set");
    HTMLDocument* imp = V8HTMLDocument::toNative(info.Holder());
    V8Parameter<WithNullCheck> v = value;
    imp->setAlinkColor(v);
    return;
}

static v8::Handle<v8::Value> linkColorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDocument.linkColor._get");
    HTMLDocument* imp = V8HTMLDocument::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8String(imp->linkColor());
}

static void linkColorAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDocument.linkColor._set");
    HTMLDocument* imp = V8HTMLDocument::toNative(info.Holder());
    V8Parameter<WithNullCheck> v = value;
    imp->setLinkColor(v);
    return;
}

static v8::Handle<v8::Value> vlinkColorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDocument.vlinkColor._get");
    HTMLDocument* imp = V8HTMLDocument::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8String(imp->vlinkColor());
}

static void vlinkColorAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDocument.vlinkColor._set");
    HTMLDocument* imp = V8HTMLDocument::toNative(info.Holder());
    V8Parameter<WithNullCheck> v = value;
    imp->setVlinkColor(v);
    return;
}

static v8::Handle<v8::Value> closeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLDocument.close");
    HTMLDocument* imp = V8HTMLDocument::toNative(args.Holder());
    imp->close();
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> clearCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLDocument.clear");
    HTMLDocument* imp = V8HTMLDocument::toNative(args.Holder());
    imp->clear();
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> captureEventsCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLDocument.captureEvents");
    HTMLDocument* imp = V8HTMLDocument::toNative(args.Holder());
    imp->captureEvents();
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> releaseEventsCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLDocument.releaseEvents");
    HTMLDocument* imp = V8HTMLDocument::toNative(args.Holder());
    imp->releaseEvents();
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> hasFocusCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLDocument.hasFocus");
    HTMLDocument* imp = V8HTMLDocument::toNative(args.Holder());
    return v8Boolean(imp->hasFocus());
}

} // namespace HTMLDocumentInternal

static const BatchedAttribute HTMLDocumentAttrs[] = {
    // Attribute 'embeds' (Type: 'readonly attribute' ExtAttr: '')
    {"embeds", HTMLDocumentInternal::embedsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'plugins' (Type: 'readonly attribute' ExtAttr: '')
    {"plugins", HTMLDocumentInternal::pluginsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'scripts' (Type: 'readonly attribute' ExtAttr: '')
    {"scripts", HTMLDocumentInternal::scriptsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'all' (Type: 'attribute' ExtAttr: 'Custom Deletable')
    {"all", V8HTMLDocument::allAccessorGetter, V8HTMLDocument::allAccessorSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'width' (Type: 'readonly attribute' ExtAttr: '')
    {"width", HTMLDocumentInternal::widthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'height' (Type: 'readonly attribute' ExtAttr: '')
    {"height", HTMLDocumentInternal::heightAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'dir' (Type: 'attribute' ExtAttr: 'ConvertNullToNullString')
    {"dir", HTMLDocumentInternal::dirAttrGetter, HTMLDocumentInternal::dirAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'designMode' (Type: 'attribute' ExtAttr: 'ConvertNullToNullString')
    {"designMode", HTMLDocumentInternal::designModeAttrGetter, HTMLDocumentInternal::designModeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'compatMode' (Type: 'readonly attribute' ExtAttr: '')
    {"compatMode", HTMLDocumentInternal::compatModeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'activeElement' (Type: 'readonly attribute' ExtAttr: '')
    {"activeElement", HTMLDocumentInternal::activeElementAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'bgColor' (Type: 'attribute' ExtAttr: 'ConvertNullToNullString')
    {"bgColor", HTMLDocumentInternal::bgColorAttrGetter, HTMLDocumentInternal::bgColorAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'fgColor' (Type: 'attribute' ExtAttr: 'ConvertNullToNullString')
    {"fgColor", HTMLDocumentInternal::fgColorAttrGetter, HTMLDocumentInternal::fgColorAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'alinkColor' (Type: 'attribute' ExtAttr: 'ConvertNullToNullString')
    {"alinkColor", HTMLDocumentInternal::alinkColorAttrGetter, HTMLDocumentInternal::alinkColorAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'linkColor' (Type: 'attribute' ExtAttr: 'ConvertNullToNullString')
    {"linkColor", HTMLDocumentInternal::linkColorAttrGetter, HTMLDocumentInternal::linkColorAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'vlinkColor' (Type: 'attribute' ExtAttr: 'ConvertNullToNullString')
    {"vlinkColor", HTMLDocumentInternal::vlinkColorAttrGetter, HTMLDocumentInternal::vlinkColorAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback HTMLDocumentCallbacks[] = {
    {"open", V8HTMLDocument::openCallback},
    {"close", HTMLDocumentInternal::closeCallback},
    {"write", V8HTMLDocument::writeCallback},
    {"writeln", V8HTMLDocument::writelnCallback},
    {"clear", HTMLDocumentInternal::clearCallback},
    {"captureEvents", HTMLDocumentInternal::captureEventsCallback},
    {"releaseEvents", HTMLDocumentInternal::releaseEventsCallback},
    {"hasFocus", HTMLDocumentInternal::hasFocusCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLDocumentTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLDocument", V8Document::GetTemplate(), V8HTMLDocument::internalFieldCount,
        HTMLDocumentAttrs, sizeof(HTMLDocumentAttrs) / sizeof(*HTMLDocumentAttrs),
        HTMLDocumentCallbacks, sizeof(HTMLDocumentCallbacks) / sizeof(*HTMLDocumentCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    desc->SetHiddenPrototype(true);

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLDocument::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLDocumentRawCache = createRawTemplate();
    return V8HTMLDocumentRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLDocument::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLDocumentCache = ConfigureV8HTMLDocumentTemplate(GetRawTemplate());
    return V8HTMLDocumentCache;
}

HTMLDocument* V8HTMLDocument::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<HTMLDocument*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8HTMLDocument::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLDocument::wrap(HTMLDocument* impl, bool forceNewObject)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
    if (impl->document()) {
        proxy = V8Proxy::retrieve(impl->document()->frame());
        if (proxy && static_cast<Node*>(impl->document()) == static_cast<Node*>(impl))
            proxy->windowShell()->initContextIfNeeded();
    }

    if (!forceNewObject) {
        wrapper = V8DOMWrapper::getWrapper(impl);
        if (!wrapper.IsEmpty())
            return wrapper;
    }

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

v8::Handle<v8::Value> toV8(PassRefPtr<HTMLDocument > impl, bool forceNewObject)
{
    return toV8(impl.get(), forceNewObject);
}

void V8HTMLDocument::derefObject(void* object)
{
    static_cast<HTMLDocument*>(object)->deref();
}

} // namespace WebCore
