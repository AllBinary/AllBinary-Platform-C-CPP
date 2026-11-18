#ifndef ORG_ALLBINARY_GAME_COLLISION_OPTIMIZEDALLBINARYCOLLISIONLAYERMANAGER_H
#define ORG_ALLBINARY_GAME_COLLISION_OPTIMIZEDALLBINARYCOLLISIONLAYERMANAGER_H
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
// package org.allbinary.game.collision

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

typedef struct OptimizedAllBinaryCollisionLayerManager OptimizedAllBinaryCollisionLayerManager;
struct OptimizedAllBinaryCollisionLayerManager {
    LayerManager base;
};


OptimizedAllBinaryCollisionLayerManager* OptimizedAllBinaryCollisionLayerManager_new(void);

void OptimizedAllBinaryCollisionLayerManager_init(OptimizedAllBinaryCollisionLayerManager* this);
#define OptimizedAllBinaryCollisionLayerManager_new0 OptimizedAllBinaryCollisionLayerManager_new
#define OptimizedAllBinaryCollisionLayerManager_init0 OptimizedAllBinaryCollisionLayerManager_init
#ifndef OptimizedAllBinaryCollisionLayerManager_contains
#define OptimizedAllBinaryCollisionLayerManager_contains LayerManager_contains
#endif
#ifndef OptimizedAllBinaryCollisionLayerManager_update
#define OptimizedAllBinaryCollisionLayerManager_update LayerManager_update
#endif
#ifndef OptimizedAllBinaryCollisionLayerManager_insert
#define OptimizedAllBinaryCollisionLayerManager_insert LayerManager_insert
#endif
#ifndef OptimizedAllBinaryCollisionLayerManager_append
#define OptimizedAllBinaryCollisionLayerManager_append LayerManager_append
#endif
#ifndef OptimizedAllBinaryCollisionLayerManager_appendAt
#define OptimizedAllBinaryCollisionLayerManager_appendAt LayerManager_appendAt
#endif
#ifndef OptimizedAllBinaryCollisionLayerManager_remove
#define OptimizedAllBinaryCollisionLayerManager_remove LayerManager_remove
#endif
#ifndef OptimizedAllBinaryCollisionLayerManager_getLayerAt
#define OptimizedAllBinaryCollisionLayerManager_getLayerAt LayerManager_getLayerAt
#endif
#ifndef OptimizedAllBinaryCollisionLayerManager_getSize
#define OptimizedAllBinaryCollisionLayerManager_getSize LayerManager_getSize
#endif
#ifndef OptimizedAllBinaryCollisionLayerManager_cleanup
#define OptimizedAllBinaryCollisionLayerManager_cleanup LayerManager_cleanup
#endif
#ifndef OptimizedAllBinaryCollisionLayerManager_paint
#define OptimizedAllBinaryCollisionLayerManager_paint LayerManager_paint
#endif
#ifndef OptimizedAllBinaryCollisionLayerManager_append
#define OptimizedAllBinaryCollisionLayerManager_append LayerManager_append
#endif
#ifndef OptimizedAllBinaryCollisionLayerManager_insert
#define OptimizedAllBinaryCollisionLayerManager_insert LayerManager_insert
#endif
#ifndef OptimizedAllBinaryCollisionLayerManager_remove
#define OptimizedAllBinaryCollisionLayerManager_remove LayerManager_remove
#endif
#ifndef OptimizedAllBinaryCollisionLayerManager_setViewWindow
#define OptimizedAllBinaryCollisionLayerManager_setViewWindow LayerManager_setViewWindow
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OptimizedAllBinaryCollisionLayerManager_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OptimizedAllBinaryCollisionLayerManager_register(void);


#endif // ORG_ALLBINARY_GAME_COLLISION_OPTIMIZEDALLBINARYCOLLISIONLAYERMANAGER_H
