#ifndef ORG_ALLBINARY_ANIMATION_ANIMATIONBEHAVIOR_H
#define ORG_ALLBINARY_ANIMATION_ANIMATIONBEHAVIOR_H
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


AnimationBehavior* AnimationBehavior_new(void);
void AnimationBehavior_init(AnimationBehavior* this);

AnimationBehavior* AnimationBehavior_getInstance(void);

void AnimationBehavior_reset(AnimationBehavior* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AnimationBehavior_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AnimationBehavior_register(void);


#endif // ORG_ALLBINARY_ANIMATION_ANIMATIONBEHAVIOR_H
