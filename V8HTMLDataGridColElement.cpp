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
#include "V8HTMLDataGridColElement.h"

#if ENABLE(DATAGRID)

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8HTMLElement.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8HTMLDataGridColElement::info = { V8HTMLDataGridColElement::GetTemplate, V8HTMLDataGridColElement::derefObject, 0 };

namespace HTMLDataGridColElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> labelAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDataGridColElement.label._get");
    HTMLDataGridColElement* imp = V8HTMLDataGridColElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8String(imp->label());
}

static void labelAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDataGridColElement.label._set");
    HTMLDataGridColElement* imp = V8HTMLDataGridColElement::toNative(info.Holder());
    V8Parameter<> v = value;
    imp->setLabel(v);
    return;
}

static v8::Handle<v8::Value> typeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDataGridColElement.type._get");
    HTMLDataGridColElement* imp = V8HTMLDataGridColElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8String(imp->type());
}

static void typeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDataGridColElement.type._set");
    HTMLDataGridColElement* imp = V8HTMLDataGridColElement::toNative(info.Holder());
    V8Parameter<> v = value;
    imp->setType(v);
    return;
}

static v8::Handle<v8::Value> sortableAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDataGridColElement.sortable._get");
    HTMLDataGridColElement* imp = V8HTMLDataGridColElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8::Integer::New(imp->sortable());
}

static void sortableAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDataGridColElement.sortable._set");
    HTMLDataGridColElement* imp = V8HTMLDataGridColElement::toNative(info.Holder());
    int v = toUInt32(value);
    imp->setSortable(v);
    return;
}

static v8::Handle<v8::Value> sortDirectionAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDataGridColElement.sortDirection._get");
    HTMLDataGridColElement* imp = V8HTMLDataGridColElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8::Integer::New(imp->sortDirection());
}

static void sortDirectionAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDataGridColElement.sortDirection._set");
    HTMLDataGridColElement* imp = V8HTMLDataGridColElement::toNative(info.Holder());
    int v = toUInt32(value);
    imp->setSortDirection(v);
    return;
}

static v8::Handle<v8::Value> primaryAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDataGridColElement.primary._get");
    HTMLDataGridColElement* imp = V8HTMLDataGridColElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8Boolean(imp->primary());
}

static void primaryAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLDataGridColElement.primary._set");
    HTMLDataGridColElement* imp = V8HTMLDataGridColElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setPrimary(v);
    return;
}

} // namespace HTMLDataGridColElementInternal

static const BatchedAttribute HTMLDataGridColElementAttrs[] = {
    // Attribute 'label' (Type: 'attribute' ExtAttr: '')
    {"label", HTMLDataGridColElementInternal::labelAttrGetter, HTMLDataGridColElementInternal::labelAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'type' (Type: 'attribute' ExtAttr: '')
    {"type", HTMLDataGridColElementInternal::typeAttrGetter, HTMLDataGridColElementInternal::typeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'sortable' (Type: 'attribute' ExtAttr: '')
    {"sortable", HTMLDataGridColElementInternal::sortableAttrGetter, HTMLDataGridColElementInternal::sortableAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'sortDirection' (Type: 'attribute' ExtAttr: '')
    {"sortDirection", HTMLDataGridColElementInternal::sortDirectionAttrGetter, HTMLDataGridColElementInternal::sortDirectionAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'primary' (Type: 'attribute' ExtAttr: '')
    {"primary", HTMLDataGridColElementInternal::primaryAttrGetter, HTMLDataGridColElementInternal::primaryAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLDataGridColElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLDataGridColElement", V8HTMLElement::GetTemplate(), V8HTMLDataGridColElement::internalFieldCount,
        HTMLDataGridColElementAttrs, sizeof(HTMLDataGridColElementAttrs) / sizeof(*HTMLDataGridColElementAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLDataGridColElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLDataGridColElementRawCache = createRawTemplate();
    return V8HTMLDataGridColElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLDataGridColElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLDataGridColElementCache = ConfigureV8HTMLDataGridColElementTemplate(GetRawTemplate());
    return V8HTMLDataGridColElementCache;
}

HTMLDataGridColElement* V8HTMLDataGridColElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<HTMLDataGridColElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8HTMLDataGridColElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLDataGridColElement::wrap(HTMLDataGridColElement* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<HTMLDataGridColElement > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(HTMLDataGridColElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8HTMLDataGridColElement::wrap(impl);
}

void V8HTMLDataGridColElement::derefObject(void* object)
{
    static_cast<HTMLDataGridColElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(DATAGRID)
