#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIAL3GAMEINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIAL3GAMEINPUTPROCESSOR_H
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

typedef struct Special3GameInputProcessor Special3GameInputProcessor;
struct Special3GameInputProcessor {
    SpecialGameInputProcessor base;
};


Special3GameInputProcessor* Special3GameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void Special3GameInputProcessor_init(Special3GameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void Special3GameInputProcessor_processEvent(Special3GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);
#define Special3GameInputProcessor_new1 Special3GameInputProcessor_new
#define Special3GameInputProcessor_init1 Special3GameInputProcessor_init
#ifndef Special3GameInputProcessor_getInstance
#define Special3GameInputProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef Special3GameInputProcessor_processReleasedEvent
#define Special3GameInputProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef Special3GameInputProcessor_processAnalog
#define Special3GameInputProcessor_processAnalog GameInputProcessor_processAnalog
#endif
#ifndef Special3GameInputProcessor_process
#define Special3GameInputProcessor_process GameInputProcessor_process
#endif
#ifndef Special3GameInputProcessor_processReleased
#define Special3GameInputProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Special3GameInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Special3GameInputProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIAL3GAMEINPUTPROCESSOR_H
