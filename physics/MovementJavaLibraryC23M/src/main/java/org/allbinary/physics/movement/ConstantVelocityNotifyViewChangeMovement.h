#ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_CONSTANTVELOCITYNOTIFYVIEWCHANGEMOVEMENT_H
#define ORG_ALLBINARY_PHYSICS_MOVEMENT_CONSTANTVELOCITYNOTIFYVIEWCHANGEMOVEMENT_H
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
typedef struct Movement Movement;
typedef struct AllBinaryGameLayer AllBinaryGameLayer;
typedef struct BasicVelocityProperties BasicVelocityProperties;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct BasicDecimal BasicDecimal;
typedef struct AxisMathVectorUtil AxisMathVectorUtil;
typedef struct AngleFactory AngleFactory;
#if __has_include("org/allbinary/game/physics/velocity/BasicVelocityProperties.h")
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#endif
#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/logic/math/vector/AxisMathVectorUtil.h")
#include "org/allbinary/logic/math/vector/AxisMathVectorUtil.h"
#endif
#include "org/allbinary/physics/movement/Movement.h"

typedef struct ConstantVelocityNotifyViewChangeMovement ConstantVelocityNotifyViewChangeMovement;
struct ConstantVelocityNotifyViewChangeMovement {
    Movement base;
    BasicVelocityProperties* basicVelocityProperties;
    BasicDecimal* speedBasicDecimal;
    AxisMathVectorUtil* axisMathVectorUtil;
};


ConstantVelocityNotifyViewChangeMovement* ConstantVelocityNotifyViewChangeMovement_new(void);

void ConstantVelocityNotifyViewChangeMovement_init(ConstantVelocityNotifyViewChangeMovement* this);

void ConstantVelocityNotifyViewChangeMovement_initMethod(ConstantVelocityNotifyViewChangeMovement* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle);

void ConstantVelocityNotifyViewChangeMovement_moveOutsideRadius(ConstantVelocityNotifyViewChangeMovement* this, AllBinaryLayer* layer, int64_t radius, int32_t angle, int32_t otherAngle);

void ConstantVelocityNotifyViewChangeMovement_process(ConstantVelocityNotifyViewChangeMovement* this, AllBinaryGameLayer* layer);

void ConstantVelocityNotifyViewChangeMovement_stop(ConstantVelocityNotifyViewChangeMovement* this);
#define ConstantVelocityNotifyViewChangeMovement_new0 ConstantVelocityNotifyViewChangeMovement_new
#define ConstantVelocityNotifyViewChangeMovement_init0 ConstantVelocityNotifyViewChangeMovement_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ConstantVelocityNotifyViewChangeMovement_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ConstantVelocityNotifyViewChangeMovement_register(void);


#endif // ORG_ALLBINARY_PHYSICS_MOVEMENT_CONSTANTVELOCITYNOTIFYVIEWCHANGEMOVEMENT_H
