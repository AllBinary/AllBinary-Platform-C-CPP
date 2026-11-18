#ifndef ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERPROCESSOR_H
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
// package org.allbinary.game.layer.drop

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct DropLayerInterface DropLayerInterface;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct BasicLayerProcessor BasicLayerProcessor;
typedef struct BasicArrayList BasicArrayList;
#include "org/allbinary/layer/BasicLayerProcessor.h"

typedef struct DropLayerProcessor DropLayerProcessor;
struct DropLayerProcessor {
    BasicLayerProcessor base;
};


DropLayerProcessor* DropLayerProcessor_new(void);

void DropLayerProcessor_init(DropLayerProcessor* this);

BasicLayerProcessor* DropLayerProcessor_getInstance(void);

void DropLayerProcessor_process(DropLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager);
#define DropLayerProcessor_new0 DropLayerProcessor_new
#define DropLayerProcessor_init0 DropLayerProcessor_init
#ifndef DropLayerProcessor_add
#define DropLayerProcessor_add BasicLayerProcessor_add
#endif
#ifndef DropLayerProcessor_getList
#define DropLayerProcessor_getList BasicLayerProcessor_getList
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DropLayerProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DropLayerProcessor_register(void);

#if __has_include("org/allbinary/layer/BasicLayerProcessor.h")
#include "org/allbinary/layer/BasicLayerProcessor.h"
#endif

#endif // ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERPROCESSOR_H
