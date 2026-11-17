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
// package org.allbinary.animation.image

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
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/media/image/ImageCopyUtil.h"
#include "org/allbinary/media/image/ImageModifierUtil.h"
#include "org/allbinary/media/image/ImageRotationUtil.h"
#include "org/microemu/device/playn/PlaynMutableImage.h"
#include "playn/core/Canvas.h"
#include "playn/core/ImageImpl.h"
#include "playn/core/PlayN.h"
#include "playn/html/HtmlGraphics.h"
#include "playn/html/HtmlImage.h"
#include "org/allbinary/animation/image/ImageBaseRotationAnimation.h"

typedef struct AllBinaryHTMLImageRotationAnimation AllBinaryHTMLImageRotationAnimation;
struct AllBinaryHTMLImageRotationAnimation {
    ImageBaseRotationAnimation base;
    ImageRotationUtil* imageRotationUtil;
    ImageModifierUtil* imageModifierUtil;
    Image* originalImage;
    Image** twoImages;
    Canvas** canvasSurfaceArray;
    Image* imageToShow;
    int32_t bufferedImageIndex;
    AlphaBaseProcessor* alphaProcessor;
};


AllBinaryHTMLImageRotationAnimation* AllBinaryHTMLImageRotationAnimation_new(Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior);

void AllBinaryHTMLImageRotationAnimation_init(AllBinaryHTMLImageRotationAnimation* this, Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior);
Canvas* AllBinaryHTMLImageRotationAnimation_getCanvasSurface(AllBinaryHTMLImageRotationAnimation* this, Image* image);
void AllBinaryHTMLImageRotationAnimation_setBasicColorP(AllBinaryHTMLImageRotationAnimation* this, BasicColor* basicColor);
void AllBinaryHTMLImageRotationAnimation_setAlpha(AllBinaryHTMLImageRotationAnimation* this, int32_t alpha);
void AllBinaryHTMLImageRotationAnimation_nextRotation(AllBinaryHTMLImageRotationAnimation* this);
void AllBinaryHTMLImageRotationAnimation_previousRotation(AllBinaryHTMLImageRotationAnimation* this);
static void AllBinaryHTMLImageRotationAnimation_updateImage(AllBinaryHTMLImageRotationAnimation* this);
void AllBinaryHTMLImageRotationAnimation_setFrame(AllBinaryHTMLImageRotationAnimation* this, int32_t index);
void AllBinaryHTMLImageRotationAnimation_swap(AllBinaryHTMLImageRotationAnimation* this);
void AllBinaryHTMLImageRotationAnimation_paintXY(AllBinaryHTMLImageRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y);

static void AllBinaryHTMLImageRotationAnimation_initFields(AllBinaryHTMLImageRotationAnimation* this) {
    this->imageRotationUtil = ImageRotationUtil_getInstance();
    this->imageModifierUtil = ImageModifierUtil_getInstanceOrCreate();
    
    this->twoImages = ((Image**) java_array_new(sizeof(Image*), 2));
    this->canvasSurfaceArray = ((Canvas**) java_array_new(sizeof(Canvas*), 2));
    
    this->bufferedImageIndex = 0;
    this->alphaProcessor = AlphaBaseProcessor_getInstance();
}


void AllBinaryHTMLImageRotationAnimation_init(AllBinaryHTMLImageRotationAnimation* this, Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior) {
        ImageBaseRotationAnimation_init(&this->base, image, angleInfo, totalAngle, animationBehavior);
        AllBinaryHTMLImageRotationAnimation_initFields(this);
        this->originalImage = originalImage;
        this->imageToShow = image;
        this->twoImages[0] = image;
        this->twoImages[1] = ImageCopyUtil_createImage(ImageCopyUtil_getInstance(), image);
        this->canvasSurfaceArray[0] = AllBinaryHTMLImageRotationAnimation_getCanvasSurface(this, this->twoImages[0]);
        this->canvasSurfaceArray[1] = AllBinaryHTMLImageRotationAnimation_getCanvasSurface(this, this->twoImages[1]);
}

AllBinaryHTMLImageRotationAnimation* AllBinaryHTMLImageRotationAnimation_new(Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior) {
    AllBinaryHTMLImageRotationAnimation* this = calloc(1, sizeof(AllBinaryHTMLImageRotationAnimation));
    AllBinaryHTMLImageRotationAnimation_init(this, originalImage, image, angleInfo, totalAngle, animationBehavior);
    return this;
}


