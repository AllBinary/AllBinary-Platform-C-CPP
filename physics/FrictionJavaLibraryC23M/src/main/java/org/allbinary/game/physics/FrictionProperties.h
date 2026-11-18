#ifndef ORG_ALLBINARY_GAME_PHYSICS_FRICTIONPROPERTIES_H
#define ORG_ALLBINARY_GAME_PHYSICS_FRICTIONPROPERTIES_H
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
// package org.allbinary.game.physics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct FrictionData FrictionData;
typedef struct DragVelocityBehavior DragVelocityBehavior;
typedef struct VelocityProperties VelocityProperties;

typedef struct FrictionProperties FrictionProperties;
struct FrictionProperties {
    char unused;
};


FrictionProperties* FrictionProperties_new(void);

void FrictionProperties_init(FrictionProperties* this);

void FrictionProperties_friction(FrictionProperties* this, VelocityProperties* velocityProperties, int32_t nominator);
#define FrictionProperties_new0 FrictionProperties_new
#define FrictionProperties_init0 FrictionProperties_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FrictionProperties_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void FrictionProperties_register(void);


#endif // ORG_ALLBINARY_GAME_PHYSICS_FRICTIONPROPERTIES_H
