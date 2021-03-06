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
#include "V8XMLSerializer.h"

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Node.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8XMLSerializer::info = { V8XMLSerializer::GetTemplate, V8XMLSerializer::derefObject, 0 };

namespace XMLSerializerInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> serializeToStringCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.XMLSerializer.serializeToString");
    XMLSerializer* imp = V8XMLSerializer::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Node*, node, V8Node::HasInstance(args[0]) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(args[0])) : 0);
    String result = imp->serializeToString(node, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8String(result);
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

} // namespace XMLSerializerInternal

v8::Handle<v8::Value> V8XMLSerializer::constructorCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.XMLSerializer.Contructor");
    return V8Proxy::constructDOMObject<XMLSerializer>(args, &info);
}
static v8::Persistent<v8::FunctionTemplate> ConfigureV8XMLSerializerTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "XMLSerializer", v8::Persistent<v8::FunctionTemplate>(), V8XMLSerializer::internalFieldCount,
        0, 0,
        0, 0);
        desc->SetCallHandler(V8XMLSerializer::constructorCallback);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom Signature 'serializeToString'
    const int serializeToStringArgc = 1;
    v8::Handle<v8::FunctionTemplate> serializeToStringArgv[serializeToStringArgc] = { V8Node::GetRawTemplate() };
    v8::Handle<v8::Signature> serializeToStringSignature = v8::Signature::New(desc, serializeToStringArgc, serializeToStringArgv);
    proto->Set(v8::String::New("serializeToString"), v8::FunctionTemplate::New(XMLSerializerInternal::serializeToStringCallback, v8::Handle<v8::Value>(), serializeToStringSignature));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8XMLSerializer::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8XMLSerializerRawCache = createRawTemplate();
    return V8XMLSerializerRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8XMLSerializer::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8XMLSerializerCache = ConfigureV8XMLSerializerTemplate(GetRawTemplate());
    return V8XMLSerializerCache;
}

XMLSerializer* V8XMLSerializer::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<XMLSerializer*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8XMLSerializer::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8XMLSerializer::wrap(XMLSerializer* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<XMLSerializer > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(XMLSerializer* impl)
{
    if (!impl)
        return v8::Null();
    return V8XMLSerializer::wrap(impl);
}

void V8XMLSerializer::derefObject(void* object)
{
    static_cast<XMLSerializer*>(object)->deref();
}

} // namespace WebCore
