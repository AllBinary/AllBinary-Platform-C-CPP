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
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct DemoGameMidletEvent DemoGameMidletEvent;
struct DemoGameMidletEvent {
    AllBinaryEventObject base;
    DemoGameMidletState* demoGameMidletState;
};


DemoGameMidletEvent* DemoGameMidletEvent_new(Any* anyType, DemoGameMidletState* demoGameMidletState);

void DemoGameMidletEvent_init(DemoGameMidletEvent* this, Any* anyType, DemoGameMidletState* demoGameMidletState);
void DemoGameMidletEvent_init(DemoGameMidletEvent* this, Any* anyType);
void DemoGameMidletEvent_setDemoGameMidletState(DemoGameMidletEvent* this, DemoGameMidletState* demoGameMidletState);
DemoGameMidletState* DemoGameMidletEvent_getDemoGameMidletState(DemoGameMidletEvent* this);

static void DemoGameMidletEvent_initFields(DemoGameMidletEvent* this) {
    
}


void DemoGameMidletEvent_init(DemoGameMidletEvent* this, Any* anyType, DemoGameMidletState* demoGameMidletState) {
        AllBinaryEventObject_init(&this->base, anyType);
        DemoGameMidletEvent_initFields(this);
        this->demoGameMidletState = demoGameMidletState;
}

DemoGameMidletEvent* DemoGameMidletEvent_new(Any* anyType, DemoGameMidletState* demoGameMidletState) {
    DemoGameMidletEvent* this = calloc(1, sizeof(DemoGameMidletEvent));
    DemoGameMidletEvent_init(this, anyType, demoGameMidletState);
    return this;
}


void DemoGameMidletEvent_init(DemoGameMidletEvent* this, Any* anyType) {
        DemoGameMidletEvent_setSource(this, anyType);
}


void DemoGameMidletEvent_setDemoGameMidletState(DemoGameMidletEvent* this, DemoGameMidletState* demoGameMidletState) {
        this->demoGameMidletState = demoGameMidletState;
}


DemoGameMidletState* DemoGameMidletEvent_getDemoGameMidletState(DemoGameMidletEvent* this) {
        return this->demoGameMidletState;
}

