#ifndef ORG_ALLBINARY_GAME_PHYSICS_ACCELERATION_ACCELERATEABLEINTERFACE_H
#define ORG_ALLBINARY_GAME_PHYSICS_ACCELERATION_ACCELERATEABLEINTERFACE_H
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
typedef struct BasicDecimal BasicDecimal;

typedef struct AccelerateableInterface AccelerateableInterface;
struct AccelerateableInterface {
    void (*accelerate)(void* this, BasicDecimal* accelerate);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AccelerateableInterface_staticInit(void);

static inline void AccelerateableInterface_accelerate(void* this, BasicDecimal* accelerate) {
    ((__typeof__(((AccelerateableInterface*) nullptr)->accelerate)) java_method_of(this, "accelerate"))(this, accelerate);
}


#endif // ORG_ALLBINARY_GAME_PHYSICS_ACCELERATION_ACCELERATEABLEINTERFACE_H
