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
// package org.allbinary.input.motion.button

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/logic/NullUtil.h"

typedef struct CancelTouchButtonInputFactory CancelTouchButtonInputFactory;
struct CancelTouchButtonInputFactory {
    TouchButtonInput** cancelInputArray;
};

static Any* CancelTouchButtonInputFactory_instance;

CancelTouchButtonInputFactory* CancelTouchButtonInputFactory_new(void);
CancelTouchButtonInputFactory* CancelTouchButtonInputFactory_getInstance(void);

void CancelTouchButtonInputFactory_init(CancelTouchButtonInputFactory* this);
TouchButtonInput* CancelTouchButtonInputFactory_getCancel(CancelTouchButtonInputFactory* this, TouchButtonInput* touchButtonInput);

// Static fields with runtime initializers: call this once at startup
void CancelTouchButtonInputFactory_staticInit(void) {
    CancelTouchButtonInputFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void CancelTouchButtonInputFactory_initFields(CancelTouchButtonInputFactory* this) {
    this->cancelInputArray = ((TouchButtonInput**) java_array_new(sizeof(TouchButtonInput*), InputFactory_getInstance()->MAX));
}


CancelTouchButtonInputFactory* CancelTouchButtonInputFactory_getInstance(void) {
        if (CancelTouchButtonInputFactory_instance == NullUtil_getInstance()->NULL_OBJECT) {
            CancelTouchButtonInputFactory_instance = CancelTouchButtonInputFactory_new();
        }
        return ((CancelTouchButtonInputFactory*) CancelTouchButtonInputFactory_instance);
}


void CancelTouchButtonInputFactory_init(CancelTouchButtonInputFactory* this) {
    CancelTouchButtonInputFactory_initFields(this);
        BasicTouchInputFactory* basicTouchInputFactory = BasicTouchInputFactory_getInstance();
        for (int32_t index = java_array_length(this->cancelInputArray) - 1; index >= 0; index--) {
            this->cancelInputArray[index] = basicTouchInputFactory->NONE;
        }
        this->cancelInputArray[JAVA_CALL(basicTouchInputFactory->UP, getSourceId)] = basicTouchInputFactory->DOWN;
        this->cancelInputArray[JAVA_CALL(basicTouchInputFactory->DOWN, getSourceId)] = basicTouchInputFactory->UP;
        this->cancelInputArray[JAVA_CALL(basicTouchInputFactory->LEFT, getSourceId)] = basicTouchInputFactory->RIGHT;
        this->cancelInputArray[JAVA_CALL(basicTouchInputFactory->RIGHT, getSourceId)] = basicTouchInputFactory->LEFT;
}

CancelTouchButtonInputFactory* CancelTouchButtonInputFactory_new(void) {
    CancelTouchButtonInputFactory* this = calloc(1, sizeof(CancelTouchButtonInputFactory));
    CancelTouchButtonInputFactory_init(this);
    return this;
}


TouchButtonInput* CancelTouchButtonInputFactory_getCancel(CancelTouchButtonInputFactory* this, TouchButtonInput* touchButtonInput) {
        return this->cancelInputArray[TouchButtonInput_getSourceId(touchButtonInput)];
}

