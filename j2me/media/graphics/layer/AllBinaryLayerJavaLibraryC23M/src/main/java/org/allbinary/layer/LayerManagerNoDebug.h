#ifndef ORG_ALLBINARY_LAYER_LAYERMANAGERNODEBUG_H
#define ORG_ALLBINARY_LAYER_LAYERMANAGERNODEBUG_H
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
typedef struct LayerManagerLoggingBase LayerManagerLoggingBase;
#include "org/allbinary/layer/LayerManagerLoggingBase.h"

typedef struct LayerManagerNoDebug LayerManagerNoDebug;
struct LayerManagerNoDebug {
    LayerManagerLoggingBase base;
};


LayerManagerNoDebug* LayerManagerNoDebug_new(void);
void LayerManagerNoDebug_init(LayerManagerNoDebug* this);

LayerManagerNoDebug* LayerManagerNoDebug_getInstance(void);
#ifndef LayerManagerNoDebug_append
#define LayerManagerNoDebug_append LayerManagerLoggingBase_append
#endif
#ifndef LayerManagerNoDebug_appendAt
#define LayerManagerNoDebug_appendAt LayerManagerLoggingBase_appendAt
#endif
#ifndef LayerManagerNoDebug_remove
#define LayerManagerNoDebug_remove LayerManagerLoggingBase_remove
#endif
#ifndef LayerManagerNoDebug_removeResult
#define LayerManagerNoDebug_removeResult LayerManagerLoggingBase_removeResult
#endif
#ifndef LayerManagerNoDebug_clear
#define LayerManagerNoDebug_clear LayerManagerLoggingBase_clear
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LayerManagerNoDebug_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LayerManagerNoDebug_register(void);


#endif // ORG_ALLBINARY_LAYER_LAYERMANAGERNODEBUG_H
