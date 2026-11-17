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
// package org.allbinary.game.layer.resources

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/image/ImageCache.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct OnDemandResources OnDemandResources;
struct OnDemandResources {
    LogUtil* logUtil;
};

OnDemandResources* OnDemandResources_NULL_ON_DEMAND_RESOURCES;

OnDemandResources* OnDemandResources_new(void);

void OnDemandResources_init(OnDemandResources* this);
void OnDemandResources_waitFor(OnDemandResources* this);
void OnDemandResources_init(OnDemandResources* this);
int32_t OnDemandResources_initAt(OnDemandResources* this, ImageCache* imageCache, BaseResourceAnimationInterfaceFactoryInterfaceFactory* resourceAnimationInterfaceFactoryInterfaceFactory, int32_t portion, const char* loadingString, int32_t index);

// Static fields with runtime initializers: call this once at startup
void OnDemandResources_staticInit(void) {
    OnDemandResources_NULL_ON_DEMAND_RESOURCES = OnDemandResources_new();
}

static void OnDemandResources_initFields(OnDemandResources* this) {
    this->logUtil = LogUtil_getInstance();
}


void OnDemandResources_init(OnDemandResources* this) {
    OnDemandResources_initFields(this);
}

OnDemandResources* OnDemandResources_new(void) {
    OnDemandResources* this = calloc(1, sizeof(OnDemandResources));
    OnDemandResources_init(this);
    return this;
}


// throws Exception
void OnDemandResources_waitFor(OnDemandResources* this) {
}


// throws Exception
void OnDemandResources_init(OnDemandResources* this) {
}


// throws Exception
int32_t OnDemandResources_initAt(OnDemandResources* this, ImageCache* imageCache, BaseResourceAnimationInterfaceFactoryInterfaceFactory* resourceAnimationInterfaceFactoryInterfaceFactory, int32_t portion, const char* loadingString, int32_t index) {
        return 0;
}

