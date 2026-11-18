#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGUPGAMEINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGUPGAMEINPUTPROCESSOR_H
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

typedef struct SpecialAnalogUpGameInputProcessor SpecialAnalogUpGameInputProcessor;
struct SpecialAnalogUpGameInputProcessor {
    SpecialGameInputProcessor base;
};


SpecialAnalogUpGameInputProcessor* SpecialAnalogUpGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialAnalogUpGameInputProcessor_init(SpecialAnalogUpGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialAnalogUpGameInputProcessor_processAnalog(SpecialAnalogUpGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent, int32_t yAnalogValue);
#define SpecialAnalogUpGameInputProcessor_new1 SpecialAnalogUpGameInputProcessor_new
#define SpecialAnalogUpGameInputProcessor_init1 SpecialAnalogUpGameInputProcessor_init
#ifndef SpecialAnalogUpGameInputProcessor_getInstance
#define SpecialAnalogUpGameInputProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef SpecialAnalogUpGameInputProcessor_processEvent
#define SpecialAnalogUpGameInputProcessor_processEvent GameInputProcessor_processEvent
#endif
#ifndef SpecialAnalogUpGameInputProcessor_processReleasedEvent
#define SpecialAnalogUpGameInputProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef SpecialAnalogUpGameInputProcessor_process
#define SpecialAnalogUpGameInputProcessor_process GameInputProcessor_process
#endif
#ifndef SpecialAnalogUpGameInputProcessor_processReleased
#define SpecialAnalogUpGameInputProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialAnalogUpGameInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialAnalogUpGameInputProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGUPGAMEINPUTPROCESSOR_H
