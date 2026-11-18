#ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_NOMOVEMENTFACTORY_H
#define ORG_ALLBINARY_PHYSICS_MOVEMENT_NOMOVEMENTFACTORY_H
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
// package org.allbinary.physics.movement

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Movement Movement;
#if __has_include("org/allbinary/physics/movement/Movement.h")
#include "org/allbinary/physics/movement/Movement.h"
#endif

typedef struct NoMovementFactory NoMovementFactory;
struct NoMovementFactory {
    Movement* movement;
};


NoMovementFactory* NoMovementFactory_new(void);
void NoMovementFactory_init(NoMovementFactory* this);

NoMovementFactory* NoMovementFactory_getInstance(void);

Movement* NoMovementFactory_getMovmentInstance(NoMovementFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoMovementFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoMovementFactory_register(void);


#endif // ORG_ALLBINARY_PHYSICS_MOVEMENT_NOMOVEMENTFACTORY_H
