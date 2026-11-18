#ifndef ORG_ALLBINARY_GAME_TICK_OPTIMIZEDTICKABLELAYERMANAGER_H
#define ORG_ALLBINARY_GAME_TICK_OPTIMIZEDTICKABLELAYERMANAGER_H
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
typedef struct LayerManager LayerManager;
typedef struct LayerManagerNoDebug LayerManagerNoDebug;
#include "org/allbinary/layer/LayerManager.h"

typedef struct OptimizedTickableLayerManager OptimizedTickableLayerManager;
struct OptimizedTickableLayerManager {
    LayerManager base;
};


OptimizedTickableLayerManager* OptimizedTickableLayerManager_new(void);

void OptimizedTickableLayerManager_init(OptimizedTickableLayerManager* this);
#define OptimizedTickableLayerManager_new0 OptimizedTickableLayerManager_new
#define OptimizedTickableLayerManager_init0 OptimizedTickableLayerManager_init
#ifndef OptimizedTickableLayerManager_contains
#define OptimizedTickableLayerManager_contains LayerManager_contains
#endif
#ifndef OptimizedTickableLayerManager_update
#define OptimizedTickableLayerManager_update LayerManager_update
#endif
#ifndef OptimizedTickableLayerManager_insert
#define OptimizedTickableLayerManager_insert LayerManager_insert
#endif
#ifndef OptimizedTickableLayerManager_append
#define OptimizedTickableLayerManager_append LayerManager_append
#endif
#ifndef OptimizedTickableLayerManager_appendAt
#define OptimizedTickableLayerManager_appendAt LayerManager_appendAt
#endif
#ifndef OptimizedTickableLayerManager_remove
#define OptimizedTickableLayerManager_remove LayerManager_remove
#endif
#ifndef OptimizedTickableLayerManager_getLayerAt
#define OptimizedTickableLayerManager_getLayerAt LayerManager_getLayerAt
#endif
#ifndef OptimizedTickableLayerManager_getSize
#define OptimizedTickableLayerManager_getSize LayerManager_getSize
#endif
#ifndef OptimizedTickableLayerManager_cleanup
#define OptimizedTickableLayerManager_cleanup LayerManager_cleanup
#endif
#ifndef OptimizedTickableLayerManager_paint
#define OptimizedTickableLayerManager_paint LayerManager_paint
#endif
#ifndef OptimizedTickableLayerManager_append
#define OptimizedTickableLayerManager_append LayerManager_append
#endif
#ifndef OptimizedTickableLayerManager_insert
#define OptimizedTickableLayerManager_insert LayerManager_insert
#endif
#ifndef OptimizedTickableLayerManager_remove
#define OptimizedTickableLayerManager_remove LayerManager_remove
#endif
#ifndef OptimizedTickableLayerManager_setViewWindow
#define OptimizedTickableLayerManager_setViewWindow LayerManager_setViewWindow
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OptimizedTickableLayerManager_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OptimizedTickableLayerManager_register(void);


#endif // ORG_ALLBINARY_GAME_TICK_OPTIMIZEDTICKABLELAYERMANAGER_H