Canvas* AllBinaryHTMLImageRotationAnimation_getCanvasSurface(AllBinaryHTMLImageRotationAnimation* this, Image* image) {
        PlaynMutableImage* htmlImage = ((PlaynMutableImage*) image);
        ImageImpl* canvasImage = ((ImageImpl*) PlaynMutableImage_getImage(htmlImage));
        PlayN* playN = PlayN_getInstance();
        HtmlGraphics* htmlGraphics = ((HtmlGraphics*) PlayN_graphics(playN));
        Canvas* canvas = HtmlGraphics_get(htmlGraphics, ((HtmlImage*) canvasImage));
        Canvas_translate(canvas, Image_getWidth(this->originalImage) / 2, Image_getHeight(this->originalImage) / 2);
        return canvas;
}


void AllBinaryHTMLImageRotationAnimation_setBasicColorP(AllBinaryHTMLImageRotationAnimation* this, BasicColor* basicColor) {
        bool changed = false;
        if (AllBinaryHTMLImageRotationAnimation_getBasicColorP(this) == nullptr || JAVA_CALL(AllBinaryHTMLImageRotationAnimation_getBasicColorP(this), intValue) != BasicColor_intValue(basicColor)) {
            changed = true;
        }
        ImageBaseRotationAnimation_setBasicColorP((&this->base), basicColor);
        if (changed) {
            AllBinaryHTMLImageRotationAnimation_updateImage(this);
        }
}


void AllBinaryHTMLImageRotationAnimation_setAlpha(AllBinaryHTMLImageRotationAnimation* this, int32_t alpha) {
        bool changed = false;
        if (this->alphaP != alpha) {
            changed = true;
        }
        ImageBaseRotationAnimation_setAlpha((&this->base), alpha);
        if (changed) {
            this->alphaProcessor = AlphaProcessor_getInstance();
            AllBinaryHTMLImageRotationAnimation_updateImage(this);
        }
}


void AllBinaryHTMLImageRotationAnimation_nextRotation(AllBinaryHTMLImageRotationAnimation* this) {
        ImageBaseRotationAnimation_nextRotation((&this->base));
        AllBinaryHTMLImageRotationAnimation_updateImage(this);
}


void AllBinaryHTMLImageRotationAnimation_previousRotation(AllBinaryHTMLImageRotationAnimation* this) {
        ImageBaseRotationAnimation_previousRotation((&this->base));
        AllBinaryHTMLImageRotationAnimation_updateImage(this);
}


static void AllBinaryHTMLImageRotationAnimation_updateImage(AllBinaryHTMLImageRotationAnimation* this) {
        Canvas* canvasSurface = this->canvasSurfaceArray[this->bufferedImageIndex];
        Canvas_save(canvasSurface);
        ImageRotationUtil_rotateImageCanvasSurfaceClear(this->imageRotationUtil, this->originalImage, this->twoImages[this->bufferedImageIndex], canvasSurface, AngleInfo_getAngle(this->angleInfo) + 90);
        AlphaBaseProcessor_setAlpha(this->alphaProcessor, this->imageModifierUtil, this->originalImage, this->twoImages[this->bufferedImageIndex], this->alphaP);
        ImageRotationUtil_drawImage(this->imageRotationUtil, this->originalImage, this->imageToShow, canvasSurface);
        Canvas_restore(canvasSurface);
        AllBinaryHTMLImageRotationAnimation_swap(this);
}


void AllBinaryHTMLImageRotationAnimation_setFrame(AllBinaryHTMLImageRotationAnimation* this, int32_t index) {
        ImageBaseRotationAnimation_setFrame((&this->base), index);
        AllBinaryHTMLImageRotationAnimation_updateImage(this);
}


void AllBinaryHTMLImageRotationAnimation_swap(AllBinaryHTMLImageRotationAnimation* this) {
        this->imageToShow = this->twoImages[this->bufferedImageIndex];
        if (this->bufferedImageIndex == 0) {
            this->bufferedImageIndex = 1;
        } else {
            this->bufferedImageIndex = 0;
        }
}


void AllBinaryHTMLImageRotationAnimation_paintXY(AllBinaryHTMLImageRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Graphics_drawImage(graphics, this->imageToShow, x, y, this->anchor);
}

