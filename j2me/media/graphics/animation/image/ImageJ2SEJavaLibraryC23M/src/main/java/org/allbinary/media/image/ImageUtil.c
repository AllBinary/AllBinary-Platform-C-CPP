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
// #include "java/awt/GraphicsConfiguration.h"
// #include "java/awt/GraphicsDevice.h"
// #include "java/awt/GraphicsEnvironment.h"
// #include "java/awt/Transparency.h"
// #include "java/awt/geom/AffineTransform.h"
// #include "java/awt/image/BufferedImage.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/microemu/device/j2se/J2SEImmutableImage.h"
#include "org/microemu/device/j2se/J2SEMutableImage.h"

typedef struct ImageUtil ImageUtil;
struct ImageUtil {
    CommonStrings* commonStrings;
    CommonSeps* commonSeps;
    const char* IIOIMAGE_POOL_NAME;
    const char* CREATE_BUFFERED_IMAGE;
};

static ImageUtil* ImageUtil_instance;

ImageUtil* ImageUtil_new(void);
ImageUtil* ImageUtil_getInstance(void);

void ImageUtil_init(ImageUtil* this);
static GraphicsConfiguration* ImageUtil_getDefaultConfiguration(ImageUtil* this);
BufferedImage* ImageUtil_create(ImageUtil* this, int32_t width, int32_t height);
BufferedImage** ImageUtil_createBufferedImageForResize(ImageUtil* this, BufferedImage** bufferedImageArray, int32_t percent, bool scale);
BufferedImage** ImageUtil_createBufferedImage2(ImageUtil* this, BufferedImage** bufferedImageArray, float percent, bool scale);
BufferedImage** ImageUtil_createBufferedImage3(ImageUtil* this, BufferedImage** bufferedImageArray, int32_t width, int32_t height, bool scale);
BufferedImage* ImageUtil_createBufferedImageForSave(ImageUtil* this, BufferedImage* bufferedImage, int32_t newWidth, int32_t newHeight);
BufferedImage* ImageUtil_createBufferedImage(ImageUtil* this, BufferedImage* bufferedImage, int32_t newWidth, int32_t newHeight, bool scale);
BufferedImage* ImageUtil_createBufferedImageAllowTranslate(ImageUtil* this, BufferedImage* bufferedImage, int32_t newWidth, int32_t newHeight, bool scale, bool allowTranslate);
BufferedImage* ImageUtil_createBufferedImageWithLargerCanvas(ImageUtil* this, BufferedImage* bufferedImage, int32_t newWidth, int32_t newHeight);
BufferedImage* ImageUtil_convertToBufferedImage(ImageUtil* this, Image* toolkitImage);
BufferedImage* ImageUtil_getBufferedImage(ImageUtil* this, Image* image);
const char* ImageUtil_toString(ImageUtil* this, BufferedImage* bufferedImage);

// Static fields with runtime initializers: call this once at startup
void ImageUtil_staticInit(void) {
    ImageUtil_instance = ImageUtil_new();
}

static void ImageUtil_initFields(ImageUtil* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->commonSeps = CommonSeps_getInstance();
    this->IIOIMAGE_POOL_NAME = "IIOIMAGE_POOL_NAME";
    this->CREATE_BUFFERED_IMAGE = "createBufferedImage";
}


ImageUtil* ImageUtil_getInstance(void) {
        return ImageUtil_instance;
}


void ImageUtil_init(ImageUtil* this) {
    ImageUtil_initFields(this);
}

ImageUtil* ImageUtil_new(void) {
    ImageUtil* this = calloc(1, sizeof(ImageUtil));
    ImageUtil_init(this);
    return this;
}


static GraphicsConfiguration* ImageUtil_getDefaultConfiguration(ImageUtil* this) {
        GraphicsEnvironment* ge = GraphicsEnvironment_getLocalGraphicsEnvironment();
        GraphicsDevice* gd = GraphicsEnvironment_getDefaultScreenDevice(ge);
        return GraphicsDevice_getDefaultConfiguration(gd);
}


