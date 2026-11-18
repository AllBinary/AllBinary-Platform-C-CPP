#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGLEFTGAMEINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGLEFTGAMEINPUTPROCESSOR_H
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

typedef struct SpecialAnalogLeftGameInputProcessor SpecialAnalogLeftGameInputProcessor;
struct SpecialAnalogLeftGameInputProcessor {
    SpecialGameInputProcessor base;
};


SpecialAnalogLeftGameInputProcessor* SpecialAnalogLeftGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialAnalogLeftGameInputProcessor_init(SpecialAnalogLeftGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialAnalogLeftGameInputProcessor_processAnalog(SpecialAnalogLeftGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent, int32_t xAnalogValue);
#define SpecialAnalogLeftGameInputProcessor_new1 SpecialAnalogLeftGameInputProcessor_new
#define SpecialAnalogLeftGameInputProcessor_init1 SpecialAnalogLeftGameInputProcessor_init
#ifndef SpecialAnalogLeftGameInputProcessor_getInstance
#define SpecialAnalogLeftGameInputProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef SpecialAnalogLeftGameInputProcessor_processEvent
#define SpecialAnalogLeftGameInputProcessor_processEvent GameInputProcessor_processEvent
#endif
#ifndef SpecialAnalogLeftGameInputProcessor_processReleasedEvent
#define SpecialAnalogLeftGameInputProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef SpecialAnalogLeftGameInputProcessor_process
#define SpecialAnalogLeftGameInputProcessor_process GameInputProcessor_process
#endif
#ifndef SpecialAnalogLeftGameInputProcessor_processReleased
#define SpecialAnalogLeftGameInputProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialAnalogLeftGameInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialAnalogLeftGameInputProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGLEFTGAMEINPUTPROCESSOR_H
