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
// package org.allbinary.game.physics.velocity

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#include "org/allbinary/game/physics/velocity/VelocityInterface.h"

typedef struct VelocityProperties VelocityProperties;
struct VelocityProperties {
    BasicVelocityProperties base;
    VelocityInterface VelocityInterface_interface;
    int32_t maxForwardVelocity;
    int32_t maxReverseVelocity;
};

VelocityProperties* VelocityProperties_NULL_VELOCITY_PROPERTIES;

VelocityProperties* VelocityProperties_new(int32_t maxForwardVelocity, int32_t maxReverseVelocity);

void VelocityProperties_init(VelocityProperties* this, int32_t maxForwardVelocity, int32_t maxReverseVelocity);
int32_t VelocityProperties_getMaxForwardVelocity(VelocityProperties* this);
void VelocityProperties_setMaxForwardVelocity(VelocityProperties* this, int32_t maxForwardVelocity);
int32_t VelocityProperties_getMaxReverseVelocity(VelocityProperties* this);
void VelocityProperties_setMaxReverseVelocity(VelocityProperties* this, int32_t maxReverseVelocity);
void VelocityProperties_limitMaxXYForwardVelocity(VelocityProperties* this);
void VelocityProperties_limitMaxXYReverseVelocity(VelocityProperties* this);
void VelocityProperties_limitMaxYForwardVelocity(VelocityProperties* this);
void VelocityProperties_limitMaxYReverseVelocity(VelocityProperties* this);
void VelocityProperties_limitMaxXForwardVelocity(VelocityProperties* this);
void VelocityProperties_limitMaxXReverseVelocity(VelocityProperties* this);
bool VelocityProperties_isOverXYMaxForwardVelocity(VelocityProperties* this);
bool VelocityProperties_isOverXYMaxReverseVelocity(VelocityProperties* this);
void VelocityProperties_limitXYToForwardAndReverseMaxVelocity(VelocityProperties* this);
void VelocityProperties_limitMaxXYVelocity(VelocityProperties* this, int32_t maxVelocity);
void VelocityProperties_limitMaxPositiveYVelocity(VelocityProperties* this, int32_t maxVelocity);
void VelocityProperties_limitMaxNegativeYVelocity(VelocityProperties* this, int32_t maxVelocity);
void VelocityProperties_limitMaxYVelocity(VelocityProperties* this, int32_t maxVelocity);
void VelocityProperties_limitMaxXVelocity(VelocityProperties* this, int32_t maxVelocity);
bool VelocityProperties_isOverXYMaxVelocity(VelocityProperties* this, int32_t maxVelocity);
void VelocityProperties_setVelocityi(VelocityProperties* this, int64_t magnitude, int32_t angle, int32_t otherAngle);
void VelocityProperties_addVelocityi(VelocityProperties* this, int64_t magnitude, int32_t angle, int32_t otherAngle);

// Static fields with runtime initializers: call this once at startup
void VelocityProperties_staticInit(void) {
    VelocityProperties_NULL_VELOCITY_PROPERTIES = VelocityProperties_new(0, 0);
}

static void VelocityProperties_initFields(VelocityProperties* this) {
    this->maxForwardVelocity = 0;
    this->maxReverseVelocity = 0;
}


void VelocityProperties_init(VelocityProperties* this, int32_t maxForwardVelocity, int32_t maxReverseVelocity) {
    BasicVelocityProperties_init(&this->base);
    VelocityProperties_initFields(this);
        VelocityProperties_setMaxForwardVelocity(this, maxForwardVelocity);
        VelocityProperties_setMaxReverseVelocity(this, maxReverseVelocity);
}

VelocityProperties* VelocityProperties_new(int32_t maxForwardVelocity, int32_t maxReverseVelocity) {
    VelocityProperties* this = calloc(1, sizeof(VelocityProperties));
    VelocityProperties_init(this, maxForwardVelocity, maxReverseVelocity);
    return this;
}


int32_t VelocityProperties_getMaxForwardVelocity(VelocityProperties* this) {
        return this->maxForwardVelocity;
}


void VelocityProperties_setMaxForwardVelocity(VelocityProperties* this, int32_t maxForwardVelocity) {
        this->maxForwardVelocity = maxForwardVelocity;
}


int32_t VelocityProperties_getMaxReverseVelocity(VelocityProperties* this) {
        return this->maxReverseVelocity;
}


void VelocityProperties_setMaxReverseVelocity(VelocityProperties* this, int32_t maxReverseVelocity) {
        this->maxReverseVelocity = maxReverseVelocity;
}


void VelocityProperties_limitMaxXYForwardVelocity(VelocityProperties* this) {
        VelocityProperties_limitMaxXYVelocity(this, VelocityProperties_getMaxForwardVelocity(this));
}


