#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALUPGAMEINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALUPGAMEINPUTPROCESSOR_H
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

typedef struct SpecialUpGameInputProcessor SpecialUpGameInputProcessor;
struct SpecialUpGameInputProcessor {
    SpecialGameInputProcessor base;
};


SpecialUpGameInputProcessor* SpecialUpGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialUpGameInputProcessor_init(SpecialUpGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialUpGameInputProcessor_processEvent(SpecialUpGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);
#define SpecialUpGameInputProcessor_new1 SpecialUpGameInputProcessor_new
#define SpecialUpGameInputProcessor_init1 SpecialUpGameInputProcessor_init
#ifndef SpecialUpGameInputProcessor_getInstance
#define SpecialUpGameInputProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef SpecialUpGameInputProcessor_processReleasedEvent
#define SpecialUpGameInputProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef SpecialUpGameInputProcessor_processAnalog
#define SpecialUpGameInputProcessor_processAnalog GameInputProcessor_processAnalog
#endif
#ifndef SpecialUpGameInputProcessor_process
#define SpecialUpGameInputProcessor_process GameInputProcessor_process
#endif
#ifndef SpecialUpGameInputProcessor_processReleased
#define SpecialUpGameInputProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialUpGameInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialUpGameInputProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALUPGAMEINPUTPROCESSOR_H
