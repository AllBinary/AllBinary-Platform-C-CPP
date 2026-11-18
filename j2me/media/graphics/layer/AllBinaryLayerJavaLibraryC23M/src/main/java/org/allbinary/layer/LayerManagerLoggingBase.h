#ifndef ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGINGBASE_H
#define ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGINGBASE_H
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
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct LayerManager LayerManager;

typedef struct LayerManagerLoggingBase LayerManagerLoggingBase;
struct LayerManagerLoggingBase {
    char unused;
};


LayerManagerLoggingBase* LayerManagerLoggingBase_new(void);
void LayerManagerLoggingBase_init(LayerManagerLoggingBase* this);

void LayerManagerLoggingBase_append(LayerManagerLoggingBase* this, AllBinaryLayer* layerInterface);

void LayerManagerLoggingBase_appendAt(LayerManagerLoggingBase* this, AllBinaryLayer* layerInterface, int32_t index);

void LayerManagerLoggingBase_remove(LayerManagerLoggingBase* this, AllBinaryLayer* layerInterface);

void LayerManagerLoggingBase_removeResult(LayerManagerLoggingBase* this, LayerManager* layerManager, AllBinaryLayer* layerInterface, bool result);

void LayerManagerLoggingBase_clear(LayerManagerLoggingBase* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LayerManagerLoggingBase_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LayerManagerLoggingBase_register(void);


#endif // ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGINGBASE_H
