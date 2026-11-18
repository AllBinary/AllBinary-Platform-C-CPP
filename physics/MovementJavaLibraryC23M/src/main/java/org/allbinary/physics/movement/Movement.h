#ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_MOVEMENT_H
#define ORG_ALLBINARY_PHYSICS_MOVEMENT_MOVEMENT_H
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
typedef struct MovementInterface MovementInterface;
typedef struct AllBinaryGameLayer AllBinaryGameLayer;
typedef struct BasicDecimal BasicDecimal;
#include "org/allbinary/physics/movement/MovementInterface.h"

typedef struct Movement Movement;
struct Movement {
    MovementInterface MovementInterface_interface;
};


Movement* Movement_new(void);

void Movement_init(Movement* this);

void Movement_initMethod(Movement* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle);

void Movement_process(Movement* this, AllBinaryGameLayer* layer);

void Movement_stop(Movement* this);
#define Movement_new0 Movement_new
#define Movement_init0 Movement_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Movement_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Movement_register(void);


#endif // ORG_ALLBINARY_PHYSICS_MOVEMENT_MOVEMENT_H
