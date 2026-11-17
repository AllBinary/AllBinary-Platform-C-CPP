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
// package org.allbinary.media.image.comparison.motion

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/image/BufferedImage.h"

typedef struct MotionRectangleConstraintsInterface MotionRectangleConstraintsInterface;
struct MotionRectangleConstraintsInterface {
    int32_t (*getMaxMotionRectangles)(void* this);
    Dimension* (*getMinDimension)(void* this);
    int32_t (*getMinArea)(void* this);
    Dimension* (*getMaxDimension)(void* this);
    bool (*isTooSmall)(void* this, Rectangle* rectangle);
    bool (*isAreaTooSmall)(void* this, Rectangle* rectangle);
    bool (*isTooBig)(void* this, Rectangle* rectangle);
    bool (*isValid)(void* this, int64_t frame, BufferedImage* bufferedImage, Rectangle* rectangle);
};


