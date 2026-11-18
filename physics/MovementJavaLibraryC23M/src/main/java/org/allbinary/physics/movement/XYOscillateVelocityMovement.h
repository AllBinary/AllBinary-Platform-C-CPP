#ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_XYOSCILLATEVELOCITYMOVEMENT_H
#define ORG_ALLBINARY_PHYSICS_MOVEMENT_XYOSCILLATEVELOCITYMOVEMENT_H
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

typedef struct XYOscillateVelocityMovement XYOscillateVelocityMovement;
struct XYOscillateVelocityMovement {
    BasicConstantVelocityMovement base;
    int32_t oscillateMin;
    int32_t oscillateMax;
    int32_t oscillate;
    bool oscillatePositive;
};


XYOscillateVelocityMovement* XYOscillateVelocityMovement_new(BasicDecimal* speedBasicDecimal, int32_t oscillateMin, int32_t oscillateMax);

void XYOscillateVelocityMovement_init(XYOscillateVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t oscillateMin, int32_t oscillateMax);

void XYOscillateVelocityMovement_process(XYOscillateVelocityMovement* this, AllBinaryGameLayer* layer);
#define XYOscillateVelocityMovement_new3 XYOscillateVelocityMovement_new
#define XYOscillateVelocityMovement_init3 XYOscillateVelocityMovement_init
#ifndef XYOscillateVelocityMovement_moveOutsideRadius
#define XYOscillateVelocityMovement_moveOutsideRadius BasicConstantVelocityMovement_moveOutsideRadius
#endif
#ifndef XYOscillateVelocityMovement_toString
#define XYOscillateVelocityMovement_toString BasicConstantVelocityMovement_toString
#endif
#ifndef XYOscillateVelocityMovement_stop
#define XYOscillateVelocityMovement_stop BasicConstantVelocityMovement_stop
#endif
#ifndef XYOscillateVelocityMovement_getVelocityProperties
#define XYOscillateVelocityMovement_getVelocityProperties BasicConstantVelocityMovement_getVelocityProperties
#endif
#ifndef XYOscillateVelocityMovement_setVelocityProperties
#define XYOscillateVelocityMovement_setVelocityProperties BasicConstantVelocityMovement_setVelocityProperties
#endif
#ifndef XYOscillateVelocityMovement_setSpeedBasicDecimal
#define XYOscillateVelocityMovement_setSpeedBasicDecimal BasicConstantVelocityMovement_setSpeedBasicDecimal
#endif
#ifndef XYOscillateVelocityMovement_getSpeedBasicDecimal
#define XYOscillateVelocityMovement_getSpeedBasicDecimal BasicConstantVelocityMovement_getSpeedBasicDecimal
#endif
#ifndef XYOscillateVelocityMovement_stop
#define XYOscillateVelocityMovement_stop Movement_stop
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void XYOscillateVelocityMovement_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void XYOscillateVelocityMovement_register(void);


#endif // ORG_ALLBINARY_PHYSICS_MOVEMENT_XYOSCILLATEVELOCITYMOVEMENT_H
