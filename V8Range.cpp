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
#include "V8Range.h"

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8ClientRect.h"
#include "V8ClientRectList.h"
#include "V8DOMWrapper.h"
#include "V8DocumentFragment.h"
#include "V8IsolatedContext.h"
#include "V8Node.h"
#include "V8Proxy.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8Range::info = { V8Range::GetTemplate, V8Range::derefObject, 0 };

namespace RangeInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> startContainerAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Range.startContainer._get");
    Range* imp = V8Range::toNative(info.Holder());
    ExceptionCode ec = 0;
    RefPtr<Node> v = imp->startContainer(ec);
    if (UNLIKELY(ec)) {
        V8Proxy::setDOMException(ec);
        return v8::Handle<v8::Value>();
    }
    return toV8(v.release());
}

static v8::Handle<v8::Value> startOffsetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Range.startOffset._get");
    Range* imp = V8Range::toNative(info.Holder());
    ExceptionCode ec = 0;
    int v = imp->startOffset(ec);
    if (UNLIKELY(ec)) {
        V8Proxy::setDOMException(ec);
        return v8::Handle<v8::Value>();
    }
    return v8::Integer::New(v);
}

static v8::Handle<v8::Value> endContainerAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Range.endContainer._get");
    Range* imp = V8Range::toNative(info.Holder());
    ExceptionCode ec = 0;
    RefPtr<Node> v = imp->endContainer(ec);
    if (UNLIKELY(ec)) {
        V8Proxy::setDOMException(ec);
        return v8::Handle<v8::Value>();
    }
    return toV8(v.release());
}

static v8::Handle<v8::Value> endOffsetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Range.endOffset._get");
    Range* imp = V8Range::toNative(info.Holder());
    ExceptionCode ec = 0;
    int v = imp->endOffset(ec);
    if (UNLIKELY(ec)) {
        V8Proxy::setDOMException(ec);
        return v8::Handle<v8::Value>();
    }
    return v8::Integer::New(v);
}

static v8::Handle<v8::Value> collapsedAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Range.collapsed._get");
    Range* imp = V8Range::toNative(info.Holder());
    ExceptionCode ec = 0;
    bool v = imp->collapsed(ec);
    if (UNLIKELY(ec)) {
        V8Proxy::setDOMException(ec);
        return v8::Handle<v8::Value>();
    }
    return v8Boolean(v);
}

static v8::Handle<v8::Value> commonAncestorContainerAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Range.commonAncestorContainer._get");
    Range* imp = V8Range::toNative(info.Holder());
    ExceptionCode ec = 0;
    RefPtr<Node> v = imp->commonAncestorContainer(ec);
    if (UNLIKELY(ec)) {
        V8Proxy::setDOMException(ec);
        return v8::Handle<v8::Value>();
    }
    return toV8(v.release());
}

