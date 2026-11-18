#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGDOWNGAMEINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGDOWNGAMEINPUTPROCESSOR_H
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

typedef struct SpecialAnalogDownGameInputProcessor SpecialAnalogDownGameInputProcessor;
struct SpecialAnalogDownGameInputProcessor {
    SpecialGameInputProcessor base;
};


SpecialAnalogDownGameInputProcessor* SpecialAnalogDownGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialAnalogDownGameInputProcessor_init(SpecialAnalogDownGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialAnalogDownGameInputProcessor_processAnalog(SpecialAnalogDownGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent, int32_t yAnalogValue);
#define SpecialAnalogDownGameInputProcessor_new1 SpecialAnalogDownGameInputProcessor_new
#define SpecialAnalogDownGameInputProcessor_init1 SpecialAnalogDownGameInputProcessor_init
#ifndef SpecialAnalogDownGameInputProcessor_getInstance
#define SpecialAnalogDownGameInputProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef SpecialAnalogDownGameInputProcessor_processEvent
#define SpecialAnalogDownGameInputProcessor_processEvent GameInputProcessor_processEvent
#endif
#ifndef SpecialAnalogDownGameInputProcessor_processReleasedEvent
#define SpecialAnalogDownGameInputProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef SpecialAnalogDownGameInputProcessor_process
#define SpecialAnalogDownGameInputProcessor_process GameInputProcessor_process
#endif
#ifndef SpecialAnalogDownGameInputProcessor_processReleased
#define SpecialAnalogDownGameInputProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialAnalogDownGameInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialAnalogDownGameInputProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGDOWNGAMEINPUTPROCESSOR_H
