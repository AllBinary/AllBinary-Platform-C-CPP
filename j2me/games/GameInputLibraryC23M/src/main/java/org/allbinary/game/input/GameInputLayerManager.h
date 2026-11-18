#ifndef ORG_ALLBINARY_GAME_INPUT_GAMEINPUTLAYERMANAGER_H
#define ORG_ALLBINARY_GAME_INPUT_GAMEINPUTLAYERMANAGER_H
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

typedef struct GameInputLayerManager GameInputLayerManager;
struct GameInputLayerManager {
    LayerManager base;
};


GameInputLayerManager* GameInputLayerManager_new(void);

void GameInputLayerManager_init(GameInputLayerManager* this);
#define GameInputLayerManager_new0 GameInputLayerManager_new
#define GameInputLayerManager_init0 GameInputLayerManager_init
#ifndef GameInputLayerManager_contains
#define GameInputLayerManager_contains LayerManager_contains
#endif
#ifndef GameInputLayerManager_update
#define GameInputLayerManager_update LayerManager_update
#endif
#ifndef GameInputLayerManager_insert
#define GameInputLayerManager_insert LayerManager_insert
#endif
#ifndef GameInputLayerManager_append
#define GameInputLayerManager_append LayerManager_append
#endif
#ifndef GameInputLayerManager_appendAt
#define GameInputLayerManager_appendAt LayerManager_appendAt
#endif
#ifndef GameInputLayerManager_remove
#define GameInputLayerManager_remove LayerManager_remove
#endif
#ifndef GameInputLayerManager_getLayerAt
#define GameInputLayerManager_getLayerAt LayerManager_getLayerAt
#endif
#ifndef GameInputLayerManager_getSize
#define GameInputLayerManager_getSize LayerManager_getSize
#endif
#ifndef GameInputLayerManager_cleanup
#define GameInputLayerManager_cleanup LayerManager_cleanup
#endif
#ifndef GameInputLayerManager_paint
#define GameInputLayerManager_paint LayerManager_paint
#endif
#ifndef GameInputLayerManager_append
#define GameInputLayerManager_append LayerManager_append
#endif
#ifndef GameInputLayerManager_insert
#define GameInputLayerManager_insert LayerManager_insert
#endif
#ifndef GameInputLayerManager_remove
#define GameInputLayerManager_remove LayerManager_remove
#endif
#ifndef GameInputLayerManager_setViewWindow
#define GameInputLayerManager_setViewWindow LayerManager_setViewWindow
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameInputLayerManager_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameInputLayerManager_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_GAMEINPUTLAYERMANAGER_H
