#ifndef ORG_ALLBINARY_GAME_TICK_TICKABLELAYERPROCESSOR_H
#define ORG_ALLBINARY_GAME_TICK_TICKABLELAYERPROCESSOR_H
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
typedef struct TickableLayerManager TickableLayerManager;
typedef struct TickableInterface TickableInterface;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct LayerProcessor LayerProcessor;
#include "org/allbinary/layer/LayerProcessor.h"

typedef struct TickableLayerProcessor TickableLayerProcessor;
struct TickableLayerProcessor {
    LayerProcessor base;
};


TickableLayerProcessor* TickableLayerProcessor_new(void);

void TickableLayerProcessor_init(TickableLayerProcessor* this);

void TickableLayerProcessor_processAt(TickableLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index);

bool TickableLayerProcessor_isProcessorLayer(TickableLayerProcessor* this, AllBinaryLayer* layerInterface);
#define TickableLayerProcessor_new0 TickableLayerProcessor_new
#define TickableLayerProcessor_init0 TickableLayerProcessor_init
#ifndef TickableLayerProcessor_getLayerManager
#define TickableLayerProcessor_getLayerManager LayerProcessor_getLayerManager
#endif
#ifndef TickableLayerProcessor_process
#define TickableLayerProcessor_process LayerProcessor_process
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TickableLayerProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TickableLayerProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_TICK_TICKABLELAYERPROCESSOR_H
