#ifndef ORG_ALLBINARY_LOGIC_STRING_STRINGMAKER_H
#define ORG_ALLBINARY_LOGIC_STRING_STRINGMAKER_H
// Generated Code Do Not Modify
// package org.allbinary.logic.string

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "jsinterop/annotations/JsType.h"
// #include "jsinterop/annotations/JsMethod.h"
// #include "jsinterop/annotations/JsConstructor.h"
#include "java/lang/System.h"
#include "java/lang/Integer.h"
#include "java/lang/Long.h"
#include "java/lang/Float.h"

typedef struct StringMaker StringMaker;
struct StringMaker {
    uint16_t* charArray;
    int32_t currentLength;
};


StringMaker* StringMaker_new(void);

void StringMaker_init(StringMaker* this);

StringMaker* StringMaker_append(StringMaker* this, const char* string);

StringMaker* StringMaker_appendchar(StringMaker* this, uint16_t c);

StringMaker* StringMaker_appendCharArray(StringMaker* this, uint16_t* charArray, int32_t start, int32_t end);

StringMaker* StringMaker_appendbyte(StringMaker* this, int8_t b);

StringMaker* StringMaker_appendshort(StringMaker* this, int16_t b);

StringMaker* StringMaker_appendint(StringMaker* this, int32_t i);

StringMaker* StringMaker_appendlong(StringMaker* this, int64_t l);

StringMaker* StringMaker_appendfloat(StringMaker* this, float f);

StringMaker* StringMaker_appendboolean(StringMaker* this, bool bool_);

void StringMaker_ensureCapacity(StringMaker* this, int32_t minSize);

int32_t StringMaker_min(StringMaker* this, int32_t value, int32_t value2);

StringMaker* StringMaker_delete(StringMaker* this, int32_t start, int32_t end);

int32_t StringMaker_length(StringMaker* this);

const char* StringMaker_toString(StringMaker* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void StringMaker_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void StringMaker_register(void);


#endif // ORG_ALLBINARY_LOGIC_STRING_STRINGMAKER_H
