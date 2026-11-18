#ifndef ORG_ALLBINARY_GAME_MULTIPLAYER_CLIENT_PINGINFOCOMPOSITEINTERFACE_H
#define ORG_ALLBINARY_GAME_MULTIPLAYER_CLIENT_PINGINFOCOMPOSITEINTERFACE_H
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
// package org.allbinary.game.multiplayer.client

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct PingInfoCompositeInterface PingInfoCompositeInterface;
struct PingInfoCompositeInterface {
    void (*setPingInfo)(void* this, bool show);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PingInfoCompositeInterface_staticInit(void);

static inline void PingInfoCompositeInterface_setPingInfo(void* this, bool show) {
    ((__typeof__(((PingInfoCompositeInterface*) nullptr)->setPingInfo)) java_method_of(this, "setPingInfo"))(this, show);
}


#endif // ORG_ALLBINARY_GAME_MULTIPLAYER_CLIENT_PINGINFOCOMPOSITEINTERFACE_H
