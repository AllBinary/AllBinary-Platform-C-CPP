#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALFIREGAMEINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALFIREGAMEINPUTPROCESSOR_H
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

typedef struct SpecialFireGameInputProcessor SpecialFireGameInputProcessor;
struct SpecialFireGameInputProcessor {
    SpecialGameInputProcessor base;
};


SpecialFireGameInputProcessor* SpecialFireGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialFireGameInputProcessor_init(SpecialFireGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialFireGameInputProcessor_processEvent(SpecialFireGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);
#define SpecialFireGameInputProcessor_new1 SpecialFireGameInputProcessor_new
#define SpecialFireGameInputProcessor_init1 SpecialFireGameInputProcessor_init
#ifndef SpecialFireGameInputProcessor_getInstance
#define SpecialFireGameInputProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef SpecialFireGameInputProcessor_processReleasedEvent
#define SpecialFireGameInputProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef SpecialFireGameInputProcessor_processAnalog
#define SpecialFireGameInputProcessor_processAnalog GameInputProcessor_processAnalog
#endif
#ifndef SpecialFireGameInputProcessor_process
#define SpecialFireGameInputProcessor_process GameInputProcessor_process
#endif
#ifndef SpecialFireGameInputProcessor_processReleased
#define SpecialFireGameInputProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialFireGameInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialFireGameInputProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALFIREGAMEINPUTPROCESSOR_H
