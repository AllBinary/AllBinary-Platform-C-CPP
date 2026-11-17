/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2006 AllBinary 
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
// package org.allbinary.game.layer.unit

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/resources/BasicGameResources.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/animation/NullRotationAnimationFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"

typedef struct DecalAnimationInterfaceFactory DecalAnimationInterfaceFactory;
struct DecalAnimationInterfaceFactory {
    char unused;
};

static DecalAnimationInterfaceFactory* DecalAnimationInterfaceFactory_instance;

DecalAnimationInterfaceFactory* DecalAnimationInterfaceFactory_new(void);
DecalAnimationInterfaceFactory* DecalAnimationInterfaceFactory_getInstance(void);
AnimationInterfaceFactoryInterface* DecalAnimationInterfaceFactory_getAnimationFactory(DecalAnimationInterfaceFactory* this, BasicGameResources* basicGameResources, BasicColor* basicColor);

// Static fields with runtime initializers: call this once at startup
void DecalAnimationInterfaceFactory_staticInit(void) {
    DecalAnimationInterfaceFactory_instance = DecalAnimationInterfaceFactory_new();
}

void DecalAnimationInterfaceFactory_init(DecalAnimationInterfaceFactory* this) {
}

DecalAnimationInterfaceFactory* DecalAnimationInterfaceFactory_new(void) {
    DecalAnimationInterfaceFactory* this = calloc(1, sizeof(DecalAnimationInterfaceFactory));
    DecalAnimationInterfaceFactory_init(this);
    return this;
}


DecalAnimationInterfaceFactory* DecalAnimationInterfaceFactory_getInstance(void) {
        return DecalAnimationInterfaceFactory_instance;
}


// throws Exception
AnimationInterfaceFactoryInterface* DecalAnimationInterfaceFactory_getAnimationFactory(DecalAnimationInterfaceFactory* this, BasicGameResources* basicGameResources, BasicColor* basicColor) {
        AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface = nullptr;
        if (basicColor == BasicColorFactory_getInstance()->RED) {
            animationInterfaceFactoryInterface = FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), basicGameResources->RESOURCE);
        } else {
            animationInterfaceFactoryInterface = NullRotationAnimationFactory_getFactoryInstance();
        }
        return animationInterfaceFactoryInterface;
}

