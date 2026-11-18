#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_COMMONBUTTONS_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_COMMONBUTTONS_H
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
typedef struct PointFactory PointFactory;
typedef struct Rectangle Rectangle;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
#if __has_include("org/allbinary/graphics/Rectangle.h")
#include "org/allbinary/graphics/Rectangle.h"
#endif

typedef struct CommonButtons CommonButtons;
struct CommonButtons {
    int32_t STANDARD_BUTTON_SIZE;
    Rectangle* NORMAL_BUTTON;
    Rectangle* LARGE_BUTTON;
};


CommonButtons* CommonButtons_new(void);

CommonButtons* CommonButtons_getInstance(void);

void CommonButtons_init(CommonButtons* this);
#define CommonButtons_new0 CommonButtons_new
#define CommonButtons_init0 CommonButtons_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CommonButtons_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CommonButtons_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_COMMONBUTTONS_H
