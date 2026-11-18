#ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_NOBASICCONSTANTVELOCITYMOVEMENT_H
#define ORG_ALLBINARY_PHYSICS_MOVEMENT_NOBASICCONSTANTVELOCITYMOVEMENT_H
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
#include "org/allbinary/physics/movement/BasicConstantVelocityMovement.h"

typedef struct NoBasicConstantVelocityMovement NoBasicConstantVelocityMovement;
struct NoBasicConstantVelocityMovement {
    BasicConstantVelocityMovement base;
};


NoBasicConstantVelocityMovement* NoBasicConstantVelocityMovement_new(void);

void NoBasicConstantVelocityMovement_init(NoBasicConstantVelocityMovement* this);

void NoBasicConstantVelocityMovement_process(NoBasicConstantVelocityMovement* this, AllBinaryGameLayer* layer);
#define NoBasicConstantVelocityMovement_new0 NoBasicConstantVelocityMovement_new
#define NoBasicConstantVelocityMovement_init0 NoBasicConstantVelocityMovement_init
#ifndef NoBasicConstantVelocityMovement_moveOutsideRadius
#define NoBasicConstantVelocityMovement_moveOutsideRadius BasicConstantVelocityMovement_moveOutsideRadius
#endif
#ifndef NoBasicConstantVelocityMovement_toString
#define NoBasicConstantVelocityMovement_toString BasicConstantVelocityMovement_toString
#endif
#ifndef NoBasicConstantVelocityMovement_stop
#define NoBasicConstantVelocityMovement_stop BasicConstantVelocityMovement_stop
#endif
#ifndef NoBasicConstantVelocityMovement_getVelocityProperties
#define NoBasicConstantVelocityMovement_getVelocityProperties BasicConstantVelocityMovement_getVelocityProperties
#endif
#ifndef NoBasicConstantVelocityMovement_setVelocityProperties
#define NoBasicConstantVelocityMovement_setVelocityProperties BasicConstantVelocityMovement_setVelocityProperties
#endif
#ifndef NoBasicConstantVelocityMovement_setSpeedBasicDecimal
#define NoBasicConstantVelocityMovement_setSpeedBasicDecimal BasicConstantVelocityMovement_setSpeedBasicDecimal
#endif
#ifndef NoBasicConstantVelocityMovement_getSpeedBasicDecimal
#define NoBasicConstantVelocityMovement_getSpeedBasicDecimal BasicConstantVelocityMovement_getSpeedBasicDecimal
#endif
#ifndef NoBasicConstantVelocityMovement_stop
#define NoBasicConstantVelocityMovement_stop Movement_stop
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoBasicConstantVelocityMovement_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoBasicConstantVelocityMovement_register(void);


#endif // ORG_ALLBINARY_PHYSICS_MOVEMENT_NOBASICCONSTANTVELOCITYMOVEMENT_H
