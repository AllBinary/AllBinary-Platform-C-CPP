#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALSTRAFERIGHTGAMEINPUTINTERFACEPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALSTRAFERIGHTGAMEINPUTINTERFACEPROCESSOR_H
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

typedef struct SpecialStrafeRightGameInputInterfaceProcessor SpecialStrafeRightGameInputInterfaceProcessor;
struct SpecialStrafeRightGameInputInterfaceProcessor {
    SpecialGameInputInterfaceProcessor base;
};


SpecialStrafeRightGameInputInterfaceProcessor* SpecialStrafeRightGameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void SpecialStrafeRightGameInputInterfaceProcessor_init(SpecialStrafeRightGameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void SpecialStrafeRightGameInputInterfaceProcessor_processEvent(SpecialStrafeRightGameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);
#define SpecialStrafeRightGameInputInterfaceProcessor_new1 SpecialStrafeRightGameInputInterfaceProcessor_new
#define SpecialStrafeRightGameInputInterfaceProcessor_init1 SpecialStrafeRightGameInputInterfaceProcessor_init
#ifndef SpecialStrafeRightGameInputInterfaceProcessor_getInstance
#define SpecialStrafeRightGameInputInterfaceProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef SpecialStrafeRightGameInputInterfaceProcessor_processReleasedEvent
#define SpecialStrafeRightGameInputInterfaceProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef SpecialStrafeRightGameInputInterfaceProcessor_processAnalog
#define SpecialStrafeRightGameInputInterfaceProcessor_processAnalog GameInputProcessor_processAnalog
#endif
#ifndef SpecialStrafeRightGameInputInterfaceProcessor_process
#define SpecialStrafeRightGameInputInterfaceProcessor_process GameInputProcessor_process
#endif
#ifndef SpecialStrafeRightGameInputInterfaceProcessor_processReleased
#define SpecialStrafeRightGameInputInterfaceProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialStrafeRightGameInputInterfaceProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialStrafeRightGameInputInterfaceProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALSTRAFERIGHTGAMEINPUTINTERFACEPROCESSOR_H
