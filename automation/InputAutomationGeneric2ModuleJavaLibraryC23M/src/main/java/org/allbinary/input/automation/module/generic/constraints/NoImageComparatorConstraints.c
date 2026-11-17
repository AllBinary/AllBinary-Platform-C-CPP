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
// package org.allbinary.input.automation.module.generic.constraints

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/image/BufferedImage.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/input/automation/module/ImageComparatorConstraints.h"

typedef struct NoImageComparatorConstraints NoImageComparatorConstraints;
struct NoImageComparatorConstraints {
    ImageComparatorConstraints base;
};


NoImageComparatorConstraints* NoImageComparatorConstraints_new(void);

void NoImageComparatorConstraints_init(NoImageComparatorConstraints* this);
bool NoImageComparatorConstraints_isColorAllowed(NoImageComparatorConstraints* this, int32_t frame, GPoint* point, Color* color);
bool NoImageComparatorConstraints_isImageValid(NoImageComparatorConstraints* this, BufferedImage* bufferedImage);


void NoImageComparatorConstraints_init(NoImageComparatorConstraints* this) {
        ImageComparatorConstraints_init(&this->base, 1);
        NoImageComparatorConstraints_setMaxNonMatchingPixelDeltas(this, Integer_MAX_VALUE);
}

NoImageComparatorConstraints* NoImageComparatorConstraints_new(void) {
    NoImageComparatorConstraints* this = calloc(1, sizeof(NoImageComparatorConstraints));
    NoImageComparatorConstraints_init(this);
    return this;
}


bool NoImageComparatorConstraints_isColorAllowed(NoImageComparatorConstraints* this, int32_t frame, GPoint* point, Color* color) {
        return true;
}


bool NoImageComparatorConstraints_isImageValid(NoImageComparatorConstraints* this, BufferedImage* bufferedImage) {
        return true;
}

