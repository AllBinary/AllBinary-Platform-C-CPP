#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONDOWNRESOURCE_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONDOWNRESOURCE_H
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
typedef struct TouchButtonResource TouchButtonResource;
#include "org/allbinary/input/motion/button/TouchButtonResource.h"

typedef struct TouchButtonDownResource TouchButtonDownResource;
struct TouchButtonDownResource {
    TouchButtonResource base;
};


TouchButtonDownResource* TouchButtonDownResource_new(void);

TouchButtonResource* TouchButtonDownResource_getInstance(void);

void TouchButtonDownResource_init(TouchButtonDownResource* this);
#define TouchButtonDownResource_new0 TouchButtonDownResource_new
#define TouchButtonDownResource_init0 TouchButtonDownResource_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TouchButtonDownResource_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TouchButtonDownResource_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONDOWNRESOURCE_H
