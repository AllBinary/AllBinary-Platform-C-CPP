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
// package org.allbinary.game.midlet

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct DemoGameMidletState DemoGameMidletState;
struct DemoGameMidletState {
    char unused;
};


DemoGameMidletState* DemoGameMidletState_new(void);

void DemoGameMidletState_init(DemoGameMidletState* this);


void DemoGameMidletState_init(DemoGameMidletState* this) {
}

DemoGameMidletState* DemoGameMidletState_new(void) {
    DemoGameMidletState* this = calloc(1, sizeof(DemoGameMidletState));
    DemoGameMidletState_init(this);
    return this;
}

