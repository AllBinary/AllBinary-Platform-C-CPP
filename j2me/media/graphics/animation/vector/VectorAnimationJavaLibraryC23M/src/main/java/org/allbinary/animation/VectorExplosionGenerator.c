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
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/pipeline/RandomRotationFactory.h"
#include "org/allbinary/graphics/pipeline/RandomTranslation.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListS.h"

typedef struct VectorExplosionGenerator VectorExplosionGenerator;
struct VectorExplosionGenerator {
    VectorExplosionType* RANDOM;
    VectorExplosionType* ROTATION;
    VectorAnimationUtil* vectorAnimationUtil;
    RandomRotationFactory* randomRotationFactory;
};

static VectorExplosionGenerator* VectorExplosionGenerator_instance;

VectorExplosionGenerator* VectorExplosionGenerator_new(void);
VectorExplosionGenerator* VectorExplosionGenerator_getInstance(void);

void VectorExplosionGenerator_init(VectorExplosionGenerator* this);
BasicArrayList* VectorExplosionGenerator_createList(VectorExplosionGenerator* this, BasicArrayList* list, int32_t howMuch, VectorExplosionType* type);
int32_t*** VectorExplosionGenerator_getInstance(VectorExplosionGenerator* this, int32_t** points, int32_t howMuch, VectorExplosionType* type);
BasicArrayList* VectorExplosionGenerator_getInstanceStartFrame(VectorExplosionGenerator* this, int32_t** points, int32_t howMuch, VectorExplosionType* type, bool startFrame);
static BasicArrayList* VectorExplosionGenerator_createListFromPoints(VectorExplosionGenerator* this, BasicArrayList* tempBasicArrayList, int32_t** points, int32_t howMuch, VectorExplosionType* type);
static BasicArrayList* VectorExplosionGenerator_createPointsBasicArrayList(VectorExplosionGenerator* this, int32_t** points);

// Static fields with runtime initializers: call this once at startup
void VectorExplosionGenerator_staticInit(void) {
    VectorExplosionGenerator_instance = VectorExplosionGenerator_new();
}

static void VectorExplosionGenerator_initFields(VectorExplosionGenerator* this) {
    this->RANDOM = VectorExplosionType_new();
    this->ROTATION = VectorExplosionType_new();
    this->vectorAnimationUtil = VectorAnimationUtil_getInstance();
    this->randomRotationFactory = RandomRotationFactory_getInstance();
}


VectorExplosionGenerator* VectorExplosionGenerator_getInstance(void) {
        return VectorExplosionGenerator_instance;
}


void VectorExplosionGenerator_init(VectorExplosionGenerator* this) {
    VectorExplosionGenerator_initFields(this);
}

VectorExplosionGenerator* VectorExplosionGenerator_new(void) {
    VectorExplosionGenerator* this = calloc(1, sizeof(VectorExplosionGenerator));
    VectorExplosionGenerator_init(this);
    return this;
}


// throws Exception
BasicArrayList* VectorExplosionGenerator_createList(VectorExplosionGenerator* this, BasicArrayList* list, int32_t howMuch, VectorExplosionType* type) {
        GPoint* point = nullptr;
        int32_t size = BasicArrayList_size(list);
        int32_t** points = ((int32_t**) java_array_new2(sizeof(int32_t), size, 2));
        for (int32_t index = 0; index < size; index++) {
            point = ((GPoint*) list->objectArray[index]);
            points[index][0] = GPoint_getX(point);
            points[index][1] = GPoint_getY(point);
        }
        return VectorExplosionGenerator_createListFromPoints(this, list, points, howMuch, type);
}


