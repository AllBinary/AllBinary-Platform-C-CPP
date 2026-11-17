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
// package org.allbinary.game.layer.pickup

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/animation/Animation.h"

typedef struct IconLayerFactory IconLayerFactory;
struct IconLayerFactory {
    char unused;
};


IconLayerFactory* IconLayerFactory_new(void);
IconLayer* IconLayerFactory_getInstance(Animation* animationInterface, int32_t width, int32_t height);

void IconLayerFactory_init(IconLayerFactory* this) {
}

IconLayerFactory* IconLayerFactory_new(void) {
    IconLayerFactory* this = calloc(1, sizeof(IconLayerFactory));
    IconLayerFactory_init(this);
    return this;
}


// throws Exception
IconLayer* IconLayerFactory_getInstance(Animation* animationInterface, int32_t width, int32_t height) {
        return IconLayer_new(animationInterface, width, height);
}

