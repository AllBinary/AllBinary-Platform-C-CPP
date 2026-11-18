#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_TOUCHFEATUREFACTORY_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_TOUCHFEATUREFACTORY_H
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
typedef struct TouchFeature TouchFeature;
#if __has_include("org/allbinary/game/configuration/feature/TouchFeature.h")
#include "org/allbinary/game/configuration/feature/TouchFeature.h"
#endif

typedef struct TouchFeatureFactory TouchFeatureFactory;
struct TouchFeatureFactory {
    TouchFeature* TOUCH_ENABLED;
    TouchFeature* SHOW_SCREEN_BUTTONS;
    TouchFeature* AUTO_HIDE_SHOW_SCREEN_BUTTONS;
    TouchFeature* HIDE_SCREEN_BUTTONS;
};


TouchFeatureFactory* TouchFeatureFactory_new(void);

TouchFeatureFactory* TouchFeatureFactory_getInstance(void);

void TouchFeatureFactory_init(TouchFeatureFactory* this);
#define TouchFeatureFactory_new0 TouchFeatureFactory_new
#define TouchFeatureFactory_init0 TouchFeatureFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TouchFeatureFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TouchFeatureFactory_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_TOUCHFEATUREFACTORY_H
