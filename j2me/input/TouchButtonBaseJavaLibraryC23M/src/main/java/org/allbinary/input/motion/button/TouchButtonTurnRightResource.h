#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONTURNRIGHTRESOURCE_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONTURNRIGHTRESOURCE_H
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

typedef struct TouchButtonTurnRightResource TouchButtonTurnRightResource;
struct TouchButtonTurnRightResource {
    TouchButtonResource base;
};


TouchButtonTurnRightResource* TouchButtonTurnRightResource_new(void);

TouchButtonResource* TouchButtonTurnRightResource_getInstance(void);

void TouchButtonTurnRightResource_init(TouchButtonTurnRightResource* this);
#define TouchButtonTurnRightResource_new0 TouchButtonTurnRightResource_new
#define TouchButtonTurnRightResource_init0 TouchButtonTurnRightResource_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TouchButtonTurnRightResource_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TouchButtonTurnRightResource_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONTURNRIGHTRESOURCE_H
