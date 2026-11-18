#ifndef ORG_ALLBINARY_AI_OPTIMIZEDARTIFICIALINTELLIGENCELAYERMANAGER_H
#define ORG_ALLBINARY_AI_OPTIMIZEDARTIFICIALINTELLIGENCELAYERMANAGER_H
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
typedef struct LayerManager LayerManager;
typedef struct LayerManagerNoDebug LayerManagerNoDebug;
#include "org/allbinary/layer/LayerManager.h"

typedef struct OptimizedArtificialIntelligenceLayerManager OptimizedArtificialIntelligenceLayerManager;
struct OptimizedArtificialIntelligenceLayerManager {
    LayerManager base;
};


OptimizedArtificialIntelligenceLayerManager* OptimizedArtificialIntelligenceLayerManager_new(void);

void OptimizedArtificialIntelligenceLayerManager_init(OptimizedArtificialIntelligenceLayerManager* this);
#define OptimizedArtificialIntelligenceLayerManager_new0 OptimizedArtificialIntelligenceLayerManager_new
#define OptimizedArtificialIntelligenceLayerManager_init0 OptimizedArtificialIntelligenceLayerManager_init
#ifndef OptimizedArtificialIntelligenceLayerManager_contains
#define OptimizedArtificialIntelligenceLayerManager_contains LayerManager_contains
#endif
#ifndef OptimizedArtificialIntelligenceLayerManager_update
#define OptimizedArtificialIntelligenceLayerManager_update LayerManager_update
#endif
#ifndef OptimizedArtificialIntelligenceLayerManager_insert
#define OptimizedArtificialIntelligenceLayerManager_insert LayerManager_insert
#endif
#ifndef OptimizedArtificialIntelligenceLayerManager_append
#define OptimizedArtificialIntelligenceLayerManager_append LayerManager_append
#endif
#ifndef OptimizedArtificialIntelligenceLayerManager_appendAt
#define OptimizedArtificialIntelligenceLayerManager_appendAt LayerManager_appendAt
#endif
#ifndef OptimizedArtificialIntelligenceLayerManager_remove
#define OptimizedArtificialIntelligenceLayerManager_remove LayerManager_remove
#endif
#ifndef OptimizedArtificialIntelligenceLayerManager_getLayerAt
#define OptimizedArtificialIntelligenceLayerManager_getLayerAt LayerManager_getLayerAt
#endif
#ifndef OptimizedArtificialIntelligenceLayerManager_getSize
#define OptimizedArtificialIntelligenceLayerManager_getSize LayerManager_getSize
#endif
#ifndef OptimizedArtificialIntelligenceLayerManager_cleanup
#define OptimizedArtificialIntelligenceLayerManager_cleanup LayerManager_cleanup
#endif
#ifndef OptimizedArtificialIntelligenceLayerManager_paint
#define OptimizedArtificialIntelligenceLayerManager_paint LayerManager_paint
#endif
#ifndef OptimizedArtificialIntelligenceLayerManager_append
#define OptimizedArtificialIntelligenceLayerManager_append LayerManager_append
#endif
#ifndef OptimizedArtificialIntelligenceLayerManager_insert
#define OptimizedArtificialIntelligenceLayerManager_insert LayerManager_insert
#endif
#ifndef OptimizedArtificialIntelligenceLayerManager_remove
#define OptimizedArtificialIntelligenceLayerManager_remove LayerManager_remove
#endif
#ifndef OptimizedArtificialIntelligenceLayerManager_setViewWindow
#define OptimizedArtificialIntelligenceLayerManager_setViewWindow LayerManager_setViewWindow
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OptimizedArtificialIntelligenceLayerManager_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OptimizedArtificialIntelligenceLayerManager_register(void);


#endif // ORG_ALLBINARY_AI_OPTIMIZEDARTIFICIALINTELLIGENCELAYERMANAGER_H
