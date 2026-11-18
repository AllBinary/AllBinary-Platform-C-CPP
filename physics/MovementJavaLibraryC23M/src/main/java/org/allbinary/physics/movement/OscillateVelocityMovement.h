#ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_OSCILLATEVELOCITYMOVEMENT_H
#define ORG_ALLBINARY_PHYSICS_MOVEMENT_OSCILLATEVELOCITYMOVEMENT_H
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
typedef struct VelocityProperties VelocityProperties;
typedef struct BasicDecimal BasicDecimal;
#include "org/allbinary/physics/movement/BasicConstantVelocityMovement.h"

typedef struct OscillateVelocityMovement OscillateVelocityMovement;
struct OscillateVelocityMovement {
    BasicConstantVelocityMovement base;
    int32_t oscillateMin;
    int32_t oscillateMax;
    int32_t oscillate;
    bool oscillatePositive;
};


OscillateVelocityMovement* OscillateVelocityMovement_new(BasicDecimal* speedBasicDecimal, int32_t oscillateMin, int32_t oscillateMax);

void OscillateVelocityMovement_init(OscillateVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t oscillateMin, int32_t oscillateMax);

void OscillateVelocityMovement_process(OscillateVelocityMovement* this, AllBinaryGameLayer* layer);
#define OscillateVelocityMovement_new3 OscillateVelocityMovement_new
#define OscillateVelocityMovement_init3 OscillateVelocityMovement_init
#ifndef OscillateVelocityMovement_moveOutsideRadius
#define OscillateVelocityMovement_moveOutsideRadius BasicConstantVelocityMovement_moveOutsideRadius
#endif
#ifndef OscillateVelocityMovement_toString
#define OscillateVelocityMovement_toString BasicConstantVelocityMovement_toString
#endif
#ifndef OscillateVelocityMovement_stop
#define OscillateVelocityMovement_stop BasicConstantVelocityMovement_stop
#endif
#ifndef OscillateVelocityMovement_getVelocityProperties
#define OscillateVelocityMovement_getVelocityProperties BasicConstantVelocityMovement_getVelocityProperties
#endif
#ifndef OscillateVelocityMovement_setVelocityProperties
#define OscillateVelocityMovement_setVelocityProperties BasicConstantVelocityMovement_setVelocityProperties
#endif
#ifndef OscillateVelocityMovement_setSpeedBasicDecimal
#define OscillateVelocityMovement_setSpeedBasicDecimal BasicConstantVelocityMovement_setSpeedBasicDecimal
#endif
#ifndef OscillateVelocityMovement_getSpeedBasicDecimal
#define OscillateVelocityMovement_getSpeedBasicDecimal BasicConstantVelocityMovement_getSpeedBasicDecimal
#endif
#ifndef OscillateVelocityMovement_stop
#define OscillateVelocityMovement_stop Movement_stop
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OscillateVelocityMovement_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OscillateVelocityMovement_register(void);


#endif // ORG_ALLBINARY_PHYSICS_MOVEMENT_OSCILLATEVELOCITYMOVEMENT_H
