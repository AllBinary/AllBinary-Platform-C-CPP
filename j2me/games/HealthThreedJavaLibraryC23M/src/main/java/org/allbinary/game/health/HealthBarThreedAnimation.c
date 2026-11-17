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
// package org.allbinary.game.health

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/khronos/opengles/GL10.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "min3d/core/ColorBufferList.h"
#include "min3d/core/Number3dBufferList.h"
#include "min3d/objectPrimitives/Rectangle.h"
#include "min3d/vos/Number3d.h"
#include "org/allbinary/device/OpenGLESGraphics.h"
#include "org/allbinary/graphics/threed/min3d/renderer/Object3dProcessor.h"
#include "org/allbinary/graphics/threed/min3d/renderer/Object3dProcessorUtil.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/game/health/HealthBarAnimation.h"

typedef struct HealthBarThreedAnimation HealthBarThreedAnimation;
struct HealthBarThreedAnimation {
    HealthBarAnimation base;
    Rectangle* rectangle;
    BasicColorFactory* basicColorFactory;
    Object3dProcessor* object3dProcessor;
};


HealthBarThreedAnimation* HealthBarThreedAnimation_new(AllBinaryLayer* layerInterface, int32_t location);

void HealthBarThreedAnimation_init(HealthBarThreedAnimation* this, AllBinaryLayer* layerInterface, int32_t location);
static void HealthBarThreedAnimation_updateColor(HealthBarThreedAnimation* this);
static void HealthBarThreedAnimation_updateSize(HealthBarThreedAnimation* this);
void HealthBarThreedAnimation_onHealthChange(HealthBarThreedAnimation* this, int32_t newX2);
void HealthBarThreedAnimation_paintThreedXYZ(HealthBarThreedAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z);

static void HealthBarThreedAnimation_initFields(HealthBarThreedAnimation* this) {
    
    this->basicColorFactory = BasicColorFactory_getInstance();
    this->object3dProcessor = Object3dProcessorUtil_getInstanceObject3dProcessor(Object3dProcessorUtil_getInstance());
}


void HealthBarThreedAnimation_init(HealthBarThreedAnimation* this, AllBinaryLayer* layerInterface, int32_t location) {
        HealthBarAnimation_init(&this->base, layerInterface, location);
        HealthBarThreedAnimation_initFields(this);
        this->basicColor = this->basicColorFactory->GREEN;
        this->colorP = JAVA_CALL(this->basicColor, intValue);
        this->rectangle = Rectangle_new(0, 0, 1, 1, this->basicColor);
        Rectangle_setDoubleSidedEnabled(this->rectangle, true);
        Rectangle_setNormalsEnabled(this->rectangle, false);
        Rectangle_setTexturesEnabled(this->rectangle, false);
}

HealthBarThreedAnimation* HealthBarThreedAnimation_new(AllBinaryLayer* layerInterface, int32_t location) {
    HealthBarThreedAnimation* this = calloc(1, sizeof(HealthBarThreedAnimation));
    HealthBarThreedAnimation_init(this, layerInterface, location);
    return this;
}


static void HealthBarThreedAnimation_updateColor(HealthBarThreedAnimation* this) {
        ColorBufferList* colorBufferList = JAVA_CALL(Rectangle_getVertices(this->rectangle), getColor4BufferList);
        int32_t size = ColorBufferList_size(colorBufferList);
        for (int32_t index = size; --index >= 0; ) {
            ColorBufferList_set(colorBufferList, index, this->basicColor);
        }
}


static void HealthBarThreedAnimation_updateSize(HealthBarThreedAnimation* this) {
        Number3dBufferList* number3dBufferList = JAVA_CALL(Rectangle_getVertices(this->rectangle), getPointsOnFacesNumber3dBufferList);
        int32_t width = this->x2;
        int32_t height = this->thickness * 2;
        int32_t segsH = 1;
        int32_t segsW = 1;
        int32_t row = 0;
        int32_t col = 0;
        float w = ((float) (width / segsW));
        float h = ((float) (height / segsH));
        float width5 = ((float) width) / 2.0f;
        float height5 = ((float) height) / 2.0f;
        int32_t index = 0;
        for (row = 0; row <= segsH; row++) {
            for (col = 0; col <= segsW; col++) {
                Number3dBufferList_set(number3dBufferList, index++, ((float) col) * w - width5, ((float) row) * h - height5, 0.0f);
            }
        }
}


void HealthBarThreedAnimation_onHealthChange(HealthBarThreedAnimation* this, int32_t newX2) {
        HealthBarAnimation_onHealthChange((&this->base), newX2);
        HealthBarThreedAnimation_updateColor(this);
        HealthBarThreedAnimation_updateSize(this);
}


void HealthBarThreedAnimation_paintThreedXYZ(HealthBarThreedAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z) {
        OpenGLESGraphics* openGLESGraphics = ((OpenGLESGraphics*) graphics);
        GL10* gl = OpenGLESGraphics_getGl10(openGLESGraphics);
        ViewPositionBase* viewPosition = JAVA_CALL(this->allbinaryLayer, getViewPosition);
        Number3d* positionNumber3d = Rectangle_getPosition(this->rectangle);
        positionNumber3d->x = -(((float) ViewPositionBase_getX(viewPosition)));
        positionNumber3d->z = -(((float) ViewPositionBase_getY(viewPosition)));
        positionNumber3d->y = ViewPositionBase_getZ(viewPosition) + JAVA_CALL(this->allbinaryLayer, getHeight);
        Object3dProcessor_drawObject(this->object3dProcessor, gl, this->rectangle);
}

