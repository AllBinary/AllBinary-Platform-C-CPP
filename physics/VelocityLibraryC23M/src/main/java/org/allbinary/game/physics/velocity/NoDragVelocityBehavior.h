#ifndef ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_NODRAGVELOCITYBEHAVIOR_H
#define ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_NODRAGVELOCITYBEHAVIOR_H
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
typedef struct VelocityBehaviorBase VelocityBehaviorBase;
#include "org/allbinary/game/physics/velocity/VelocityBehaviorBase.h"

typedef struct NoDragVelocityBehavior NoDragVelocityBehavior;
struct NoDragVelocityBehavior {
    VelocityBehaviorBase base;
};

extern NoDragVelocityBehavior* NoDragVelocityBehavior_instance;

NoDragVelocityBehavior* NoDragVelocityBehavior_new(void);
void NoDragVelocityBehavior_init(NoDragVelocityBehavior* this);
#ifndef NoDragVelocityBehavior_reduce
#define NoDragVelocityBehavior_reduce VelocityBehaviorBase_reduce
#endif
#ifndef NoDragVelocityBehavior_reduceX
#define NoDragVelocityBehavior_reduceX VelocityBehaviorBase_reduceX
#endif
#ifndef NoDragVelocityBehavior_reduceY
#define NoDragVelocityBehavior_reduceY VelocityBehaviorBase_reduceY
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoDragVelocityBehavior_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoDragVelocityBehavior_register(void);


#endif // ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_NODRAGVELOCITYBEHAVIOR_H
