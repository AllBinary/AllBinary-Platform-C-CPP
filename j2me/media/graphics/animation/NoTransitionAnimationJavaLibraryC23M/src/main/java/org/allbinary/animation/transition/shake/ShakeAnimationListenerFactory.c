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

typedef struct ShakeAnimationListenerFactory ShakeAnimationListenerFactory;
struct ShakeAnimationListenerFactory {
    char unused;
};


ShakeAnimationListenerFactory* ShakeAnimationListenerFactory_new(void);
ShakeAnimationListener* ShakeAnimationListenerFactory_getInstance(void);

void ShakeAnimationListenerFactory_init(ShakeAnimationListenerFactory* this) {
}

ShakeAnimationListenerFactory* ShakeAnimationListenerFactory_new(void) {
    ShakeAnimationListenerFactory* this = calloc(1, sizeof(ShakeAnimationListenerFactory));
    ShakeAnimationListenerFactory_init(this);
    return this;
}


ShakeAnimationListener* ShakeAnimationListenerFactory_getInstance(void) {
        return NoShakeAnimationListener_new();
}

