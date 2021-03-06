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
#include "V8WebKitCSSMatrix.h"

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8WebKitCSSMatrix::info = { V8WebKitCSSMatrix::GetTemplate, V8WebKitCSSMatrix::derefObject, 0 };

namespace WebKitCSSMatrixInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> aAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.a._get");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->a());
}

static void aAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.a._set");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setA(v);
    return;
}

static v8::Handle<v8::Value> bAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.b._get");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->b());
}

static void bAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.b._set");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setB(v);
    return;
}

static v8::Handle<v8::Value> cAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.c._get");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->c());
}

static void cAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.c._set");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setC(v);
    return;
}

static v8::Handle<v8::Value> dAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.d._get");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->d());
}

static void dAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.d._set");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setD(v);
    return;
}

static v8::Handle<v8::Value> eAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.e._get");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->e());
}

static void eAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.e._set");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setE(v);
    return;
}

static v8::Handle<v8::Value> fAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.f._get");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->f());
}

static void fAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.f._set");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setF(v);
    return;
}

static v8::Handle<v8::Value> m11AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m11._get");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m11());
}

static void m11AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m11._set");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM11(v);
    return;
}

static v8::Handle<v8::Value> m12AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m12._get");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m12());
}

static void m12AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m12._set");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM12(v);
    return;
}

static v8::Handle<v8::Value> m13AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m13._get");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m13());
}

static void m13AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m13._set");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM13(v);
    return;
}

static v8::Handle<v8::Value> m14AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m14._get");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m14());
}

static void m14AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m14._set");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM14(v);
    return;
}

static v8::Handle<v8::Value> m21AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m21._get");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m21());
}

static void m21AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m21._set");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM21(v);
    return;
}

static v8::Handle<v8::Value> m22AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m22._get");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m22());
}

static void m22AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m22._set");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM22(v);
    return;
}

static v8::Handle<v8::Value> m23AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m23._get");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m23());
}

static void m23AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m23._set");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM23(v);
    return;
}

static v8::Handle<v8::Value> m24AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m24._get");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m24());
}

static void m24AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m24._set");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM24(v);
    return;
}

static v8::Handle<v8::Value> m31AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m31._get");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m31());
}

static void m31AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m31._set");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM31(v);
    return;
}

static v8::Handle<v8::Value> m32AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m32._get");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m32());
}

static void m32AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m32._set");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM32(v);
    return;
}

static v8::Handle<v8::Value> m33AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m33._get");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m33());
}

static void m33AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m33._set");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM33(v);
    return;
}

static v8::Handle<v8::Value> m34AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m34._get");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m34());
}

static void m34AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m34._set");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM34(v);
    return;
}

static v8::Handle<v8::Value> m41AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m41._get");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m41());
}

static void m41AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m41._set");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM41(v);
    return;
}

static v8::Handle<v8::Value> m42AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m42._get");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m42());
}

static void m42AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m42._set");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM42(v);
    return;
}

static v8::Handle<v8::Value> m43AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m43._get");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m43());
}

static void m43AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m43._set");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM43(v);
    return;
}

static v8::Handle<v8::Value> m44AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m44._get");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m44());
}

static void m44AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSMatrix.m44._set");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM44(v);
    return;
}

static v8::Handle<v8::Value> setMatrixValueCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.WebKitCSSMatrix.setMatrixValue");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, string, args[0]);
    imp->setMatrixValue(string, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> multiplyCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.WebKitCSSMatrix.multiply");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(args.Holder());
    EXCEPTION_BLOCK(WebKitCSSMatrix*, secondMatrix, V8WebKitCSSMatrix::HasInstance(args[0]) ? V8WebKitCSSMatrix::toNative(v8::Handle<v8::Object>::Cast(args[0])) : 0);
    return toV8(imp->multiply(secondMatrix));
}

static v8::Handle<v8::Value> inverseCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.WebKitCSSMatrix.inverse");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    RefPtr<WebKitCSSMatrix> result = imp->inverse(ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> translateCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.WebKitCSSMatrix.translate");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(args.Holder());
    EXCEPTION_BLOCK(double, x, static_cast<double>(args[0]->NumberValue()));
    EXCEPTION_BLOCK(double, y, static_cast<double>(args[1]->NumberValue()));
    EXCEPTION_BLOCK(double, z, static_cast<double>(args[2]->NumberValue()));
    return toV8(imp->translate(x, y, z));
}

