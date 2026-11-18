#ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_DELAYEDCONSTANTVELOCITYMOVEMENT_H
#define ORG_ALLBINARY_PHYSICS_MOVEMENT_DELAYEDCONSTANTVELOCITYMOVEMENT_H
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
typedef struct BasicVelocityProperties BasicVelocityProperties;
typedef struct BasicDecimal BasicDecimal;
typedef struct GameTickTimeDelayHelperFactory GameTickTimeDelayHelperFactory;
typedef struct TimeDelayHelper TimeDelayHelper;
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#include "org/allbinary/physics/movement/BasicConstantVelocityMovement.h"

typedef struct DelayedConstantVelocityMovement DelayedConstantVelocityMovement;
struct DelayedConstantVelocityMovement {
    BasicConstantVelocityMovement base;
    TimeDelayHelper* timeDelayHelper;
};


DelayedConstantVelocityMovement* DelayedConstantVelocityMovement_new(BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties);

void DelayedConstantVelocityMovement_init(DelayedConstantVelocityMovement* this, BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties);

void DelayedConstantVelocityMovement_initMethod(DelayedConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle);

void DelayedConstantVelocityMovement_process(DelayedConstantVelocityMovement* this, AllBinaryGameLayer* layer);
#define DelayedConstantVelocityMovement_new2 DelayedConstantVelocityMovement_new
#define DelayedConstantVelocityMovement_init2 DelayedConstantVelocityMovement_init
#ifndef DelayedConstantVelocityMovement_moveOutsideRadius
#define DelayedConstantVelocityMovement_moveOutsideRadius BasicConstantVelocityMovement_moveOutsideRadius
#endif
#ifndef DelayedConstantVelocityMovement_toString
#define DelayedConstantVelocityMovement_toString BasicConstantVelocityMovement_toString
#endif
#ifndef DelayedConstantVelocityMovement_stop
#define DelayedConstantVelocityMovement_stop BasicConstantVelocityMovement_stop
#endif
#ifndef DelayedConstantVelocityMovement_getVelocityProperties
#define DelayedConstantVelocityMovement_getVelocityProperties BasicConstantVelocityMovement_getVelocityProperties
#endif
#ifndef DelayedConstantVelocityMovement_setVelocityProperties
#define DelayedConstantVelocityMovement_setVelocityProperties BasicConstantVelocityMovement_setVelocityProperties
#endif
#ifndef DelayedConstantVelocityMovement_setSpeedBasicDecimal
#define DelayedConstantVelocityMovement_setSpeedBasicDecimal BasicConstantVelocityMovement_setSpeedBasicDecimal
#endif
#ifndef DelayedConstantVelocityMovement_getSpeedBasicDecimal
#define DelayedConstantVelocityMovement_getSpeedBasicDecimal BasicConstantVelocityMovement_getSpeedBasicDecimal
#endif
#ifndef DelayedConstantVelocityMovement_stop
#define DelayedConstantVelocityMovement_stop Movement_stop
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DelayedConstantVelocityMovement_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DelayedConstantVelocityMovement_register(void);


#endif // ORG_ALLBINARY_PHYSICS_MOVEMENT_DELAYEDCONSTANTVELOCITYMOVEMENT_H
