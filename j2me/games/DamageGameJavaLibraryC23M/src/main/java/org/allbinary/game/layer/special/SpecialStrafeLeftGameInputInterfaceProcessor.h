#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALSTRAFELEFTGAMEINPUTINTERFACEPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALSTRAFELEFTGAMEINPUTINTERFACEPROCESSOR_H
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
typedef struct SpecialGameInputInterfaceProcessor SpecialGameInputInterfaceProcessor;
typedef struct SpecialGameInputInterface SpecialGameInputInterface;
typedef struct GameKeyEvent GameKeyEvent;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
#include "org/allbinary/game/layer/special/SpecialGameInputInterfaceProcessor.h"

typedef struct SpecialStrafeLeftGameInputInterfaceProcessor SpecialStrafeLeftGameInputInterfaceProcessor;
struct SpecialStrafeLeftGameInputInterfaceProcessor {
    SpecialGameInputInterfaceProcessor base;
};


SpecialStrafeLeftGameInputInterfaceProcessor* SpecialStrafeLeftGameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void SpecialStrafeLeftGameInputInterfaceProcessor_init(SpecialStrafeLeftGameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void SpecialStrafeLeftGameInputInterfaceProcessor_processEvent(SpecialStrafeLeftGameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);
#define SpecialStrafeLeftGameInputInterfaceProcessor_new1 SpecialStrafeLeftGameInputInterfaceProcessor_new
#define SpecialStrafeLeftGameInputInterfaceProcessor_init1 SpecialStrafeLeftGameInputInterfaceProcessor_init
#ifndef SpecialStrafeLeftGameInputInterfaceProcessor_getInstance
#define SpecialStrafeLeftGameInputInterfaceProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef SpecialStrafeLeftGameInputInterfaceProcessor_processReleasedEvent
#define SpecialStrafeLeftGameInputInterfaceProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef SpecialStrafeLeftGameInputInterfaceProcessor_processAnalog
#define SpecialStrafeLeftGameInputInterfaceProcessor_processAnalog GameInputProcessor_processAnalog
#endif
#ifndef SpecialStrafeLeftGameInputInterfaceProcessor_process
#define SpecialStrafeLeftGameInputInterfaceProcessor_process GameInputProcessor_process
#endif
#ifndef SpecialStrafeLeftGameInputInterfaceProcessor_processReleased
#define SpecialStrafeLeftGameInputInterfaceProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialStrafeLeftGameInputInterfaceProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialStrafeLeftGameInputInterfaceProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALSTRAFELEFTGAMEINPUTINTERFACEPROCESSOR_H
