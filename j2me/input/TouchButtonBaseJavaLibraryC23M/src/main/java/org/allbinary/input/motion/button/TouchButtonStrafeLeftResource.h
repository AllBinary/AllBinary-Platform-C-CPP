#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSTRAFELEFTRESOURCE_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSTRAFELEFTRESOURCE_H
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

typedef struct TouchButtonStrafeLeftResource TouchButtonStrafeLeftResource;
struct TouchButtonStrafeLeftResource {
    TouchButtonResource base;
};


TouchButtonStrafeLeftResource* TouchButtonStrafeLeftResource_new(void);

TouchButtonResource* TouchButtonStrafeLeftResource_getInstance(void);

void TouchButtonStrafeLeftResource_init(TouchButtonStrafeLeftResource* this);
#define TouchButtonStrafeLeftResource_new0 TouchButtonStrafeLeftResource_new
#define TouchButtonStrafeLeftResource_init0 TouchButtonStrafeLeftResource_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TouchButtonStrafeLeftResource_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TouchButtonStrafeLeftResource_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSTRAFELEFTRESOURCE_H
