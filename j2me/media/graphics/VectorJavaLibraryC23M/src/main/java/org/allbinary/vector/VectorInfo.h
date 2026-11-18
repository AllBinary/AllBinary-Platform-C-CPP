#ifndef ORG_ALLBINARY_VECTOR_VECTORINFO_H
#define ORG_ALLBINARY_VECTOR_VECTORINFO_H
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
// package org.allbinary.vector

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct VectorInfo VectorInfo;
struct VectorInfo {
    int32_t width;
    int32_t height;
    int32_t** points;
    int32_t totalFrames;
};


VectorInfo* VectorInfo_new(int32_t width, int32_t height, int32_t** points, int32_t totalFrames);

void VectorInfo_init(VectorInfo* this, int32_t width, int32_t height, int32_t** points, int32_t totalFrames);

int32_t VectorInfo_getWidth(VectorInfo* this);


int32_t VectorInfo_getHeight(VectorInfo* this);


int32_t** VectorInfo_getPoints(VectorInfo* this);


int32_t VectorInfo_getTotalFrames(VectorInfo* this);

#define VectorInfo_new4 VectorInfo_new
#define VectorInfo_init4 VectorInfo_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void VectorInfo_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void VectorInfo_register(void);


#endif // ORG_ALLBINARY_VECTOR_VECTORINFO_H
