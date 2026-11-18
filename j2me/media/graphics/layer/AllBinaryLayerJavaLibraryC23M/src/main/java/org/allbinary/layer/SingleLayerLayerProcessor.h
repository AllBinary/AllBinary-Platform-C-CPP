#ifndef ORG_ALLBINARY_LAYER_SINGLELAYERLAYERPROCESSOR_H
#define ORG_ALLBINARY_LAYER_SINGLELAYERLAYERPROCESSOR_H
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
// package org.allbinary.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct LayerProcessor LayerProcessor;
typedef struct SingleLayerLayerManager SingleLayerLayerManager;
typedef struct LayerManager LayerManager;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
#include "org/allbinary/layer/LayerProcessor.h"

typedef struct SingleLayerLayerProcessor SingleLayerLayerProcessor;
struct SingleLayerLayerProcessor {
    LayerProcessor base;
};


SingleLayerLayerProcessor* SingleLayerLayerProcessor_new(void);

void SingleLayerLayerProcessor_init(SingleLayerLayerProcessor* this);

void SingleLayerLayerProcessor_process(SingleLayerLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager);
#define SingleLayerLayerProcessor_new0 SingleLayerLayerProcessor_new
#define SingleLayerLayerProcessor_init0 SingleLayerLayerProcessor_init
#ifndef SingleLayerLayerProcessor_processAt
#define SingleLayerLayerProcessor_processAt LayerProcessor_processAt
#endif
#ifndef SingleLayerLayerProcessor_isProcessorLayer
#define SingleLayerLayerProcessor_isProcessorLayer LayerProcessor_isProcessorLayer
#endif
#ifndef SingleLayerLayerProcessor_getLayerManager
#define SingleLayerLayerProcessor_getLayerManager LayerProcessor_getLayerManager
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SingleLayerLayerProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SingleLayerLayerProcessor_register(void);


#endif // ORG_ALLBINARY_LAYER_SINGLELAYERLAYERPROCESSOR_H
