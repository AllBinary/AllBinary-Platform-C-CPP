#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ANIMATIONFACTORYINITIALIZATIONVISITOR_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_ANIMATIONFACTORYINITIALIZATIONVISITOR_H
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
// package org.allbinary.animation.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct StringMaker StringMaker;
typedef struct PositionStrings PositionStrings;
typedef struct CommonLabels CommonLabels;
typedef struct CommonSeps CommonSeps;

typedef struct AnimationFactoryInitializationVisitor AnimationFactoryInitializationVisitor;
struct AnimationFactoryInitializationVisitor {
    int32_t width;
    int32_t height;
    int32_t dx;
    int32_t dy;
    int32_t originalDx;
    int32_t originalDy;
};


AnimationFactoryInitializationVisitor* AnimationFactoryInitializationVisitor_new(void);
void AnimationFactoryInitializationVisitor_init(AnimationFactoryInitializationVisitor* this);

void AnimationFactoryInitializationVisitor_visit(AnimationFactoryInitializationVisitor* this);

const char* AnimationFactoryInitializationVisitor_toString(AnimationFactoryInitializationVisitor* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AnimationFactoryInitializationVisitor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AnimationFactoryInitializationVisitor_register(void);


#endif // ORG_ALLBINARY_ANIMATION_IMAGE_ANIMATIONFACTORYINITIALIZATIONVISITOR_H
