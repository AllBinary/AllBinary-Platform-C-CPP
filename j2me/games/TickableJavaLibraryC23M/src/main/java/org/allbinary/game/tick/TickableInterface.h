#ifndef ORG_ALLBINARY_GAME_TICK_TICKABLEINTERFACE_H
#define ORG_ALLBINARY_GAME_TICK_TICKABLEINTERFACE_H
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
// package org.allbinary.game.tick

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct NamedInterface NamedInterface;
#include "org/allbinary/layer/NamedInterface.h"

typedef struct TickableInterface TickableInterface;
struct TickableInterface {
    void (*processTick)(void* this, AllBinaryLayerManager* allBinaryLayerManager);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TickableInterface_staticInit(void);

static inline void TickableInterface_processTick(void* this, AllBinaryLayerManager* allBinaryLayerManager) {
    ((__typeof__(((TickableInterface*) nullptr)->processTick)) java_method_of(this, "processTick"))(this, allBinaryLayerManager);
}
#define TickableInterface_getName NamedInterface_getName


#endif // ORG_ALLBINARY_GAME_TICK_TICKABLEINTERFACE_H
