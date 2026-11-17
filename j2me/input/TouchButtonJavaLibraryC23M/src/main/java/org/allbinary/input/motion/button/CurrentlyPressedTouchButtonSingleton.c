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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct CurrentlyPressedTouchButtonSingleton CurrentlyPressedTouchButtonSingleton;
struct CurrentlyPressedTouchButtonSingleton {
    BasicArrayList* list;
};

static CurrentlyPressedTouchButtonSingleton* CurrentlyPressedTouchButtonSingleton_instance;

CurrentlyPressedTouchButtonSingleton* CurrentlyPressedTouchButtonSingleton_new(void);
CurrentlyPressedTouchButtonSingleton* CurrentlyPressedTouchButtonSingleton_getInstance(void);

void CurrentlyPressedTouchButtonSingleton_init(CurrentlyPressedTouchButtonSingleton* this);
int32_t CurrentlyPressedTouchButtonSingleton_size(CurrentlyPressedTouchButtonSingleton* this);
TouchButtonInput* CurrentlyPressedTouchButtonSingleton_removeAt(CurrentlyPressedTouchButtonSingleton* this, int32_t index);
bool CurrentlyPressedTouchButtonSingleton_remove(CurrentlyPressedTouchButtonSingleton* this, TouchButtonInput* touchButtonInput);
TouchButtonInput* CurrentlyPressedTouchButtonSingleton_get(CurrentlyPressedTouchButtonSingleton* this, int32_t index);
bool CurrentlyPressedTouchButtonSingleton_contains(CurrentlyPressedTouchButtonSingleton* this, TouchButtonInput* touchButtonInput);
void CurrentlyPressedTouchButtonSingleton_add(CurrentlyPressedTouchButtonSingleton* this, TouchButtonInput* touchButtonInput);

// Static fields with runtime initializers: call this once at startup
void CurrentlyPressedTouchButtonSingleton_staticInit(void) {
    CurrentlyPressedTouchButtonSingleton_instance = CurrentlyPressedTouchButtonSingleton_new();
}

static void CurrentlyPressedTouchButtonSingleton_initFields(CurrentlyPressedTouchButtonSingleton* this) {
    this->list = BasicArrayListD_new();
}


CurrentlyPressedTouchButtonSingleton* CurrentlyPressedTouchButtonSingleton_getInstance(void) {
        return CurrentlyPressedTouchButtonSingleton_instance;
}


void CurrentlyPressedTouchButtonSingleton_init(CurrentlyPressedTouchButtonSingleton* this) {
    CurrentlyPressedTouchButtonSingleton_initFields(this);
}

CurrentlyPressedTouchButtonSingleton* CurrentlyPressedTouchButtonSingleton_new(void) {
    CurrentlyPressedTouchButtonSingleton* this = calloc(1, sizeof(CurrentlyPressedTouchButtonSingleton));
    CurrentlyPressedTouchButtonSingleton_init(this);
    return this;
}


int32_t CurrentlyPressedTouchButtonSingleton_size(CurrentlyPressedTouchButtonSingleton* this) {
        return BasicArrayList_size(this->list);
}


TouchButtonInput* CurrentlyPressedTouchButtonSingleton_removeAt(CurrentlyPressedTouchButtonSingleton* this, int32_t index) {
        return ((TouchButtonInput*) BasicArrayList_removeAt(this->list, index));
}


bool CurrentlyPressedTouchButtonSingleton_remove(CurrentlyPressedTouchButtonSingleton* this, TouchButtonInput* touchButtonInput) {
        return BasicArrayList_remove(this->list, touchButtonInput);
}


TouchButtonInput* CurrentlyPressedTouchButtonSingleton_get(CurrentlyPressedTouchButtonSingleton* this, int32_t index) {
        return ((TouchButtonInput*) this->list->objectArray[index]);
}


bool CurrentlyPressedTouchButtonSingleton_contains(CurrentlyPressedTouchButtonSingleton* this, TouchButtonInput* touchButtonInput) {
        return BasicArrayList_contains(this->list, touchButtonInput);
}


void CurrentlyPressedTouchButtonSingleton_add(CurrentlyPressedTouchButtonSingleton* this, TouchButtonInput* touchButtonInput) {
        BasicArrayList_add(this->list, touchButtonInput);
}

