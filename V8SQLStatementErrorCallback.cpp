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
#include "V8SQLStatementErrorCallback.h"

#if ENABLE(DATABASE)

#include "ScriptExecutionContext.h"
#include "V8CustomVoidCallback.h"
#include "V8Proxy.h"

#include <wtf/Assertions.h>

namespace WebCore {

V8SQLStatementErrorCallback::V8SQLStatementErrorCallback(v8::Local<v8::Object> callback, ScriptExecutionContext* context)
    : ActiveDOMCallback(context)
    , m_callback(v8::Persistent<v8::Object>::New(callback))
    , m_worldContext(UseCurrentWorld)
{
}

V8SQLStatementErrorCallback::~V8SQLStatementErrorCallback()
{
    m_callback.Dispose();
}

// Functions

} // namespace WebCore

#endif // ENABLE(DATABASE)
