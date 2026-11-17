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

typedef struct AnimationBehavior AnimationBehavior;
struct AnimationBehavior {
    char unused;
};

static AnimationBehavior* AnimationBehavior_instance;

AnimationBehavior* AnimationBehavior_new(void);
AnimationBehavior* AnimationBehavior_getInstance(void);
void AnimationBehavior_reset(AnimationBehavior* this);

// Static fields with runtime initializers: call this once at startup
void AnimationBehavior_staticInit(void) {
    AnimationBehavior_instance = AnimationBehavior_new();
}

void AnimationBehavior_init(AnimationBehavior* this) {
}

AnimationBehavior* AnimationBehavior_new(void) {
    AnimationBehavior* this = calloc(1, sizeof(AnimationBehavior));
    AnimationBehavior_init(this);
    return this;
}


AnimationBehavior* AnimationBehavior_getInstance(void) {
        return AnimationBehavior_instance;
}


void AnimationBehavior_reset(AnimationBehavior* this) {
}

