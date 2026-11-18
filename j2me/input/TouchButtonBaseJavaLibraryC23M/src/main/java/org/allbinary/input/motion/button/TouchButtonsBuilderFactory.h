#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSBUILDERFACTORY_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSBUILDERFACTORY_H
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
typedef struct NoButtonsTouchInputFactory NoButtonsTouchInputFactory;
typedef struct BaseTouchInput BaseTouchInput;

typedef struct TouchButtonsBuilderFactory TouchButtonsBuilderFactory;
struct TouchButtonsBuilderFactory {
    char unused;
};

extern TouchButtonsBuilderFactory* TouchButtonsBuilderFactory_NO_TOUCH_BUTTON_BUILDER_FACTORY;

TouchButtonsBuilderFactory* TouchButtonsBuilderFactory_new(void);
void TouchButtonsBuilderFactory_init(TouchButtonsBuilderFactory* this);

BaseTouchInput* TouchButtonsBuilderFactory_getInstance(TouchButtonsBuilderFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TouchButtonsBuilderFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TouchButtonsBuilderFactory_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSBUILDERFACTORY_H
