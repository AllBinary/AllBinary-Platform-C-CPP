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
#include "org/allbinary/input/automation/module/MotionRectangleConstraints.h"

typedef struct NoMotionRectangleConstraints NoMotionRectangleConstraints;
struct NoMotionRectangleConstraints {
    MotionRectangleConstraints base;
};


NoMotionRectangleConstraints* NoMotionRectangleConstraints_new(void);

void NoMotionRectangleConstraints_init(NoMotionRectangleConstraints* this);
bool NoMotionRectangleConstraints_isValid(NoMotionRectangleConstraints* this, int64_t frame, BufferedImage* bufferedImage, Rectangle* rectangle);


void NoMotionRectangleConstraints_init(NoMotionRectangleConstraints* this) {
    MotionRectangleConstraints_init(&this->base);
        NoMotionRectangleConstraints_setMinDimension(this, Dimension_new(0, 0));
        NoMotionRectangleConstraints_setMinArea(this, 0);
        NoMotionRectangleConstraints_setMaxDimension(this, Dimension_new(Integer_MAX_VALUE, Integer_MAX_VALUE));
        NoMotionRectangleConstraints_setMaxMotionRectangles(this, Integer_MAX_VALUE);
}

NoMotionRectangleConstraints* NoMotionRectangleConstraints_new(void) {
    NoMotionRectangleConstraints* this = calloc(1, sizeof(NoMotionRectangleConstraints));
    NoMotionRectangleConstraints_init(this);
    return this;
}


bool NoMotionRectangleConstraints_isValid(NoMotionRectangleConstraints* this, int64_t frame, BufferedImage* bufferedImage, Rectangle* rectangle) {
        return true;
}

