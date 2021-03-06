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
#include "V8DirectoryEntry.h"

#if ENABLE(FILE_SYSTEM)

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8DirectoryReader.h"
#include "V8Entry.h"
#include "V8EntryCallback.h"
#include "V8ErrorCallback.h"
#include "V8Flags.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8DirectoryEntry::info = { V8DirectoryEntry::GetTemplate, V8DirectoryEntry::derefObject, 0 };

namespace DirectoryEntryInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> createReaderCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.DirectoryEntry.createReader");
    DirectoryEntry* imp = V8DirectoryEntry::toNative(args.Holder());
    return toV8(imp->createReader());
}

static v8::Handle<v8::Value> getFileCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.DirectoryEntry.getFile");
    DirectoryEntry* imp = V8DirectoryEntry::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, path, args[0]);
    if (args.Length() <= 1) {
        imp->getFile(path);
        return v8::Handle<v8::Value>();
    }
    EXCEPTION_BLOCK(Flags*, options, V8Flags::HasInstance(args[1]) ? V8Flags::toNative(v8::Handle<v8::Object>::Cast(args[1])) : 0);
    RefPtr<EntryCallback> successCallback;
    if (args.Length() > 2 && !args[2]->IsNull() && !args[2]->IsUndefined()) {
        if (!args[2]->IsObject())
            return throwError(TYPE_MISMATCH_ERR);
        successCallback = V8EntryCallback::create(args[2], getScriptExecutionContext());
    }
    RefPtr<ErrorCallback> errorCallback;
    if (args.Length() > 3 && !args[3]->IsNull() && !args[3]->IsUndefined()) {
        if (!args[3]->IsObject())
            return throwError(TYPE_MISMATCH_ERR);
        errorCallback = V8ErrorCallback::create(args[3], getScriptExecutionContext());
    }
    imp->getFile(path, options, successCallback, errorCallback);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> getDirectoryCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.DirectoryEntry.getDirectory");
    DirectoryEntry* imp = V8DirectoryEntry::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, path, args[0]);
    if (args.Length() <= 1) {
        imp->getDirectory(path);
        return v8::Handle<v8::Value>();
    }
    EXCEPTION_BLOCK(Flags*, options, V8Flags::HasInstance(args[1]) ? V8Flags::toNative(v8::Handle<v8::Object>::Cast(args[1])) : 0);
    RefPtr<EntryCallback> successCallback;
    if (args.Length() > 2 && !args[2]->IsNull() && !args[2]->IsUndefined()) {
        if (!args[2]->IsObject())
            return throwError(TYPE_MISMATCH_ERR);
        successCallback = V8EntryCallback::create(args[2], getScriptExecutionContext());
    }
    RefPtr<ErrorCallback> errorCallback;
    if (args.Length() > 3 && !args[3]->IsNull() && !args[3]->IsUndefined()) {
        if (!args[3]->IsObject())
            return throwError(TYPE_MISMATCH_ERR);
        errorCallback = V8ErrorCallback::create(args[3], getScriptExecutionContext());
    }
    imp->getDirectory(path, options, successCallback, errorCallback);
    return v8::Handle<v8::Value>();
}

} // namespace DirectoryEntryInternal

static const BatchedCallback DirectoryEntryCallbacks[] = {
    {"createReader", DirectoryEntryInternal::createReaderCallback},
    {"getFile", DirectoryEntryInternal::getFileCallback},
    {"getDirectory", DirectoryEntryInternal::getDirectoryCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8DirectoryEntryTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "DirectoryEntry", V8Entry::GetTemplate(), V8DirectoryEntry::internalFieldCount,
        0, 0,
        DirectoryEntryCallbacks, sizeof(DirectoryEntryCallbacks) / sizeof(*DirectoryEntryCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8DirectoryEntry::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8DirectoryEntryRawCache = createRawTemplate();
    return V8DirectoryEntryRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8DirectoryEntry::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8DirectoryEntryCache = ConfigureV8DirectoryEntryTemplate(GetRawTemplate());
    return V8DirectoryEntryCache;
}

DirectoryEntry* V8DirectoryEntry::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<DirectoryEntry*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8DirectoryEntry::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8DirectoryEntry::wrap(DirectoryEntry* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<DirectoryEntry > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(DirectoryEntry* impl)
{
    if (!impl)
        return v8::Null();
    return V8DirectoryEntry::wrap(impl);
}

void V8DirectoryEntry::derefObject(void* object)
{
    static_cast<DirectoryEntry*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(FILE_SYSTEM)
