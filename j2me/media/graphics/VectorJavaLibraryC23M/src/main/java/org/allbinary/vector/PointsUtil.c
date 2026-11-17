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

typedef struct PointsUtil PointsUtil;
struct PointsUtil {
    char unused;
};

static PointsUtil* PointsUtil_instance;

PointsUtil* PointsUtil_new(void);
PointsUtil* PointsUtil_getInstance(void);
int32_t*** PointsUtil_adjustXY(PointsUtil* this, int32_t*** points, int32_t x, int32_t y);
int32_t** PointsUtil_adjust(PointsUtil* this, int32_t** points, int32_t both);
int32_t** PointsUtil_adjust(PointsUtil* this, int32_t** points, int32_t x, int32_t y);

// Static fields with runtime initializers: call this once at startup
void PointsUtil_staticInit(void) {
    PointsUtil_instance = PointsUtil_new();
}

void PointsUtil_init(PointsUtil* this) {
}

PointsUtil* PointsUtil_new(void) {
    PointsUtil* this = calloc(1, sizeof(PointsUtil));
    PointsUtil_init(this);
    return this;
}


PointsUtil* PointsUtil_getInstance(void) {
        return PointsUtil_instance;
}


int32_t*** PointsUtil_adjustXY(PointsUtil* this, int32_t*** points, int32_t x, int32_t y) {
        int32_t size = java_array_length(points);
        int32_t*** newPoints = ((int32_t***) java_array_new3(sizeof(int32_t), size, 0, 0));
        for (int32_t index = 0; index < size; index++) {
            int32_t size2 = java_array_length(points[index]);
            newPoints[index] = ((int32_t**) java_array_new2(sizeof(int32_t), size2, 2));
            for (int32_t index2 = 0; index2 < size2; index2++) {
                if (points[index][index2][0] != 1000) {
                    newPoints[index][index2][0] = points[index][index2][0] + x;
                    newPoints[index][index2][1] = points[index][index2][1] + y;
                } else {
                    newPoints[index][index2][0] = 1000;
                    newPoints[index][index2][1] = 1000;
                }
            }
        }
        return newPoints;
}


int32_t** PointsUtil_adjust(PointsUtil* this, int32_t** points, int32_t both) {
        return PointsUtil_adjust(this, points, both, both);
}


// Java overloaded method: C needs a different name
int32_t** PointsUtil_adjust(PointsUtil* this, int32_t** points, int32_t x, int32_t y) {
        int32_t** newPoints = ((int32_t**) java_array_new2(sizeof(int32_t), java_array_length(points), 2));
        for (int32_t index2 = 0; index2 < java_array_length(points); index2++) {
            if (points[index2][0] != 1000) {
                newPoints[index2][0] = points[index2][0] + x;
                newPoints[index2][1] = points[index2][1] + y;
            } else {
                newPoints[index2][0] = 1000;
                newPoints[index2][1] = 1000;
            }
        }
        return newPoints;
}