static v8::Handle<v8::Value> setStartCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.setStart");
    Range* imp = V8Range::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Node*, refNode, V8Node::HasInstance(args[0]) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(args[0])) : 0);
    EXCEPTION_BLOCK(int, offset, toInt32(args[1]));
    imp->setStart(refNode, offset, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> setEndCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.setEnd");
    Range* imp = V8Range::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Node*, refNode, V8Node::HasInstance(args[0]) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(args[0])) : 0);
    EXCEPTION_BLOCK(int, offset, toInt32(args[1]));
    imp->setEnd(refNode, offset, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> setStartBeforeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.setStartBefore");
    Range* imp = V8Range::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Node*, refNode, V8Node::HasInstance(args[0]) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(args[0])) : 0);
    imp->setStartBefore(refNode, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> setStartAfterCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.setStartAfter");
    Range* imp = V8Range::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Node*, refNode, V8Node::HasInstance(args[0]) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(args[0])) : 0);
    imp->setStartAfter(refNode, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> setEndBeforeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.setEndBefore");
    Range* imp = V8Range::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Node*, refNode, V8Node::HasInstance(args[0]) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(args[0])) : 0);
    imp->setEndBefore(refNode, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> setEndAfterCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.setEndAfter");
    Range* imp = V8Range::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Node*, refNode, V8Node::HasInstance(args[0]) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(args[0])) : 0);
    imp->setEndAfter(refNode, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> collapseCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.collapse");
    Range* imp = V8Range::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(bool, toStart, args[0]->BooleanValue());
    imp->collapse(toStart, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> selectNodeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.selectNode");
    Range* imp = V8Range::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Node*, refNode, V8Node::HasInstance(args[0]) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(args[0])) : 0);
    imp->selectNode(refNode, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> selectNodeContentsCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.selectNodeContents");
    Range* imp = V8Range::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Node*, refNode, V8Node::HasInstance(args[0]) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(args[0])) : 0);
    imp->selectNodeContents(refNode, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> compareBoundaryPointsCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.compareBoundaryPoints");
    Range* imp = V8Range::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Range::CompareHow, how, static_cast<Range::CompareHow>(args[0]->Int32Value()));
    EXCEPTION_BLOCK(Range*, sourceRange, V8Range::HasInstance(args[1]) ? V8Range::toNative(v8::Handle<v8::Object>::Cast(args[1])) : 0);
    int result = imp->compareBoundaryPoints(how, sourceRange, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Integer::New(result);
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> deleteContentsCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.deleteContents");
    Range* imp = V8Range::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    imp->deleteContents(ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> extractContentsCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.extractContents");
    Range* imp = V8Range::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    RefPtr<DocumentFragment> result = imp->extractContents(ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> cloneContentsCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.cloneContents");
    Range* imp = V8Range::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    RefPtr<DocumentFragment> result = imp->cloneContents(ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> insertNodeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.insertNode");
    Range* imp = V8Range::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Node*, newNode, V8Node::HasInstance(args[0]) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(args[0])) : 0);
    imp->insertNode(newNode, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> surroundContentsCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.surroundContents");
    Range* imp = V8Range::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Node*, newParent, V8Node::HasInstance(args[0]) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(args[0])) : 0);
    imp->surroundContents(newParent, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> cloneRangeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.cloneRange");
    Range* imp = V8Range::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    RefPtr<Range> result = imp->cloneRange(ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> toStringCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.toString");
    Range* imp = V8Range::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    String result = imp->toString(ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8String(result);
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> detachCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.detach");
    Range* imp = V8Range::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    imp->detach(ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> getClientRectsCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.getClientRects");
    Range* imp = V8Range::toNative(args.Holder());
    return toV8(imp->getClientRects());
}

static v8::Handle<v8::Value> getBoundingClientRectCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.getBoundingClientRect");
    Range* imp = V8Range::toNative(args.Holder());
    return toV8(imp->getBoundingClientRect());
}

static v8::Handle<v8::Value> createContextualFragmentCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.createContextualFragment");
    Range* imp = V8Range::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, html, args[0]);
    RefPtr<DocumentFragment> result = imp->createContextualFragment(html, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> intersectsNodeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.intersectsNode");
    Range* imp = V8Range::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Node*, refNode, V8Node::HasInstance(args[0]) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(args[0])) : 0);
    bool result = imp->intersectsNode(refNode, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Boolean(result);
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> compareNodeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.compareNode");
    Range* imp = V8Range::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Node*, refNode, V8Node::HasInstance(args[0]) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(args[0])) : 0);
    int result = imp->compareNode(refNode, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Integer::New(result);
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> comparePointCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.comparePoint");
    Range* imp = V8Range::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Node*, refNode, V8Node::HasInstance(args[0]) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(args[0])) : 0);
    EXCEPTION_BLOCK(int, offset, toInt32(args[1]));
    int result = imp->comparePoint(refNode, offset, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Integer::New(result);
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> isPointInRangeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.isPointInRange");
    Range* imp = V8Range::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Node*, refNode, V8Node::HasInstance(args[0]) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(args[0])) : 0);
    EXCEPTION_BLOCK(int, offset, toInt32(args[1]));
    bool result = imp->isPointInRange(refNode, offset, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Boolean(result);
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> expandCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Range.expand");
    Range* imp = V8Range::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, unit, args[0]);
    imp->expand(unit, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

} // namespace RangeInternal

