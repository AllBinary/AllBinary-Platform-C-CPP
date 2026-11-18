#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUTINTERFACEPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUTINTERFACEPROCESSOR_H
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
typedef struct SpecialGameInputInterface SpecialGameInputInterface;
typedef struct GameInputProcessor GameInputProcessor;
#include "org/allbinary/game/input/GameInputProcessor.h"
#if __has_include("org/allbinary/game/layer/special/SpecialGameInputInterface.h")
#include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"
#endif

typedef struct SpecialGameInputInterfaceProcessor SpecialGameInputInterfaceProcessor;
struct SpecialGameInputInterfaceProcessor {
    GameInputProcessor base;
    SpecialGameInputInterface* specialGameInputInterface;
};


SpecialGameInputInterfaceProcessor* SpecialGameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void SpecialGameInputInterfaceProcessor_init(SpecialGameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer);
#define SpecialGameInputInterfaceProcessor_new1 SpecialGameInputInterfaceProcessor_new
#define SpecialGameInputInterfaceProcessor_init1 SpecialGameInputInterfaceProcessor_init
#ifndef SpecialGameInputInterfaceProcessor_getInstance
#define SpecialGameInputInterfaceProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef SpecialGameInputInterfaceProcessor_processEvent
#define SpecialGameInputInterfaceProcessor_processEvent GameInputProcessor_processEvent
#endif
#ifndef SpecialGameInputInterfaceProcessor_processReleasedEvent
#define SpecialGameInputInterfaceProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef SpecialGameInputInterfaceProcessor_processAnalog
#define SpecialGameInputInterfaceProcessor_processAnalog GameInputProcessor_processAnalog
#endif
#ifndef SpecialGameInputInterfaceProcessor_process
#define SpecialGameInputInterfaceProcessor_process GameInputProcessor_process
#endif
#ifndef SpecialGameInputInterfaceProcessor_processReleased
#define SpecialGameInputInterfaceProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialGameInputInterfaceProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialGameInputInterfaceProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUTINTERFACEPROCESSOR_H
