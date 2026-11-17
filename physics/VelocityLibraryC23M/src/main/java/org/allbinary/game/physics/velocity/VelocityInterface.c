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
#include "org/allbinary/game/physics/velocity/BasicVelocityInterface.h"

typedef struct VelocityInterface VelocityInterface;
struct VelocityInterface {
    int32_t (*getMaxForwardVelocity)(void* this);
    int32_t (*getMaxReverseVelocity)(void* this);
    void (*limitMaxXYForwardVelocity)(void* this);
    void (*limitMaxXYReverseVelocity)(void* this);
    void (*limitXYToForwardAndReverseMaxVelocity)(void* this);
    void (*limitMaxXYVelocity)(void* this, int32_t maxVelocity);
    void (*setMaxForwardVelocity)(void* this, int32_t maxForwardVelocity);
    void (*setMaxReverseVelocity)(void* this, int32_t maxReverseVelocity);
};


