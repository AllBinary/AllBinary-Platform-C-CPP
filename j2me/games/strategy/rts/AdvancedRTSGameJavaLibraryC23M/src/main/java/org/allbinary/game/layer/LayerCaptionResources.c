/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2002 AllBinary 
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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct LayerCaptionResources LayerCaptionResources;
struct LayerCaptionResources {
    const char* RESOURCE;
};

static LayerCaptionResources* LayerCaptionResources_instance;

LayerCaptionResources* LayerCaptionResources_new(void);
LayerCaptionResources* LayerCaptionResources_getInstance(void);

void LayerCaptionResources_init(LayerCaptionResources* this);

// Static fields with runtime initializers: call this once at startup
void LayerCaptionResources_staticInit(void) {
    LayerCaptionResources_instance = LayerCaptionResources_new();
}

static void LayerCaptionResources_initFields(LayerCaptionResources* this) {
    this->RESOURCE = "/unit_message_bubbled_box.png";
}


LayerCaptionResources* LayerCaptionResources_getInstance(void) {
        return LayerCaptionResources_instance;
}


void LayerCaptionResources_init(LayerCaptionResources* this) {
    LayerCaptionResources_initFields(this);
}

LayerCaptionResources* LayerCaptionResources_new(void) {
    LayerCaptionResources* this = calloc(1, sizeof(LayerCaptionResources));
    LayerCaptionResources_init(this);
    return this;
}

