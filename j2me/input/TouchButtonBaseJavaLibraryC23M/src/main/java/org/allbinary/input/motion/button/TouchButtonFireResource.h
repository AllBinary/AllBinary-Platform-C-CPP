#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONFIRERESOURCE_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONFIRERESOURCE_H
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

typedef struct TouchButtonFireResource TouchButtonFireResource;
struct TouchButtonFireResource {
    TouchButtonResource base;
};


TouchButtonFireResource* TouchButtonFireResource_new(void);

TouchButtonResource* TouchButtonFireResource_getInstance(void);

void TouchButtonFireResource_init(TouchButtonFireResource* this);
#define TouchButtonFireResource_new0 TouchButtonFireResource_new
#define TouchButtonFireResource_init0 TouchButtonFireResource_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TouchButtonFireResource_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TouchButtonFireResource_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONFIRERESOURCE_H
