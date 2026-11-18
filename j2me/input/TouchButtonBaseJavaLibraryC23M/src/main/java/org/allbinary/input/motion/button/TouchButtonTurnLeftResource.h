#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONTURNLEFTRESOURCE_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONTURNLEFTRESOURCE_H
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

typedef struct TouchButtonTurnLeftResource TouchButtonTurnLeftResource;
struct TouchButtonTurnLeftResource {
    TouchButtonResource base;
};


TouchButtonTurnLeftResource* TouchButtonTurnLeftResource_new(void);

TouchButtonResource* TouchButtonTurnLeftResource_getInstance(void);

void TouchButtonTurnLeftResource_init(TouchButtonTurnLeftResource* this);
#define TouchButtonTurnLeftResource_new0 TouchButtonTurnLeftResource_new
#define TouchButtonTurnLeftResource_init0 TouchButtonTurnLeftResource_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TouchButtonTurnLeftResource_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TouchButtonTurnLeftResource_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONTURNLEFTRESOURCE_H
