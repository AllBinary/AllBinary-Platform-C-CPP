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
// package org.allbinary.input.automation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct PointFactory PointFactory;
struct PointFactory {
    char unused;
};

static Point*** PointFactory_pointArray;

PointFactory* PointFactory_new(void);

void PointFactory_init(PointFactory* this);
Point* PointFactory_getInstance(int32_t x, int32_t y);

// Static fields with runtime initializers: call this once at startup
void PointFactory_staticInit(void) {
    PointFactory_pointArray = ((Point***) java_array_new2(sizeof(Point*), 3000, 3000));
}


void PointFactory_init(PointFactory* this) {
}

PointFactory* PointFactory_new(void) {
    PointFactory* this = calloc(1, sizeof(PointFactory));
    PointFactory_init(this);
    return this;
}


Point* PointFactory_getInstance(int32_t x, int32_t y) {
        Point* point = PointFactory_pointArray[x][y];
        if (point == nullptr) {
            PointFactory_pointArray[x][y] = Point_new(x, y);
            point = PointFactory_pointArray[x][y];
        }
        return point;
}

