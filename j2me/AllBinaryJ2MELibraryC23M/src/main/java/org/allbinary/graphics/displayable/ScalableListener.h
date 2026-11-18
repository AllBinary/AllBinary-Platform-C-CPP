#ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCALABLELISTENER_H
#define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCALABLELISTENER_H
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
// package org.allbinary.graphics.displayable

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ScalableListener ScalableListener;
struct ScalableListener {
    float (*getRatio)(void* this, float ratio);
    int32_t (*getLeft)(void* this, int32_t xOffset);
    int32_t (*getTop)(void* this, int32_t yOffset);
    void (*scale)(void* this, float ratio);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScalableListener_staticInit(void);

static inline float ScalableListener_getRatio(void* this, float ratio) {
    return ((__typeof__(((ScalableListener*) nullptr)->getRatio)) java_method_of(this, "getRatio"))(this, ratio);
}

static inline int32_t ScalableListener_getLeft(void* this, int32_t xOffset) {
    return ((__typeof__(((ScalableListener*) nullptr)->getLeft)) java_method_of(this, "getLeft"))(this, xOffset);
}

static inline int32_t ScalableListener_getTop(void* this, int32_t yOffset) {
    return ((__typeof__(((ScalableListener*) nullptr)->getTop)) java_method_of(this, "getTop"))(this, yOffset);
}

static inline void ScalableListener_scale(void* this, float ratio) {
    ((__typeof__(((ScalableListener*) nullptr)->scale)) java_method_of(this, "scale"))(this, ratio);
}


#endif // ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCALABLELISTENER_H
