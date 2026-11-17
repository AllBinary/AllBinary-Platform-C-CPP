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

typedef struct MotionGestureConfigurationFactory MotionGestureConfigurationFactory;
struct MotionGestureConfigurationFactory {
    char unused;
};

static MotionGestureConfiguration* MotionGestureConfigurationFactory_config;

MotionGestureConfigurationFactory* MotionGestureConfigurationFactory_new(void);

void MotionGestureConfigurationFactory_init(MotionGestureConfigurationFactory* this);
MotionGestureConfiguration* MotionGestureConfigurationFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void MotionGestureConfigurationFactory_staticInit(void) {
    MotionGestureConfigurationFactory_config = MotionGestureConfiguration_new();
}


void MotionGestureConfigurationFactory_init(MotionGestureConfigurationFactory* this) {
}

MotionGestureConfigurationFactory* MotionGestureConfigurationFactory_new(void) {
    MotionGestureConfigurationFactory* this = calloc(1, sizeof(MotionGestureConfigurationFactory));
    MotionGestureConfigurationFactory_init(this);
    return this;
}


MotionGestureConfiguration* MotionGestureConfigurationFactory_getInstance(void) {
        return MotionGestureConfigurationFactory_config;
}

