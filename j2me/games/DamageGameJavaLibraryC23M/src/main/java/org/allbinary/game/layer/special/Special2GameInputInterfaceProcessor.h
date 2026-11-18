#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIAL2GAMEINPUTINTERFACEPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIAL2GAMEINPUTINTERFACEPROCESSOR_H
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

typedef struct Special2GameInputInterfaceProcessor Special2GameInputInterfaceProcessor;
struct Special2GameInputInterfaceProcessor {
    SpecialGameInputInterfaceProcessor base;
};


Special2GameInputInterfaceProcessor* Special2GameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void Special2GameInputInterfaceProcessor_init(Special2GameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void Special2GameInputInterfaceProcessor_processEvent(Special2GameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);
#define Special2GameInputInterfaceProcessor_new1 Special2GameInputInterfaceProcessor_new
#define Special2GameInputInterfaceProcessor_init1 Special2GameInputInterfaceProcessor_init
#ifndef Special2GameInputInterfaceProcessor_getInstance
#define Special2GameInputInterfaceProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef Special2GameInputInterfaceProcessor_processReleasedEvent
#define Special2GameInputInterfaceProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef Special2GameInputInterfaceProcessor_processAnalog
#define Special2GameInputInterfaceProcessor_processAnalog GameInputProcessor_processAnalog
#endif
#ifndef Special2GameInputInterfaceProcessor_process
#define Special2GameInputInterfaceProcessor_process GameInputProcessor_process
#endif
#ifndef Special2GameInputInterfaceProcessor_processReleased
#define Special2GameInputInterfaceProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Special2GameInputInterfaceProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Special2GameInputInterfaceProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIAL2GAMEINPUTINTERFACEPROCESSOR_H
