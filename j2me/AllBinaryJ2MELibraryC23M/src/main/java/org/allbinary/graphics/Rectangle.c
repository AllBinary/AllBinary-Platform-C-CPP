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
// package org.allbinary.graphics

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
#include "org/allbinary/string/CommonSeps.h"

typedef struct Rectangle Rectangle;
struct Rectangle {
    GPoint* point;
    int32_t width;
    int32_t height;
};


Rectangle* Rectangle_new(GPoint* point, int32_t width, int32_t height);

void Rectangle_init(Rectangle* this, GPoint* point, int32_t width, int32_t height);
GPoint* Rectangle_getPoint(Rectangle* this);
void Rectangle_setPoint(Rectangle* this, GPoint* point);
int32_t Rectangle_getMaxX(Rectangle* this);
int32_t Rectangle_getMaxY(Rectangle* this);
int32_t Rectangle_getWidth(Rectangle* this);
void Rectangle_setWidth(Rectangle* this, int32_t width);
int32_t Rectangle_getHeight(Rectangle* this);
void Rectangle_setHeight(Rectangle* this, int32_t height);
const char* Rectangle_toString(Rectangle* this);

static void Rectangle_initFields(Rectangle* this) {
    
    
    
}


void Rectangle_init(Rectangle* this, GPoint* point, int32_t width, int32_t height) {
    Rectangle_initFields(this);
        this->point = point;
        this->width = width;
        this->height = height;
}

Rectangle* Rectangle_new(GPoint* point, int32_t width, int32_t height) {
    Rectangle* this = calloc(1, sizeof(Rectangle));
    Rectangle_init(this, point, width, height);
    return this;
}


GPoint* Rectangle_getPoint(Rectangle* this) {
        return this->point;
}


void Rectangle_setPoint(Rectangle* this, GPoint* point) {
        this->point = point;
}


int32_t Rectangle_getMaxX(Rectangle* this) {
        return GPoint_getX(this->point) + this->width;
}


int32_t Rectangle_getMaxY(Rectangle* this) {
        return GPoint_getY(this->point) + this->height;
}


int32_t Rectangle_getWidth(Rectangle* this) {
        return this->width;
}


void Rectangle_setWidth(Rectangle* this, int32_t width) {
        this->width = width;
}


int32_t Rectangle_getHeight(Rectangle* this) {
        return this->height;
}


void Rectangle_setHeight(Rectangle* this, int32_t height) {
        this->height = height;
}


const char* Rectangle_toString(Rectangle* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, JAVA_CALL(Rectangle_getPoint(this), toString));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, CommonLabels_getInstance()->WIDTH_LABEL);
        StringMaker_appendint(stringBuffer, Rectangle_getWidth(this));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, CommonLabels_getInstance()->HEIGHT_LABEL);
        StringMaker_appendint(stringBuffer, Rectangle_getHeight(this));
        StringMaker_append(stringBuffer, " MaxX: ");
        StringMaker_appendint(stringBuffer, Rectangle_getMaxX(this));
        StringMaker_append(stringBuffer, " MaxY: ");
        StringMaker_appendint(stringBuffer, Rectangle_getMaxY(this));
        return StringMaker_toString(stringBuffer);
}

