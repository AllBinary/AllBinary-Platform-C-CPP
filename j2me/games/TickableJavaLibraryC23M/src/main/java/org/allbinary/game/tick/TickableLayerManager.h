#ifndef ORG_ALLBINARY_GAME_TICK_TICKABLELAYERMANAGER_H
#define ORG_ALLBINARY_GAME_TICK_TICKABLELAYERMANAGER_H
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

typedef struct TickableLayerManager TickableLayerManager;
struct TickableLayerManager {
    LayerManager base;
};


TickableLayerManager* TickableLayerManager_new(void);

void TickableLayerManager_init(TickableLayerManager* this);
#define TickableLayerManager_new0 TickableLayerManager_new
#define TickableLayerManager_init0 TickableLayerManager_init
#ifndef TickableLayerManager_contains
#define TickableLayerManager_contains LayerManager_contains
#endif
#ifndef TickableLayerManager_update
#define TickableLayerManager_update LayerManager_update
#endif
#ifndef TickableLayerManager_insert
#define TickableLayerManager_insert LayerManager_insert
#endif
#ifndef TickableLayerManager_append
#define TickableLayerManager_append LayerManager_append
#endif
#ifndef TickableLayerManager_appendAt
#define TickableLayerManager_appendAt LayerManager_appendAt
#endif
#ifndef TickableLayerManager_remove
#define TickableLayerManager_remove LayerManager_remove
#endif
#ifndef TickableLayerManager_getLayerAt
#define TickableLayerManager_getLayerAt LayerManager_getLayerAt
#endif
#ifndef TickableLayerManager_getSize
#define TickableLayerManager_getSize LayerManager_getSize
#endif
#ifndef TickableLayerManager_cleanup
#define TickableLayerManager_cleanup LayerManager_cleanup
#endif
#ifndef TickableLayerManager_paint
#define TickableLayerManager_paint LayerManager_paint
#endif
#ifndef TickableLayerManager_append
#define TickableLayerManager_append LayerManager_append
#endif
#ifndef TickableLayerManager_insert
#define TickableLayerManager_insert LayerManager_insert
#endif
#ifndef TickableLayerManager_remove
#define TickableLayerManager_remove LayerManager_remove
#endif
#ifndef TickableLayerManager_setViewWindow
#define TickableLayerManager_setViewWindow LayerManager_setViewWindow
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TickableLayerManager_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TickableLayerManager_register(void);


#endif // ORG_ALLBINARY_GAME_TICK_TICKABLELAYERMANAGER_H
