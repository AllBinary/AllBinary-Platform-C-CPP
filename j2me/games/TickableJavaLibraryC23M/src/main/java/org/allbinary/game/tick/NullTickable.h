#ifndef ORG_ALLBINARY_GAME_TICK_NULLTICKABLE_H
#define ORG_ALLBINARY_GAME_TICK_NULLTICKABLE_H
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
// package org.allbinary.game.tick

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct TickableInterface TickableInterface;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
#include "org/allbinary/game/tick/TickableInterface.h"

typedef struct NullTickable NullTickable;
struct NullTickable {
    TickableInterface TickableInterface_interface;
    const char* NAME;
};


NullTickable* NullTickable_new(void);
void NullTickable_init(NullTickable* this);

NullTickable* NullTickable_getInstance(void);

void NullTickable_processTick(NullTickable* this, AllBinaryLayerManager* allBinaryLayerManager);

const char* NullTickable_getName(NullTickable* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullTickable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullTickable_register(void);


#endif // ORG_ALLBINARY_GAME_TICK_NULLTICKABLE_H
