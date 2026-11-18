#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIAL1GAMEINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIAL1GAMEINPUTPROCESSOR_H
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
// package org.allbinary.game.layer.special

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct SpecialGameInputProcessor SpecialGameInputProcessor;
typedef struct CollidableDestroyableDamageableLayer CollidableDestroyableDamageableLayer;
typedef struct GameKeyEvent GameKeyEvent;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
#include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"

typedef struct Special1GameInputProcessor Special1GameInputProcessor;
struct Special1GameInputProcessor {
    SpecialGameInputProcessor base;
};


Special1GameInputProcessor* Special1GameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void Special1GameInputProcessor_init(Special1GameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void Special1GameInputProcessor_processEvent(Special1GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);
#define Special1GameInputProcessor_new1 Special1GameInputProcessor_new
#define Special1GameInputProcessor_init1 Special1GameInputProcessor_init
#ifndef Special1GameInputProcessor_getInstance
#define Special1GameInputProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef Special1GameInputProcessor_processReleasedEvent
#define Special1GameInputProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef Special1GameInputProcessor_processAnalog
#define Special1GameInputProcessor_processAnalog GameInputProcessor_processAnalog
#endif
#ifndef Special1GameInputProcessor_process
#define Special1GameInputProcessor_process GameInputProcessor_process
#endif
#ifndef Special1GameInputProcessor_processReleased
#define Special1GameInputProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Special1GameInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Special1GameInputProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIAL1GAMEINPUTPROCESSOR_H
