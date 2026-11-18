#ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_CUSTOMGRAVITYCONSTANTVELOCITYMOVEMENT_H
#define ORG_ALLBINARY_PHYSICS_MOVEMENT_CUSTOMGRAVITYCONSTANTVELOCITYMOVEMENT_H
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

typedef struct CustomGravityConstantVelocityMovement CustomGravityConstantVelocityMovement;
struct CustomGravityConstantVelocityMovement {
    BasicConstantVelocityMovement base;
    int32_t customGravity;
    GravityUtil* gravityUtil;
};


CustomGravityConstantVelocityMovement* CustomGravityConstantVelocityMovement_new(BasicDecimal* speedBasicDecimal, int32_t customGravity);

void CustomGravityConstantVelocityMovement_init(CustomGravityConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t customGravity);

void CustomGravityConstantVelocityMovement_process(CustomGravityConstantVelocityMovement* this, AllBinaryGameLayer* layer);
#define CustomGravityConstantVelocityMovement_new2 CustomGravityConstantVelocityMovement_new
#define CustomGravityConstantVelocityMovement_init2 CustomGravityConstantVelocityMovement_init
#ifndef CustomGravityConstantVelocityMovement_moveOutsideRadius
#define CustomGravityConstantVelocityMovement_moveOutsideRadius BasicConstantVelocityMovement_moveOutsideRadius
#endif
#ifndef CustomGravityConstantVelocityMovement_toString
#define CustomGravityConstantVelocityMovement_toString BasicConstantVelocityMovement_toString
#endif
#ifndef CustomGravityConstantVelocityMovement_stop
#define CustomGravityConstantVelocityMovement_stop BasicConstantVelocityMovement_stop
#endif
#ifndef CustomGravityConstantVelocityMovement_getVelocityProperties
#define CustomGravityConstantVelocityMovement_getVelocityProperties BasicConstantVelocityMovement_getVelocityProperties
#endif
#ifndef CustomGravityConstantVelocityMovement_setVelocityProperties
#define CustomGravityConstantVelocityMovement_setVelocityProperties BasicConstantVelocityMovement_setVelocityProperties
#endif
#ifndef CustomGravityConstantVelocityMovement_setSpeedBasicDecimal
#define CustomGravityConstantVelocityMovement_setSpeedBasicDecimal BasicConstantVelocityMovement_setSpeedBasicDecimal
#endif
#ifndef CustomGravityConstantVelocityMovement_getSpeedBasicDecimal
#define CustomGravityConstantVelocityMovement_getSpeedBasicDecimal BasicConstantVelocityMovement_getSpeedBasicDecimal
#endif
#ifndef CustomGravityConstantVelocityMovement_stop
#define CustomGravityConstantVelocityMovement_stop Movement_stop
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CustomGravityConstantVelocityMovement_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CustomGravityConstantVelocityMovement_register(void);


#endif // ORG_ALLBINARY_PHYSICS_MOVEMENT_CUSTOMGRAVITYCONSTANTVELOCITYMOVEMENT_H
