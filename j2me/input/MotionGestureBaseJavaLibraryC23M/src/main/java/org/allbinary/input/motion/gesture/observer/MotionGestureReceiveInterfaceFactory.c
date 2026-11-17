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
// package org.allbinary.input.motion.gesture.observer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h"
#include "org/allbinary/input/motion/gesture/configuration/MotionGestureConfigurationFactory.h"

typedef struct MotionGestureReceiveInterfaceFactory MotionGestureReceiveInterfaceFactory;
struct MotionGestureReceiveInterfaceFactory {
    char unused;
};


MotionGestureReceiveInterfaceFactory* MotionGestureReceiveInterfaceFactory_new(void);
CompleteMotionGestureListenerInterface* MotionGestureReceiveInterfaceFactory_getInstance(void);

void MotionGestureReceiveInterfaceFactory_init(MotionGestureReceiveInterfaceFactory* this) {
}

MotionGestureReceiveInterfaceFactory* MotionGestureReceiveInterfaceFactory_new(void) {
    MotionGestureReceiveInterfaceFactory* this = calloc(1, sizeof(MotionGestureReceiveInterfaceFactory));
    MotionGestureReceiveInterfaceFactory_init(this);
    return this;
}


CompleteMotionGestureListenerInterface* MotionGestureReceiveInterfaceFactory_getInstance(void) {
        MotionGestureConfiguration* configuration = MotionGestureConfigurationFactory_getInstance();
        if (!MotionGestureConfiguration_isExecutingActionsAllowed(configuration)) {
            return NullCompleteMotionGestureReceiver_new();
        } else {
            return ResolveCompleteMotionGestureListener_new();
        }
}

