#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIAL4GAMEINPUTINTERFACEPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIAL4GAMEINPUTINTERFACEPROCESSOR_H
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

typedef struct Special4GameInputInterfaceProcessor Special4GameInputInterfaceProcessor;
struct Special4GameInputInterfaceProcessor {
    SpecialGameInputInterfaceProcessor base;
};


Special4GameInputInterfaceProcessor* Special4GameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void Special4GameInputInterfaceProcessor_init(Special4GameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void Special4GameInputInterfaceProcessor_processEvent(Special4GameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);
#define Special4GameInputInterfaceProcessor_new1 Special4GameInputInterfaceProcessor_new
#define Special4GameInputInterfaceProcessor_init1 Special4GameInputInterfaceProcessor_init
#ifndef Special4GameInputInterfaceProcessor_getInstance
#define Special4GameInputInterfaceProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef Special4GameInputInterfaceProcessor_processReleasedEvent
#define Special4GameInputInterfaceProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef Special4GameInputInterfaceProcessor_processAnalog
#define Special4GameInputInterfaceProcessor_processAnalog GameInputProcessor_processAnalog
#endif
#ifndef Special4GameInputInterfaceProcessor_process
#define Special4GameInputInterfaceProcessor_process GameInputProcessor_process
#endif
#ifndef Special4GameInputInterfaceProcessor_processReleased
#define Special4GameInputInterfaceProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Special4GameInputInterfaceProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Special4GameInputInterfaceProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIAL4GAMEINPUTINTERFACEPROCESSOR_H
