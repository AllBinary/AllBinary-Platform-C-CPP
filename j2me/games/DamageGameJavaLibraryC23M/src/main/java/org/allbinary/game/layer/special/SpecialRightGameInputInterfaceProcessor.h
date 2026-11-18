#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALRIGHTGAMEINPUTINTERFACEPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALRIGHTGAMEINPUTINTERFACEPROCESSOR_H
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

typedef struct SpecialRightGameInputInterfaceProcessor SpecialRightGameInputInterfaceProcessor;
struct SpecialRightGameInputInterfaceProcessor {
    SpecialGameInputInterfaceProcessor base;
};


SpecialRightGameInputInterfaceProcessor* SpecialRightGameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void SpecialRightGameInputInterfaceProcessor_init(SpecialRightGameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void SpecialRightGameInputInterfaceProcessor_processEvent(SpecialRightGameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);
#define SpecialRightGameInputInterfaceProcessor_new1 SpecialRightGameInputInterfaceProcessor_new
#define SpecialRightGameInputInterfaceProcessor_init1 SpecialRightGameInputInterfaceProcessor_init
#ifndef SpecialRightGameInputInterfaceProcessor_getInstance
#define SpecialRightGameInputInterfaceProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef SpecialRightGameInputInterfaceProcessor_processReleasedEvent
#define SpecialRightGameInputInterfaceProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef SpecialRightGameInputInterfaceProcessor_processAnalog
#define SpecialRightGameInputInterfaceProcessor_processAnalog GameInputProcessor_processAnalog
#endif
#ifndef SpecialRightGameInputInterfaceProcessor_process
#define SpecialRightGameInputInterfaceProcessor_process GameInputProcessor_process
#endif
#ifndef SpecialRightGameInputInterfaceProcessor_processReleased
#define SpecialRightGameInputInterfaceProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialRightGameInputInterfaceProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialRightGameInputInterfaceProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALRIGHTGAMEINPUTINTERFACEPROCESSOR_H
