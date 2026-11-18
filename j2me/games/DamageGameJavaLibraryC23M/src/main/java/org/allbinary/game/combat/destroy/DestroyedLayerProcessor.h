#ifndef ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYEDLAYERPROCESSOR_H
#define ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYEDLAYERPROCESSOR_H
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
// package org.allbinary.game.combat.destroy

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct DestroyEventCircularStaticPool DestroyEventCircularStaticPool;
typedef struct DestroyedEvent DestroyedEvent;
typedef struct DestroyedEventHandler DestroyedEventHandler;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct BasicLayerProcessor BasicLayerProcessor;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
#include "org/allbinary/layer/BasicLayerProcessor.h"
// #include "org/allbinary/logic/string/StringMaker.h"
// #include "org/allbinary/logic/string/StringUtil.h"

typedef struct DestroyedLayerProcessor DestroyedLayerProcessor;
struct DestroyedLayerProcessor {
    BasicLayerProcessor base;
};


DestroyedLayerProcessor* DestroyedLayerProcessor_new(void);

void DestroyedLayerProcessor_init(DestroyedLayerProcessor* this);

void DestroyedLayerProcessor_initMethod(void);

BasicLayerProcessor* DestroyedLayerProcessor_getInstance(void);

void DestroyedLayerProcessor_process(DestroyedLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager);
#define DestroyedLayerProcessor_new0 DestroyedLayerProcessor_new
#define DestroyedLayerProcessor_init0 DestroyedLayerProcessor_init
#ifndef DestroyedLayerProcessor_add
#define DestroyedLayerProcessor_add BasicLayerProcessor_add
#endif
#ifndef DestroyedLayerProcessor_getList
#define DestroyedLayerProcessor_getList BasicLayerProcessor_getList
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DestroyedLayerProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DestroyedLayerProcessor_register(void);

#if __has_include("org/allbinary/layer/BasicLayerProcessor.h")
#include "org/allbinary/layer/BasicLayerProcessor.h"
#endif

#endif // ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYEDLAYERPROCESSOR_H
