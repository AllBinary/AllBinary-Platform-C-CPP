/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
#include "org/allbinary/game/health/HealthListenerInterface.h"

typedef struct NullHealthListener NullHealthListener;
struct NullHealthListener {
    HealthListenerInterface HealthListenerInterface_interface;
};

NullHealthListener* NullHealthListener_NULL_HEALTH_LISTENER;

NullHealthListener* NullHealthListener_new(void);
void NullHealthListener_onHealthChange(NullHealthListener* this);

// Static fields with runtime initializers: call this once at startup
void NullHealthListener_staticInit(void) {
    NullHealthListener_NULL_HEALTH_LISTENER = NullHealthListener_new();
}

void NullHealthListener_init(NullHealthListener* this) {
}

NullHealthListener* NullHealthListener_new(void) {
    NullHealthListener* this = calloc(1, sizeof(NullHealthListener));
    NullHealthListener_init(this);
    return this;
}


void NullHealthListener_onHealthChange(NullHealthListener* this) {
}

