/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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

typedef struct VelocityBehaviorBase VelocityBehaviorBase;
struct VelocityBehaviorBase {
    char unused;
};


VelocityBehaviorBase* VelocityBehaviorBase_new(void);
void VelocityBehaviorBase_reduce(VelocityBehaviorBase* this, BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator);
void VelocityBehaviorBase_reduceX(VelocityBehaviorBase* this, BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator);
void VelocityBehaviorBase_reduceY(VelocityBehaviorBase* this, BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator);

void VelocityBehaviorBase_init(VelocityBehaviorBase* this) {
}

VelocityBehaviorBase* VelocityBehaviorBase_new(void) {
    VelocityBehaviorBase* this = calloc(1, sizeof(VelocityBehaviorBase));
    VelocityBehaviorBase_init(this);
    return this;
}


void VelocityBehaviorBase_reduce(VelocityBehaviorBase* this, BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator) {
}


void VelocityBehaviorBase_reduceX(VelocityBehaviorBase* this, BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator) {
}


void VelocityBehaviorBase_reduceY(VelocityBehaviorBase* this, BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator) {
}

