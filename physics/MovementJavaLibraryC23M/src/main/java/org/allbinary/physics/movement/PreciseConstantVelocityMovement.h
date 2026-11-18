#ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_PRECISECONSTANTVELOCITYMOVEMENT_H
#define ORG_ALLBINARY_PHYSICS_MOVEMENT_PRECISECONSTANTVELOCITYMOVEMENT_H
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
typedef struct MathUtil MathUtil;
typedef struct ScaleFactorFactory ScaleFactorFactory;
#include "org/allbinary/physics/movement/BasicConstantVelocityMovement.h"

typedef struct PreciseConstantVelocityMovement PreciseConstantVelocityMovement;
struct PreciseConstantVelocityMovement {
    BasicConstantVelocityMovement base;
    int32_t accumulatedX;
    int32_t accumulatedY;
    int32_t accumulatedZ;
    int32_t factorValue;
};


PreciseConstantVelocityMovement* PreciseConstantVelocityMovement_new(BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties);

void PreciseConstantVelocityMovement_init(PreciseConstantVelocityMovement* this, BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties);

void PreciseConstantVelocityMovement_initMethod(PreciseConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle);

void PreciseConstantVelocityMovement_process(PreciseConstantVelocityMovement* this, AllBinaryGameLayer* layer);
#define PreciseConstantVelocityMovement_new2 PreciseConstantVelocityMovement_new
#define PreciseConstantVelocityMovement_init2 PreciseConstantVelocityMovement_init
#ifndef PreciseConstantVelocityMovement_moveOutsideRadius
#define PreciseConstantVelocityMovement_moveOutsideRadius BasicConstantVelocityMovement_moveOutsideRadius
#endif
#ifndef PreciseConstantVelocityMovement_toString
#define PreciseConstantVelocityMovement_toString BasicConstantVelocityMovement_toString
#endif
#ifndef PreciseConstantVelocityMovement_stop
#define PreciseConstantVelocityMovement_stop BasicConstantVelocityMovement_stop
#endif
#ifndef PreciseConstantVelocityMovement_getVelocityProperties
#define PreciseConstantVelocityMovement_getVelocityProperties BasicConstantVelocityMovement_getVelocityProperties
#endif
#ifndef PreciseConstantVelocityMovement_setVelocityProperties
#define PreciseConstantVelocityMovement_setVelocityProperties BasicConstantVelocityMovement_setVelocityProperties
#endif
#ifndef PreciseConstantVelocityMovement_setSpeedBasicDecimal
#define PreciseConstantVelocityMovement_setSpeedBasicDecimal BasicConstantVelocityMovement_setSpeedBasicDecimal
#endif
#ifndef PreciseConstantVelocityMovement_getSpeedBasicDecimal
#define PreciseConstantVelocityMovement_getSpeedBasicDecimal BasicConstantVelocityMovement_getSpeedBasicDecimal
#endif
#ifndef PreciseConstantVelocityMovement_stop
#define PreciseConstantVelocityMovement_stop Movement_stop
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PreciseConstantVelocityMovement_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PreciseConstantVelocityMovement_register(void);


#endif // ORG_ALLBINARY_PHYSICS_MOVEMENT_PRECISECONSTANTVELOCITYMOVEMENT_H
