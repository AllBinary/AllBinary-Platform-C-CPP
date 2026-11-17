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
// #include "java/awt/Graphics2D.h"
// #include "java/awt/Image.h"
// #include "java/awt/image/BufferedImage.h"

typedef struct ImageJ2SERotationUtil ImageJ2SERotationUtil;
struct ImageJ2SERotationUtil {
    ImageUtil* imageUtil;
    ImageJ2SEUtil* imageJ2SEUtil;
    double TWO_PIE;
};

static ImageJ2SERotationUtil* ImageJ2SERotationUtil_instance;

ImageJ2SERotationUtil* ImageJ2SERotationUtil_new(void);
ImageJ2SERotationUtil* ImageJ2SERotationUtil_getInstance(void);

void ImageJ2SERotationUtil_init(ImageJ2SERotationUtil* this);
BufferedImage* ImageJ2SERotationUtil_getRotatedImage(ImageJ2SERotationUtil* this, Image* bufferedImage, int32_t totalAngle);
BufferedImage* ImageJ2SERotationUtil_getRotatedImageRadians(ImageJ2SERotationUtil* this, Image* bufferedImage, double radians);
static BufferedImage* ImageJ2SERotationUtil_drawRotatedImageRadians(ImageJ2SERotationUtil* this, Image* bufferedImage, BufferedImage* newBufferedImage, Graphics2D* g, double radians);
BufferedImage* ImageJ2SERotationUtil_rotateImage(ImageJ2SERotationUtil* this, Image* bufferedImage, BufferedImage* newBufferedImage, int32_t totalAngle);
BufferedImage* ImageJ2SERotationUtil_createRotatedImage(ImageJ2SERotationUtil* this, Image* bufferedImage, BufferedImage* newBufferedImage, int32_t totalAngle);
BufferedImage** ImageJ2SERotationUtil_getRotatedImages(ImageJ2SERotationUtil* this, Image* bufferedImage, int32_t numberOfFrames, int32_t totalAngle);
BufferedImage* ImageJ2SERotationUtil_createSpriteImage(ImageJ2SERotationUtil* this, BufferedImage** bufferedImageArray);

// Static fields with runtime initializers: call this once at startup
void ImageJ2SERotationUtil_staticInit(void) {
    ImageJ2SERotationUtil_instance = ImageJ2SERotationUtil_new();
}

static void ImageJ2SERotationUtil_initFields(ImageJ2SERotationUtil* this) {
    this->imageUtil = ImageUtil_getInstance();
    this->imageJ2SEUtil = ImageJ2SEUtil_getInstance();
    this->TWO_PIE = 2 * Math_PI;
}


ImageJ2SERotationUtil* ImageJ2SERotationUtil_getInstance(void) {
        return ImageJ2SERotationUtil_instance;
}


void ImageJ2SERotationUtil_init(ImageJ2SERotationUtil* this) {
    ImageJ2SERotationUtil_initFields(this);
}

ImageJ2SERotationUtil* ImageJ2SERotationUtil_new(void) {
    ImageJ2SERotationUtil* this = calloc(1, sizeof(ImageJ2SERotationUtil));
    ImageJ2SERotationUtil_init(this);
    return this;
}


BufferedImage* ImageJ2SERotationUtil_getRotatedImage(ImageJ2SERotationUtil* this, Image* bufferedImage, int32_t totalAngle) {
        return ImageJ2SERotationUtil_getRotatedImageRadians(this, bufferedImage, this->TWO_PIE * ((double) totalAngle) / 360.0);
}


BufferedImage* ImageJ2SERotationUtil_getRotatedImageRadians(ImageJ2SERotationUtil* this, Image* bufferedImage, double radians) {
        BufferedImage* newBufferedImage = ImageUtil_create(this->imageUtil, Image_getWidth(bufferedImage, nullptr), Image_getHeight(bufferedImage, nullptr));
        return ImageJ2SERotationUtil_drawRotatedImageRadians(this, bufferedImage, newBufferedImage, BufferedImage_createGraphics(newBufferedImage), radians);
}


