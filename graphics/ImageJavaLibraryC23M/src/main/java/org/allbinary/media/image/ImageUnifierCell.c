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
// package org.allbinary.media.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ImageUnifierCell ImageUnifierCell;
struct ImageUnifierCell {
    int32_t width;
    int32_t height;
};


ImageUnifierCell* ImageUnifierCell_new(int32_t width, int32_t height);

void ImageUnifierCell_init(ImageUnifierCell* this, int32_t width, int32_t height);
int32_t ImageUnifierCell_getWidth(ImageUnifierCell* this);
void ImageUnifierCell_setWidth(ImageUnifierCell* this, int32_t width);
int32_t ImageUnifierCell_getHeight(ImageUnifierCell* this);
void ImageUnifierCell_setHeight(ImageUnifierCell* this, int32_t height);

static void ImageUnifierCell_initFields(ImageUnifierCell* this) {
    this->width = nullptr;
    this->height = nullptr;
}


void ImageUnifierCell_init(ImageUnifierCell* this, int32_t width, int32_t height) {
    ImageUnifierCell_initFields(this);
        ImageUnifierCell_setWidth(this, width);
        ImageUnifierCell_setHeight(this, height);
}

ImageUnifierCell* ImageUnifierCell_new(int32_t width, int32_t height) {
    ImageUnifierCell* this = calloc(1, sizeof(ImageUnifierCell));
    ImageUnifierCell_init(this, width, height);
    return this;
}


int32_t ImageUnifierCell_getWidth(ImageUnifierCell* this) {
        return this->width;
}


void ImageUnifierCell_setWidth(ImageUnifierCell* this, int32_t width) {
        this->width = width;
}


int32_t ImageUnifierCell_getHeight(ImageUnifierCell* this) {
        return this->height;
}


void ImageUnifierCell_setHeight(ImageUnifierCell* this, int32_t height) {
        this->height = height;
}

