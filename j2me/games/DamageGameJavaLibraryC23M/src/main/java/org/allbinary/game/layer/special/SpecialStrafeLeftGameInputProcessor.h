#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALSTRAFELEFTGAMEINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALSTRAFELEFTGAMEINPUTPROCESSOR_H
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

typedef struct SpecialStrafeLeftGameInputProcessor SpecialStrafeLeftGameInputProcessor;
struct SpecialStrafeLeftGameInputProcessor {
    SpecialGameInputProcessor base;
};


SpecialStrafeLeftGameInputProcessor* SpecialStrafeLeftGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialStrafeLeftGameInputProcessor_init(SpecialStrafeLeftGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialStrafeLeftGameInputProcessor_processEvent(SpecialStrafeLeftGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);
#define SpecialStrafeLeftGameInputProcessor_new1 SpecialStrafeLeftGameInputProcessor_new
#define SpecialStrafeLeftGameInputProcessor_init1 SpecialStrafeLeftGameInputProcessor_init
#ifndef SpecialStrafeLeftGameInputProcessor_getInstance
#define SpecialStrafeLeftGameInputProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef SpecialStrafeLeftGameInputProcessor_processReleasedEvent
#define SpecialStrafeLeftGameInputProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef SpecialStrafeLeftGameInputProcessor_processAnalog
#define SpecialStrafeLeftGameInputProcessor_processAnalog GameInputProcessor_processAnalog
#endif
#ifndef SpecialStrafeLeftGameInputProcessor_process
#define SpecialStrafeLeftGameInputProcessor_process GameInputProcessor_process
#endif
#ifndef SpecialStrafeLeftGameInputProcessor_processReleased
#define SpecialStrafeLeftGameInputProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialStrafeLeftGameInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialStrafeLeftGameInputProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALSTRAFELEFTGAMEINPUTPROCESSOR_H
