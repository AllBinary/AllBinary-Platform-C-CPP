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
#include "org/allbinary/layer/LayerManagerLoggingBase.h"

typedef struct LayerManagerNoDebug LayerManagerNoDebug;
struct LayerManagerNoDebug {
    LayerManagerLoggingBase base;
};

static LayerManagerNoDebug* LayerManagerNoDebug_instance;

LayerManagerNoDebug* LayerManagerNoDebug_new(void);
LayerManagerNoDebug* LayerManagerNoDebug_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void LayerManagerNoDebug_staticInit(void) {
    LayerManagerNoDebug_instance = LayerManagerNoDebug_new();
}

void LayerManagerNoDebug_init(LayerManagerNoDebug* this) {
    LayerManagerLoggingBase_init(&this->base);
}

LayerManagerNoDebug* LayerManagerNoDebug_new(void) {
    LayerManagerNoDebug* this = calloc(1, sizeof(LayerManagerNoDebug));
    LayerManagerNoDebug_init(this);
    return this;
}


LayerManagerNoDebug* LayerManagerNoDebug_getInstance(void) {
        return LayerManagerNoDebug_instance;
}

