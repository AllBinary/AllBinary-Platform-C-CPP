#ifndef ORG_ALLBINARY_GAME_INPUT_GAMEINPUTINTERFACE_H
#define ORG_ALLBINARY_GAME_INPUT_GAMEINPUTINTERFACE_H
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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct NamedInterface NamedInterface;
#include "org/allbinary/layer/NamedInterface.h"

typedef struct GameInputInterface GameInputInterface;
struct GameInputInterface {
    void (*processInput)(void* this, AllBinaryLayerManager* layerManager);
    void (*initInputProcessors)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameInputInterface_staticInit(void);

static inline void GameInputInterface_processInput(void* this, AllBinaryLayerManager* layerManager) {
    ((__typeof__(((GameInputInterface*) nullptr)->processInput)) java_method_of(this, "processInput"))(this, layerManager);
}

static inline void GameInputInterface_initInputProcessors(void* this) {
    ((__typeof__(((GameInputInterface*) nullptr)->initInputProcessors)) java_method_of(this, "initInputProcessors"))(this);
}
#define GameInputInterface_getName NamedInterface_getName


#endif // ORG_ALLBINARY_GAME_INPUT_GAMEINPUTINTERFACE_H
