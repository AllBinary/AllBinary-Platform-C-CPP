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
// package org.allbinary.graphics.j2me.workarea.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct IntegerDimension IntegerDimension;
struct IntegerDimension {
    int32_t width;
    int32_t height;
};


IntegerDimension* IntegerDimension_new(int32_t width, int32_t height);

void IntegerDimension_init(IntegerDimension* this, int32_t width, int32_t height);
int32_t IntegerDimension_getWidth(IntegerDimension* this);
void IntegerDimension_setWidth(IntegerDimension* this, int32_t width);
int32_t IntegerDimension_getHeight(IntegerDimension* this);
void IntegerDimension_setHeight(IntegerDimension* this, int32_t height);

static void IntegerDimension_initFields(IntegerDimension* this) {
    this->width = 0;
    this->height = 0;
}


void IntegerDimension_init(IntegerDimension* this, int32_t width, int32_t height) {
    IntegerDimension_initFields(this);
        IntegerDimension_setWidth(this, width);
        IntegerDimension_setHeight(this, height);
}

IntegerDimension* IntegerDimension_new(int32_t width, int32_t height) {
    IntegerDimension* this = calloc(1, sizeof(IntegerDimension));
    IntegerDimension_init(this, width, height);
    return this;
}


int32_t IntegerDimension_getWidth(IntegerDimension* this) {
        return this->width;
}


void IntegerDimension_setWidth(IntegerDimension* this, int32_t width) {
        this->width = width;
}


int32_t IntegerDimension_getHeight(IntegerDimension* this) {
        return this->height;
}


void IntegerDimension_setHeight(IntegerDimension* this, int32_t height) {
        this->height = height;
}