static v8::Handle<v8::Value> scaleCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.WebKitCSSMatrix.scale");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(args.Holder());
    EXCEPTION_BLOCK(double, scaleX, static_cast<double>(args[0]->NumberValue()));
    EXCEPTION_BLOCK(double, scaleY, static_cast<double>(args[1]->NumberValue()));
    EXCEPTION_BLOCK(double, scaleZ, static_cast<double>(args[2]->NumberValue()));
    return toV8(imp->scale(scaleX, scaleY, scaleZ));
}

static v8::Handle<v8::Value> rotateCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.WebKitCSSMatrix.rotate");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(args.Holder());
    EXCEPTION_BLOCK(double, rotX, static_cast<double>(args[0]->NumberValue()));
    EXCEPTION_BLOCK(double, rotY, static_cast<double>(args[1]->NumberValue()));
    EXCEPTION_BLOCK(double, rotZ, static_cast<double>(args[2]->NumberValue()));
    return toV8(imp->rotate(rotX, rotY, rotZ));
}

static v8::Handle<v8::Value> rotateAxisAngleCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.WebKitCSSMatrix.rotateAxisAngle");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(args.Holder());
    EXCEPTION_BLOCK(double, x, static_cast<double>(args[0]->NumberValue()));
    EXCEPTION_BLOCK(double, y, static_cast<double>(args[1]->NumberValue()));
    EXCEPTION_BLOCK(double, z, static_cast<double>(args[2]->NumberValue()));
    EXCEPTION_BLOCK(double, angle, static_cast<double>(args[3]->NumberValue()));
    return toV8(imp->rotateAxisAngle(x, y, z, angle));
}

static v8::Handle<v8::Value> toStringCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.WebKitCSSMatrix.toString");
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(args.Holder());
    return v8String(imp->toString());
}

} // namespace WebKitCSSMatrixInternal

