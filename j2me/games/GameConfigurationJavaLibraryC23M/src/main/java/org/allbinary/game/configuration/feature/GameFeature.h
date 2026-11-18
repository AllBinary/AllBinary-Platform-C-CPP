#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATURE_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATURE_H
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

typedef struct GameFeature GameFeature;
struct GameFeature {
    Feature base;
};


GameFeature* GameFeature_new(const char* name);

void GameFeature_init(GameFeature* this, const char* name);
#define GameFeature_new1 GameFeature_new
#define GameFeature_init1 GameFeature_init
#ifndef GameFeature_getInstance
#define GameFeature_getInstance Feature_getInstance
#endif
#ifndef GameFeature_add
#define GameFeature_add Feature_add
#endif
#ifndef GameFeature_toString
#define GameFeature_toString Feature_toString
#endif
#ifndef GameFeature_getName
#define GameFeature_getName Feature_getName
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameFeature_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameFeature_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATURE_H
