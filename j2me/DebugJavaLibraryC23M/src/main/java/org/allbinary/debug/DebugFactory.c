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
// package org.allbinary.debug

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct DebugFactory DebugFactory;
struct DebugFactory {
    char unused;
};


DebugFactory* DebugFactory_new(void);
DebugInterface* DebugFactory_getInstance(void);

void DebugFactory_init(DebugFactory* this) {
}

DebugFactory* DebugFactory_new(void) {
    DebugFactory* this = calloc(1, sizeof(DebugFactory));
    DebugFactory_init(this);
    return this;
}


DebugInterface* DebugFactory_getInstance(void) {
        return NoDebug_getInstance();
}

