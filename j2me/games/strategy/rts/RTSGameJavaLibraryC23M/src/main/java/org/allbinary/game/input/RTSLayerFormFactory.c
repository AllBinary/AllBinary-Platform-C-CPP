/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
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
#include "org/allbinary/game/layer/RTSLayer.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/game/input/RTSLayerFormFactoryInterface.h"

typedef struct RTSLayerFormFactory RTSLayerFormFactory;
struct RTSLayerFormFactory {
    RTSLayerFormFactoryInterface RTSLayerFormFactoryInterface_interface;
};


RTSLayerFormFactory* RTSLayerFormFactory_new(void);
ScrollSelectionForm* RTSLayerFormFactory_getInstance(RTSLayerFormFactory* this, RTSLayer* rtsLayer);

void RTSLayerFormFactory_init(RTSLayerFormFactory* this) {
}

RTSLayerFormFactory* RTSLayerFormFactory_new(void) {
    RTSLayerFormFactory* this = calloc(1, sizeof(RTSLayerFormFactory));
    RTSLayerFormFactory_init(this);
    return this;
}


ScrollSelectionForm* RTSLayerFormFactory_getInstance(RTSLayerFormFactory* this, RTSLayer* rtsLayer) {
        java_throw(java_exception_new("RuntimeException", ""));
}

