#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALRIGHTGAMEINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALRIGHTGAMEINPUTPROCESSOR_H
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

typedef struct SpecialRightGameInputProcessor SpecialRightGameInputProcessor;
struct SpecialRightGameInputProcessor {
    SpecialGameInputProcessor base;
};


SpecialRightGameInputProcessor* SpecialRightGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialRightGameInputProcessor_init(SpecialRightGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialRightGameInputProcessor_processEvent(SpecialRightGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);
#define SpecialRightGameInputProcessor_new1 SpecialRightGameInputProcessor_new
#define SpecialRightGameInputProcessor_init1 SpecialRightGameInputProcessor_init
#ifndef SpecialRightGameInputProcessor_getInstance
#define SpecialRightGameInputProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef SpecialRightGameInputProcessor_processReleasedEvent
#define SpecialRightGameInputProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef SpecialRightGameInputProcessor_processAnalog
#define SpecialRightGameInputProcessor_processAnalog GameInputProcessor_processAnalog
#endif
#ifndef SpecialRightGameInputProcessor_process
#define SpecialRightGameInputProcessor_process GameInputProcessor_process
#endif
#ifndef SpecialRightGameInputProcessor_processReleased
#define SpecialRightGameInputProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialRightGameInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialRightGameInputProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALRIGHTGAMEINPUTPROCESSOR_H
