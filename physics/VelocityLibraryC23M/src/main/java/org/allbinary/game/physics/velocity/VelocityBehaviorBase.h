#ifndef ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYBEHAVIORBASE_H
#define ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYBEHAVIORBASE_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.game.physics.velocity

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BasicVelocityProperties BasicVelocityProperties;

typedef struct VelocityBehaviorBase VelocityBehaviorBase;
struct VelocityBehaviorBase {
    char unused;
};


VelocityBehaviorBase* VelocityBehaviorBase_new(void);
void VelocityBehaviorBase_init(VelocityBehaviorBase* this);

void VelocityBehaviorBase_reduce(VelocityBehaviorBase* this, BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator);

void VelocityBehaviorBase_reduceX(VelocityBehaviorBase* this, BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator);

void VelocityBehaviorBase_reduceY(VelocityBehaviorBase* this, BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void VelocityBehaviorBase_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void VelocityBehaviorBase_register(void);


#endif // ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYBEHAVIORBASE_H
