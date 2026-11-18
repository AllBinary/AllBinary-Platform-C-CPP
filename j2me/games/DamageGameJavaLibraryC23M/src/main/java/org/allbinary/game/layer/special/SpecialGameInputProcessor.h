#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUTPROCESSOR_H
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
typedef struct CollidableDestroyableDamageableLayer CollidableDestroyableDamageableLayer;
typedef struct GameInputProcessor GameInputProcessor;
#include "org/allbinary/game/input/GameInputProcessor.h"
#if __has_include("org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h")
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#endif

typedef struct SpecialGameInputProcessor SpecialGameInputProcessor;
struct SpecialGameInputProcessor {
    GameInputProcessor base;
    CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer;
};


SpecialGameInputProcessor* SpecialGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialGameInputProcessor_init(SpecialGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);
#define SpecialGameInputProcessor_new1 SpecialGameInputProcessor_new
#define SpecialGameInputProcessor_init1 SpecialGameInputProcessor_init
#ifndef SpecialGameInputProcessor_getInstance
#define SpecialGameInputProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef SpecialGameInputProcessor_processEvent
#define SpecialGameInputProcessor_processEvent GameInputProcessor_processEvent
#endif
#ifndef SpecialGameInputProcessor_processReleasedEvent
#define SpecialGameInputProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef SpecialGameInputProcessor_processAnalog
#define SpecialGameInputProcessor_processAnalog GameInputProcessor_processAnalog
#endif
#ifndef SpecialGameInputProcessor_process
#define SpecialGameInputProcessor_process GameInputProcessor_process
#endif
#ifndef SpecialGameInputProcessor_processReleased
#define SpecialGameInputProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialGameInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialGameInputProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUTPROCESSOR_H
