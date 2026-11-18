#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALSTRAFERIGHTGAMEINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALSTRAFERIGHTGAMEINPUTPROCESSOR_H
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

typedef struct SpecialStrafeRightGameInputProcessor SpecialStrafeRightGameInputProcessor;
struct SpecialStrafeRightGameInputProcessor {
    SpecialGameInputProcessor base;
};


SpecialStrafeRightGameInputProcessor* SpecialStrafeRightGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialStrafeRightGameInputProcessor_init(SpecialStrafeRightGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialStrafeRightGameInputProcessor_processEvent(SpecialStrafeRightGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);
#define SpecialStrafeRightGameInputProcessor_new1 SpecialStrafeRightGameInputProcessor_new
#define SpecialStrafeRightGameInputProcessor_init1 SpecialStrafeRightGameInputProcessor_init
#ifndef SpecialStrafeRightGameInputProcessor_getInstance
#define SpecialStrafeRightGameInputProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef SpecialStrafeRightGameInputProcessor_processReleasedEvent
#define SpecialStrafeRightGameInputProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef SpecialStrafeRightGameInputProcessor_processAnalog
#define SpecialStrafeRightGameInputProcessor_processAnalog GameInputProcessor_processAnalog
#endif
#ifndef SpecialStrafeRightGameInputProcessor_process
#define SpecialStrafeRightGameInputProcessor_process GameInputProcessor_process
#endif
#ifndef SpecialStrafeRightGameInputProcessor_processReleased
#define SpecialStrafeRightGameInputProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialStrafeRightGameInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialStrafeRightGameInputProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALSTRAFERIGHTGAMEINPUTPROCESSOR_H