BufferedImage* ImageUtil_create(ImageUtil* this, int32_t width, int32_t height) {
        GraphicsConfiguration* graphicsConfiguration = ImageUtil_getDefaultConfiguration(this);
        return GraphicsConfiguration_createCompatibleImage(graphicsConfiguration, width, height, Transparency_TRANSLUCENT);
}


// throws Exception
BufferedImage** ImageUtil_createBufferedImageForResize(ImageUtil* this, BufferedImage** bufferedImageArray, int32_t percent, bool scale) {
        int32_t size = java_array_length(bufferedImageArray);
        BufferedImage** scaledBufferedImageArray = ((BufferedImage**) java_array_new(sizeof(BufferedImage*), size));
        BufferedImage* bufferedImage = nullptr;
        for (int32_t index = 0; index < size; index++) {
            bufferedImage = bufferedImageArray[index];
            int32_t newWidth = ((int32_t) (BufferedImage_getWidth(bufferedImage) * percent / 100));
            int32_t newHeight = ((int32_t) (BufferedImage_getHeight(bufferedImage) * percent / 100));
            scaledBufferedImageArray[index] = ImageUtil_createBufferedImage(this, bufferedImage, newWidth, newHeight, scale);
        }
        return scaledBufferedImageArray;
}


// throws Exception
BufferedImage** ImageUtil_createBufferedImage2(ImageUtil* this, BufferedImage** bufferedImageArray, float percent, bool scale) {
        int32_t size = java_array_length(bufferedImageArray);
        BufferedImage** scaledBufferedImageArray = ((BufferedImage**) java_array_new(sizeof(BufferedImage*), size));
        BufferedImage* bufferedImage = nullptr;
        for (int32_t index = 0; index < size; index++) {
            bufferedImage = bufferedImageArray[index];
            int32_t newWidth = ((int32_t) (BufferedImage_getWidth(bufferedImage) * percent));
            int32_t newHeight = ((int32_t) (BufferedImage_getHeight(bufferedImage) * percent));
            scaledBufferedImageArray[index] = ImageUtil_createBufferedImage(this, bufferedImage, newWidth, newHeight, scale);
        }
        return scaledBufferedImageArray;
}


// throws Exception
BufferedImage** ImageUtil_createBufferedImage3(ImageUtil* this, BufferedImage** bufferedImageArray, int32_t width, int32_t height, bool scale) {
        int32_t size = java_array_length(bufferedImageArray);
        BufferedImage** scaledBufferedImageArray = ((BufferedImage**) java_array_new(sizeof(BufferedImage*), size));
        for (int32_t index = 0; index < size; index++) {
            scaledBufferedImageArray[index] = ImageUtil_createBufferedImage(this, bufferedImageArray[index], width, height, scale);
        }
        return scaledBufferedImageArray;
}


// throws Exception
BufferedImage* ImageUtil_createBufferedImageForSave(ImageUtil* this, BufferedImage* bufferedImage, int32_t newWidth, int32_t newHeight) {
        return ImageUtil_createBufferedImage(this, bufferedImage, newWidth, newHeight, true);
}


// throws Exception
BufferedImage* ImageUtil_createBufferedImage(ImageUtil* this, BufferedImage* bufferedImage, int32_t newWidth, int32_t newHeight, bool scale) {
        return ImageUtil_createBufferedImageAllowTranslate(this, bufferedImage, newWidth, newHeight, scale, false);
}


