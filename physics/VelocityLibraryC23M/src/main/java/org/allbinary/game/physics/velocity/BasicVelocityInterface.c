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
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/math/Angle.h"

typedef struct BasicVelocityInterface BasicVelocityInterface;
struct BasicVelocityInterface {
    BasicDecimal* (*getVelocityXBasicDecimalP)(void* this);
    BasicDecimal* (*getVelocityYBasicDecimalP)(void* this);
    void (*zero)(void* this);
    void (*setVelocityWithBigDecimalAndDirection)(void* this, BasicDecimal* magnitudeBasicDecimal, Direction* direction, Direction* otherDirection);
    void (*addVelocityWithBigDecimalAndDirection)(void* this, BasicDecimal* magnitudeBasicDecimal, Direction* direction, Direction* otherDirection);
    void (*setVelocityWithDirection)(void* this, int64_t magnitude, Direction* direction, Direction* otherDirection);
    void (*addVelocityWithDirection)(void* this, int64_t magnitude, Direction* direction, Direction* otherDirection);
    void (*setVelocityWithBigDecimal)(void* this, BasicDecimal* magnitudeBasicDecimal, Angle* angle, Angle* otherAngle);
    void (*addVelocityWithBigDecimal)(void* this, BasicDecimal* magnitudeBasicDecimal, Angle* angle, Angle* otherAngle);
    void (*setVelocity)(void* this, int64_t magnitude, Angle* angle, Angle* otherAngle);
    void (*addVelocity)(void* this, int64_t magnitude, Angle* angle, Angle* otherAngle);
    void (*addVelocityi)(void* this, int64_t magnitude, int32_t angle, int32_t otherAngle);
};


