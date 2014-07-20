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

#ifndef JSFileException_h
#define JSFileException_h

#if ENABLE(BLOB) || ENABLE(FILE_SYSTEM)

#include "FileException.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSFileException : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSFileException* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<FileException> impl)
    {
        JSFileException* ptr = new (JSC::allocateCell<JSFileException>(globalObject->globalData().heap)) JSFileException(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    FileException* impl() const { return m_impl.get(); }

private:
    RefPtr<FileException> m_impl;
protected:
    JSFileException(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<FileException>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, FileException*);
FileException* toFileException(JSC::JSValue);

class JSFileExceptionPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSFileExceptionPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSFileExceptionPrototype* ptr = new (JSC::allocateCell<JSFileExceptionPrototype>(globalData.heap)) JSFileExceptionPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSFileExceptionPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsFileExceptionPrototypeFunctionToString(JSC::ExecState*);
// Attributes

JSC::JSValue jsFileExceptionCode(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsFileExceptionName(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsFileExceptionMessage(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsFileExceptionConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
// Constants

JSC::JSValue jsFileExceptionNOT_FOUND_ERR(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsFileExceptionSECURITY_ERR(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsFileExceptionABORT_ERR(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsFileExceptionNOT_READABLE_ERR(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsFileExceptionENCODING_ERR(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsFileExceptionNO_MODIFICATION_ALLOWED_ERR(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsFileExceptionINVALID_STATE_ERR(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsFileExceptionSYNTAX_ERR(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsFileExceptionINVALID_MODIFICATION_ERR(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsFileExceptionQUOTA_EXCEEDED_ERR(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsFileExceptionTYPE_MISMATCH_ERR(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsFileExceptionPATH_EXISTS_ERR(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(BLOB) || ENABLE(FILE_SYSTEM)

#endif