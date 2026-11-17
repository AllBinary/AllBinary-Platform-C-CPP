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
// package org.allbinary.media.image.comparison

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

typedef struct ImageComparatorConstraintsInterface ImageComparatorConstraintsInterface;
struct ImageComparatorConstraintsInterface {
    int32_t (*getMaxNonMatchingPixelDeltas)(void* this);
    bool (*isCollisionWithAvoidRectangles)(void* this, Rectangle* rectangle);
    bool (*isCollisionWithAvoidRectangles)(void* this, GPoint* point);
    bool (*isColorAllowed)(void* this, int32_t frame, GPoint* point, Color* color);
    bool (*isImageValid)(void* this, BufferedImage* bufferedImage);
    bool (*isFrameAllowed)(void* this, int32_t frame);
};


