#ifndef ORG_ALLBINARY_GAME_TICK_OPTIMIZEDTICKABLELAYERPROCESSOR_H
#define ORG_ALLBINARY_GAME_TICK_OPTIMIZEDTICKABLELAYERPROCESSOR_H
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
typedef struct OptimizedTickableLayerManager OptimizedTickableLayerManager;
typedef struct AllBinaryGameLayer AllBinaryGameLayer;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct LayerProcessor LayerProcessor;
#include "org/allbinary/layer/LayerProcessor.h"

typedef struct OptimizedTickableLayerProcessor OptimizedTickableLayerProcessor;
struct OptimizedTickableLayerProcessor {
    LayerProcessor base;
};


OptimizedTickableLayerProcessor* OptimizedTickableLayerProcessor_new(void);

void OptimizedTickableLayerProcessor_init(OptimizedTickableLayerProcessor* this);

void OptimizedTickableLayerProcessor_processAt(OptimizedTickableLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index);

bool OptimizedTickableLayerProcessor_isProcessorLayer(OptimizedTickableLayerProcessor* this, AllBinaryLayer* layerInterface);
#define OptimizedTickableLayerProcessor_new0 OptimizedTickableLayerProcessor_new
#define OptimizedTickableLayerProcessor_init0 OptimizedTickableLayerProcessor_init
#ifndef OptimizedTickableLayerProcessor_getLayerManager
#define OptimizedTickableLayerProcessor_getLayerManager LayerProcessor_getLayerManager
#endif
#ifndef OptimizedTickableLayerProcessor_process
#define OptimizedTickableLayerProcessor_process LayerProcessor_process
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OptimizedTickableLayerProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OptimizedTickableLayerProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_TICK_OPTIMIZEDTICKABLELAYERPROCESSOR_H
