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
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/animation/image/ImageAnimation.h"

typedef struct ImageSegmentAnimation ImageSegmentAnimation;
struct ImageSegmentAnimation {
    ImageAnimation base;
    int32_t startX;
    int32_t startY;
    int32_t drawWidth;
    int32_t drawHeight;
    CircularIndexUtil* circularIndexUtil;
    int32_t* sequenceArray;
};


ImageSegmentAnimation* ImageSegmentAnimation_new(Image* image, int32_t* sequenceArray, AnimationBehavior* animationBehavior);

void ImageSegmentAnimation_init(ImageSegmentAnimation* this, Image* image, int32_t* sequenceArray, AnimationBehavior* animationBehavior);
void ImageSegmentAnimation_nextFrame(ImageSegmentAnimation* this);
void ImageSegmentAnimation_previousFrame(ImageSegmentAnimation* this);
void ImageSegmentAnimation_setFrame(ImageSegmentAnimation* this, int32_t index);
int32_t ImageSegmentAnimation_getFrame(ImageSegmentAnimation* this);
int32_t ImageSegmentAnimation_getSize(ImageSegmentAnimation* this);
void ImageSegmentAnimation_setSequence(ImageSegmentAnimation* this, int32_t* sequenceArray);
int32_t* ImageSegmentAnimation_getSequence(ImageSegmentAnimation* this);
void ImageSegmentAnimation_paintXY(ImageSegmentAnimation* this, Graphics* graphics, int32_t x, int32_t y);
int32_t ImageSegmentAnimation_getStartX(ImageSegmentAnimation* this);
void ImageSegmentAnimation_setStartX(ImageSegmentAnimation* this, int32_t startX);
int32_t ImageSegmentAnimation_getStartY(ImageSegmentAnimation* this);
void ImageSegmentAnimation_setStartY(ImageSegmentAnimation* this, int32_t startY);
int32_t ImageSegmentAnimation_getDrawWidth(ImageSegmentAnimation* this);
void ImageSegmentAnimation_setDrawWidth(ImageSegmentAnimation* this, int32_t drawWidth);
int32_t ImageSegmentAnimation_getDrawHeight(ImageSegmentAnimation* this);
void ImageSegmentAnimation_setDrawHeight(ImageSegmentAnimation* this, int32_t drawHeight);

static void ImageSegmentAnimation_initFields(ImageSegmentAnimation* this) {
    
    
    
    
    
    
}


void ImageSegmentAnimation_init(ImageSegmentAnimation* this, Image* image, int32_t* sequenceArray, AnimationBehavior* animationBehavior) {
        ImageAnimation_init(&this->base, image, animationBehavior);
        ImageSegmentAnimation_initFields(this);
        this->startX = 0;
        this->startY = 0;
        this->drawWidth = JAVA_CALL(ImageSegmentAnimation_getImage(this), getWidth);
        this->drawHeight = JAVA_CALL(ImageSegmentAnimation_getImage(this), getHeight);
        this->circularIndexUtil = CircularIndexUtil_createInstance(this->drawHeight);
        this->sequenceArray = sequenceArray;
}

ImageSegmentAnimation* ImageSegmentAnimation_new(Image* image, int32_t* sequenceArray, AnimationBehavior* animationBehavior) {
    ImageSegmentAnimation* this = calloc(1, sizeof(ImageSegmentAnimation));
    ImageSegmentAnimation_init(this, image, sequenceArray, animationBehavior);
    return this;
}


void ImageSegmentAnimation_nextFrame(ImageSegmentAnimation* this) {
        CircularIndexUtil_next(this->circularIndexUtil);
}


void ImageSegmentAnimation_previousFrame(ImageSegmentAnimation* this) {
        CircularIndexUtil_previous(this->circularIndexUtil);
}


void ImageSegmentAnimation_setFrame(ImageSegmentAnimation* this, int32_t index) {
        CircularIndexUtil_setIndex(this->circularIndexUtil, index);
}


int32_t ImageSegmentAnimation_getFrame(ImageSegmentAnimation* this) {
        return CircularIndexUtil_getIndex(this->circularIndexUtil);
}


int32_t ImageSegmentAnimation_getSize(ImageSegmentAnimation* this) {
        return CircularIndexUtil_getSize(this->circularIndexUtil);
}


void ImageSegmentAnimation_setSequence(ImageSegmentAnimation* this, int32_t* sequenceArray) {
        this->sequenceArray = sequenceArray;
}


int32_t* ImageSegmentAnimation_getSequence(ImageSegmentAnimation* this) {
        return this->sequenceArray;
}


void ImageSegmentAnimation_paintXY(ImageSegmentAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
}


int32_t ImageSegmentAnimation_getStartX(ImageSegmentAnimation* this) {
        return this->startX;
}


void ImageSegmentAnimation_setStartX(ImageSegmentAnimation* this, int32_t startX) {
        this->startX = startX;
}


int32_t ImageSegmentAnimation_getStartY(ImageSegmentAnimation* this) {
        return this->startY;
}


void ImageSegmentAnimation_setStartY(ImageSegmentAnimation* this, int32_t startY) {
        this->startY = startY;
}


int32_t ImageSegmentAnimation_getDrawWidth(ImageSegmentAnimation* this) {
        return this->drawWidth;
}


void ImageSegmentAnimation_setDrawWidth(ImageSegmentAnimation* this, int32_t drawWidth) {
        this->drawWidth = drawWidth;
}


int32_t ImageSegmentAnimation_getDrawHeight(ImageSegmentAnimation* this) {
        return this->drawHeight;
}


void ImageSegmentAnimation_setDrawHeight(ImageSegmentAnimation* this, int32_t drawHeight) {
        this->drawHeight = drawHeight;
}

