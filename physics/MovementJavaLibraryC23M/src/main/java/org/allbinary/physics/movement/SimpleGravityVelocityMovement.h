#ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_SIMPLEGRAVITYVELOCITYMOVEMENT_H
#define ORG_ALLBINARY_PHYSICS_MOVEMENT_SIMPLEGRAVITYVELOCITYMOVEMENT_H
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
// package org.allbinary.physics.movement

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BasicConstantVelocityMovement BasicConstantVelocityMovement;
typedef struct AllBinaryGameLayer AllBinaryGameLayer;
typedef struct GravityUtil GravityUtil;
typedef struct VelocityProperties VelocityProperties;
typedef struct BasicDecimal BasicDecimal;
#if __has_include("org/allbinary/game/physics/acceleration/GravityUtil.h")
#include "org/allbinary/game/physics/acceleration/GravityUtil.h"
#endif
#include "org/allbinary/physics/movement/BasicConstantVelocityMovement.h"

typedef struct SimpleGravityVelocityMovement SimpleGravityVelocityMovement;
struct SimpleGravityVelocityMovement {
    BasicConstantVelocityMovement base;
    GravityUtil* gravityUtil;
};


SimpleGravityVelocityMovement* SimpleGravityVelocityMovement_new(BasicDecimal* speedBasicDecimal);

void SimpleGravityVelocityMovement_init(SimpleGravityVelocityMovement* this, BasicDecimal* speedBasicDecimal);

void SimpleGravityVelocityMovement_process(SimpleGravityVelocityMovement* this, AllBinaryGameLayer* layer);
#define SimpleGravityVelocityMovement_new1 SimpleGravityVelocityMovement_new
#define SimpleGravityVelocityMovement_init1 SimpleGravityVelocityMovement_init
#ifndef SimpleGravityVelocityMovement_moveOutsideRadius
#define SimpleGravityVelocityMovement_moveOutsideRadius BasicConstantVelocityMovement_moveOutsideRadius
#endif
#ifndef SimpleGravityVelocityMovement_toString
#define SimpleGravityVelocityMovement_toString BasicConstantVelocityMovement_toString
#endif
#ifndef SimpleGravityVelocityMovement_stop
#define SimpleGravityVelocityMovement_stop BasicConstantVelocityMovement_stop
#endif
#ifndef SimpleGravityVelocityMovement_getVelocityProperties
#define SimpleGravityVelocityMovement_getVelocityProperties BasicConstantVelocityMovement_getVelocityProperties
#endif
#ifndef SimpleGravityVelocityMovement_setVelocityProperties
#define SimpleGravityVelocityMovement_setVelocityProperties BasicConstantVelocityMovement_setVelocityProperties
#endif
#ifndef SimpleGravityVelocityMovement_setSpeedBasicDecimal
#define SimpleGravityVelocityMovement_setSpeedBasicDecimal BasicConstantVelocityMovement_setSpeedBasicDecimal
#endif
#ifndef SimpleGravityVelocityMovement_getSpeedBasicDecimal
#define SimpleGravityVelocityMovement_getSpeedBasicDecimal BasicConstantVelocityMovement_getSpeedBasicDecimal
#endif
#ifndef SimpleGravityVelocityMovement_stop
#define SimpleGravityVelocityMovement_stop Movement_stop
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SimpleGravityVelocityMovement_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SimpleGravityVelocityMovement_register(void);


#endif // ORG_ALLBINARY_PHYSICS_MOVEMENT_SIMPLEGRAVITYVELOCITYMOVEMENT_H
