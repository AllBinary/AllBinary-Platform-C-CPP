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
// package org.allbinary.input.motion.button

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct NoButtonsTouchInputFactory NoButtonsTouchInputFactory;
struct NoButtonsTouchInputFactory {
    char unused;
};

static BaseTouchInput* NoButtonsTouchInputFactory_instance;

NoButtonsTouchInputFactory* NoButtonsTouchInputFactory_new(void);
BaseTouchInput* NoButtonsTouchInputFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void NoButtonsTouchInputFactory_staticInit(void) {
    NoButtonsTouchInputFactory_instance = BaseTouchInput_new();
}

void NoButtonsTouchInputFactory_init(NoButtonsTouchInputFactory* this) {
}

NoButtonsTouchInputFactory* NoButtonsTouchInputFactory_new(void) {
    NoButtonsTouchInputFactory* this = calloc(1, sizeof(NoButtonsTouchInputFactory));
    NoButtonsTouchInputFactory_init(this);
    return this;
}


BaseTouchInput* NoButtonsTouchInputFactory_getInstance(void) {
        return NoButtonsTouchInputFactory_instance;
}