// throws Exception
BufferedImage* ImageUtil_createBufferedImageAllowTranslate(ImageUtil* this, BufferedImage* bufferedImage, int32_t newWidth, int32_t newHeight, bool scale, bool allowTranslate) {
        double width = BufferedImage_getWidth(bufferedImage);
        double height = BufferedImage_getHeight(bufferedImage);
        double d_newWidth = ((double) newWidth);
        double d_newHeight = ((double) newHeight);
        double widthRatio = d_newWidth / width;
        double heightRatio = d_newHeight / height;
        double ratioX = 1.0;
        double ratioY = 1.0;
        if (scale) {
            ratioX = widthRatio;
            ratioY = heightRatio;
        }
        AffineTransform* affineTransform = AffineTransform_getScaleInstance(ratioX, ratioY);
        if (!scale && allowTranslate) {
            double dx = (((double) newWidth) - width) / 2.0;
            double dy = (((double) newHeight) - height) / 2.0;
            AffineTransform_translate(affineTransform, dx, dy);
        }
        BufferedImage* newBufferedImage = BufferedImage_new(newWidth, newHeight, BufferedImage_TYPE_INT_ARGB_PRE);
        Graphics2D* graphics = BufferedImage_createGraphics(newBufferedImage);
        Graphics2D_drawRenderedImage(graphics, bufferedImage, affineTransform);
        return newBufferedImage;
}


// throws Exception
BufferedImage* ImageUtil_createBufferedImageWithLargerCanvas(ImageUtil* this, BufferedImage* bufferedImage, int32_t newWidth, int32_t newHeight) {
        double width = BufferedImage_getWidth(bufferedImage);
        double height = BufferedImage_getHeight(bufferedImage);
        double d_newWidth = ((double) newWidth);
        double d_newHeight = ((double) newHeight);
        double widthRatio = d_newWidth / width;
        double heightRatio = d_newHeight / height;
        int32_t dx2 = ((int32_t) (((double) newWidth) - width));
        int32_t dy2 = ((int32_t) (((double) newHeight) - height));
        int32_t dx = dx2 / 2;
        int32_t dy = dy2 / 2;
        int32_t dx4 = dx2 / 4;
        int32_t dy4 = dy2 / 4;
        BufferedImage* newBufferedImage = BufferedImage_new(newWidth, newHeight, BufferedImage_TYPE_INT_ARGB_PRE);
        Graphics2D* graphics = BufferedImage_createGraphics(newBufferedImage);
        Graphics2D_drawImage(graphics, bufferedImage, dx4, dy4, nullptr);
        return newBufferedImage;
}


BufferedImage* ImageUtil_convertToBufferedImage(ImageUtil* this, Image* toolkitImage) {
        if (toolkitImage == nullptr) {
            return nullptr;
        }
        BufferedImage* bufferedImage = BufferedImage_new(Image_getWidth(toolkitImage, nullptr), Image_getHeight(toolkitImage, nullptr), BufferedImage_TYPE_INT_ARGB);
        Graphics2D* g2d = BufferedImage_createGraphics(bufferedImage);
        Graphics2D_drawImage(g2d, toolkitImage, 0, 0, nullptr);
        Graphics2D_dispose(g2d);
        return bufferedImage;
}


BufferedImage* ImageUtil_getBufferedImage(ImageUtil* this, Image* image) {
        BufferedImage* bufferedImage = nullptr;
        if (Image_isMutable(image)) {
            J2SEMutableImage* j2seImage = ((J2SEMutableImage*) image);
            bufferedImage = ((BufferedImage*) J2SEImmutableImage_getImage(j2seImage));
        } else {
            J2SEImmutableImage* j2seImage = ((J2SEImmutableImage*) image);
            bufferedImage = ((BufferedImage*) J2SEImmutableImage_getImage(j2seImage));
        }
        return bufferedImage;
}


const char* ImageUtil_toString(ImageUtil* this, BufferedImage* bufferedImage) {
        CommonLabels* commonLabels = CommonLabels_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, " BufferedImage -");
        StringMaker_append(stringBuffer, commonLabels->WIDTH_LABEL);
        StringMaker_appendint(stringBuffer, ((int32_t) BufferedImage_getWidth(bufferedImage)));
        StringMaker_append(stringBuffer, commonLabels->HEIGHT_LABEL);
        StringMaker_appendint(stringBuffer, ((int32_t) BufferedImage_getHeight(bufferedImage)));
        StringMaker_append(stringBuffer, " Type: ");
        StringMaker_appendint(stringBuffer, ((int32_t) BufferedImage_getType(bufferedImage)));
        return StringMaker_toString(stringBuffer);
}

