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
#include "V8DOMStringMap.h"

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8DOMStringMap::info = { V8DOMStringMap::GetTemplate, V8DOMStringMap::derefObject, 0 };

namespace DOMStringMapInternal {

template <typename T> void V8_USE(T) { }

} // namespace DOMStringMapInternal

static v8::Persistent<v8::FunctionTemplate> ConfigureV8DOMStringMapTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "DOMStringMap", v8::Persistent<v8::FunctionTemplate>(), V8DOMStringMap::internalFieldCount,
        0, 0,
        0, 0);
    
    desc->InstanceTemplate()->SetNamedPropertyHandler(V8DOMStringMap::namedPropertyGetter, V8DOMStringMap::namedPropertySetter, V8DOMStringMap::namedPropertyQuery, V8DOMStringMap::namedPropertyDeleter, V8DOMStringMap::namedPropertyEnumerator);

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8DOMStringMap::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8DOMStringMapRawCache = createRawTemplate();
    return V8DOMStringMapRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8DOMStringMap::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8DOMStringMapCache = ConfigureV8DOMStringMapTemplate(GetRawTemplate());
    return V8DOMStringMapCache;
}

DOMStringMap* V8DOMStringMap::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<DOMStringMap*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8DOMStringMap::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8DOMStringMap::wrap(DOMStringMap* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<DOMStringMap > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(DOMStringMap* impl)
{
    if (!impl)
        return v8::Null();
    return V8DOMStringMap::wrap(impl);
}

void V8DOMStringMap::derefObject(void* object)
{
    static_cast<DOMStringMap*>(object)->deref();
}

} // namespace WebCore