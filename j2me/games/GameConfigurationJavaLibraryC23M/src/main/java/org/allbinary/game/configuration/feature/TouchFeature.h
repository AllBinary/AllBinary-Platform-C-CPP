#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_TOUCHFEATURE_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_TOUCHFEATURE_H
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
typedef struct Feature Feature;
#include "org/allbinary/game/configuration/feature/Feature.h"

typedef struct TouchFeature TouchFeature;
struct TouchFeature {
    Feature base;
};


TouchFeature* TouchFeature_new(const char* name);

void TouchFeature_init(TouchFeature* this, const char* name);
#define TouchFeature_new1 TouchFeature_new
#define TouchFeature_init1 TouchFeature_init
#ifndef TouchFeature_getInstance
#define TouchFeature_getInstance Feature_getInstance
#endif
#ifndef TouchFeature_add
#define TouchFeature_add Feature_add
#endif
#ifndef TouchFeature_toString
#define TouchFeature_toString Feature_toString
#endif
#ifndef TouchFeature_getName
#define TouchFeature_getName Feature_getName
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TouchFeature_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TouchFeature_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_TOUCHFEATURE_H
