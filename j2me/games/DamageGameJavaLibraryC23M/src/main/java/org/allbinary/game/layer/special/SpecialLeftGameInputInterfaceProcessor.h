#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALLEFTGAMEINPUTINTERFACEPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALLEFTGAMEINPUTINTERFACEPROCESSOR_H
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

typedef struct SpecialLeftGameInputInterfaceProcessor SpecialLeftGameInputInterfaceProcessor;
struct SpecialLeftGameInputInterfaceProcessor {
    SpecialGameInputInterfaceProcessor base;
};


SpecialLeftGameInputInterfaceProcessor* SpecialLeftGameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void SpecialLeftGameInputInterfaceProcessor_init(SpecialLeftGameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void SpecialLeftGameInputInterfaceProcessor_processEvent(SpecialLeftGameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);
#define SpecialLeftGameInputInterfaceProcessor_new1 SpecialLeftGameInputInterfaceProcessor_new
#define SpecialLeftGameInputInterfaceProcessor_init1 SpecialLeftGameInputInterfaceProcessor_init
#ifndef SpecialLeftGameInputInterfaceProcessor_getInstance
#define SpecialLeftGameInputInterfaceProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef SpecialLeftGameInputInterfaceProcessor_processReleasedEvent
#define SpecialLeftGameInputInterfaceProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef SpecialLeftGameInputInterfaceProcessor_processAnalog
#define SpecialLeftGameInputInterfaceProcessor_processAnalog GameInputProcessor_processAnalog
#endif
#ifndef SpecialLeftGameInputInterfaceProcessor_process
#define SpecialLeftGameInputInterfaceProcessor_process GameInputProcessor_process
#endif
#ifndef SpecialLeftGameInputInterfaceProcessor_processReleased
#define SpecialLeftGameInputInterfaceProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialLeftGameInputInterfaceProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialLeftGameInputInterfaceProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALLEFTGAMEINPUTINTERFACEPROCESSOR_H
