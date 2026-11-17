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
// package org.allbinary.graphics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/GPoint.h"

typedef struct CustomGPoint CustomGPoint;
struct CustomGPoint {
    GPoint base;
    int32_t cx;
    int32_t cy;
    int32_t cz;
};

CustomGPoint* CustomGPoint_NULL_CUSTOM_POINT;

CustomGPoint* CustomGPoint_new(int32_t x, int32_t y, int32_t z);
CustomGPoint* CustomGPoint_getInstance(GPoint* point);
CustomGPoint* CustomGPoint_getInstance3(int32_t x, int32_t y);

void CustomGPoint_init(CustomGPoint* this, int32_t x, int32_t y, int32_t z);
void CustomGPoint_setX(CustomGPoint* this, int32_t x);
int32_t CustomGPoint_getX(CustomGPoint* this);
void CustomGPoint_setY(CustomGPoint* this, int32_t y);
int32_t CustomGPoint_getY(CustomGPoint* this);
void CustomGPoint_setZ(CustomGPoint* this, int32_t z);
int32_t CustomGPoint_getZ(CustomGPoint* this);

// Static fields with runtime initializers: call this once at startup
void CustomGPoint_staticInit(void) {
    CustomGPoint_NULL_CUSTOM_POINT = CustomGPoint_new(0, 0, 0);
}

static void CustomGPoint_initFields(CustomGPoint* this) {
    this->cx = 0;
    this->cy = 0;
    this->cz = 0;
}


CustomGPoint* CustomGPoint_getInstance(GPoint* point) {
        return CustomGPoint_new(GPoint_getX(point), GPoint_getY(point), GPoint_getZ(point));
}


CustomGPoint* CustomGPoint_getInstance3(int32_t x, int32_t y) {
        return CustomGPoint_new(x, y, 3);
}


void CustomGPoint_init(CustomGPoint* this, int32_t x, int32_t y, int32_t z) {
        GPoint_init(&this->base, x, y, z);
        CustomGPoint_initFields(this);
}

CustomGPoint* CustomGPoint_new(int32_t x, int32_t y, int32_t z) {
    CustomGPoint* this = calloc(1, sizeof(CustomGPoint));
    CustomGPoint_init(this, x, y, z);
    return this;
}


void CustomGPoint_setX(CustomGPoint* this, int32_t x) {
        this->cx = x;
}


int32_t CustomGPoint_getX(CustomGPoint* this) {
        return this->cx;
}


void CustomGPoint_setY(CustomGPoint* this, int32_t y) {
        this->cy = y;
}


int32_t CustomGPoint_getY(CustomGPoint* this) {
        return this->cy;
}


void CustomGPoint_setZ(CustomGPoint* this, int32_t z) {
        this->cz = z;
}


int32_t CustomGPoint_getZ(CustomGPoint* this) {
        return this->cz;
}

