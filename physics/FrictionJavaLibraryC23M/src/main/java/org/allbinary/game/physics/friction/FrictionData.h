#ifndef ORG_ALLBINARY_GAME_PHYSICS_FRICTION_FRICTIONDATA_H
#define ORG_ALLBINARY_GAME_PHYSICS_FRICTION_FRICTIONDATA_H
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
// package org.allbinary.game.physics.friction

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct FrictionData FrictionData;
struct FrictionData {
    char unused;
};


FrictionData* FrictionData_new(void);

void FrictionData_init(FrictionData* this);

int32_t FrictionData_getFrictionDenominator(void);
#define FrictionData_new0 FrictionData_new
#define FrictionData_init0 FrictionData_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FrictionData_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void FrictionData_register(void);


#endif // ORG_ALLBINARY_GAME_PHYSICS_FRICTION_FRICTIONDATA_H
