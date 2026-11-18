#ifndef ORG_ALLBINARY_GAME_PHYSICS_ACCELERATION_GRAVITYUTIL_H
#define ORG_ALLBINARY_GAME_PHYSICS_ACCELERATION_GRAVITYUTIL_H
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
typedef struct BasicVelocityProperties BasicVelocityProperties;

typedef struct GravityUtil GravityUtil;
struct GravityUtil {
    int32_t GAME_GRAVITY_VELOCITY;
    int32_t MAX_GAME_VELOCITY;
};


GravityUtil* GravityUtil_new(void);
void GravityUtil_init(GravityUtil* this);

GravityUtil* GravityUtil_getInstance(void);

void GravityUtil_process(GravityUtil* this, BasicVelocityProperties* velocityProperties, int32_t customGravity);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GravityUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GravityUtil_register(void);


#endif // ORG_ALLBINARY_GAME_PHYSICS_ACCELERATION_GRAVITYUTIL_H