static const BatchedAttribute WebKitCSSMatrixAttrs[] = {
    // Attribute 'a' (Type: 'attribute' ExtAttr: '')
    {"a", WebKitCSSMatrixInternal::aAttrGetter, WebKitCSSMatrixInternal::aAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'b' (Type: 'attribute' ExtAttr: '')
    {"b", WebKitCSSMatrixInternal::bAttrGetter, WebKitCSSMatrixInternal::bAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'c' (Type: 'attribute' ExtAttr: '')
    {"c", WebKitCSSMatrixInternal::cAttrGetter, WebKitCSSMatrixInternal::cAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'd' (Type: 'attribute' ExtAttr: '')
    {"d", WebKitCSSMatrixInternal::dAttrGetter, WebKitCSSMatrixInternal::dAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'e' (Type: 'attribute' ExtAttr: '')
    {"e", WebKitCSSMatrixInternal::eAttrGetter, WebKitCSSMatrixInternal::eAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'f' (Type: 'attribute' ExtAttr: '')
    {"f", WebKitCSSMatrixInternal::fAttrGetter, WebKitCSSMatrixInternal::fAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm11' (Type: 'attribute' ExtAttr: '')
    {"m11", WebKitCSSMatrixInternal::m11AttrGetter, WebKitCSSMatrixInternal::m11AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm12' (Type: 'attribute' ExtAttr: '')
    {"m12", WebKitCSSMatrixInternal::m12AttrGetter, WebKitCSSMatrixInternal::m12AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm13' (Type: 'attribute' ExtAttr: '')
    {"m13", WebKitCSSMatrixInternal::m13AttrGetter, WebKitCSSMatrixInternal::m13AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm14' (Type: 'attribute' ExtAttr: '')
    {"m14", WebKitCSSMatrixInternal::m14AttrGetter, WebKitCSSMatrixInternal::m14AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm21' (Type: 'attribute' ExtAttr: '')
    {"m21", WebKitCSSMatrixInternal::m21AttrGetter, WebKitCSSMatrixInternal::m21AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm22' (Type: 'attribute' ExtAttr: '')
    {"m22", WebKitCSSMatrixInternal::m22AttrGetter, WebKitCSSMatrixInternal::m22AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm23' (Type: 'attribute' ExtAttr: '')
    {"m23", WebKitCSSMatrixInternal::m23AttrGetter, WebKitCSSMatrixInternal::m23AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm24' (Type: 'attribute' ExtAttr: '')
    {"m24", WebKitCSSMatrixInternal::m24AttrGetter, WebKitCSSMatrixInternal::m24AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm31' (Type: 'attribute' ExtAttr: '')
    {"m31", WebKitCSSMatrixInternal::m31AttrGetter, WebKitCSSMatrixInternal::m31AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm32' (Type: 'attribute' ExtAttr: '')
    {"m32", WebKitCSSMatrixInternal::m32AttrGetter, WebKitCSSMatrixInternal::m32AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm33' (Type: 'attribute' ExtAttr: '')
    {"m33", WebKitCSSMatrixInternal::m33AttrGetter, WebKitCSSMatrixInternal::m33AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm34' (Type: 'attribute' ExtAttr: '')
    {"m34", WebKitCSSMatrixInternal::m34AttrGetter, WebKitCSSMatrixInternal::m34AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm41' (Type: 'attribute' ExtAttr: '')
    {"m41", WebKitCSSMatrixInternal::m41AttrGetter, WebKitCSSMatrixInternal::m41AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm42' (Type: 'attribute' ExtAttr: '')
    {"m42", WebKitCSSMatrixInternal::m42AttrGetter, WebKitCSSMatrixInternal::m42AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm43' (Type: 'attribute' ExtAttr: '')
    {"m43", WebKitCSSMatrixInternal::m43AttrGetter, WebKitCSSMatrixInternal::m43AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm44' (Type: 'attribute' ExtAttr: '')
    {"m44", WebKitCSSMatrixInternal::m44AttrGetter, WebKitCSSMatrixInternal::m44AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback WebKitCSSMatrixCallbacks[] = {
    {"setMatrixValue", WebKitCSSMatrixInternal::setMatrixValueCallback},
    {"inverse", WebKitCSSMatrixInternal::inverseCallback},
    {"translate", WebKitCSSMatrixInternal::translateCallback},
    {"scale", WebKitCSSMatrixInternal::scaleCallback},
    {"rotate", WebKitCSSMatrixInternal::rotateCallback},
    {"rotateAxisAngle", WebKitCSSMatrixInternal::rotateAxisAngleCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8WebKitCSSMatrixTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "WebKitCSSMatrix", v8::Persistent<v8::FunctionTemplate>(), V8WebKitCSSMatrix::internalFieldCount,
        WebKitCSSMatrixAttrs, sizeof(WebKitCSSMatrixAttrs) / sizeof(*WebKitCSSMatrixAttrs),
        WebKitCSSMatrixCallbacks, sizeof(WebKitCSSMatrixCallbacks) / sizeof(*WebKitCSSMatrixCallbacks));
        desc->SetCallHandler(V8WebKitCSSMatrix::constructorCallback);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom Signature 'multiply'
    const int multiplyArgc = 1;
    v8::Handle<v8::FunctionTemplate> multiplyArgv[multiplyArgc] = { V8WebKitCSSMatrix::GetRawTemplate() };
    v8::Handle<v8::Signature> multiplySignature = v8::Signature::New(desc, multiplyArgc, multiplyArgv);
    proto->Set(v8::String::New("multiply"), v8::FunctionTemplate::New(WebKitCSSMatrixInternal::multiplyCallback, v8::Handle<v8::Value>(), multiplySignature));
    proto->Set(v8::String::New("toString"), v8::FunctionTemplate::New(WebKitCSSMatrixInternal::toStringCallback, v8::Handle<v8::Value>(), defaultSignature), static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8WebKitCSSMatrix::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8WebKitCSSMatrixRawCache = createRawTemplate();
    return V8WebKitCSSMatrixRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8WebKitCSSMatrix::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8WebKitCSSMatrixCache = ConfigureV8WebKitCSSMatrixTemplate(GetRawTemplate());
    return V8WebKitCSSMatrixCache;
}

WebKitCSSMatrix* V8WebKitCSSMatrix::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<WebKitCSSMatrix*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8WebKitCSSMatrix::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8WebKitCSSMatrix::wrap(WebKitCSSMatrix* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<WebKitCSSMatrix > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(WebKitCSSMatrix* impl)
{
    if (!impl)
        return v8::Null();
    return V8WebKitCSSMatrix::wrap(impl);
}

void V8WebKitCSSMatrix::derefObject(void* object)
{
    static_cast<WebKitCSSMatrix*>(object)->deref();
}

} // namespace WebCore
