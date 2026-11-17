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

typedef struct DemoSetup DemoSetup;
struct DemoSetup {
    char unused;
};


DemoSetup* DemoSetup_new(void);
void DemoSetup_init(DemoSetup* this, GameMidlet* gameMidlet);

void DemoSetup_init(DemoSetup* this) {
}

DemoSetup* DemoSetup_new(void) {
    DemoSetup* this = calloc(1, sizeof(DemoSetup));
    DemoSetup_init(this);
    return this;
}


void DemoSetup_init(DemoSetup* this, GameMidlet* gameMidlet) {
}

