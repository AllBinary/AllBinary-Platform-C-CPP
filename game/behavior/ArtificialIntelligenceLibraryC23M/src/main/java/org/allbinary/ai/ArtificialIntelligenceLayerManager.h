#ifndef ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCELAYERMANAGER_H
#define ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCELAYERMANAGER_H
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

typedef struct ArtificialIntelligenceLayerManager ArtificialIntelligenceLayerManager;
struct ArtificialIntelligenceLayerManager {
    LayerManager base;
};


ArtificialIntelligenceLayerManager* ArtificialIntelligenceLayerManager_new(void);

void ArtificialIntelligenceLayerManager_init(ArtificialIntelligenceLayerManager* this);
#define ArtificialIntelligenceLayerManager_new0 ArtificialIntelligenceLayerManager_new
#define ArtificialIntelligenceLayerManager_init0 ArtificialIntelligenceLayerManager_init
#ifndef ArtificialIntelligenceLayerManager_contains
#define ArtificialIntelligenceLayerManager_contains LayerManager_contains
#endif
#ifndef ArtificialIntelligenceLayerManager_update
#define ArtificialIntelligenceLayerManager_update LayerManager_update
#endif
#ifndef ArtificialIntelligenceLayerManager_insert
#define ArtificialIntelligenceLayerManager_insert LayerManager_insert
#endif
#ifndef ArtificialIntelligenceLayerManager_append
#define ArtificialIntelligenceLayerManager_append LayerManager_append
#endif
#ifndef ArtificialIntelligenceLayerManager_appendAt
#define ArtificialIntelligenceLayerManager_appendAt LayerManager_appendAt
#endif
#ifndef ArtificialIntelligenceLayerManager_remove
#define ArtificialIntelligenceLayerManager_remove LayerManager_remove
#endif
#ifndef ArtificialIntelligenceLayerManager_getLayerAt
#define ArtificialIntelligenceLayerManager_getLayerAt LayerManager_getLayerAt
#endif
#ifndef ArtificialIntelligenceLayerManager_getSize
#define ArtificialIntelligenceLayerManager_getSize LayerManager_getSize
#endif
#ifndef ArtificialIntelligenceLayerManager_cleanup
#define ArtificialIntelligenceLayerManager_cleanup LayerManager_cleanup
#endif
#ifndef ArtificialIntelligenceLayerManager_paint
#define ArtificialIntelligenceLayerManager_paint LayerManager_paint
#endif
#ifndef ArtificialIntelligenceLayerManager_append
#define ArtificialIntelligenceLayerManager_append LayerManager_append
#endif
#ifndef ArtificialIntelligenceLayerManager_insert
#define ArtificialIntelligenceLayerManager_insert LayerManager_insert
#endif
#ifndef ArtificialIntelligenceLayerManager_remove
#define ArtificialIntelligenceLayerManager_remove LayerManager_remove
#endif
#ifndef ArtificialIntelligenceLayerManager_setViewWindow
#define ArtificialIntelligenceLayerManager_setViewWindow LayerManager_setViewWindow
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ArtificialIntelligenceLayerManager_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ArtificialIntelligenceLayerManager_register(void);


#endif // ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCELAYERMANAGER_H
