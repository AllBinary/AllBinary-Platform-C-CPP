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

typedef struct TouchFeatureFactory TouchFeatureFactory;
struct TouchFeatureFactory {
    TouchFeature* TOUCH_ENABLED;
    TouchFeature* SHOW_SCREEN_BUTTONS;
    TouchFeature* AUTO_HIDE_SHOW_SCREEN_BUTTONS;
    TouchFeature* HIDE_SCREEN_BUTTONS;
};

static TouchFeatureFactory* TouchFeatureFactory_instance;

TouchFeatureFactory* TouchFeatureFactory_new(void);
TouchFeatureFactory* TouchFeatureFactory_getInstance(void);

void TouchFeatureFactory_init(TouchFeatureFactory* this);

// Static fields with runtime initializers: call this once at startup
void TouchFeatureFactory_staticInit(void) {
    TouchFeatureFactory_instance = TouchFeatureFactory_new();
}

static void TouchFeatureFactory_initFields(TouchFeatureFactory* this) {
    this->TOUCH_ENABLED = TouchFeature_new("Touch Enabled");
    this->SHOW_SCREEN_BUTTONS = TouchFeature_new("Show");
    this->AUTO_HIDE_SHOW_SCREEN_BUTTONS = TouchFeature_new("Auto Hide (One Level)");
    this->HIDE_SCREEN_BUTTONS = TouchFeature_new("Hide");
}


TouchFeatureFactory* TouchFeatureFactory_getInstance(void) {
        return TouchFeatureFactory_instance;
}


void TouchFeatureFactory_init(TouchFeatureFactory* this) {
    TouchFeatureFactory_initFields(this);
}

TouchFeatureFactory* TouchFeatureFactory_new(void) {
    TouchFeatureFactory* this = calloc(1, sizeof(TouchFeatureFactory));
    TouchFeatureFactory_init(this);
    return this;
}

