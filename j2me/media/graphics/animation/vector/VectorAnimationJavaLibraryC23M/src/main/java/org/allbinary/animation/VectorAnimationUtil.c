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
// package org.allbinary.animation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct VectorAnimationUtil VectorAnimationUtil;
struct VectorAnimationUtil {
    char unused;
};

static VectorAnimationUtil* VectorAnimationUtil_instance;

VectorAnimationUtil* VectorAnimationUtil_new(void);
VectorAnimationUtil* VectorAnimationUtil_getInstance(void);

void VectorAnimationUtil_init(VectorAnimationUtil* this);
int32_t*** VectorAnimationUtil_toAnimationArrayFromListOfPointListWithPointsPerFrame(VectorAnimationUtil* this, BasicArrayList* vector, int32_t pointsPerFrame);
int32_t*** VectorAnimationUtil_toAnimationArrayFromListOfPointList(VectorAnimationUtil* this, BasicArrayList* vector);
int32_t** VectorAnimationUtil_toFrameArrayFromPointBasicArrayList(VectorAnimationUtil* this, BasicArrayList* list);

// Static fields with runtime initializers: call this once at startup
void VectorAnimationUtil_staticInit(void) {
    VectorAnimationUtil_instance = VectorAnimationUtil_new();
}


VectorAnimationUtil* VectorAnimationUtil_getInstance(void) {
        return VectorAnimationUtil_instance;
}


void VectorAnimationUtil_init(VectorAnimationUtil* this) {
}

VectorAnimationUtil* VectorAnimationUtil_new(void) {
    VectorAnimationUtil* this = calloc(1, sizeof(VectorAnimationUtil));
    VectorAnimationUtil_init(this);
    return this;
}


int32_t*** VectorAnimationUtil_toAnimationArrayFromListOfPointListWithPointsPerFrame(VectorAnimationUtil* this, BasicArrayList* vector, int32_t pointsPerFrame) {
        int32_t size = BasicArrayList_size(vector);
        int32_t*** points = ((int32_t***) java_array_new3(sizeof(int32_t), size, pointsPerFrame, 2));
        BasicArrayList* nextBasicArrayList = nullptr;
        int32_t** framePoints = nullptr;
        for (int32_t index = 0; index < size; index++) {
            nextBasicArrayList = ((BasicArrayList*) vector->objectArray[index]);
            framePoints = VectorAnimationUtil_toFrameArrayFromPointBasicArrayList(this, nextBasicArrayList);
            for (int32_t pointIndex = 0; pointIndex < java_array_length(framePoints); pointIndex++) {
                points[index][pointIndex][0] = framePoints[pointIndex][0];
                points[index][pointIndex][1] = framePoints[pointIndex][1];
            }
        }
        return points;
}


int32_t*** VectorAnimationUtil_toAnimationArrayFromListOfPointList(VectorAnimationUtil* this, BasicArrayList* vector) {
        int32_t size = BasicArrayList_size(vector);
        int32_t*** points = ((int32_t***) java_array_new3(sizeof(int32_t), size, 0, 0));
        BasicArrayList* nextBasicArrayList = nullptr;
        int32_t** framePoints = nullptr;
        for (int32_t index = 0; index < size; index++) {
            nextBasicArrayList = ((BasicArrayList*) vector->objectArray[index]);
            framePoints = VectorAnimationUtil_toFrameArrayFromPointBasicArrayList(this, nextBasicArrayList);
            points[index] = ((int32_t**) java_array_new2(sizeof(int32_t), java_array_length(framePoints), 2));
            for (int32_t pointIndex = 0; pointIndex < java_array_length(framePoints); pointIndex++) {
                points[index][pointIndex][0] = framePoints[pointIndex][0];
                points[index][pointIndex][1] = framePoints[pointIndex][1];
            }
        }
        return points;
}


int32_t** VectorAnimationUtil_toFrameArrayFromPointBasicArrayList(VectorAnimationUtil* this, BasicArrayList* list) {
        int32_t** points = ((int32_t**) java_array_new2(sizeof(int32_t), BasicArrayList_size(list), 2));
        int32_t size = BasicArrayList_size(list);
        for (int32_t index = 0; index < size; index++) {
            GPoint* nextPoint = ((GPoint*) list->objectArray[index]);
            points[index][0] = GPoint_getX(nextPoint);
            points[index][1] = GPoint_getY(nextPoint);
        }
        return points;
}

