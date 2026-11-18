#ifndef ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDRESOURCESFACTORY_H
#define ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDRESOURCESFACTORY_H
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
typedef struct OnDemandResources OnDemandResources;

typedef struct OnDemandResourcesFactory OnDemandResourcesFactory;
struct OnDemandResourcesFactory {
    char unused;
};


OnDemandResourcesFactory* OnDemandResourcesFactory_new(void);
void OnDemandResourcesFactory_init(OnDemandResourcesFactory* this);

int32_t OnDemandResourcesFactory_size(OnDemandResourcesFactory* this);

OnDemandResources* OnDemandResourcesFactory_remove(OnDemandResourcesFactory* this, int32_t layerId);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OnDemandResourcesFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OnDemandResourcesFactory_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDRESOURCESFACTORY_H
