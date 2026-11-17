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
// package org.allbinary.media.image.cache

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"

typedef struct BufferedImageInfo BufferedImageInfo;
struct BufferedImageInfo {
    int32_t width;
    int32_t height;
    int32_t type;
};


BufferedImageInfo* BufferedImageInfo_new(int32_t width, int32_t height, int32_t type);

void BufferedImageInfo_init(BufferedImageInfo* this, int32_t width, int32_t height, int32_t type);
int32_t BufferedImageInfo_getWidth(BufferedImageInfo* this);
void BufferedImageInfo_setWidth(BufferedImageInfo* this, int32_t width);
int32_t BufferedImageInfo_getHeight(BufferedImageInfo* this);
void BufferedImageInfo_setHeight(BufferedImageInfo* this, int32_t height);
int32_t BufferedImageInfo_getType(BufferedImageInfo* this);
void BufferedImageInfo_setType(BufferedImageInfo* this, int32_t type);
const char* BufferedImageInfo_toString(BufferedImageInfo* this);

static void BufferedImageInfo_initFields(BufferedImageInfo* this) {
    
    
    
}


void BufferedImageInfo_init(BufferedImageInfo* this, int32_t width, int32_t height, int32_t type) {
    BufferedImageInfo_initFields(this);
        this->width = width;
        this->height = height;
        this->type = type;
}

BufferedImageInfo* BufferedImageInfo_new(int32_t width, int32_t height, int32_t type) {
    BufferedImageInfo* this = calloc(1, sizeof(BufferedImageInfo));
    BufferedImageInfo_init(this, width, height, type);
    return this;
}


int32_t BufferedImageInfo_getWidth(BufferedImageInfo* this) {
        return this->width;
}


void BufferedImageInfo_setWidth(BufferedImageInfo* this, int32_t width) {
        this->width = width;
}


int32_t BufferedImageInfo_getHeight(BufferedImageInfo* this) {
        return this->height;
}


void BufferedImageInfo_setHeight(BufferedImageInfo* this, int32_t height) {
        this->height = height;
}


int32_t BufferedImageInfo_getType(BufferedImageInfo* this) {
        return this->type;
}


void BufferedImageInfo_setType(BufferedImageInfo* this, int32_t type) {
        this->type = type;
}


const char* BufferedImageInfo_toString(BufferedImageInfo* this) {
        CommonLabels* commonLabels = CommonLabels_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "BufferedImageInfo -");
        StringMaker_append(stringBuffer, commonLabels->WIDTH_LABEL);
        StringMaker_appendint(stringBuffer, BufferedImageInfo_getWidth(this));
        StringMaker_append(stringBuffer, commonLabels->HEIGHT_LABEL);
        StringMaker_appendint(stringBuffer, BufferedImageInfo_getHeight(this));
        StringMaker_append(stringBuffer, " Type: ");
        StringMaker_appendint(stringBuffer, BufferedImageInfo_getType(this));
        return StringMaker_toString(stringBuffer);
}

