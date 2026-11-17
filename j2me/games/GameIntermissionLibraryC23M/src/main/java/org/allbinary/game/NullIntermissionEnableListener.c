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
// package org.allbinary.game

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/IntermissionEnableListenerInterface.h"

typedef struct NullIntermissionEnableListener NullIntermissionEnableListener;
struct NullIntermissionEnableListener {
    IntermissionEnableListenerInterface IntermissionEnableListenerInterface_interface;
};

static IntermissionEnableListenerInterface* NullIntermissionEnableListener_SINGLETON;

NullIntermissionEnableListener* NullIntermissionEnableListener_new(void);
IntermissionEnableListenerInterface* NullIntermissionEnableListener_getInstance(void);

void NullIntermissionEnableListener_init(NullIntermissionEnableListener* this);
void NullIntermissionEnableListener_notifyIntermission(NullIntermissionEnableListener* this, bool enable);

// Static fields with runtime initializers: call this once at startup
void NullIntermissionEnableListener_staticInit(void) {
    NullIntermissionEnableListener_SINGLETON = NullIntermissionEnableListener_new();
}


IntermissionEnableListenerInterface* NullIntermissionEnableListener_getInstance(void) {
        return NullIntermissionEnableListener_SINGLETON;
}


void NullIntermissionEnableListener_init(NullIntermissionEnableListener* this) {
}

NullIntermissionEnableListener* NullIntermissionEnableListener_new(void) {
    NullIntermissionEnableListener* this = calloc(1, sizeof(NullIntermissionEnableListener));
    NullIntermissionEnableListener_init(this);
    return this;
}


void NullIntermissionEnableListener_notifyIntermission(NullIntermissionEnableListener* this, bool enable) {
}

