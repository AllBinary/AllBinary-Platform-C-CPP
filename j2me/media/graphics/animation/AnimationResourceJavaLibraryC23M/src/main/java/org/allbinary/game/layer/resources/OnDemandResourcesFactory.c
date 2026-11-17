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

typedef struct OnDemandResourcesFactory OnDemandResourcesFactory;
struct OnDemandResourcesFactory {
    char unused;
};


OnDemandResourcesFactory* OnDemandResourcesFactory_new(void);
int32_t OnDemandResourcesFactory_size(OnDemandResourcesFactory* this);
OnDemandResources* OnDemandResourcesFactory_remove(OnDemandResourcesFactory* this, int32_t layerId);

void OnDemandResourcesFactory_init(OnDemandResourcesFactory* this) {
}

OnDemandResourcesFactory* OnDemandResourcesFactory_new(void) {
    OnDemandResourcesFactory* this = calloc(1, sizeof(OnDemandResourcesFactory));
    OnDemandResourcesFactory_init(this);
    return this;
}


int32_t OnDemandResourcesFactory_size(OnDemandResourcesFactory* this) {
        return 0;
}


OnDemandResources* OnDemandResourcesFactory_remove(OnDemandResourcesFactory* this, int32_t layerId) {
        return OnDemandResources_NULL_ON_DEMAND_RESOURCES;
}

