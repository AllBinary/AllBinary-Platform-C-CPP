#ifndef ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCELAYERPROCESSOR_H
#define ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCELAYERPROCESSOR_H
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
// package org.allbinary.ai

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ArtificialIntelligenceLayerManager ArtificialIntelligenceLayerManager;
typedef struct ArtificialIntelligenceCompositeInterface ArtificialIntelligenceCompositeInterface;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct LayerProcessor LayerProcessor;
#include "org/allbinary/layer/LayerProcessor.h"

typedef struct ArtificialIntelligenceLayerProcessor ArtificialIntelligenceLayerProcessor;
struct ArtificialIntelligenceLayerProcessor {
    LayerProcessor base;
};


ArtificialIntelligenceLayerProcessor* ArtificialIntelligenceLayerProcessor_new(void);

void ArtificialIntelligenceLayerProcessor_init(ArtificialIntelligenceLayerProcessor* this);

void ArtificialIntelligenceLayerProcessor_processAt(ArtificialIntelligenceLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index);

bool ArtificialIntelligenceLayerProcessor_isProcessorLayer(ArtificialIntelligenceLayerProcessor* this, AllBinaryLayer* layerInterface);
#define ArtificialIntelligenceLayerProcessor_new0 ArtificialIntelligenceLayerProcessor_new
#define ArtificialIntelligenceLayerProcessor_init0 ArtificialIntelligenceLayerProcessor_init
#ifndef ArtificialIntelligenceLayerProcessor_getLayerManager
#define ArtificialIntelligenceLayerProcessor_getLayerManager LayerProcessor_getLayerManager
#endif
#ifndef ArtificialIntelligenceLayerProcessor_process
#define ArtificialIntelligenceLayerProcessor_process LayerProcessor_process
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ArtificialIntelligenceLayerProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ArtificialIntelligenceLayerProcessor_register(void);


#endif // ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCELAYERPROCESSOR_H
