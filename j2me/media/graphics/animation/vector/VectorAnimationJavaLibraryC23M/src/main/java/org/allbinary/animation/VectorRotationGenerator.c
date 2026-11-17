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
#include "org/allbinary/math/Angle.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListS.h"
#include "org/allbinary/vector/VectorInfo.h"

typedef struct VectorRotationGenerator VectorRotationGenerator;
struct VectorRotationGenerator {
    LogUtil* logUtil;
    VectorAnimationUtil* vectorAnimationUtil;
    AngleFactory* angleFactory;
};

static VectorRotationGenerator* VectorRotationGenerator_instance;

VectorRotationGenerator* VectorRotationGenerator_new(void);
VectorRotationGenerator* VectorRotationGenerator_getInstance(void);

void VectorRotationGenerator_init(VectorRotationGenerator* this);
int32_t*** VectorRotationGenerator_getInstance(VectorRotationGenerator* this, VectorInfo* vectorRotationInfo);
int32_t*** VectorRotationGenerator_getInstanceFrames(VectorRotationGenerator* this, int32_t width, int32_t height, int32_t** points, int32_t frames);
BasicArrayList* VectorRotationGenerator_getListAtAngle(VectorRotationGenerator* this, int32_t width, int32_t height, BasicArrayList* pointBasicArrayList, Angle* angle);

// Static fields with runtime initializers: call this once at startup
void VectorRotationGenerator_staticInit(void) {
    VectorRotationGenerator_instance = VectorRotationGenerator_new();
}

static void VectorRotationGenerator_initFields(VectorRotationGenerator* this) {
    this->logUtil = LogUtil_getInstance();
    this->vectorAnimationUtil = VectorAnimationUtil_getInstance();
    this->angleFactory = AngleFactory_getInstance();
}


VectorRotationGenerator* VectorRotationGenerator_getInstance(void) {
        return VectorRotationGenerator_instance;
}


void VectorRotationGenerator_init(VectorRotationGenerator* this) {
    VectorRotationGenerator_initFields(this);
}

VectorRotationGenerator* VectorRotationGenerator_new(void) {
    VectorRotationGenerator* this = calloc(1, sizeof(VectorRotationGenerator));
    VectorRotationGenerator_init(this);
    return this;
}


// Java overloaded method: C needs a different name
int32_t*** VectorRotationGenerator_getInstance(VectorRotationGenerator* this, VectorInfo* vectorRotationInfo) {
        return VectorRotationGenerator_getInstanceFrames(this, VectorInfo_getWidth(vectorRotationInfo), VectorInfo_getHeight(vectorRotationInfo), VectorInfo_getPoints(vectorRotationInfo), VectorInfo_getTotalFrames(vectorRotationInfo));
}


int32_t*** VectorRotationGenerator_getInstanceFrames(VectorRotationGenerator* this, int32_t width, int32_t height, int32_t** points, int32_t frames) {
        JAVA_TRY {
            int16_t totalAngle = this->angleFactory->TOTAL_ANGLE;
            int32_t angleIncrement = ((int32_t) totalAngle) / frames;
            BasicArrayList* pointsBasicArrayList = BasicArrayListS_new(((int32_t) totalAngle) / angleIncrement);
            BasicArrayList* pointBasicArrayList = BasicArrayListS_new(java_array_length(points));
            PointFactory* pointFactory = PointFactory_getInstance();
            int32_t size = java_array_length(points);
            for (int32_t index = 0; index < size; index++) {
                BasicArrayList_add(pointBasicArrayList, PointFactory_createXY(pointFactory, points[index][0], points[index][1]));
            }
            int32_t index = 0;
            while (index < ((int32_t) totalAngle)) {
                BasicArrayList_add(pointsBasicArrayList, VectorRotationGenerator_getListAtAngle(this, width, height, pointBasicArrayList, AngleFactory_getAt(this->angleFactory, index)));
                index += angleIncrement;
            }
            int32_t*** newPoints = VectorAnimationUtil_toAnimationArrayFromListOfPointListWithPointsPerFrame(this->vectorAnimationUtil, pointsBasicArrayList, BasicArrayList_size(pointBasicArrayList));
            return newPoints;
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            return NullUtil_getInstance()->NULL_INT_ARRAY_ARRAY_ARRAY;
        } JAVA_END_TRY;
}


// throws Exception
BasicArrayList* VectorRotationGenerator_getListAtAngle(VectorRotationGenerator* this, int32_t width, int32_t height, BasicArrayList* pointBasicArrayList, Angle* angle) {
        BasicGraphicsPipeline* graphicsPipe = BasicGraphicsPipeline_new(pointBasicArrayList);
        BasicGraphicsPipeline_createMatrix(graphicsPipe);
        BasicGraphicsPipeline_translate(graphicsPipe, -(width >> 1), -(height >> 1));
        BasicGraphicsPipeline_rotateToAngle(graphicsPipe, angle);
        BasicGraphicsPipeline_translate(graphicsPipe, (width >> 1), (height >> 1));
        return BasicGraphicsPipeline_getMatrix(graphicsPipe);
}

