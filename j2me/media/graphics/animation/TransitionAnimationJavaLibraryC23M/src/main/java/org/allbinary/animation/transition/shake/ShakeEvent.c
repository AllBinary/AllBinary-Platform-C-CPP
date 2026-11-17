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
// package org.allbinary.animation.transition.shake

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ShakeEvent ShakeEvent;
struct ShakeEvent {
    char unused;
};


ShakeEvent* ShakeEvent_new(void);

void ShakeEvent_init(ShakeEvent* this);


void ShakeEvent_init(ShakeEvent* this) {
}

ShakeEvent* ShakeEvent_new(void) {
    ShakeEvent* this = calloc(1, sizeof(ShakeEvent));
    ShakeEvent_init(this);
    return this;
}

