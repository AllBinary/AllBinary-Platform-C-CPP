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

typedef struct ImageUnifierProperties ImageUnifierProperties;
struct ImageUnifierProperties {
    int32_t rows;
    int32_t columns;
    ImageUnifierCell* imageUnifierCell;
};


ImageUnifierProperties* ImageUnifierProperties_new(void);

void ImageUnifierProperties_init(ImageUnifierProperties* this);
int32_t ImageUnifierProperties_getWidth(ImageUnifierProperties* this);
int32_t ImageUnifierProperties_getHeight(ImageUnifierProperties* this);
int32_t ImageUnifierProperties_getRows(ImageUnifierProperties* this);
void ImageUnifierProperties_setRows(ImageUnifierProperties* this, int32_t rows);
int32_t ImageUnifierProperties_getColumns(ImageUnifierProperties* this);
void ImageUnifierProperties_setColumns(ImageUnifierProperties* this, int32_t columns);
ImageUnifierCell* ImageUnifierProperties_getImageUnifierCell(ImageUnifierProperties* this);
void ImageUnifierProperties_setImageUnifierCell(ImageUnifierProperties* this, ImageUnifierCell* imageUnifierCell);

static void ImageUnifierProperties_initFields(ImageUnifierProperties* this) {
    this->rows = nullptr;
    this->columns = nullptr;
    this->imageUnifierCell = nullptr;
}


void ImageUnifierProperties_init(ImageUnifierProperties* this) {
    ImageUnifierProperties_initFields(this);
}

ImageUnifierProperties* ImageUnifierProperties_new(void) {
    ImageUnifierProperties* this = calloc(1, sizeof(ImageUnifierProperties));
    ImageUnifierProperties_init(this);
    return this;
}


int32_t ImageUnifierProperties_getWidth(ImageUnifierProperties* this) {
        return JAVA_CALL(ImageUnifierProperties_getColumns(this), intValue) * JAVA_CALL(JAVA_CALL(ImageUnifierProperties_getImageUnifierCell(this), getWidth), intValue);
}


int32_t ImageUnifierProperties_getHeight(ImageUnifierProperties* this) {
        return JAVA_CALL(ImageUnifierProperties_getRows(this), intValue) * JAVA_CALL(JAVA_CALL(ImageUnifierProperties_getImageUnifierCell(this), getHeight), intValue);
}


int32_t ImageUnifierProperties_getRows(ImageUnifierProperties* this) {
        return this->rows;
}


void ImageUnifierProperties_setRows(ImageUnifierProperties* this, int32_t rows) {
        this->rows = rows;
}


int32_t ImageUnifierProperties_getColumns(ImageUnifierProperties* this) {
        return this->columns;
}


void ImageUnifierProperties_setColumns(ImageUnifierProperties* this, int32_t columns) {
        this->columns = columns;
}


ImageUnifierCell* ImageUnifierProperties_getImageUnifierCell(ImageUnifierProperties* this) {
        return this->imageUnifierCell;
}


void ImageUnifierProperties_setImageUnifierCell(ImageUnifierProperties* this, ImageUnifierCell* imageUnifierCell) {
        this->imageUnifierCell = imageUnifierCell;
}

