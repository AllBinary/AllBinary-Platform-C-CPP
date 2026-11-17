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
// package org.allbinary.game.physics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/physics/friction/FrictionData.h"
#include "org/allbinary/game/physics/velocity/DragVelocityBehavior.h"
#include "org/allbinary/game/physics/velocity/VelocityProperties.h"

typedef struct FrictionProperties FrictionProperties;
struct FrictionProperties {
    char unused;
};


FrictionProperties* FrictionProperties_new(void);

void FrictionProperties_init(FrictionProperties* this);
void FrictionProperties_friction(FrictionProperties* this, VelocityProperties* velocityProperties, int32_t nominator);


void FrictionProperties_init(FrictionProperties* this) {
}

FrictionProperties* FrictionProperties_new(void) {
    FrictionProperties* this = calloc(1, sizeof(FrictionProperties));
    FrictionProperties_init(this);
    return this;
}


void FrictionProperties_friction(FrictionProperties* this, VelocityProperties* velocityProperties, int32_t nominator) {
        JAVA_CALL(DragVelocityBehavior_instance, reduce, velocityProperties, nominator, FrictionData_getFrictionDenominator());
}

