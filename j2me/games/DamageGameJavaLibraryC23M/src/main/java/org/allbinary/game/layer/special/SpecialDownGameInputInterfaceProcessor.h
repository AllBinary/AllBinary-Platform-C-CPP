#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALDOWNGAMEINPUTINTERFACEPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALDOWNGAMEINPUTINTERFACEPROCESSOR_H
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

typedef struct SpecialDownGameInputInterfaceProcessor SpecialDownGameInputInterfaceProcessor;
struct SpecialDownGameInputInterfaceProcessor {
    SpecialGameInputInterfaceProcessor base;
};


SpecialDownGameInputInterfaceProcessor* SpecialDownGameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void SpecialDownGameInputInterfaceProcessor_init(SpecialDownGameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void SpecialDownGameInputInterfaceProcessor_processEvent(SpecialDownGameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);
#define SpecialDownGameInputInterfaceProcessor_new1 SpecialDownGameInputInterfaceProcessor_new
#define SpecialDownGameInputInterfaceProcessor_init1 SpecialDownGameInputInterfaceProcessor_init
#ifndef SpecialDownGameInputInterfaceProcessor_getInstance
#define SpecialDownGameInputInterfaceProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef SpecialDownGameInputInterfaceProcessor_processReleasedEvent
#define SpecialDownGameInputInterfaceProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef SpecialDownGameInputInterfaceProcessor_processAnalog
#define SpecialDownGameInputInterfaceProcessor_processAnalog GameInputProcessor_processAnalog
#endif
#ifndef SpecialDownGameInputInterfaceProcessor_process
#define SpecialDownGameInputInterfaceProcessor_process GameInputProcessor_process
#endif
#ifndef SpecialDownGameInputInterfaceProcessor_processReleased
#define SpecialDownGameInputInterfaceProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialDownGameInputInterfaceProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialDownGameInputInterfaceProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALDOWNGAMEINPUTINTERFACEPROCESSOR_H