static BufferedImage* ImageJ2SERotationUtil_drawRotatedImageRadians(ImageJ2SERotationUtil* this, Image* bufferedImage, BufferedImage* newBufferedImage, Graphics2D* g, double radians) {
        Graphics2D_rotate(g, radians, BufferedImage_getWidth(newBufferedImage, nullptr) / 2, BufferedImage_getHeight(newBufferedImage, nullptr) / 2);
        Graphics2D_drawImage(g, bufferedImage, 0, 0, Image_getWidth(bufferedImage, nullptr), Image_getHeight(bufferedImage, nullptr), nullptr);
        Graphics2D_dispose(g);
        return newBufferedImage;
}


BufferedImage* ImageJ2SERotationUtil_rotateImage(ImageJ2SERotationUtil* this, Image* bufferedImage, BufferedImage* newBufferedImage, int32_t totalAngle) {
        Graphics2D* g = BufferedImage_createGraphics(newBufferedImage);
        Graphics2D_setBackground(g, this->imageJ2SEUtil->TRANSPARENT_COLOR);
        Graphics2D_clearRect(g, 0, 0, BufferedImage_getWidth(newBufferedImage), BufferedImage_getHeight(newBufferedImage));
        return ImageJ2SERotationUtil_drawRotatedImageRadians(this, bufferedImage, newBufferedImage, g, this->TWO_PIE * ((double) totalAngle) / 360.0);
}


BufferedImage* ImageJ2SERotationUtil_createRotatedImage(ImageJ2SERotationUtil* this, Image* bufferedImage, BufferedImage* newBufferedImage, int32_t totalAngle) {
        Graphics2D* g = BufferedImage_createGraphics(newBufferedImage);
        return ImageJ2SERotationUtil_drawRotatedImageRadians(this, bufferedImage, newBufferedImage, g, this->TWO_PIE * ((double) totalAngle) / 360.0);
}


BufferedImage** ImageJ2SERotationUtil_getRotatedImages(ImageJ2SERotationUtil* this, Image* bufferedImage, int32_t numberOfFrames, int32_t totalAngle) {
        BufferedImage** bufferedImageArray = ((BufferedImage**) java_array_new(sizeof(BufferedImage*), numberOfFrames));
        double arc = (this->TWO_PIE) * ((double) totalAngle) / 360.0;
        int32_t size = java_array_length(bufferedImageArray);
        for (int32_t index = 0; index < size; index++) {
            double radians = (arc / ((double) size)) * ((double) index);
            bufferedImageArray[index] = ImageJ2SERotationUtil_getRotatedImageRadians(this, bufferedImage, radians);
        }
        return bufferedImageArray;
}


BufferedImage* ImageJ2SERotationUtil_createSpriteImage(ImageJ2SERotationUtil* this, BufferedImage** bufferedImageArray) {
        int32_t columns = 9;
        int32_t rows = 0;
        int32_t size = java_array_length(bufferedImageArray);
        if (size < columns) {
            columns = size;
        }
        rows = (size / columns);
        if (size % columns != 0) {
            rows++;
        }
        BufferedImage* firstBufferedImage = bufferedImageArray[0];
        BufferedImage* bufferedImage = ImageUtil_create(this->imageUtil, BufferedImage_getWidth(firstBufferedImage, nullptr) * columns, BufferedImage_getHeight(firstBufferedImage, nullptr) * rows);
        Graphics2D* g = Image_createGraphics(bufferedImage);
        int32_t columnIndex = 0;
        int32_t rowIndex = 0;
        BufferedImage* nextBufferedImage = nullptr;
        for (int32_t index = 0; index < size; index++) {
            if (index / 9 != 0 && index % 9 == 0) {
                rowIndex++;
                columnIndex = 0;
            }
            nextBufferedImage = bufferedImageArray[index];
            Graphics2D_drawImage(g, nextBufferedImage, BufferedImage_getWidth(nextBufferedImage, nullptr) * columnIndex, BufferedImage_getHeight(nextBufferedImage, nullptr) * rowIndex, BufferedImage_getWidth(nextBufferedImage, nullptr), BufferedImage_getHeight(nextBufferedImage, nullptr), nullptr);
            columnIndex++;
        }
        Graphics2D_dispose(g);
        return bufferedImage;
}

