/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.animation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
struct AnimationBehaviorFactory {
    char unused;
};

static AnimationBehaviorFactory* AnimationBehaviorFactory_instance;

AnimationBehaviorFactory* AnimationBehaviorFactory_new(void);
AnimationBehaviorFactory* AnimationBehaviorFactory_getInstance(void);
AnimationBehavior* AnimationBehaviorFactory_getOrCreateInstance(AnimationBehaviorFactory* this);

// Static fields with runtime initializers: call this once at startup
void AnimationBehaviorFactory_staticInit(void) {
    AnimationBehaviorFactory_instance = AnimationBehaviorFactory_new();
}

void AnimationBehaviorFactory_init(AnimationBehaviorFactory* this) {
}

AnimationBehaviorFactory* AnimationBehaviorFactory_new(void) {
    AnimationBehaviorFactory* this = calloc(1, sizeof(AnimationBehaviorFactory));
    AnimationBehaviorFactory_init(this);
    return this;
}


AnimationBehaviorFactory* AnimationBehaviorFactory_getInstance(void) {
        return AnimationBehaviorFactory_instance;
}


AnimationBehavior* AnimationBehaviorFactory_getOrCreateInstance(AnimationBehaviorFactory* this) {
        return AnimationBehavior_getInstance();
}

