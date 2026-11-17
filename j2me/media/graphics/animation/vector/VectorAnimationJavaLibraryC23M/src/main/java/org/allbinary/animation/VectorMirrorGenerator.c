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
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListS.h"

typedef struct VectorMirrorGenerator VectorMirrorGenerator;
struct VectorMirrorGenerator {
    LogUtil* logUtil;
    VectorAnimationUtil* vectorAnimationUtil;
};

static VectorMirrorGenerator* VectorMirrorGenerator_instance;

VectorMirrorGenerator* VectorMirrorGenerator_new(void);
VectorMirrorGenerator* VectorMirrorGenerator_getInstance(void);

void VectorMirrorGenerator_init(VectorMirrorGenerator* this);
int32_t*** VectorMirrorGenerator_getInstance(VectorMirrorGenerator* this, int32_t*** points, int32_t width);
BasicArrayList* VectorMirrorGenerator_getInstance(VectorMirrorGenerator* this, BasicArrayList* pointBasicArrayList, int32_t width);

// Static fields with runtime initializers: call this once at startup
void VectorMirrorGenerator_staticInit(void) {
    VectorMirrorGenerator_instance = VectorMirrorGenerator_new();
}

static void VectorMirrorGenerator_initFields(VectorMirrorGenerator* this) {
    this->logUtil = LogUtil_getInstance();
    this->vectorAnimationUtil = VectorAnimationUtil_getInstance();
}


VectorMirrorGenerator* VectorMirrorGenerator_getInstance(void) {
        return VectorMirrorGenerator_instance;
}


void VectorMirrorGenerator_init(VectorMirrorGenerator* this) {
    VectorMirrorGenerator_initFields(this);
}

VectorMirrorGenerator* VectorMirrorGenerator_new(void) {
    VectorMirrorGenerator* this = calloc(1, sizeof(VectorMirrorGenerator));
    VectorMirrorGenerator_init(this);
    return this;
}


// Java overloaded method: C needs a different name
int32_t*** VectorMirrorGenerator_getInstance(VectorMirrorGenerator* this, int32_t*** points, int32_t width) {
        JAVA_TRY {
            PointFactory* pointFactory = PointFactory_getInstance();
            BasicArrayList* pointBasicArrayList = nullptr;
            int32_t** nextPoints = nullptr;
            int32_t size2 = 0;
            int32_t size = java_array_length(points);
            BasicArrayList* pointsBasicArrayList = BasicArrayListS_new(size);
            for (int32_t frame = 0; frame < size; frame++) {
                nextPoints = points[frame];
                size2 = java_array_length(nextPoints);
                pointBasicArrayList = BasicArrayListS_new(size2);
                for (int32_t index = 0; index < size2; index++) {
                    BasicArrayList_add(pointBasicArrayList, PointFactory_createXY(pointFactory, nextPoints[index][0], nextPoints[index][1]));
                }
                BasicArrayList_add(pointsBasicArrayList, pointBasicArrayList);
            }
            for (int32_t index = 0; index < java_array_length(points); index++) {
                BasicArrayList_add(pointsBasicArrayList, VectorMirrorGenerator_getInstance(this, ((BasicArrayList*) pointsBasicArrayList->objectArray[index]), width));
            }
            int32_t*** newPoints = VectorAnimationUtil_toAnimationArrayFromListOfPointList(this->vectorAnimationUtil, pointsBasicArrayList);
            return newPoints;
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            return NullUtil_getInstance()->NULL_INT_ARRAY_ARRAY_ARRAY;
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
BasicArrayList* VectorMirrorGenerator_getInstance(VectorMirrorGenerator* this, BasicArrayList* pointBasicArrayList, int32_t width) {
        BasicGraphicsPipeline* graphicsPipe = BasicGraphicsPipeline_new(pointBasicArrayList);
        BasicGraphicsPipeline_createMatrix(graphicsPipe);
        BasicGraphicsPipeline_mirror(graphicsPipe, width);
        return BasicGraphicsPipeline_getMatrix(graphicsPipe);
}

