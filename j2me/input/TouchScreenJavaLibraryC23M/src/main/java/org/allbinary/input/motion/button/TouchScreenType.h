#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENTYPE_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENTYPE_H
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

typedef struct TouchScreenType TouchScreenType;
struct TouchScreenType {
    const char* name;
};


TouchScreenType* TouchScreenType_new(const char* name);

void TouchScreenType_init(TouchScreenType* this, const char* name);

const char* TouchScreenType_getName(TouchScreenType* this);

const char* TouchScreenType_toString(TouchScreenType* this);
#define TouchScreenType_new1 TouchScreenType_new
#define TouchScreenType_init1 TouchScreenType_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TouchScreenType_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TouchScreenType_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENTYPE_H
