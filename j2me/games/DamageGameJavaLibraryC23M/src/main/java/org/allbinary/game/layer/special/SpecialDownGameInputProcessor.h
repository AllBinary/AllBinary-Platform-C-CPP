#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALDOWNGAMEINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALDOWNGAMEINPUTPROCESSOR_H
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

typedef struct SpecialDownGameInputProcessor SpecialDownGameInputProcessor;
struct SpecialDownGameInputProcessor {
    SpecialGameInputProcessor base;
};


SpecialDownGameInputProcessor* SpecialDownGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialDownGameInputProcessor_init(SpecialDownGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialDownGameInputProcessor_processEvent(SpecialDownGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);
#define SpecialDownGameInputProcessor_new1 SpecialDownGameInputProcessor_new
#define SpecialDownGameInputProcessor_init1 SpecialDownGameInputProcessor_init
#ifndef SpecialDownGameInputProcessor_getInstance
#define SpecialDownGameInputProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef SpecialDownGameInputProcessor_processReleasedEvent
#define SpecialDownGameInputProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef SpecialDownGameInputProcessor_processAnalog
#define SpecialDownGameInputProcessor_processAnalog GameInputProcessor_processAnalog
#endif
#ifndef SpecialDownGameInputProcessor_process
#define SpecialDownGameInputProcessor_process GameInputProcessor_process
#endif
#ifndef SpecialDownGameInputProcessor_processReleased
#define SpecialDownGameInputProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialDownGameInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialDownGameInputProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALDOWNGAMEINPUTPROCESSOR_H
