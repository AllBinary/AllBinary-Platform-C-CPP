#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIAL1GAMEINPUTINTERFACEPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIAL1GAMEINPUTINTERFACEPROCESSOR_H
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

typedef struct Special1GameInputInterfaceProcessor Special1GameInputInterfaceProcessor;
struct Special1GameInputInterfaceProcessor {
    SpecialGameInputInterfaceProcessor base;
};


Special1GameInputInterfaceProcessor* Special1GameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void Special1GameInputInterfaceProcessor_init(Special1GameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void Special1GameInputInterfaceProcessor_processEvent(Special1GameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);
#define Special1GameInputInterfaceProcessor_new1 Special1GameInputInterfaceProcessor_new
#define Special1GameInputInterfaceProcessor_init1 Special1GameInputInterfaceProcessor_init
#ifndef Special1GameInputInterfaceProcessor_getInstance
#define Special1GameInputInterfaceProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef Special1GameInputInterfaceProcessor_processReleasedEvent
#define Special1GameInputInterfaceProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef Special1GameInputInterfaceProcessor_processAnalog
#define Special1GameInputInterfaceProcessor_processAnalog GameInputProcessor_processAnalog
#endif
#ifndef Special1GameInputInterfaceProcessor_process
#define Special1GameInputInterfaceProcessor_process GameInputProcessor_process
#endif
#ifndef Special1GameInputInterfaceProcessor_processReleased
#define Special1GameInputInterfaceProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Special1GameInputInterfaceProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Special1GameInputInterfaceProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIAL1GAMEINPUTINTERFACEPROCESSOR_H
