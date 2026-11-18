#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALLEFTGAMEINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALLEFTGAMEINPUTPROCESSOR_H
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

typedef struct SpecialLeftGameInputProcessor SpecialLeftGameInputProcessor;
struct SpecialLeftGameInputProcessor {
    SpecialGameInputProcessor base;
};


SpecialLeftGameInputProcessor* SpecialLeftGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialLeftGameInputProcessor_init(SpecialLeftGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialLeftGameInputProcessor_processEvent(SpecialLeftGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);
#define SpecialLeftGameInputProcessor_new1 SpecialLeftGameInputProcessor_new
#define SpecialLeftGameInputProcessor_init1 SpecialLeftGameInputProcessor_init
#ifndef SpecialLeftGameInputProcessor_getInstance
#define SpecialLeftGameInputProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef SpecialLeftGameInputProcessor_processReleasedEvent
#define SpecialLeftGameInputProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef SpecialLeftGameInputProcessor_processAnalog
#define SpecialLeftGameInputProcessor_processAnalog GameInputProcessor_processAnalog
#endif
#ifndef SpecialLeftGameInputProcessor_process
#define SpecialLeftGameInputProcessor_process GameInputProcessor_process
#endif
#ifndef SpecialLeftGameInputProcessor_processReleased
#define SpecialLeftGameInputProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialLeftGameInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialLeftGameInputProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALLEFTGAMEINPUTPROCESSOR_H