void VelocityProperties_limitMaxXYReverseVelocity(VelocityProperties* this) {
        VelocityProperties_limitMaxXYVelocity(this, VelocityProperties_getMaxReverseVelocity(this));
}


void VelocityProperties_limitMaxYForwardVelocity(VelocityProperties* this) {
        VelocityProperties_limitMaxYVelocity(this, VelocityProperties_getMaxForwardVelocity(this));
}


void VelocityProperties_limitMaxYReverseVelocity(VelocityProperties* this) {
        VelocityProperties_limitMaxYVelocity(this, VelocityProperties_getMaxReverseVelocity(this));
}


void VelocityProperties_limitMaxXForwardVelocity(VelocityProperties* this) {
        VelocityProperties_limitMaxXVelocity(this, VelocityProperties_getMaxForwardVelocity(this));
}


void VelocityProperties_limitMaxXReverseVelocity(VelocityProperties* this) {
        VelocityProperties_limitMaxXVelocity(this, VelocityProperties_getMaxReverseVelocity(this));
}


bool VelocityProperties_isOverXYMaxForwardVelocity(VelocityProperties* this) {
        return VelocityProperties_isOverXYMaxVelocity(this, VelocityProperties_getMaxForwardVelocity(this));
}


bool VelocityProperties_isOverXYMaxReverseVelocity(VelocityProperties* this) {
        return VelocityProperties_isOverXYMaxVelocity(this, VelocityProperties_getMaxReverseVelocity(this));
}


void VelocityProperties_limitXYToForwardAndReverseMaxVelocity(VelocityProperties* this) {
        VelocityProperties_limitMaxXYForwardVelocity(this);
        VelocityProperties_limitMaxXYReverseVelocity(this);
}


void VelocityProperties_limitMaxXYVelocity(VelocityProperties* this, int32_t maxVelocity) {
        VelocityProperties_limitMaxXVelocity(this, maxVelocity);
        VelocityProperties_limitMaxYVelocity(this, maxVelocity);
}


void VelocityProperties_limitMaxPositiveYVelocity(VelocityProperties* this, int32_t maxVelocity) {
        if (JAVA_CALL(this->velocityYBasicDecimal, getUnscaled) > maxVelocity) {
            JAVA_CALL(this->velocityYBasicDecimal, setint, maxVelocity);
        }
}


void VelocityProperties_limitMaxNegativeYVelocity(VelocityProperties* this, int32_t maxVelocity) {
        if (JAVA_CALL(this->velocityYBasicDecimal, getUnscaled) < -maxVelocity) {
            JAVA_CALL(this->velocityYBasicDecimal, setint, -maxVelocity);
        }
}


void VelocityProperties_limitMaxYVelocity(VelocityProperties* this, int32_t maxVelocity) {
        VelocityProperties_limitMaxPositiveYVelocity(this, maxVelocity);
        VelocityProperties_limitMaxNegativeYVelocity(this, maxVelocity);
}


void VelocityProperties_limitMaxXVelocity(VelocityProperties* this, int32_t maxVelocity) {
        if (JAVA_CALL(this->velocityXBasicDecimal, getUnscaled) > maxVelocity) {
            JAVA_CALL(this->velocityXBasicDecimal, setint, maxVelocity);
        }
        if (JAVA_CALL(this->velocityXBasicDecimal, getUnscaled) < -maxVelocity) {
            JAVA_CALL(this->velocityXBasicDecimal, setint, -maxVelocity);
        }
}


bool VelocityProperties_isOverXYMaxVelocity(VelocityProperties* this, int32_t maxVelocity) {
        if (JAVA_CALL(this->velocityXBasicDecimal, getUnscaled) > maxVelocity) {
            return true;
        }
        if (JAVA_CALL(this->velocityXBasicDecimal, getUnscaled) < -maxVelocity) {
            return true;
        }
        if (JAVA_CALL(this->velocityYBasicDecimal, getUnscaled) > maxVelocity) {
            return true;
        }
        if (JAVA_CALL(this->velocityYBasicDecimal, getUnscaled) < -maxVelocity) {
            return true;
        }
        return false;
}


void VelocityProperties_setVelocityi(VelocityProperties* this, int64_t magnitude, int32_t angle, int32_t otherAngle) {
        BasicVelocityProperties_setVelocityi((&this->base), magnitude, angle, otherAngle);
        VelocityProperties_limitXYToForwardAndReverseMaxVelocity(this);
}


void VelocityProperties_addVelocityi(VelocityProperties* this, int64_t magnitude, int32_t angle, int32_t otherAngle) {
        BasicVelocityProperties_addVelocityi((&this->base), magnitude, angle, otherAngle);
        VelocityProperties_limitXYToForwardAndReverseMaxVelocity(this);
}

