#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INPUTFEATUREFACTORY_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INPUTFEATUREFACTORY_H
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
typedef struct InputFeature InputFeature;
typedef struct Features Features;
#if __has_include("org/allbinary/game/configuration/feature/InputFeature.h")
#include "org/allbinary/game/configuration/feature/InputFeature.h"
#endif

typedef struct InputFeatureFactory InputFeatureFactory;
struct InputFeatureFactory {
    InputFeature* REMOVE_DUPLICATE_KEY_PRESSES;
    InputFeature* INPUT_MAPPING;
    InputFeature* MULTI_KEY_PRESS;
    InputFeature* SINGLE_KEY_REPEAT_PRESS;
    InputFeature* SINGLE_KEY_PRESS;
};


InputFeatureFactory* InputFeatureFactory_new(void);

InputFeatureFactory* InputFeatureFactory_getInstance(void);

void InputFeatureFactory_init(InputFeatureFactory* this);

bool InputFeatureFactory_isSingleKeyProcessing(InputFeatureFactory* this);
#define InputFeatureFactory_new0 InputFeatureFactory_new
#define InputFeatureFactory_init0 InputFeatureFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void InputFeatureFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void InputFeatureFactory_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INPUTFEATUREFACTORY_H
