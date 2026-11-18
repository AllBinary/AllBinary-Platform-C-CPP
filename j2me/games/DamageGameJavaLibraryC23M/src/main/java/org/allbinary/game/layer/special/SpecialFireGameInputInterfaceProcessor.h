#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALFIREGAMEINPUTINTERFACEPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALFIREGAMEINPUTINTERFACEPROCESSOR_H
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

typedef struct SpecialFireGameInputInterfaceProcessor SpecialFireGameInputInterfaceProcessor;
struct SpecialFireGameInputInterfaceProcessor {
    SpecialGameInputInterfaceProcessor base;
};


SpecialFireGameInputInterfaceProcessor* SpecialFireGameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void SpecialFireGameInputInterfaceProcessor_init(SpecialFireGameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void SpecialFireGameInputInterfaceProcessor_processEvent(SpecialFireGameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);
#define SpecialFireGameInputInterfaceProcessor_new1 SpecialFireGameInputInterfaceProcessor_new
#define SpecialFireGameInputInterfaceProcessor_init1 SpecialFireGameInputInterfaceProcessor_init
#ifndef SpecialFireGameInputInterfaceProcessor_getInstance
#define SpecialFireGameInputInterfaceProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef SpecialFireGameInputInterfaceProcessor_processReleasedEvent
#define SpecialFireGameInputInterfaceProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef SpecialFireGameInputInterfaceProcessor_processAnalog
#define SpecialFireGameInputInterfaceProcessor_processAnalog GameInputProcessor_processAnalog
#endif
#ifndef SpecialFireGameInputInterfaceProcessor_process
#define SpecialFireGameInputInterfaceProcessor_process GameInputProcessor_process
#endif
#ifndef SpecialFireGameInputInterfaceProcessor_processReleased
#define SpecialFireGameInputInterfaceProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialFireGameInputInterfaceProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialFireGameInputInterfaceProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALFIREGAMEINPUTINTERFACEPROCESSOR_H
