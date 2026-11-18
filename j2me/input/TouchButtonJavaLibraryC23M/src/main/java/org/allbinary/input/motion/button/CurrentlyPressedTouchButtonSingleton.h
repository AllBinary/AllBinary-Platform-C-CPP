#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETON_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETON_H
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
typedef struct TouchButtonInput TouchButtonInput;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct CurrentlyPressedTouchButtonSingleton CurrentlyPressedTouchButtonSingleton;
struct CurrentlyPressedTouchButtonSingleton {
    BasicArrayList* list;
};


CurrentlyPressedTouchButtonSingleton* CurrentlyPressedTouchButtonSingleton_new(void);

CurrentlyPressedTouchButtonSingleton* CurrentlyPressedTouchButtonSingleton_getInstance(void);

void CurrentlyPressedTouchButtonSingleton_init(CurrentlyPressedTouchButtonSingleton* this);

int32_t CurrentlyPressedTouchButtonSingleton_size(CurrentlyPressedTouchButtonSingleton* this);

TouchButtonInput* CurrentlyPressedTouchButtonSingleton_removeAt(CurrentlyPressedTouchButtonSingleton* this, int32_t index);

bool CurrentlyPressedTouchButtonSingleton_remove(CurrentlyPressedTouchButtonSingleton* this, TouchButtonInput* touchButtonInput);

TouchButtonInput* CurrentlyPressedTouchButtonSingleton_get(CurrentlyPressedTouchButtonSingleton* this, int32_t index);

bool CurrentlyPressedTouchButtonSingleton_contains(CurrentlyPressedTouchButtonSingleton* this, TouchButtonInput* touchButtonInput);

void CurrentlyPressedTouchButtonSingleton_add(CurrentlyPressedTouchButtonSingleton* this, TouchButtonInput* touchButtonInput);
#define CurrentlyPressedTouchButtonSingleton_new0 CurrentlyPressedTouchButtonSingleton_new
#define CurrentlyPressedTouchButtonSingleton_init0 CurrentlyPressedTouchButtonSingleton_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CurrentlyPressedTouchButtonSingleton_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CurrentlyPressedTouchButtonSingleton_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETON_H
