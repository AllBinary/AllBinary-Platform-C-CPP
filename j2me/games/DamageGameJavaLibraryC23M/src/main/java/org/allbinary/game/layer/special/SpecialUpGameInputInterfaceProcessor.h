#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALUPGAMEINPUTINTERFACEPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALUPGAMEINPUTINTERFACEPROCESSOR_H
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

typedef struct SpecialUpGameInputInterfaceProcessor SpecialUpGameInputInterfaceProcessor;
struct SpecialUpGameInputInterfaceProcessor {
    SpecialGameInputInterfaceProcessor base;
};


SpecialUpGameInputInterfaceProcessor* SpecialUpGameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void SpecialUpGameInputInterfaceProcessor_init(SpecialUpGameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void SpecialUpGameInputInterfaceProcessor_processEvent(SpecialUpGameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);
#define SpecialUpGameInputInterfaceProcessor_new1 SpecialUpGameInputInterfaceProcessor_new
#define SpecialUpGameInputInterfaceProcessor_init1 SpecialUpGameInputInterfaceProcessor_init
#ifndef SpecialUpGameInputInterfaceProcessor_getInstance
#define SpecialUpGameInputInterfaceProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef SpecialUpGameInputInterfaceProcessor_processReleasedEvent
#define SpecialUpGameInputInterfaceProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef SpecialUpGameInputInterfaceProcessor_processAnalog
#define SpecialUpGameInputInterfaceProcessor_processAnalog GameInputProcessor_processAnalog
#endif
#ifndef SpecialUpGameInputInterfaceProcessor_process
#define SpecialUpGameInputInterfaceProcessor_process GameInputProcessor_process
#endif
#ifndef SpecialUpGameInputInterfaceProcessor_processReleased
#define SpecialUpGameInputInterfaceProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialUpGameInputInterfaceProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialUpGameInputInterfaceProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALUPGAMEINPUTINTERFACEPROCESSOR_H
