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
// #include "java/awt/geom/AffineTransform.h"
// #include "java/awt/image/AffineTransformOp.h"
// #include "java/awt/image/BufferedImage.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct MirrorImageUtil MirrorImageUtil;
struct MirrorImageUtil {
    LogUtil* logUtil;
    ImageUtil* imageUtil;
};

static MirrorImageUtil* MirrorImageUtil_instance;

MirrorImageUtil* MirrorImageUtil_new(void);
MirrorImageUtil* MirrorImageUtil_getInstance(void);

void MirrorImageUtil_init(MirrorImageUtil* this);
BufferedImage* MirrorImageUtil_getImage(MirrorImageUtil* this, BufferedImage* bufferedImage, bool verticle, bool horizontal);
BufferedImage** MirrorImageUtil_getImages(MirrorImageUtil* this, BufferedImage* bufferedImage, bool verticle, bool horizontal);

// Static fields with runtime initializers: call this once at startup
void MirrorImageUtil_staticInit(void) {
    MirrorImageUtil_instance = MirrorImageUtil_new();
}

static void MirrorImageUtil_initFields(MirrorImageUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->imageUtil = ImageUtil_getInstance();
}


MirrorImageUtil* MirrorImageUtil_getInstance(void) {
        return MirrorImageUtil_instance;
}


void MirrorImageUtil_init(MirrorImageUtil* this) {
    MirrorImageUtil_initFields(this);
}

MirrorImageUtil* MirrorImageUtil_new(void) {
    MirrorImageUtil* this = calloc(1, sizeof(MirrorImageUtil));
    MirrorImageUtil_init(this);
    return this;
}


BufferedImage* MirrorImageUtil_getImage(MirrorImageUtil* this, BufferedImage* bufferedImage, bool verticle, bool horizontal) {
        LogUtil_putF(this->logUtil, "Starting", this, "getImage");
        BufferedImage* newBufferedImage = ImageUtil_create(this->imageUtil, BufferedImage_getWidth(bufferedImage, nullptr), BufferedImage_getHeight(bufferedImage, nullptr));
        Graphics2D* g = BufferedImage_createGraphics(newBufferedImage);
        if (verticle) {
            AffineTransform* tx = AffineTransform_getScaleInstance(1, -1);
            AffineTransform_translate(tx, 0, -BufferedImage_getHeight(bufferedImage, nullptr));
            AffineTransformOp* op = AffineTransformOp_new(tx, AffineTransformOp_TYPE_NEAREST_NEIGHBOR);
            bufferedImage = AffineTransformOp_filter(op, bufferedImage, nullptr);
        }
        if (horizontal) {
            AffineTransform* tx = AffineTransform_getScaleInstance(-1, 1);
            AffineTransform_translate(tx, -BufferedImage_getWidth(bufferedImage, nullptr), 0);
            AffineTransformOp* op = AffineTransformOp_new(tx, AffineTransformOp_TYPE_NEAREST_NEIGHBOR);
            bufferedImage = AffineTransformOp_filter(op, bufferedImage, nullptr);
        }
        Graphics2D_drawImage(g, bufferedImage, 0, 0, BufferedImage_getWidth(bufferedImage, nullptr), BufferedImage_getHeight(bufferedImage, nullptr), nullptr);
        Graphics2D_dispose(g);
        return newBufferedImage;
}


BufferedImage** MirrorImageUtil_getImages(MirrorImageUtil* this, BufferedImage* bufferedImage, bool verticle, bool horizontal) {
        int32_t width = BufferedImage_getWidth(bufferedImage);
        int32_t height = BufferedImage_getHeight(bufferedImage);
        int32_t cellHeight = height;
        int32_t cellWidth = height;
        int32_t numberOfFramesPerOrientation = width / cellWidth;
        int32_t numberOfFrames = numberOfFramesPerOrientation;
        if (verticle) {
            numberOfFrames *= 2;
        }
        if (horizontal) {
            numberOfFrames *= 2;
        }
        LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat("numberOfFramesPerOrientation: ", java_string_of(numberOfFramesPerOrientation)), " numberOfFrames: "), java_string_of(numberOfFrames)), this, "getImages");
        BufferedImage** bufferedImageArray = ((BufferedImage**) java_array_new(sizeof(BufferedImage*), numberOfFrames));
        int32_t y = 0;
        for (int32_t index = 0; index < numberOfFramesPerOrientation; index++) {
            int32_t x = index * cellWidth;
            bufferedImageArray[index] = BufferedImage_getSubimage(bufferedImage, x, y, cellWidth, cellHeight);
        }
        for (int32_t index = 0; index < numberOfFramesPerOrientation; index++) {
            bufferedImageArray[index + numberOfFramesPerOrientation] = MirrorImageUtil_getImage(this, bufferedImageArray[index], verticle, horizontal);
        }
        return bufferedImageArray;
}

