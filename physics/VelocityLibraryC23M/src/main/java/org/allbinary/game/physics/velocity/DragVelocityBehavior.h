#ifndef ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_DRAGVELOCITYBEHAVIOR_H
#define ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_DRAGVELOCITYBEHAVIOR_H
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
// package org.allbinary.game.physics.velocity

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct VelocityBehaviorBase VelocityBehaviorBase;
typedef struct BasicVelocityProperties BasicVelocityProperties;
typedef struct BasicDecimal BasicDecimal;
#include "org/allbinary/game/physics/velocity/VelocityBehaviorBase.h"

typedef struct DragVelocityBehavior DragVelocityBehavior;
struct DragVelocityBehavior {
    VelocityBehaviorBase base;
};

extern DragVelocityBehavior* DragVelocityBehavior_instance;

DragVelocityBehavior* DragVelocityBehavior_new(void);
void DragVelocityBehavior_init(DragVelocityBehavior* this);

void DragVelocityBehavior_reduce(DragVelocityBehavior* this, BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator);

void DragVelocityBehavior_reduceX(DragVelocityBehavior* this, BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator);

void DragVelocityBehavior_reduceY(DragVelocityBehavior* this, BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DragVelocityBehavior_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DragVelocityBehavior_register(void);


#endif // ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_DRAGVELOCITYBEHAVIOR_H
