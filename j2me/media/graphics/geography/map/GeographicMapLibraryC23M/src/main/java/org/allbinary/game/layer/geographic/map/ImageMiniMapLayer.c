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
// package org.allbinary.game.layer.geographic.map

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/lcdui/Image.h"
// #include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/image/PaintableToImageUtil.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/game/layer/geographic/map/MiniMapLayer.h"

typedef struct ImageMiniMapLayer ImageMiniMapLayer;
struct ImageMiniMapLayer {
    MiniMapLayer base;
    Image* image;
    int32_t anchor;
};


ImageMiniMapLayer* ImageMiniMapLayer_new(BasicGeographicMap* geographicMapInterface, ViewPositionBase* viewPosition);

void ImageMiniMapLayer_init(ImageMiniMapLayer* this, BasicGeographicMap* geographicMapInterface, ViewPositionBase* viewPosition);
void ImageMiniMapLayer_init(ImageMiniMapLayer* this);
void ImageMiniMapLayer_paint(ImageMiniMapLayer* this, Graphics* graphics);

static void ImageMiniMapLayer_initFields(ImageMiniMapLayer* this) {
    this->image = NullImage_NULL_IMAGE;
    this->anchor = Anchor_TOP_LEFT;
}


void ImageMiniMapLayer_init(ImageMiniMapLayer* this, BasicGeographicMap* geographicMapInterface, ViewPositionBase* viewPosition) {
        MiniMapLayer_init(&this->base, geographicMapInterface, viewPosition);
        ImageMiniMapLayer_initFields(this);
}

ImageMiniMapLayer* ImageMiniMapLayer_new(BasicGeographicMap* geographicMapInterface, ViewPositionBase* viewPosition) {
    ImageMiniMapLayer* this = calloc(1, sizeof(ImageMiniMapLayer));
    ImageMiniMapLayer_init(this, geographicMapInterface, viewPosition);
    return this;
}


// throws Exception
void ImageMiniMapLayer_init(ImageMiniMapLayer* this) {
        int32_t aWidth = JAVA_CALL(this->allBinaryTiledLayer, getWidth);
        int32_t aHeight = JAVA_CALL(this->allBinaryTiledLayer, getHeight);
        this->image = PaintableToImageUtil_getImage(this->allBinaryTiledLayer, aWidth, aHeight);
}


void ImageMiniMapLayer_paint(ImageMiniMapLayer* this, Graphics* graphics) {
        Graphics_drawImage(graphics, this->image, this->x, this->y, this->anchor);
        ImageMiniMapLayer_paintDots(this, graphics);
}

