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
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSHTMLScriptElement_h
#define JSHTMLScriptElement_h

#include "JSHTMLElement.h"

namespace WebCore {

class HTMLScriptElement;

class JSHTMLScriptElement : public JSHTMLElement {
    typedef JSHTMLElement Base;
public:
    JSHTMLScriptElement(PassRefPtr<JSC::Structure>, PassRefPtr<HTMLScriptElement>);
    static JSC::JSObject* createPrototype(JSC::ExecState*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValuePtr, JSC::PutPropertySlot&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValuePtr prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType));
    }

    static JSC::JSValuePtr getConstructor(JSC::ExecState*);
};


class JSHTMLScriptElementPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    JSHTMLScriptElementPrototype(PassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
};

// Attributes

JSC::JSValuePtr jsHTMLScriptElementText(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLScriptElementText(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLScriptElementHtmlFor(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLScriptElementHtmlFor(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLScriptElementEvent(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLScriptElementEvent(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLScriptElementCharset(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLScriptElementCharset(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLScriptElementDefer(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLScriptElementDefer(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLScriptElementSrc(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLScriptElementSrc(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLScriptElementType(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLScriptElementType(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLScriptElementConstructor(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);

} // namespace WebCore

#endif