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

#if ENABLE(SVG) && ENABLE(FILTERS)

#include "JSSVGFEGaussianBlurElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "ExceptionCode.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEGaussianBlurElement.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFEGaussianBlurElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEGaussianBlurElementTableValues[] =
{
    { "in1", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEGaussianBlurElementIn1), (intptr_t)0 THUNK_GENERATOR(0) },
    { "stdDeviationX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEGaussianBlurElementStdDeviationX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "stdDeviationY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEGaussianBlurElementStdDeviationY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEGaussianBlurElementX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEGaussianBlurElementY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "width", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEGaussianBlurElementWidth), (intptr_t)0 THUNK_GENERATOR(0) },
    { "height", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEGaussianBlurElementHeight), (intptr_t)0 THUNK_GENERATOR(0) },
    { "result", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEGaussianBlurElementResult), (intptr_t)0 THUNK_GENERATOR(0) },
    { "className", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEGaussianBlurElementClassName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "style", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEGaussianBlurElementStyle), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEGaussianBlurElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEGaussianBlurElementTable = { 34, 31, JSSVGFEGaussianBlurElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEGaussianBlurElementConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEGaussianBlurElementConstructorTable = { 1, 0, JSSVGFEGaussianBlurElementConstructorTableValues, 0 };
class JSSVGFEGaussianBlurElementConstructor : public DOMConstructorObject {
private:
    JSSVGFEGaussianBlurElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGFEGaussianBlurElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGFEGaussianBlurElementConstructor* ptr = new (JSC::allocateCell<JSSVGFEGaussianBlurElementConstructor>(*exec->heap())) JSSVGFEGaussianBlurElementConstructor(structure, globalObject);
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

const ClassInfo JSSVGFEGaussianBlurElementConstructor::s_info = { "SVGFEGaussianBlurElementConstructor", &DOMConstructorObject::s_info, &JSSVGFEGaussianBlurElementConstructorTable, 0 };

JSSVGFEGaussianBlurElementConstructor::JSSVGFEGaussianBlurElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFEGaussianBlurElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGFEGaussianBlurElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGFEGaussianBlurElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEGaussianBlurElementConstructor, JSDOMWrapper>(exec, &JSSVGFEGaussianBlurElementConstructorTable, this, propertyName, slot);
}

bool JSSVGFEGaussianBlurElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEGaussianBlurElementConstructor, JSDOMWrapper>(exec, &JSSVGFEGaussianBlurElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEGaussianBlurElementPrototypeTableValues[] =
{
    { "setStdDeviation", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGFEGaussianBlurElementPrototypeFunctionSetStdDeviation), (intptr_t)2 THUNK_GENERATOR(0) },
    { "getPresentationAttribute", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGFEGaussianBlurElementPrototypeFunctionGetPresentationAttribute), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEGaussianBlurElementPrototypeTable = { 4, 3, JSSVGFEGaussianBlurElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEGaussianBlurElementPrototype::s_info = { "SVGFEGaussianBlurElementPrototype", &JSC::JSNonFinalObject::s_info, &JSSVGFEGaussianBlurElementPrototypeTable, 0 };

JSObject* JSSVGFEGaussianBlurElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEGaussianBlurElement>(exec, globalObject);
}

bool JSSVGFEGaussianBlurElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGFEGaussianBlurElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGFEGaussianBlurElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGFEGaussianBlurElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGFEGaussianBlurElement::s_info = { "SVGFEGaussianBlurElement", &JSSVGElement::s_info, &JSSVGFEGaussianBlurElementTable, 0 };

JSSVGFEGaussianBlurElement::JSSVGFEGaussianBlurElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEGaussianBlurElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

void JSSVGFEGaussianBlurElement::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGFEGaussianBlurElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGFEGaussianBlurElementPrototype::create(exec->globalData(), globalObject, JSSVGFEGaussianBlurElementPrototype::createStructure(exec->globalData(), globalObject, JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGFEGaussianBlurElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSSVGFEGaussianBlurElement, Base>(exec, &JSSVGFEGaussianBlurElementTable, this, propertyName, slot);
}

bool JSSVGFEGaussianBlurElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSSVGFEGaussianBlurElement, Base>(exec, &JSSVGFEGaussianBlurElementTable, this, propertyName, descriptor);
}

JSValue jsSVGFEGaussianBlurElementIn1(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEGaussianBlurElement* castedThis = static_cast<JSSVGFEGaussianBlurElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->in1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEGaussianBlurElementStdDeviationX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEGaussianBlurElement* castedThis = static_cast<JSSVGFEGaussianBlurElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->stdDeviationXAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEGaussianBlurElementStdDeviationY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEGaussianBlurElement* castedThis = static_cast<JSSVGFEGaussianBlurElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->stdDeviationYAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEGaussianBlurElementX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEGaussianBlurElement* castedThis = static_cast<JSSVGFEGaussianBlurElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEGaussianBlurElementY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEGaussianBlurElement* castedThis = static_cast<JSSVGFEGaussianBlurElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEGaussianBlurElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEGaussianBlurElement* castedThis = static_cast<JSSVGFEGaussianBlurElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEGaussianBlurElementHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEGaussianBlurElement* castedThis = static_cast<JSSVGFEGaussianBlurElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEGaussianBlurElementResult(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEGaussianBlurElement* castedThis = static_cast<JSSVGFEGaussianBlurElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEGaussianBlurElementClassName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEGaussianBlurElement* castedThis = static_cast<JSSVGFEGaussianBlurElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEGaussianBlurElementStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEGaussianBlurElement* castedThis = static_cast<JSSVGFEGaussianBlurElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}


JSValue jsSVGFEGaussianBlurElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEGaussianBlurElement* domObject = static_cast<JSSVGFEGaussianBlurElement*>(asObject(slotBase));
    return JSSVGFEGaussianBlurElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGFEGaussianBlurElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEGaussianBlurElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGFEGaussianBlurElementPrototypeFunctionSetStdDeviation(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGFEGaussianBlurElement::s_info))
        return throwVMTypeError(exec);
    JSSVGFEGaussianBlurElement* castedThis = static_cast<JSSVGFEGaussianBlurElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGFEGaussianBlurElement::s_info);
    SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(castedThis->impl());
    float stdDeviationX(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float stdDeviationY(exec->argument(1).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->setStdDeviation(stdDeviationX, stdDeviationY);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSVGFEGaussianBlurElementPrototypeFunctionGetPresentationAttribute(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGFEGaussianBlurElement::s_info))
        return throwVMTypeError(exec);
    JSSVGFEGaussianBlurElement* castedThis = static_cast<JSSVGFEGaussianBlurElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGFEGaussianBlurElement::s_info);
    SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(castedThis->impl());
    const String& name(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return JSValue::encode(result);
}


}

#endif // ENABLE(SVG) && ENABLE(FILTERS)