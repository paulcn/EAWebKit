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

#if ENABLE(WEB_AUDIO)

#include "JSAudioBufferSourceNode.h"

#include "AudioBuffer.h"
#include "AudioBufferSourceNode.h"
#include "AudioGain.h"
#include "AudioParam.h"
#include "ExceptionCode.h"
#include "JSAudioBuffer.h"
#include "JSAudioGain.h"
#include "JSAudioParam.h"
#include "JSDOMBinding.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSAudioBufferSourceNode);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSAudioBufferSourceNodeTableValues[] =
{
    { "buffer", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioBufferSourceNodeBuffer), (intptr_t)setJSAudioBufferSourceNodeBuffer THUNK_GENERATOR(0) },
    { "gain", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioBufferSourceNodeGain), (intptr_t)0 THUNK_GENERATOR(0) },
    { "playbackRate", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioBufferSourceNodePlaybackRate), (intptr_t)0 THUNK_GENERATOR(0) },
    { "loop", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioBufferSourceNodeLoop), (intptr_t)setJSAudioBufferSourceNodeLoop THUNK_GENERATOR(0) },
    { "looping", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioBufferSourceNodeLooping), (intptr_t)setJSAudioBufferSourceNodeLooping THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioBufferSourceNodeConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSAudioBufferSourceNodeTable = { 18, 15, JSAudioBufferSourceNodeTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSAudioBufferSourceNodeConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSAudioBufferSourceNodeConstructorTable = { 1, 0, JSAudioBufferSourceNodeConstructorTableValues, 0 };
class JSAudioBufferSourceNodeConstructor : public DOMConstructorObject {
private:
    JSAudioBufferSourceNodeConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSAudioBufferSourceNodeConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSAudioBufferSourceNodeConstructor* ptr = new (JSC::allocateCell<JSAudioBufferSourceNodeConstructor>(*exec->heap())) JSAudioBufferSourceNodeConstructor(structure, globalObject);
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

const ClassInfo JSAudioBufferSourceNodeConstructor::s_info = { "AudioBufferSourceNodeConstructor", &DOMConstructorObject::s_info, &JSAudioBufferSourceNodeConstructorTable, 0 };

JSAudioBufferSourceNodeConstructor::JSAudioBufferSourceNodeConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSAudioBufferSourceNodeConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSAudioBufferSourceNodePrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSAudioBufferSourceNodeConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSAudioBufferSourceNodeConstructor, JSDOMWrapper>(exec, &JSAudioBufferSourceNodeConstructorTable, this, propertyName, slot);
}

bool JSAudioBufferSourceNodeConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSAudioBufferSourceNodeConstructor, JSDOMWrapper>(exec, &JSAudioBufferSourceNodeConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSAudioBufferSourceNodePrototypeTableValues[] =
{
    { "noteOn", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsAudioBufferSourceNodePrototypeFunctionNoteOn), (intptr_t)1 THUNK_GENERATOR(0) },
    { "noteGrainOn", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsAudioBufferSourceNodePrototypeFunctionNoteGrainOn), (intptr_t)3 THUNK_GENERATOR(0) },
    { "noteOff", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsAudioBufferSourceNodePrototypeFunctionNoteOff), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSAudioBufferSourceNodePrototypeTable = { 8, 7, JSAudioBufferSourceNodePrototypeTableValues, 0 };
const ClassInfo JSAudioBufferSourceNodePrototype::s_info = { "AudioBufferSourceNodePrototype", &JSC::JSNonFinalObject::s_info, &JSAudioBufferSourceNodePrototypeTable, 0 };

JSObject* JSAudioBufferSourceNodePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSAudioBufferSourceNode>(exec, globalObject);
}

bool JSAudioBufferSourceNodePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSAudioBufferSourceNodePrototypeTable, this, propertyName, slot);
}

bool JSAudioBufferSourceNodePrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSAudioBufferSourceNodePrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSAudioBufferSourceNode::s_info = { "AudioBufferSourceNode", &JSAudioSourceNode::s_info, &JSAudioBufferSourceNodeTable, 0 };

JSAudioBufferSourceNode::JSAudioBufferSourceNode(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<AudioBufferSourceNode> impl)
    : JSAudioSourceNode(structure, globalObject, impl)
{
}

void JSAudioBufferSourceNode::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSAudioBufferSourceNode::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSAudioBufferSourceNodePrototype::create(exec->globalData(), globalObject, JSAudioBufferSourceNodePrototype::createStructure(exec->globalData(), globalObject, JSAudioSourceNodePrototype::self(exec, globalObject)));
}

bool JSAudioBufferSourceNode::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSAudioBufferSourceNode, Base>(exec, &JSAudioBufferSourceNodeTable, this, propertyName, slot);
}

