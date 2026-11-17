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
// package org.allbinary.game.configuration.feature

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct SensorFeatureFactory SensorFeatureFactory;
struct SensorFeatureFactory {
    SensorFeature* NO_ORIENTATION;
    SensorFeature* ORIENTATION_SENSORS;
    SensorFeature* SIMULATED_ORIENTATION_SENSORS;
    SensorFeature* YAW;
    SensorFeature* YAW_MINUS_RIGHT_PLUS_LEFT;
    SensorFeature* YAW_MINUS_LEFT_PLUS_RIGHT;
    SensorFeature* PITCH;
    SensorFeature* ROLL;
};

static SensorFeatureFactory* SensorFeatureFactory_instance;

SensorFeatureFactory* SensorFeatureFactory_new(void);
SensorFeatureFactory* SensorFeatureFactory_getInstance(void);

void SensorFeatureFactory_init(SensorFeatureFactory* this);

// Static fields with runtime initializers: call this once at startup
void SensorFeatureFactory_staticInit(void) {
    SensorFeatureFactory_instance = SensorFeatureFactory_new();
}

static void SensorFeatureFactory_initFields(SensorFeatureFactory* this) {
    this->NO_ORIENTATION = SensorFeature_new("No Orientation");
    this->ORIENTATION_SENSORS = SensorFeature_new("Orientation Sensors");
    this->SIMULATED_ORIENTATION_SENSORS = SensorFeature_new("Simulated Orientation Sensors");
    this->YAW = SensorFeature_new("Yaw");
    this->YAW_MINUS_RIGHT_PLUS_LEFT = SensorFeature_new("Yaw -Right +Left");
    this->YAW_MINUS_LEFT_PLUS_RIGHT = SensorFeature_new("Yaw -Left +Right ");
    this->PITCH = SensorFeature_new("Pitch");
    this->ROLL = SensorFeature_new("Roll");
}


SensorFeatureFactory* SensorFeatureFactory_getInstance(void) {
        return SensorFeatureFactory_instance;
}


void SensorFeatureFactory_init(SensorFeatureFactory* this) {
    SensorFeatureFactory_initFields(this);
}

SensorFeatureFactory* SensorFeatureFactory_new(void) {
    SensorFeatureFactory* this = calloc(1, sizeof(SensorFeatureFactory));
    SensorFeatureFactory_init(this);
    return this;
}

