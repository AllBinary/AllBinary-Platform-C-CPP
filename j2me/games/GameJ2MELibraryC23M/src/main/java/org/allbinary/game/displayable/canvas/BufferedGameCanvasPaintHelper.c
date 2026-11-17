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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Canvas.h"
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/lcdui/Image.h"
// #include "javax/microedition/lcdui/NullCanvas.h"
// #include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/graphics/paint/ProcessPaintable.h"
#include "org/allbinary/util/CircularIndexUtil.h"

typedef struct BufferedGameCanvasPaintHelper BufferedGameCanvasPaintHelper;
struct BufferedGameCanvasPaintHelper {
    ProcessPaintable base;
    Canvas* gameCanvas;
    Image** offScreenImage;
    Image* previousImage;
    CircularIndexUtil* circularIndexUtil;
    CircularIndexUtil* drawCircularIndexUtil;
    int32_t anchor;
};

static constexpr int32_t BufferedGameCanvasPaintHelper_MAX_IMAGES = 4;

BufferedGameCanvasPaintHelper* BufferedGameCanvasPaintHelper_new(AllBinaryGameCanvas* gameCanvas);

void BufferedGameCanvasPaintHelper_init(BufferedGameCanvasPaintHelper* this, AllBinaryGameCanvas* gameCanvas);
void BufferedGameCanvasPaintHelper_process(BufferedGameCanvasPaintHelper* this);
void BufferedGameCanvasPaintHelper_paint(BufferedGameCanvasPaintHelper* this, Graphics* graphics);

static void BufferedGameCanvasPaintHelper_initFields(BufferedGameCanvasPaintHelper* this) {
    this->gameCanvas = NullCanvas_NULL_CANVAS;
    this->offScreenImage = ((Image**) java_array_new(sizeof(Image*), BufferedGameCanvasPaintHelper_MAX_IMAGES));
    this->previousImage = NullImage_NULL_IMAGE;
    this->circularIndexUtil = CircularIndexUtil_createInstance(BufferedGameCanvasPaintHelper_MAX_IMAGES);
    this->drawCircularIndexUtil = CircularIndexUtil_createInstanceAt(BufferedGameCanvasPaintHelper_MAX_IMAGES - 1, BufferedGameCanvasPaintHelper_MAX_IMAGES);
    this->anchor = Anchor_TOP_LEFT;
}


void BufferedGameCanvasPaintHelper_init(BufferedGameCanvasPaintHelper* this, AllBinaryGameCanvas* gameCanvas) {
    ProcessPaintable_init(&this->base);
    BufferedGameCanvasPaintHelper_initFields(this);
        java_throw(java_exception_new("Exception", "No Longer Used"));
}

BufferedGameCanvasPaintHelper* BufferedGameCanvasPaintHelper_new(AllBinaryGameCanvas* gameCanvas) {
    BufferedGameCanvasPaintHelper* this = calloc(1, sizeof(BufferedGameCanvasPaintHelper));
    BufferedGameCanvasPaintHelper_init(this, gameCanvas);
    return this;
}


void BufferedGameCanvasPaintHelper_process(BufferedGameCanvasPaintHelper* this) {
        MyCanvas* myCanvas = (((MyCanvas*) this->gameCanvas));
        MyCanvas_draw(myCanvas, JAVA_CALL(this->offScreenImage[CircularIndexUtil_getIndex(this->circularIndexUtil)], getGraphics));
        CircularIndexUtil_next(this->circularIndexUtil);
        CircularIndexUtil_next(this->drawCircularIndexUtil);
}


void BufferedGameCanvasPaintHelper_paint(BufferedGameCanvasPaintHelper* this, Graphics* graphics) {
        this->previousImage = this->offScreenImage[CircularIndexUtil_getIndex(this->drawCircularIndexUtil)];
        Graphics_drawImage(graphics, this->previousImage, 0, 0, this->anchor);
}

