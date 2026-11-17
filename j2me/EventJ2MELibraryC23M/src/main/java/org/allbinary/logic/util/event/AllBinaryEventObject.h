#ifndef ORG_ALLBINARY_LOGIC_UTIL_EVENT_ALLBINARYEVENTOBJECT_H
#define ORG_ALLBINARY_LOGIC_UTIL_EVENT_ALLBINARYEVENTOBJECT_H
/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.logic.util.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct NullUtil NullUtil;
// #include "jsinterop/annotations/JsType.h"
// #include "jsinterop/annotations/JsMethod.h"
// #include "jsinterop/annotations/JsConstructor.h"
// #include "jsinterop/annotations/JsProperty.h"

typedef struct AllBinaryEventObject AllBinaryEventObject;
struct AllBinaryEventObject {
    void* source;
};

extern AllBinaryEventObject* AllBinaryEventObject_NULL_EVENT;

AllBinaryEventObject* AllBinaryEventObject_new(void* anyType);

void AllBinaryEventObject_init(AllBinaryEventObject* this, void* anyType);

void* AllBinaryEventObject_getSource(AllBinaryEventObject* this);

void AllBinaryEventObject_setSource(AllBinaryEventObject* this, void* source);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinaryEventObject_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllBinaryEventObject_register(void);


#endif // ORG_ALLBINARY_LOGIC_UTIL_EVENT_ALLBINARYEVENTOBJECT_H
