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
// package org.allbinary.game.health

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureUtil.h"
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"

typedef struct HealthBarFactory HealthBarFactory;
struct HealthBarFactory {
    char unused;
};


HealthBarFactory* HealthBarFactory_new(void);
HealthBar* HealthBarFactory_getInstance(HealthBarFactory* this, AllBinaryLayer* layerInterface, Health* healthInterface, int32_t location, int32_t direction);

void HealthBarFactory_init(HealthBarFactory* this) {
}

HealthBarFactory* HealthBarFactory_new(void) {
    HealthBarFactory* this = calloc(1, sizeof(HealthBarFactory));
    HealthBarFactory_init(this);
    return this;
}


// throws Exception
HealthBar* HealthBarFactory_getInstance(HealthBarFactory* this, AllBinaryLayer* layerInterface, Health* healthInterface, int32_t location, int32_t direction) {
        if (OpenGLFeatureUtil_isAnyThreed(OpenGLFeatureUtil_getInstance())) {
            FeaturedAnimationInterfaceFactoryInterfaceFactory* featuredAnimationInterfaceFactoryInterfaceFactory = FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance();
            HealthBarAnimationInterfaceFactory* healthBarAnimationInterfaceFactory = ((HealthBarAnimationInterfaceFactory*) FeaturedAnimationInterfaceFactoryInterfaceFactory_get(featuredAnimationInterfaceFactoryInterfaceFactory, Health_NAME));
            return HealthBar_new(layerInterface, healthInterface, HealthBarAnimationInterfaceFactory_getInstanceByLocation(healthBarAnimationInterfaceFactory, layerInterface, location), direction);
        } else {
            return HealthBar_new(layerInterface, healthInterface, HealthBarTwodAnimation_new(layerInterface, location), direction);
        }
}

