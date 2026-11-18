#ifndef ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEVENTFACTORY_H
#define ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEVENTFACTORY_H
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
// package org.allbinary.game.combat.destroy.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct DestroyedEvent DestroyedEvent;
typedef struct AllBinaryGameCanvas AllBinaryGameCanvas;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct AllBinaryEventObjectFactoryInterface AllBinaryEventObjectFactoryInterface;
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#endif
#include "org/allbinary/logic/util/event/AllBinaryEventObjectFactoryInterface.h"

typedef struct DestroyEventFactory DestroyEventFactory;
struct DestroyEventFactory {
    AllBinaryEventObjectFactoryInterface AllBinaryEventObjectFactoryInterface_interface;
    AllBinaryGameCanvas* combatGameCanvas;
};


DestroyEventFactory* DestroyEventFactory_new(AllBinaryGameCanvas* combatGameCanvas);

void DestroyEventFactory_init(DestroyEventFactory* this, AllBinaryGameCanvas* combatGameCanvas);

AllBinaryEventObject* DestroyEventFactory_getInstance(DestroyEventFactory* this);
#define DestroyEventFactory_new1 DestroyEventFactory_new
#define DestroyEventFactory_init1 DestroyEventFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DestroyEventFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DestroyEventFactory_register(void);

#if __has_include("org/allbinary/logic/util/event/AllBinaryEventObject.h")
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#endif

#endif // ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEVENTFACTORY_H
