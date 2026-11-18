#ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSRESOURCES_H
#define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSRESOURCES_H
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
// package org.allbinary.game.ag.layer.pickup.points

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct PointsResources PointsResources;
struct PointsResources {
    const char* RESOURCE;
    const char* RESOURCE_2;
    const char* RESOURCE_3;
    const char* RESOURCE_4;
};


PointsResources* PointsResources_new(void);

void PointsResources_init(PointsResources* this);

PointsResources* PointsResources_getInstance(void);
#define PointsResources_new0 PointsResources_new
#define PointsResources_init0 PointsResources_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PointsResources_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PointsResources_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSRESOURCES_H
