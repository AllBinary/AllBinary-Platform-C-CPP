#ifndef ORG_ALLBINARY_GAME_INPUT_OPTIMIZEDGAMEINPUTLAYERMANAGER_H
#define ORG_ALLBINARY_GAME_INPUT_OPTIMIZEDGAMEINPUTLAYERMANAGER_H
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
// package org.allbinary.game.input

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

typedef struct OptimizedGameInputLayerManager OptimizedGameInputLayerManager;
struct OptimizedGameInputLayerManager {
    LayerManager base;
};


OptimizedGameInputLayerManager* OptimizedGameInputLayerManager_new(void);

void OptimizedGameInputLayerManager_init(OptimizedGameInputLayerManager* this);
#define OptimizedGameInputLayerManager_new0 OptimizedGameInputLayerManager_new
#define OptimizedGameInputLayerManager_init0 OptimizedGameInputLayerManager_init
#ifndef OptimizedGameInputLayerManager_contains
#define OptimizedGameInputLayerManager_contains LayerManager_contains
#endif
#ifndef OptimizedGameInputLayerManager_update
#define OptimizedGameInputLayerManager_update LayerManager_update
#endif
#ifndef OptimizedGameInputLayerManager_insert
#define OptimizedGameInputLayerManager_insert LayerManager_insert
#endif
#ifndef OptimizedGameInputLayerManager_append
#define OptimizedGameInputLayerManager_append LayerManager_append
#endif
#ifndef OptimizedGameInputLayerManager_appendAt
#define OptimizedGameInputLayerManager_appendAt LayerManager_appendAt
#endif
#ifndef OptimizedGameInputLayerManager_remove
#define OptimizedGameInputLayerManager_remove LayerManager_remove
#endif
#ifndef OptimizedGameInputLayerManager_getLayerAt
#define OptimizedGameInputLayerManager_getLayerAt LayerManager_getLayerAt
#endif
#ifndef OptimizedGameInputLayerManager_getSize
#define OptimizedGameInputLayerManager_getSize LayerManager_getSize
#endif
#ifndef OptimizedGameInputLayerManager_cleanup
#define OptimizedGameInputLayerManager_cleanup LayerManager_cleanup
#endif
#ifndef OptimizedGameInputLayerManager_paint
#define OptimizedGameInputLayerManager_paint LayerManager_paint
#endif
#ifndef OptimizedGameInputLayerManager_append
#define OptimizedGameInputLayerManager_append LayerManager_append
#endif
#ifndef OptimizedGameInputLayerManager_insert
#define OptimizedGameInputLayerManager_insert LayerManager_insert
#endif
#ifndef OptimizedGameInputLayerManager_remove
#define OptimizedGameInputLayerManager_remove LayerManager_remove
#endif
#ifndef OptimizedGameInputLayerManager_setViewWindow
#define OptimizedGameInputLayerManager_setViewWindow LayerManager_setViewWindow
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OptimizedGameInputLayerManager_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OptimizedGameInputLayerManager_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_OPTIMIZEDGAMEINPUTLAYERMANAGER_H
