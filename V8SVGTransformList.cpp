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
#include "V8SVGTransformList.h"

#if ENABLE(SVG)

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "SVGElement.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8SVGMatrix.h"
#include "V8SVGPODTypeWrapper.h"
#include "V8SVGTransform.h"

namespace WebCore {

WrapperTypeInfo V8SVGTransformList::info = { V8SVGTransformList::GetTemplate, V8SVGTransformList::derefObject, 0 };

namespace SVGTransformListInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> numberOfItemsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGTransformList.numberOfItems._get");
    SVGTransformList* imp = V8SVGTransformList::toNative(info.Holder());
    return v8::Integer::NewFromUnsigned(imp->numberOfItems());
}

static v8::Handle<v8::Value> clearCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGTransformList.clear");
    SVGTransformList* imp = V8SVGTransformList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    imp->clear(ec);
    if (UNLIKELY(ec))
        goto fail;
    SVGElement* context = V8Proxy::svgContext(imp);
    context->svgAttributeChanged(imp->associatedAttributeName());
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> initializeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGTransformList.initialize");
    SVGTransformList* imp = V8SVGTransformList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    bool itemOk;
    SVGTransform item = V8SVGPODTypeUtil::toSVGPODType<SVGTransform>(&V8SVGTransform::info, args[0], itemOk);
    if (UNLIKELY(!itemOk)) {
        ec = TYPE_MISMATCH_ERR;
        goto fail;
    }
    SVGList<RefPtr<SVGPODListItem<SVGTransform> > >* listImp = imp;
    RefPtr<SVGPODListItem<SVGTransform> > result = listImp->initialize(SVGPODListItem<SVGTransform>::copy(item), ec);
    if (UNLIKELY(ec))
        goto fail;
    RefPtr<V8SVGPODTypeWrapper<SVGTransform> > wrapper = V8SVGPODTypeWrapperCreatorForList<SVGTransform>::create(result, imp->associatedAttributeName());
    SVGElement* context = V8Proxy::svgContext(imp);
    V8Proxy::setSVGContext(wrapper.get(), context);
    context->svgAttributeChanged(imp->associatedAttributeName());
    return toV8(wrapper.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> getItemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGTransformList.getItem");
    SVGTransformList* imp = V8SVGTransformList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(unsigned, index, toUInt32(args[0]));
    SVGList<RefPtr<SVGPODListItem<SVGTransform> > >* listImp = imp;
    RefPtr<SVGPODListItem<SVGTransform> > result = listImp->getItem(index, ec);
    if (UNLIKELY(ec))
        goto fail;
    RefPtr<V8SVGPODTypeWrapper<SVGTransform> > wrapper = V8SVGPODTypeWrapperCreatorForList<SVGTransform>::create(result, imp->associatedAttributeName());
    SVGElement* context = V8Proxy::svgContext(imp);
    V8Proxy::setSVGContext(wrapper.get(), context);
    return toV8(wrapper.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> insertItemBeforeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGTransformList.insertItemBefore");
    SVGTransformList* imp = V8SVGTransformList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    bool itemOk;
    SVGTransform item = V8SVGPODTypeUtil::toSVGPODType<SVGTransform>(&V8SVGTransform::info, args[0], itemOk);
    if (UNLIKELY(!itemOk)) {
        ec = TYPE_MISMATCH_ERR;
        goto fail;
    }
    EXCEPTION_BLOCK(unsigned, index, toUInt32(args[1]));
    SVGList<RefPtr<SVGPODListItem<SVGTransform> > >* listImp = imp;
    RefPtr<SVGPODListItem<SVGTransform> > result = listImp->insertItemBefore(SVGPODListItem<SVGTransform>::copy(item), index, ec);
    if (UNLIKELY(ec))
        goto fail;
    RefPtr<V8SVGPODTypeWrapper<SVGTransform> > wrapper = V8SVGPODTypeWrapperCreatorForList<SVGTransform>::create(result, imp->associatedAttributeName());
    SVGElement* context = V8Proxy::svgContext(imp);
    V8Proxy::setSVGContext(wrapper.get(), context);
    context->svgAttributeChanged(imp->associatedAttributeName());
    return toV8(wrapper.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> replaceItemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGTransformList.replaceItem");
    SVGTransformList* imp = V8SVGTransformList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    bool itemOk;
    SVGTransform item = V8SVGPODTypeUtil::toSVGPODType<SVGTransform>(&V8SVGTransform::info, args[0], itemOk);
    if (UNLIKELY(!itemOk)) {
        ec = TYPE_MISMATCH_ERR;
        goto fail;
    }
    EXCEPTION_BLOCK(unsigned, index, toUInt32(args[1]));
    SVGList<RefPtr<SVGPODListItem<SVGTransform> > >* listImp = imp;
    RefPtr<SVGPODListItem<SVGTransform> > result = listImp->replaceItem(SVGPODListItem<SVGTransform>::copy(item), index, ec);
    if (UNLIKELY(ec))
        goto fail;
    RefPtr<V8SVGPODTypeWrapper<SVGTransform> > wrapper = V8SVGPODTypeWrapperCreatorForList<SVGTransform>::create(result, imp->associatedAttributeName());
    SVGElement* context = V8Proxy::svgContext(imp);
    V8Proxy::setSVGContext(wrapper.get(), context);
    context->svgAttributeChanged(imp->associatedAttributeName());
    return toV8(wrapper.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> removeItemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGTransformList.removeItem");
    SVGTransformList* imp = V8SVGTransformList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(unsigned, index, toUInt32(args[0]));
    SVGList<RefPtr<SVGPODListItem<SVGTransform> > >* listImp = imp;
    RefPtr<SVGPODListItem<SVGTransform> > result = listImp->removeItem(index, ec);
    if (UNLIKELY(ec))
        goto fail;
    RefPtr<V8SVGPODTypeWrapper<SVGTransform> > wrapper = V8SVGPODTypeWrapperCreatorForList<SVGTransform>::create(result, imp->associatedAttributeName());
    SVGElement* context = V8Proxy::svgContext(imp);
    V8Proxy::setSVGContext(wrapper.get(), context);
    context->svgAttributeChanged(imp->associatedAttributeName());
    return toV8(wrapper.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> appendItemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGTransformList.appendItem");
    SVGTransformList* imp = V8SVGTransformList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    bool itemOk;
    SVGTransform item = V8SVGPODTypeUtil::toSVGPODType<SVGTransform>(&V8SVGTransform::info, args[0], itemOk);
    if (UNLIKELY(!itemOk)) {
        ec = TYPE_MISMATCH_ERR;
        goto fail;
    }
    SVGList<RefPtr<SVGPODListItem<SVGTransform> > >* listImp = imp;
    RefPtr<SVGPODListItem<SVGTransform> > result = listImp->appendItem(SVGPODListItem<SVGTransform>::copy(item), ec);
    if (UNLIKELY(ec))
        goto fail;
    RefPtr<V8SVGPODTypeWrapper<SVGTransform> > wrapper = V8SVGPODTypeWrapperCreatorForList<SVGTransform>::create(result, imp->associatedAttributeName());
    SVGElement* context = V8Proxy::svgContext(imp);
    V8Proxy::setSVGContext(wrapper.get(), context);
    context->svgAttributeChanged(imp->associatedAttributeName());
    return toV8(wrapper.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> createSVGTransformFromMatrixCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGTransformList.createSVGTransformFromMatrix");
    SVGTransformList* imp = V8SVGTransformList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    bool matrixOk;
    AffineTransform matrix = V8SVGPODTypeUtil::toSVGPODType<AffineTransform>(&V8SVGMatrix::info, args[0], matrixOk);
    if (UNLIKELY(!matrixOk)) {
        ec = TYPE_MISMATCH_ERR;
        goto fail;
    }
    SVGTransform result = imp->createSVGTransformFromMatrix(matrix);
    RefPtr<V8SVGPODTypeWrapper<SVGTransform> > wrapper = V8SVGStaticPODTypeWrapper<SVGTransform>::create(result);
    SVGElement* context = V8Proxy::svgContext(imp);
    V8Proxy::setSVGContext(wrapper.get(), context);
    return toV8(wrapper.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> consolidateCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGTransformList.consolidate");
    SVGTransformList* imp = V8SVGTransformList::toNative(args.Holder());
    SVGTransform result = imp->consolidate();
    RefPtr<V8SVGPODTypeWrapper<SVGTransform> > wrapper = V8SVGStaticPODTypeWrapper<SVGTransform>::create(result);
    SVGElement* context = V8Proxy::svgContext(imp);
    V8Proxy::setSVGContext(wrapper.get(), context);
    return toV8(wrapper.release());
}

} // namespace SVGTransformListInternal

static const BatchedAttribute SVGTransformListAttrs[] = {
    // Attribute 'numberOfItems' (Type: 'readonly attribute' ExtAttr: '')
    {"numberOfItems", SVGTransformListInternal::numberOfItemsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback SVGTransformListCallbacks[] = {
    {"clear", SVGTransformListInternal::clearCallback},
    {"initialize", SVGTransformListInternal::initializeCallback},
    {"getItem", SVGTransformListInternal::getItemCallback},
    {"insertItemBefore", SVGTransformListInternal::insertItemBeforeCallback},
    {"replaceItem", SVGTransformListInternal::replaceItemCallback},
    {"removeItem", SVGTransformListInternal::removeItemCallback},
    {"appendItem", SVGTransformListInternal::appendItemCallback},
    {"createSVGTransformFromMatrix", SVGTransformListInternal::createSVGTransformFromMatrixCallback},
    {"consolidate", SVGTransformListInternal::consolidateCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGTransformListTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGTransformList", v8::Persistent<v8::FunctionTemplate>(), V8SVGTransformList::internalFieldCount,
        SVGTransformListAttrs, sizeof(SVGTransformListAttrs) / sizeof(*SVGTransformListAttrs),
        SVGTransformListCallbacks, sizeof(SVGTransformListCallbacks) / sizeof(*SVGTransformListCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGTransformList::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGTransformListRawCache = createRawTemplate();
    return V8SVGTransformListRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8SVGTransformList::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGTransformListCache = ConfigureV8SVGTransformListTemplate(GetRawTemplate());
    return V8SVGTransformListCache;
}

SVGTransformList* V8SVGTransformList::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<SVGTransformList*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8SVGTransformList::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGTransformList::wrap(SVGTransformList* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<SVGTransformList > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(SVGTransformList* impl)
{
    if (!impl)
        return v8::Null();
    return V8SVGTransformList::wrap(impl);
}

void V8SVGTransformList::derefObject(void* object)
{
    static_cast<SVGTransformList*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