// throws Exception
// Java overloaded method: C needs a different name
int32_t*** VectorExplosionGenerator_getInstance(VectorExplosionGenerator* this, int32_t** points, int32_t howMuch, VectorExplosionType* type) {
        BasicArrayList* pointsBasicArrayList = VectorExplosionGenerator_getInstanceStartFrame(this, points, howMuch, type, true);
        BasicArrayList* tempBasicArrayList = ((BasicArrayList*) pointsBasicArrayList->objectArray[0]);
        int32_t*** newPoints = VectorAnimationUtil_toAnimationArrayFromListOfPointListWithPointsPerFrame(this->vectorAnimationUtil, pointsBasicArrayList, BasicArrayList_size(tempBasicArrayList));
        return newPoints;
}


// throws Exception
BasicArrayList* VectorExplosionGenerator_getInstanceStartFrame(VectorExplosionGenerator* this, int32_t** points, int32_t howMuch, VectorExplosionType* type, bool startFrame) {
        JAVA_TRY {
            BasicArrayList* pointsBasicArrayList = BasicArrayListS_new(howMuch);
            BasicArrayList_add(pointsBasicArrayList, VectorExplosionGenerator_createPointsBasicArrayList(this, points));
            int32_t frameIndex = 0;
            BasicArrayList* tempBasicArrayList = nullptr;
            BasicArrayList* pointBasicArrayList = nullptr;
            while (frameIndex < howMuch) {
                tempBasicArrayList = ((BasicArrayList*) pointsBasicArrayList->objectArray[frameIndex]);
                pointBasicArrayList = VectorExplosionGenerator_createListFromPoints(this, tempBasicArrayList, points, howMuch, type);
                BasicArrayList_add(pointsBasicArrayList, pointBasicArrayList);
                frameIndex++;
            }
            if (!startFrame) {
                BasicArrayList_removeAt(pointsBasicArrayList, 0);
            }
            return pointsBasicArrayList;
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
static BasicArrayList* VectorExplosionGenerator_createListFromPoints(VectorExplosionGenerator* this, BasicArrayList* tempBasicArrayList, int32_t** points, int32_t howMuch, VectorExplosionType* type) {
        int32_t index = 0;
        BasicArrayList* pointBasicArrayList = BasicArrayListD_new();
        BasicArrayList* sectionBasicArrayList = nullptr;
        while (index < java_array_length(points)) {
            sectionBasicArrayList = BasicArrayListD_new();
            while (points[index][0] != 1000) {
                BasicArrayList_add(sectionBasicArrayList, tempBasicArrayList->objectArray[index]);
                index++;
                if (index >= java_array_length(points)) {
                    break;
                }
            }
            sectionBasicArrayList = RandomTranslation_getInstance(sectionBasicArrayList, howMuch);
            if (type == this->ROTATION) {
                sectionBasicArrayList = RandomRotationFactory_getInstanceList(this->randomRotationFactory, sectionBasicArrayList, howMuch);
            }
            int32_t size = BasicArrayList_size(sectionBasicArrayList);
            for (int32_t index2 = 0; index2 < size; index2++) {
                BasicArrayList_add(pointBasicArrayList, sectionBasicArrayList->objectArray[index2]);
            }
            if (index >= java_array_length(points)) {
                break;
            } else if (points[index][0] == 1000) {
                BasicArrayList_add(pointBasicArrayList, tempBasicArrayList->objectArray[index]);
                index++;
            }
        }
        return pointBasicArrayList;
}


// throws Exception
static BasicArrayList* VectorExplosionGenerator_createPointsBasicArrayList(VectorExplosionGenerator* this, int32_t** points) {
        if (java_array_length(points) == 0) {
            java_throw(java_exception_new("Exception", "Not Points Provided"));
        }
        BasicArrayList* firstPointBasicArrayList = BasicArrayListS_new(java_array_length(points));
        PointFactory* pointFactory = PointFactory_getInstance();
        for (int32_t index = 0; index < java_array_length(points); index++) {
            BasicArrayList_add(firstPointBasicArrayList, PointFactory_createXY(pointFactory, points[index][0], points[index][1]));
        }
        return firstPointBasicArrayList;
}