static const BatchedAttribute RangeAttrs[] = {
    // Attribute 'startContainer' (Type: 'readonly attribute' ExtAttr: '')
    {"startContainer", RangeInternal::startContainerAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'startOffset' (Type: 'readonly attribute' ExtAttr: '')
    {"startOffset", RangeInternal::startOffsetAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'endContainer' (Type: 'readonly attribute' ExtAttr: '')
    {"endContainer", RangeInternal::endContainerAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'endOffset' (Type: 'readonly attribute' ExtAttr: '')
    {"endOffset", RangeInternal::endOffsetAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'collapsed' (Type: 'readonly attribute' ExtAttr: '')
    {"collapsed", RangeInternal::collapsedAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'commonAncestorContainer' (Type: 'readonly attribute' ExtAttr: '')
    {"commonAncestorContainer", RangeInternal::commonAncestorContainerAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback RangeCallbacks[] = {
    {"collapse", RangeInternal::collapseCallback},
    {"deleteContents", RangeInternal::deleteContentsCallback},
    {"extractContents", RangeInternal::extractContentsCallback},
    {"cloneContents", RangeInternal::cloneContentsCallback},
    {"cloneRange", RangeInternal::cloneRangeCallback},
    {"toString", RangeInternal::toStringCallback},
    {"detach", RangeInternal::detachCallback},
    {"getClientRects", RangeInternal::getClientRectsCallback},
    {"getBoundingClientRect", RangeInternal::getBoundingClientRectCallback},
    {"createContextualFragment", RangeInternal::createContextualFragmentCallback},
    {"expand", RangeInternal::expandCallback},
};
static const BatchedConstant RangeConsts[] = {
    {"START_TO_START", static_cast<signed int>(0)},
    {"START_TO_END", static_cast<signed int>(1)},
    {"END_TO_END", static_cast<signed int>(2)},
    {"END_TO_START", static_cast<signed int>(3)},
    {"NODE_BEFORE", static_cast<signed int>(0)},
    {"NODE_AFTER", static_cast<signed int>(1)},
    {"NODE_BEFORE_AND_AFTER", static_cast<signed int>(2)},
    {"NODE_INSIDE", static_cast<signed int>(3)},
};

COMPILE_ASSERT(0 == Range::START_TO_START, RangeEnumSTART_TO_STARTIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == Range::START_TO_END, RangeEnumSTART_TO_ENDIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == Range::END_TO_END, RangeEnumEND_TO_ENDIsWrongUseDontCheckEnums);
COMPILE_ASSERT(3 == Range::END_TO_START, RangeEnumEND_TO_STARTIsWrongUseDontCheckEnums);
COMPILE_ASSERT(0 == Range::NODE_BEFORE, RangeEnumNODE_BEFOREIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == Range::NODE_AFTER, RangeEnumNODE_AFTERIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == Range::NODE_BEFORE_AND_AFTER, RangeEnumNODE_BEFORE_AND_AFTERIsWrongUseDontCheckEnums);
COMPILE_ASSERT(3 == Range::NODE_INSIDE, RangeEnumNODE_INSIDEIsWrongUseDontCheckEnums);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8RangeTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "Range", v8::Persistent<v8::FunctionTemplate>(), V8Range::internalFieldCount,
        RangeAttrs, sizeof(RangeAttrs) / sizeof(*RangeAttrs),
        RangeCallbacks, sizeof(RangeCallbacks) / sizeof(*RangeCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom Signature 'setStart'
    const int setStartArgc = 2;
    v8::Handle<v8::FunctionTemplate> setStartArgv[setStartArgc] = { V8Node::GetRawTemplate(), v8::Handle<v8::FunctionTemplate>() };
    v8::Handle<v8::Signature> setStartSignature = v8::Signature::New(desc, setStartArgc, setStartArgv);
    proto->Set(v8::String::New("setStart"), v8::FunctionTemplate::New(RangeInternal::setStartCallback, v8::Handle<v8::Value>(), setStartSignature));

    // Custom Signature 'setEnd'
    const int setEndArgc = 2;
    v8::Handle<v8::FunctionTemplate> setEndArgv[setEndArgc] = { V8Node::GetRawTemplate(), v8::Handle<v8::FunctionTemplate>() };
    v8::Handle<v8::Signature> setEndSignature = v8::Signature::New(desc, setEndArgc, setEndArgv);
    proto->Set(v8::String::New("setEnd"), v8::FunctionTemplate::New(RangeInternal::setEndCallback, v8::Handle<v8::Value>(), setEndSignature));

    // Custom Signature 'setStartBefore'
    const int setStartBeforeArgc = 1;
    v8::Handle<v8::FunctionTemplate> setStartBeforeArgv[setStartBeforeArgc] = { V8Node::GetRawTemplate() };
    v8::Handle<v8::Signature> setStartBeforeSignature = v8::Signature::New(desc, setStartBeforeArgc, setStartBeforeArgv);
    proto->Set(v8::String::New("setStartBefore"), v8::FunctionTemplate::New(RangeInternal::setStartBeforeCallback, v8::Handle<v8::Value>(), setStartBeforeSignature));

    // Custom Signature 'setStartAfter'
    const int setStartAfterArgc = 1;
    v8::Handle<v8::FunctionTemplate> setStartAfterArgv[setStartAfterArgc] = { V8Node::GetRawTemplate() };
    v8::Handle<v8::Signature> setStartAfterSignature = v8::Signature::New(desc, setStartAfterArgc, setStartAfterArgv);
    proto->Set(v8::String::New("setStartAfter"), v8::FunctionTemplate::New(RangeInternal::setStartAfterCallback, v8::Handle<v8::Value>(), setStartAfterSignature));

    // Custom Signature 'setEndBefore'
    const int setEndBeforeArgc = 1;
    v8::Handle<v8::FunctionTemplate> setEndBeforeArgv[setEndBeforeArgc] = { V8Node::GetRawTemplate() };
    v8::Handle<v8::Signature> setEndBeforeSignature = v8::Signature::New(desc, setEndBeforeArgc, setEndBeforeArgv);
    proto->Set(v8::String::New("setEndBefore"), v8::FunctionTemplate::New(RangeInternal::setEndBeforeCallback, v8::Handle<v8::Value>(), setEndBeforeSignature));

    // Custom Signature 'setEndAfter'
    const int setEndAfterArgc = 1;
    v8::Handle<v8::FunctionTemplate> setEndAfterArgv[setEndAfterArgc] = { V8Node::GetRawTemplate() };
    v8::Handle<v8::Signature> setEndAfterSignature = v8::Signature::New(desc, setEndAfterArgc, setEndAfterArgv);
    proto->Set(v8::String::New("setEndAfter"), v8::FunctionTemplate::New(RangeInternal::setEndAfterCallback, v8::Handle<v8::Value>(), setEndAfterSignature));

    // Custom Signature 'selectNode'
    const int selectNodeArgc = 1;
    v8::Handle<v8::FunctionTemplate> selectNodeArgv[selectNodeArgc] = { V8Node::GetRawTemplate() };
    v8::Handle<v8::Signature> selectNodeSignature = v8::Signature::New(desc, selectNodeArgc, selectNodeArgv);
    proto->Set(v8::String::New("selectNode"), v8::FunctionTemplate::New(RangeInternal::selectNodeCallback, v8::Handle<v8::Value>(), selectNodeSignature));

    // Custom Signature 'selectNodeContents'
    const int selectNodeContentsArgc = 1;
    v8::Handle<v8::FunctionTemplate> selectNodeContentsArgv[selectNodeContentsArgc] = { V8Node::GetRawTemplate() };
    v8::Handle<v8::Signature> selectNodeContentsSignature = v8::Signature::New(desc, selectNodeContentsArgc, selectNodeContentsArgv);
    proto->Set(v8::String::New("selectNodeContents"), v8::FunctionTemplate::New(RangeInternal::selectNodeContentsCallback, v8::Handle<v8::Value>(), selectNodeContentsSignature));

    // Custom Signature 'compareBoundaryPoints'
    const int compareBoundaryPointsArgc = 2;
    v8::Handle<v8::FunctionTemplate> compareBoundaryPointsArgv[compareBoundaryPointsArgc] = { v8::Handle<v8::FunctionTemplate>(), V8Range::GetRawTemplate() };
    v8::Handle<v8::Signature> compareBoundaryPointsSignature = v8::Signature::New(desc, compareBoundaryPointsArgc, compareBoundaryPointsArgv);
    proto->Set(v8::String::New("compareBoundaryPoints"), v8::FunctionTemplate::New(RangeInternal::compareBoundaryPointsCallback, v8::Handle<v8::Value>(), compareBoundaryPointsSignature));

    // Custom Signature 'insertNode'
    const int insertNodeArgc = 1;
    v8::Handle<v8::FunctionTemplate> insertNodeArgv[insertNodeArgc] = { V8Node::GetRawTemplate() };
    v8::Handle<v8::Signature> insertNodeSignature = v8::Signature::New(desc, insertNodeArgc, insertNodeArgv);
    proto->Set(v8::String::New("insertNode"), v8::FunctionTemplate::New(RangeInternal::insertNodeCallback, v8::Handle<v8::Value>(), insertNodeSignature));

    // Custom Signature 'surroundContents'
    const int surroundContentsArgc = 1;
    v8::Handle<v8::FunctionTemplate> surroundContentsArgv[surroundContentsArgc] = { V8Node::GetRawTemplate() };
    v8::Handle<v8::Signature> surroundContentsSignature = v8::Signature::New(desc, surroundContentsArgc, surroundContentsArgv);
    proto->Set(v8::String::New("surroundContents"), v8::FunctionTemplate::New(RangeInternal::surroundContentsCallback, v8::Handle<v8::Value>(), surroundContentsSignature));

    // Custom Signature 'intersectsNode'
    const int intersectsNodeArgc = 1;
    v8::Handle<v8::FunctionTemplate> intersectsNodeArgv[intersectsNodeArgc] = { V8Node::GetRawTemplate() };
    v8::Handle<v8::Signature> intersectsNodeSignature = v8::Signature::New(desc, intersectsNodeArgc, intersectsNodeArgv);
    proto->Set(v8::String::New("intersectsNode"), v8::FunctionTemplate::New(RangeInternal::intersectsNodeCallback, v8::Handle<v8::Value>(), intersectsNodeSignature));

    // Custom Signature 'compareNode'
    const int compareNodeArgc = 1;
    v8::Handle<v8::FunctionTemplate> compareNodeArgv[compareNodeArgc] = { V8Node::GetRawTemplate() };
    v8::Handle<v8::Signature> compareNodeSignature = v8::Signature::New(desc, compareNodeArgc, compareNodeArgv);
    proto->Set(v8::String::New("compareNode"), v8::FunctionTemplate::New(RangeInternal::compareNodeCallback, v8::Handle<v8::Value>(), compareNodeSignature));

    // Custom Signature 'comparePoint'
    const int comparePointArgc = 2;
    v8::Handle<v8::FunctionTemplate> comparePointArgv[comparePointArgc] = { V8Node::GetRawTemplate(), v8::Handle<v8::FunctionTemplate>() };
    v8::Handle<v8::Signature> comparePointSignature = v8::Signature::New(desc, comparePointArgc, comparePointArgv);
    proto->Set(v8::String::New("comparePoint"), v8::FunctionTemplate::New(RangeInternal::comparePointCallback, v8::Handle<v8::Value>(), comparePointSignature));

    // Custom Signature 'isPointInRange'
    const int isPointInRangeArgc = 2;
    v8::Handle<v8::FunctionTemplate> isPointInRangeArgv[isPointInRangeArgc] = { V8Node::GetRawTemplate(), v8::Handle<v8::FunctionTemplate>() };
    v8::Handle<v8::Signature> isPointInRangeSignature = v8::Signature::New(desc, isPointInRangeArgc, isPointInRangeArgv);
    proto->Set(v8::String::New("isPointInRange"), v8::FunctionTemplate::New(RangeInternal::isPointInRangeCallback, v8::Handle<v8::Value>(), isPointInRangeSignature));
    batchConfigureConstants(desc, proto, RangeConsts, sizeof(RangeConsts) / sizeof(*RangeConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8Range::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8RangeRawCache = createRawTemplate();
    return V8RangeRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8Range::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8RangeCache = ConfigureV8RangeTemplate(GetRawTemplate());
    return V8RangeCache;
}

Range* V8Range::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<Range*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8Range::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8Range::wrap(Range* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<Range > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(Range* impl)
{
    if (!impl)
        return v8::Null();
    return V8Range::wrap(impl);
}

void V8Range::derefObject(void* object)
{
    static_cast<Range*>(object)->deref();
}

} // namespace WebCore
