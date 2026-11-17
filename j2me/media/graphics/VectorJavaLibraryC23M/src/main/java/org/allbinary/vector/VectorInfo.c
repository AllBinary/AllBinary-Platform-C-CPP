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
static void VectorInfo_setWidth(VectorInfo* this, int32_t width);
int32_t VectorInfo_getHeight(VectorInfo* this);
static void VectorInfo_setHeight(VectorInfo* this, int32_t height);
int32_t** VectorInfo_getPoints(VectorInfo* this);
static void VectorInfo_setPoints(VectorInfo* this, int32_t** points);
int32_t VectorInfo_getTotalFrames(VectorInfo* this);
static void VectorInfo_setTotalFrames(VectorInfo* this, int32_t totalFrames);

static void VectorInfo_initFields(VectorInfo* this) {
    
    
    
    
}


void VectorInfo_init(VectorInfo* this, int32_t width, int32_t height, int32_t** points, int32_t totalFrames) {
    VectorInfo_initFields(this);
        this->width = width;
        this->height = height;
        this->points = points;
        this->totalFrames = totalFrames;
}

VectorInfo* VectorInfo_new(int32_t width, int32_t height, int32_t** points, int32_t totalFrames) {
    VectorInfo* this = calloc(1, sizeof(VectorInfo));
    VectorInfo_init(this, width, height, points, totalFrames);
    return this;
}


int32_t VectorInfo_getWidth(VectorInfo* this) {
        return this->width;
}


static void VectorInfo_setWidth(VectorInfo* this, int32_t width) {
        this->width = width;
}


int32_t VectorInfo_getHeight(VectorInfo* this) {
        return this->height;
}


static void VectorInfo_setHeight(VectorInfo* this, int32_t height) {
        this->height = height;
}


int32_t** VectorInfo_getPoints(VectorInfo* this) {
        return this->points;
}


static void VectorInfo_setPoints(VectorInfo* this, int32_t** points) {
        this->points = points;
}


int32_t VectorInfo_getTotalFrames(VectorInfo* this) {
        return this->totalFrames;
}


static void VectorInfo_setTotalFrames(VectorInfo* this, int32_t totalFrames) {
        this->totalFrames = totalFrames;
}

