#ifndef ORG_ALLBINARY_GAME_HEALTH_HEALTHVISITORINTERFACE_H
#define ORG_ALLBINARY_GAME_HEALTH_HEALTHVISITORINTERFACE_H
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
// package org.allbinary.game.health

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct HealthInterface HealthInterface;

typedef struct HealthVisitorInterface HealthVisitorInterface;
struct HealthVisitorInterface {
    void (*visit)(void* this, HealthInterface* healthInterface);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HealthVisitorInterface_staticInit(void);

static inline void HealthVisitorInterface_visit(void* this, HealthInterface* healthInterface) {
    ((__typeof__(((HealthVisitorInterface*) nullptr)->visit)) java_method_of(this, "visit"))(this, healthInterface);
}


#endif // ORG_ALLBINARY_GAME_HEALTH_HEALTHVISITORINTERFACE_H
