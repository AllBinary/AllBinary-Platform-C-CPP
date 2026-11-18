#ifndef ORG_ALLBINARY_GAME_AG_LIFE_LIFEVISITORINTERFACE_H
#define ORG_ALLBINARY_GAME_AG_LIFE_LIFEVISITORINTERFACE_H
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
// package org.allbinary.game.ag.life

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Life Life;

typedef struct LifeVisitorInterface LifeVisitorInterface;
struct LifeVisitorInterface {
    void (*visit)(void* this, Life* lifeInterface);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LifeVisitorInterface_staticInit(void);

static inline void LifeVisitorInterface_visit(void* this, Life* lifeInterface) {
    ((__typeof__(((LifeVisitorInterface*) nullptr)->visit)) java_method_of(this, "visit"))(this, lifeInterface);
}


#endif // ORG_ALLBINARY_GAME_AG_LIFE_LIFEVISITORINTERFACE_H
