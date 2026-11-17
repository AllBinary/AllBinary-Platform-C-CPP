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
// package org.allbinary.graphics.pipeline

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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h"

typedef struct GraphicsPipeline GraphicsPipeline;
struct GraphicsPipeline {
    BasicGraphicsPipeline base;
};


GraphicsPipeline* GraphicsPipeline_new(BasicArrayList* points);

void GraphicsPipeline_init(GraphicsPipeline* this, BasicArrayList* points);
void GraphicsPipeline_rotateTheta(GraphicsPipeline* this, double aTheta);


void GraphicsPipeline_init(GraphicsPipeline* this, BasicArrayList* points) {
        BasicGraphicsPipeline_init(&this->base, points);
}

GraphicsPipeline* GraphicsPipeline_new(BasicArrayList* points) {
    GraphicsPipeline* this = calloc(1, sizeof(GraphicsPipeline));
    GraphicsPipeline_init(this, points);
    return this;
}


// throws Exception
void GraphicsPipeline_rotateTheta(GraphicsPipeline* this, double aTheta) {
        BasicArrayList* newVector = BasicArrayListD_new();
        int32_t size = JAVA_CALL(this->pointBasicArrayList, size);
        for (int32_t index = 0; index < size; index++) {
            GPoint* secondPoint = ((GPoint*) JAVA_CALL(this->base.pointBasicArrayList, get, index));
            double secondX = (GPoint_getX(secondPoint) * cos(aTheta)) - (GPoint_getY(secondPoint) * sin(aTheta));
            double secondY = (GPoint_getX(secondPoint) * sin(aTheta)) + (GPoint_getY(secondPoint) * cos(aTheta));
            GPoint* point = PointFactory_createXY(PointFactory_getInstance(), (((int32_t) secondX)), (((int32_t) secondY)));
            BasicArrayList_add(newVector, point);
        }
        this->pointBasicArrayList = newVector;
}

