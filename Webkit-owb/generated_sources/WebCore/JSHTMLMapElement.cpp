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

/*
* This file was modified by Electronic Arts Inc Copyright � 2009-2010
*/

#include "config.h"

#include "JSHTMLMapElement.h"

#include <wtf/GetPtr.h>

#include "HTMLCollection.h"
#include "HTMLMapElement.h"
#include "JSHTMLCollection.h"
#include "KURL.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLMapElementTableValues[4] =
{
    { "areas", (intptr_t)JSHTMLMapElement::AreasAttrNum, DontDelete|ReadOnly, 0 },
    { "name", (intptr_t)JSHTMLMapElement::NameAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSHTMLMapElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLMapElementTable = { 127, JSHTMLMapElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLMapElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLMapElementConstructorTable = { 0, JSHTMLMapElementConstructorTableValues, 0 };

class JSHTMLMapElementConstructor : public DOMObject {
public:
    JSHTMLMapElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLMapElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLMapElementConstructor::s_info = { "HTMLMapElementConstructor", 0, &JSHTMLMapElementConstructorTable, 0 };

bool JSHTMLMapElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLMapElementConstructor, DOMObject>(exec, &JSHTMLMapElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLMapElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLMapElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLMapElementPrototypeTable = { 0, JSHTMLMapElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLMapElementPrototype::s_info = { "HTMLMapElementPrototype", 0, &JSHTMLMapElementPrototypeTable, 0 };

JSObject* JSHTMLMapElementPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSHTMLMapElement.prototype]]");
    return KJS::cacheGlobalObject<JSHTMLMapElementPrototype>(exec, prototypeIdentifier);
}

const ClassInfo JSHTMLMapElement::s_info = { "HTMLMapElement", &JSHTMLElement::s_info, &JSHTMLMapElementTable , 0 };

JSHTMLMapElement::JSHTMLMapElement(JSObject* prototype, HTMLMapElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLMapElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLMapElement, Base>(exec, &JSHTMLMapElementTable, this, propertyName, slot);
}

JSValue* JSHTMLMapElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case AreasAttrNum: {
        HTMLMapElement* imp = static_cast<HTMLMapElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->areas()));
    }
    case NameAttrNum: {
        HTMLMapElement* imp = static_cast<HTMLMapElement*>(impl());
        return jsString(exec, imp->name());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLMapElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    lookupPut<JSHTMLMapElement, Base>(exec, propertyName, value, &JSHTMLMapElementTable, this);
}

void JSHTMLMapElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case NameAttrNum: {
        HTMLMapElement* imp = static_cast<HTMLMapElement*>(impl());
        imp->setName(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLMapElement::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[HTMLMapElement.constructor]]");
    return KJS::cacheGlobalObject<JSHTMLMapElementConstructor>(exec, constructorIdentifier);
}


}
