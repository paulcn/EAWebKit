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

#include "config.h"

#if ENABLE(SVG) && ENABLE(SVG_FONTS)

#include "JSSVGFontFaceElement.h"

#include "SVGFontFaceElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFontFaceElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFontFaceElementTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFontFaceElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFontFaceElementTable = { 2, 1, JSSVGFontFaceElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFontFaceElementConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFontFaceElementConstructorTable = { 1, 0, JSSVGFontFaceElementConstructorTableValues, 0 };
class JSSVGFontFaceElementConstructor : public DOMConstructorObject {
private:
    JSSVGFontFaceElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGFontFaceElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGFontFaceElementConstructor* ptr = new (JSC::allocateCell<JSSVGFontFaceElementConstructor>(*exec->heap())) JSSVGFontFaceElementConstructor(structure, globalObject);
        ptr->finishCreation(exec, globalObject);
        return ptr;
    }

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSSVGFontFaceElementConstructor::s_info = { "SVGFontFaceElementConstructor", &DOMConstructorObject::s_info, &JSSVGFontFaceElementConstructorTable, 0 };

JSSVGFontFaceElementConstructor::JSSVGFontFaceElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFontFaceElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGFontFaceElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGFontFaceElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFontFaceElementConstructor, JSDOMWrapper>(exec, &JSSVGFontFaceElementConstructorTable, this, propertyName, slot);
}

bool JSSVGFontFaceElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFontFaceElementConstructor, JSDOMWrapper>(exec, &JSSVGFontFaceElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFontFaceElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFontFaceElementPrototypeTable = { 1, 0, JSSVGFontFaceElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFontFaceElementPrototype::s_info = { "SVGFontFaceElementPrototype", &JSC::JSNonFinalObject::s_info, &JSSVGFontFaceElementPrototypeTable, 0 };

JSObject* JSSVGFontFaceElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFontFaceElement>(exec, globalObject);
}

const ClassInfo JSSVGFontFaceElement::s_info = { "SVGFontFaceElement", &JSSVGElement::s_info, &JSSVGFontFaceElementTable, 0 };

JSSVGFontFaceElement::JSSVGFontFaceElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFontFaceElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

void JSSVGFontFaceElement::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGFontFaceElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGFontFaceElementPrototype::create(exec->globalData(), globalObject, JSSVGFontFaceElementPrototype::createStructure(exec->globalData(), globalObject, JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGFontFaceElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSSVGFontFaceElement, Base>(exec, &JSSVGFontFaceElementTable, this, propertyName, slot);
}

bool JSSVGFontFaceElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSSVGFontFaceElement, Base>(exec, &JSSVGFontFaceElementTable, this, propertyName, descriptor);
}

JSValue jsSVGFontFaceElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFontFaceElement* domObject = static_cast<JSSVGFontFaceElement*>(asObject(slotBase));
    return JSSVGFontFaceElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGFontFaceElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFontFaceElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_FONTS)