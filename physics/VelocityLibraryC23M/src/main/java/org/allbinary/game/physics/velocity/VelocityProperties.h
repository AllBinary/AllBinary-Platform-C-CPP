#ifndef ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYPROPERTIES_H
#define ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYPROPERTIES_H
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
typedef struct BasicVelocityProperties BasicVelocityProperties;
typedef struct VelocityInterface VelocityInterface;
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#include "org/allbinary/game/physics/velocity/VelocityInterface.h"

typedef struct VelocityProperties VelocityProperties;
struct VelocityProperties {
    BasicVelocityProperties base;
    VelocityInterface VelocityInterface_interface;
    int32_t maxForwardVelocity;
    int32_t maxReverseVelocity;
};

extern VelocityProperties* VelocityProperties_NULL_VELOCITY_PROPERTIES;

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
#define VelocityProperties_new2 VelocityProperties_new
#define VelocityProperties_init2 VelocityProperties_init
#ifndef VelocityProperties_zero
#define VelocityProperties_zero BasicVelocityProperties_zero
#endif
#ifndef VelocityProperties_getVelocityXBasicDecimalP
#define VelocityProperties_getVelocityXBasicDecimalP BasicVelocityProperties_getVelocityXBasicDecimalP
#endif
#ifndef VelocityProperties_getVelocityYBasicDecimalP
#define VelocityProperties_getVelocityYBasicDecimalP BasicVelocityProperties_getVelocityYBasicDecimalP
#endif
#ifndef VelocityProperties_getVelocityZBasicDecimalP
#define VelocityProperties_getVelocityZBasicDecimalP BasicVelocityProperties_getVelocityZBasicDecimalP
#endif
#ifndef VelocityProperties_setVelocityWithBigDecimalAndDirection
#define VelocityProperties_setVelocityWithBigDecimalAndDirection BasicVelocityProperties_setVelocityWithBigDecimalAndDirection
#endif
#ifndef VelocityProperties_setVelocityWithDirection
#define VelocityProperties_setVelocityWithDirection BasicVelocityProperties_setVelocityWithDirection
#endif
#ifndef VelocityProperties_addVelocityWithBigDecimalAndDirection
#define VelocityProperties_addVelocityWithBigDecimalAndDirection BasicVelocityProperties_addVelocityWithBigDecimalAndDirection
#endif
#ifndef VelocityProperties_addVelocityWithDirection
#define VelocityProperties_addVelocityWithDirection BasicVelocityProperties_addVelocityWithDirection
#endif
#ifndef VelocityProperties_setVelocityWithBigDecimal
#define VelocityProperties_setVelocityWithBigDecimal BasicVelocityProperties_setVelocityWithBigDecimal
#endif
#ifndef VelocityProperties_addVelocityWithBigDecimal
#define VelocityProperties_addVelocityWithBigDecimal BasicVelocityProperties_addVelocityWithBigDecimal
#endif
#ifndef VelocityProperties_setVelocity
#define VelocityProperties_setVelocity BasicVelocityProperties_setVelocity
#endif
#ifndef VelocityProperties_addVelocity
#define VelocityProperties_addVelocity BasicVelocityProperties_addVelocity
#endif
#ifndef VelocityProperties_toString
#define VelocityProperties_toString BasicVelocityProperties_toString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void VelocityProperties_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void VelocityProperties_register(void);


#endif // ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYPROPERTIES_H
