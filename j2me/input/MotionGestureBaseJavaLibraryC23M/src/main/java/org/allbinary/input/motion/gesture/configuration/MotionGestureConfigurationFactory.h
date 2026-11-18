#ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_CONFIGURATION_MOTIONGESTURECONFIGURATIONFACTORY_H
#define ORG_ALLBINARY_INPUT_MOTION_GESTURE_CONFIGURATION_MOTIONGESTURECONFIGURATIONFACTORY_H
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
// package org.allbinary.input.motion.gesture.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct MotionGestureConfiguration MotionGestureConfiguration;
#if __has_include("org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h")
#include "org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h"
#endif

typedef struct MotionGestureConfigurationFactory MotionGestureConfigurationFactory;
struct MotionGestureConfigurationFactory {
    char unused;
};


MotionGestureConfigurationFactory* MotionGestureConfigurationFactory_new(void);

void MotionGestureConfigurationFactory_init(MotionGestureConfigurationFactory* this);

MotionGestureConfiguration* MotionGestureConfigurationFactory_getInstance(void);
#define MotionGestureConfigurationFactory_new0 MotionGestureConfigurationFactory_new
#define MotionGestureConfigurationFactory_init0 MotionGestureConfigurationFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MotionGestureConfigurationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MotionGestureConfigurationFactory_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_GESTURE_CONFIGURATION_MOTIONGESTURECONFIGURATIONFACTORY_H