bool JSAudioBufferSourceNode::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSAudioBufferSourceNode, Base>(exec, &JSAudioBufferSourceNodeTable, this, propertyName, descriptor);
}

JSValue jsAudioBufferSourceNodeBuffer(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioBufferSourceNode* castedThis = static_cast<JSAudioBufferSourceNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioBufferSourceNode* imp = static_cast<AudioBufferSourceNode*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->buffer()));
    return result;
}


JSValue jsAudioBufferSourceNodeGain(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioBufferSourceNode* castedThis = static_cast<JSAudioBufferSourceNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioBufferSourceNode* imp = static_cast<AudioBufferSourceNode*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->gain()));
    return result;
}


JSValue jsAudioBufferSourceNodePlaybackRate(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioBufferSourceNode* castedThis = static_cast<JSAudioBufferSourceNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioBufferSourceNode* imp = static_cast<AudioBufferSourceNode*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->playbackRate()));
    return result;
}


JSValue jsAudioBufferSourceNodeLoop(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioBufferSourceNode* castedThis = static_cast<JSAudioBufferSourceNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioBufferSourceNode* imp = static_cast<AudioBufferSourceNode*>(castedThis->impl());
    JSValue result = jsBoolean(imp->loop());
    return result;
}


JSValue jsAudioBufferSourceNodeLooping(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioBufferSourceNode* castedThis = static_cast<JSAudioBufferSourceNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioBufferSourceNode* imp = static_cast<AudioBufferSourceNode*>(castedThis->impl());
    JSValue result = jsBoolean(imp->looping());
    return result;
}


JSValue jsAudioBufferSourceNodeConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioBufferSourceNode* domObject = static_cast<JSAudioBufferSourceNode*>(asObject(slotBase));
    return JSAudioBufferSourceNode::getConstructor(exec, domObject->globalObject());
}

void JSAudioBufferSourceNode::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    lookupPut<JSAudioBufferSourceNode, Base>(exec, propertyName, value, &JSAudioBufferSourceNodeTable, this, slot);
}

void setJSAudioBufferSourceNodeBuffer(ExecState* exec, JSObject* thisObject, JSValue value)
{
    static_cast<JSAudioBufferSourceNode*>(thisObject)->setBuffer(exec, value);
}


void setJSAudioBufferSourceNodeLoop(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSAudioBufferSourceNode* castedThis = static_cast<JSAudioBufferSourceNode*>(thisObject);
    AudioBufferSourceNode* imp = static_cast<AudioBufferSourceNode*>(castedThis->impl());
    imp->setLoop(value.toBoolean(exec));
}


void setJSAudioBufferSourceNodeLooping(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSAudioBufferSourceNode* castedThis = static_cast<JSAudioBufferSourceNode*>(thisObject);
    AudioBufferSourceNode* imp = static_cast<AudioBufferSourceNode*>(castedThis->impl());
    imp->setLooping(value.toBoolean(exec));
}


JSValue JSAudioBufferSourceNode::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSAudioBufferSourceNodeConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsAudioBufferSourceNodePrototypeFunctionNoteOn(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioBufferSourceNode::s_info))
        return throwVMTypeError(exec);
    JSAudioBufferSourceNode* castedThis = static_cast<JSAudioBufferSourceNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioBufferSourceNode::s_info);
    AudioBufferSourceNode* imp = static_cast<AudioBufferSourceNode*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createTypeError(exec, "Not enough arguments"));
    float when(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->noteOn(when);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsAudioBufferSourceNodePrototypeFunctionNoteGrainOn(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioBufferSourceNode::s_info))
        return throwVMTypeError(exec);
    JSAudioBufferSourceNode* castedThis = static_cast<JSAudioBufferSourceNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioBufferSourceNode::s_info);
    AudioBufferSourceNode* imp = static_cast<AudioBufferSourceNode*>(castedThis->impl());
    if (exec->argumentCount() < 3)
        return throwVMError(exec, createTypeError(exec, "Not enough arguments"));
    float when(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float grainOffset(exec->argument(1).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float grainDuration(exec->argument(2).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->noteGrainOn(when, grainOffset, grainDuration);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsAudioBufferSourceNodePrototypeFunctionNoteOff(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioBufferSourceNode::s_info))
        return throwVMTypeError(exec);
    JSAudioBufferSourceNode* castedThis = static_cast<JSAudioBufferSourceNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioBufferSourceNode::s_info);
    AudioBufferSourceNode* imp = static_cast<AudioBufferSourceNode*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createTypeError(exec, "Not enough arguments"));
    float when(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->noteOff(when);
    return JSValue::encode(jsUndefined());
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, AudioBufferSourceNode* impl)
{
    return wrap<JSAudioBufferSourceNode>(exec, globalObject, impl);
}


}

#endif // ENABLE(WEB_AUDIO)
