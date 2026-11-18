#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATURECONTROLLEDINTERFACE_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATURECONTROLLEDINTERFACE_H
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

typedef struct GameFeatureControlledInterface GameFeatureControlledInterface;
struct GameFeatureControlledInterface {
    void (*init)(void* this, int32_t level);
    bool (*isFeature)(void* this);
    bool (*isLoadingLevel)(void* this, int32_t level);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameFeatureControlledInterface_staticInit(void);

static inline void GameFeatureControlledInterface_initMethod(void* this, int32_t level) {
    ((__typeof__(((GameFeatureControlledInterface*) nullptr)->init)) java_method_of(this, "init"))(this, level);
}

static inline bool GameFeatureControlledInterface_isFeature(void* this) {
    return ((__typeof__(((GameFeatureControlledInterface*) nullptr)->isFeature)) java_method_of(this, "isFeature"))(this);
}

static inline bool GameFeatureControlledInterface_isLoadingLevel(void* this, int32_t level) {
    return ((__typeof__(((GameFeatureControlledInterface*) nullptr)->isLoadingLevel)) java_method_of(this, "isLoadingLevel"))(this, level);
}


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATURECONTROLLEDINTERFACE_H
