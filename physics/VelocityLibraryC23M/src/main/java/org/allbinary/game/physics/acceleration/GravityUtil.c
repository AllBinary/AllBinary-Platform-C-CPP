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
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"

typedef struct GravityUtil GravityUtil;
struct GravityUtil {
    int32_t GAME_GRAVITY_VELOCITY;
    int32_t MAX_GAME_VELOCITY;
};

static GravityUtil* GravityUtil_instance;

GravityUtil* GravityUtil_new(void);
GravityUtil* GravityUtil_getInstance(void);
void GravityUtil_process(GravityUtil* this, BasicVelocityProperties* velocityProperties, int32_t customGravity);

// Static fields with runtime initializers: call this once at startup
void GravityUtil_staticInit(void) {
    GravityUtil_instance = GravityUtil_new();
}

static void GravityUtil_initFields(GravityUtil* this) {
    this->GAME_GRAVITY_VELOCITY = 1800;
    this->MAX_GAME_VELOCITY = 18000;
}

void GravityUtil_init(GravityUtil* this) {
    GravityUtil_initFields(this);
}

GravityUtil* GravityUtil_new(void) {
    GravityUtil* this = calloc(1, sizeof(GravityUtil));
    GravityUtil_init(this);
    return this;
}


GravityUtil* GravityUtil_getInstance(void) {
        return GravityUtil_instance;
}


void GravityUtil_process(GravityUtil* this, BasicVelocityProperties* velocityProperties, int32_t customGravity) {
        JAVA_CALL(BasicVelocityProperties_getVelocityYBasicDecimalP(velocityProperties), addint, customGravity);
}

