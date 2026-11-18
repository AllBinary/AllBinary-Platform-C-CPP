#ifndef ORG_ALLBINARY_GAME_COLLISION_LAYER_COLLIDABLEINTERFACELAYERMANAGER_H
#define ORG_ALLBINARY_GAME_COLLISION_LAYER_COLLIDABLEINTERFACELAYERMANAGER_H
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
// package org.allbinary.game.collision.layer

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

typedef struct CollidableInterfaceLayerManager CollidableInterfaceLayerManager;
struct CollidableInterfaceLayerManager {
    LayerManager base;
};


CollidableInterfaceLayerManager* CollidableInterfaceLayerManager_new(void);

void CollidableInterfaceLayerManager_init(CollidableInterfaceLayerManager* this);
#define CollidableInterfaceLayerManager_new0 CollidableInterfaceLayerManager_new
#define CollidableInterfaceLayerManager_init0 CollidableInterfaceLayerManager_init
#ifndef CollidableInterfaceLayerManager_contains
#define CollidableInterfaceLayerManager_contains LayerManager_contains
#endif
#ifndef CollidableInterfaceLayerManager_update
#define CollidableInterfaceLayerManager_update LayerManager_update
#endif
#ifndef CollidableInterfaceLayerManager_insert
#define CollidableInterfaceLayerManager_insert LayerManager_insert
#endif
#ifndef CollidableInterfaceLayerManager_append
#define CollidableInterfaceLayerManager_append LayerManager_append
#endif
#ifndef CollidableInterfaceLayerManager_appendAt
#define CollidableInterfaceLayerManager_appendAt LayerManager_appendAt
#endif
#ifndef CollidableInterfaceLayerManager_remove
#define CollidableInterfaceLayerManager_remove LayerManager_remove
#endif
#ifndef CollidableInterfaceLayerManager_getLayerAt
#define CollidableInterfaceLayerManager_getLayerAt LayerManager_getLayerAt
#endif
#ifndef CollidableInterfaceLayerManager_getSize
#define CollidableInterfaceLayerManager_getSize LayerManager_getSize
#endif
#ifndef CollidableInterfaceLayerManager_cleanup
#define CollidableInterfaceLayerManager_cleanup LayerManager_cleanup
#endif
#ifndef CollidableInterfaceLayerManager_paint
#define CollidableInterfaceLayerManager_paint LayerManager_paint
#endif
#ifndef CollidableInterfaceLayerManager_append
#define CollidableInterfaceLayerManager_append LayerManager_append
#endif
#ifndef CollidableInterfaceLayerManager_insert
#define CollidableInterfaceLayerManager_insert LayerManager_insert
#endif
#ifndef CollidableInterfaceLayerManager_remove
#define CollidableInterfaceLayerManager_remove LayerManager_remove
#endif
#ifndef CollidableInterfaceLayerManager_setViewWindow
#define CollidableInterfaceLayerManager_setViewWindow LayerManager_setViewWindow
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CollidableInterfaceLayerManager_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CollidableInterfaceLayerManager_register(void);


#endif // ORG_ALLBINARY_GAME_COLLISION_LAYER_COLLIDABLEINTERFACELAYERMANAGER_H
