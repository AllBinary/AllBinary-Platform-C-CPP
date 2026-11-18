#ifndef ORG_ALLBINARY_GAME_PHYSICS_ACCELERATION_BASICACCELERATIONPROPERTIES_H
#define ORG_ALLBINARY_GAME_PHYSICS_ACCELERATION_BASICACCELERATIONPROPERTIES_H
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
// package org.allbinary.game.physics.acceleration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct BasicAccelerationProperties BasicAccelerationProperties;
struct BasicAccelerationProperties {
    int32_t forward;
    int32_t reverse;
};


BasicAccelerationProperties* BasicAccelerationProperties_new(int32_t forward, int32_t reverse);

void BasicAccelerationProperties_init(BasicAccelerationProperties* this, int32_t forward, int32_t reverse);

void BasicAccelerationProperties_setReverse(BasicAccelerationProperties* this, int32_t reverse);

int32_t BasicAccelerationProperties_getReverse(BasicAccelerationProperties* this);

void BasicAccelerationProperties_setForward(BasicAccelerationProperties* this, int32_t forward);

int32_t BasicAccelerationProperties_getForward(BasicAccelerationProperties* this);
#define BasicAccelerationProperties_new2 BasicAccelerationProperties_new
#define BasicAccelerationProperties_init2 BasicAccelerationProperties_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicAccelerationProperties_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicAccelerationProperties_register(void);


#endif // ORG_ALLBINARY_GAME_PHYSICS_ACCELERATION_BASICACCELERATIONPROPERTIES_H
