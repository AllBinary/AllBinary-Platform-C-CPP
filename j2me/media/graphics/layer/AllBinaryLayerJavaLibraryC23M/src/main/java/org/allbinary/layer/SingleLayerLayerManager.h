#ifndef ORG_ALLBINARY_LAYER_SINGLELAYERLAYERMANAGER_H
#define ORG_ALLBINARY_LAYER_SINGLELAYERLAYERMANAGER_H
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
typedef struct LayerManager LayerManager;
typedef struct LayerManagerNoDebug LayerManagerNoDebug;
#include "org/allbinary/layer/LayerManager.h"

typedef struct SingleLayerLayerManager SingleLayerLayerManager;
struct SingleLayerLayerManager {
    LayerManager base;
};


SingleLayerLayerManager* SingleLayerLayerManager_new(void);

void SingleLayerLayerManager_init(SingleLayerLayerManager* this);
#define SingleLayerLayerManager_new0 SingleLayerLayerManager_new
#define SingleLayerLayerManager_init0 SingleLayerLayerManager_init
#ifndef SingleLayerLayerManager_contains
#define SingleLayerLayerManager_contains LayerManager_contains
#endif
#ifndef SingleLayerLayerManager_update
#define SingleLayerLayerManager_update LayerManager_update
#endif
#ifndef SingleLayerLayerManager_insert
#define SingleLayerLayerManager_insert LayerManager_insert
#endif
#ifndef SingleLayerLayerManager_append
#define SingleLayerLayerManager_append LayerManager_append
#endif
#ifndef SingleLayerLayerManager_appendAt
#define SingleLayerLayerManager_appendAt LayerManager_appendAt
#endif
#ifndef SingleLayerLayerManager_remove
#define SingleLayerLayerManager_remove LayerManager_remove
#endif
#ifndef SingleLayerLayerManager_getLayerAt
#define SingleLayerLayerManager_getLayerAt LayerManager_getLayerAt
#endif
#ifndef SingleLayerLayerManager_getSize
#define SingleLayerLayerManager_getSize LayerManager_getSize
#endif
#ifndef SingleLayerLayerManager_cleanup
#define SingleLayerLayerManager_cleanup LayerManager_cleanup
#endif
#ifndef SingleLayerLayerManager_paint
#define SingleLayerLayerManager_paint LayerManager_paint
#endif
#ifndef SingleLayerLayerManager_append
#define SingleLayerLayerManager_append LayerManager_append
#endif
#ifndef SingleLayerLayerManager_insert
#define SingleLayerLayerManager_insert LayerManager_insert
#endif
#ifndef SingleLayerLayerManager_remove
#define SingleLayerLayerManager_remove LayerManager_remove
#endif
#ifndef SingleLayerLayerManager_setViewWindow
#define SingleLayerLayerManager_setViewWindow LayerManager_setViewWindow
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SingleLayerLayerManager_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SingleLayerLayerManager_register(void);


#endif // ORG_ALLBINARY_LAYER_SINGLELAYERLAYERMANAGER_H
