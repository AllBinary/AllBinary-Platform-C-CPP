#ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALTHRESOURCES_H
#define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALTHRESOURCES_H
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
// package org.allbinary.game.ag.layer.pickup.health

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct HealthResources HealthResources;
struct HealthResources {
    const char* RESOURCE;
};


HealthResources* HealthResources_new(void);

void HealthResources_init(HealthResources* this);

HealthResources* HealthResources_getInstance(void);
#define HealthResources_new0 HealthResources_new
#define HealthResources_init0 HealthResources_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HealthResources_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HealthResources_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALTHRESOURCES_H
