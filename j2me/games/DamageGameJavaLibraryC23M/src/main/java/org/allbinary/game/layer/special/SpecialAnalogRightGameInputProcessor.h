#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGRIGHTGAMEINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGRIGHTGAMEINPUTPROCESSOR_H
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

typedef struct SpecialAnalogRightGameInputProcessor SpecialAnalogRightGameInputProcessor;
struct SpecialAnalogRightGameInputProcessor {
    SpecialGameInputProcessor base;
};


SpecialAnalogRightGameInputProcessor* SpecialAnalogRightGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialAnalogRightGameInputProcessor_init(SpecialAnalogRightGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialAnalogRightGameInputProcessor_processAnalog(SpecialAnalogRightGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent, int32_t xAnalogValue);
#define SpecialAnalogRightGameInputProcessor_new1 SpecialAnalogRightGameInputProcessor_new
#define SpecialAnalogRightGameInputProcessor_init1 SpecialAnalogRightGameInputProcessor_init
#ifndef SpecialAnalogRightGameInputProcessor_getInstance
#define SpecialAnalogRightGameInputProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef SpecialAnalogRightGameInputProcessor_processEvent
#define SpecialAnalogRightGameInputProcessor_processEvent GameInputProcessor_processEvent
#endif
#ifndef SpecialAnalogRightGameInputProcessor_processReleasedEvent
#define SpecialAnalogRightGameInputProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef SpecialAnalogRightGameInputProcessor_process
#define SpecialAnalogRightGameInputProcessor_process GameInputProcessor_process
#endif
#ifndef SpecialAnalogRightGameInputProcessor_processReleased
#define SpecialAnalogRightGameInputProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialAnalogRightGameInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialAnalogRightGameInputProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGRIGHTGAMEINPUTPROCESSOR_H
