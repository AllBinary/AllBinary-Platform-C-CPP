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
// package org.allbinary.game.configuration.feature

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct GraphicsFeatureFactory GraphicsFeatureFactory;
struct GraphicsFeatureFactory {
    GraphicsFeature* NONE;
    GraphicsFeature* TRANSPARENT_IMAGE_CREATION;
    GraphicsFeature* IMAGE_GRAPHICS;
    GraphicsFeature* IMAGE_ROTATION_ON_THE_FLY;
    GraphicsFeature* IMAGE_TO_ARRAY_GRAPHICS;
    GraphicsFeature* SPRITE_QUARTER_ROTATION_GRAPHICS;
    GraphicsFeature* SPRITE_FULL_GRAPHICS;
    GraphicsFeature* VECTOR_GRAPHICS;
    GraphicsFeature* VECTOR_TO_IMAGE_GRAPHICS;
};

static GraphicsFeatureFactory* GraphicsFeatureFactory_instance;

GraphicsFeatureFactory* GraphicsFeatureFactory_new(void);
GraphicsFeatureFactory* GraphicsFeatureFactory_getInstance(void);

void GraphicsFeatureFactory_init(GraphicsFeatureFactory* this);

// Static fields with runtime initializers: call this once at startup
void GraphicsFeatureFactory_staticInit(void) {
    GraphicsFeatureFactory_instance = GraphicsFeatureFactory_new();
}

static void GraphicsFeatureFactory_initFields(GraphicsFeatureFactory* this) {
    this->NONE = GraphicsFeature_new(StringUtil_getInstance()->NULL_STRING);
    this->TRANSPARENT_IMAGE_CREATION = GraphicsFeature_new("Transparent Image Creation");
    this->IMAGE_GRAPHICS = GraphicsFeature_new("Image Graphics");
    this->IMAGE_ROTATION_ON_THE_FLY = GraphicsFeature_new("Image Rotated On The Fly");
    this->IMAGE_TO_ARRAY_GRAPHICS = GraphicsFeature_new("Image To Array Graphics");
    this->SPRITE_QUARTER_ROTATION_GRAPHICS = GraphicsFeature_new("Sprite Quarter Rotation Graphics");
    this->SPRITE_FULL_GRAPHICS = GraphicsFeature_new("Sprite Full Rotation Graphics");
    this->VECTOR_GRAPHICS = GraphicsFeature_new("BasicArrayList Graphics");
    this->VECTOR_TO_IMAGE_GRAPHICS = GraphicsFeature_new("BasicArrayList To Image Graphics");
}


GraphicsFeatureFactory* GraphicsFeatureFactory_getInstance(void) {
        return GraphicsFeatureFactory_instance;
}


void GraphicsFeatureFactory_init(GraphicsFeatureFactory* this) {
    GraphicsFeatureFactory_initFields(this);
}

GraphicsFeatureFactory* GraphicsFeatureFactory_new(void) {
    GraphicsFeatureFactory* this = calloc(1, sizeof(GraphicsFeatureFactory));
    GraphicsFeatureFactory_init(this);
    return this;
}

