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
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/image/opengles/OpenGLESImage.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/eclipse/swt/graphics/GC.h"
#include "org/microemu/device/swt/SwtImmutableImage.h"
#include "org/microemu/device/swt/SwtMutableImage.h"

typedef struct ImageRotationUtil ImageRotationUtil;
struct ImageRotationUtil {
    ImageSwtRotationUtil* imageSwtRotationUtil;
    Features* features;
};

static ImageRotationUtil* ImageRotationUtil_instance;

ImageRotationUtil* ImageRotationUtil_new(void);
ImageRotationUtil* ImageRotationUtil_getInstance(void);

void ImageRotationUtil_init(ImageRotationUtil* this);
void ImageRotationUtil_rotateImage(ImageRotationUtil* this, Image* originalImage, Image* image, int32_t totalAngle);
Image* ImageRotationUtil_createRotatedImage(ImageRotationUtil* this, Image* originalImage, int32_t rotationInDegrees);

// Static fields with runtime initializers: call this once at startup
void ImageRotationUtil_staticInit(void) {
    ImageRotationUtil_instance = ImageRotationUtil_new();
}

static void ImageRotationUtil_initFields(ImageRotationUtil* this) {
    this->imageSwtRotationUtil = ImageSwtRotationUtil_getInstance();
    this->features = Features_getInstance();
}


ImageRotationUtil* ImageRotationUtil_getInstance(void) {
        return ImageRotationUtil_instance;
}


void ImageRotationUtil_init(ImageRotationUtil* this) {
    ImageRotationUtil_initFields(this);
}

ImageRotationUtil* ImageRotationUtil_new(void) {
    ImageRotationUtil* this = calloc(1, sizeof(ImageRotationUtil));
    ImageRotationUtil_init(this);
    return this;
}


void ImageRotationUtil_rotateImage(ImageRotationUtil* this, Image* originalImage, Image* image, int32_t totalAngle) {
        Image* originalImage2 = originalImage;
        if (Features_isFeature(this->features, OpenGLFeatureFactory_getInstance()->OPENGL)) {
            if (Image_getType(image) >= OpenGLESImage_TYPE) {
                OpenGLESImage* openGLESImage = (((OpenGLESImage*) image));
                openGLESImage->openGLESImageProperties->angle = totalAngle;
                return;
            } else {
                PreLogUtil_put(java_concat(java_concat(java_concat("OpenGL but image is: ", java_string_of(image)), " type: "), java_string_of(Image_getType(image))), this, "rotateImage");
            }
        }
        Image* originalSwtImage = (((Image*) Image_getImage(originalImage2)));
        GC* gc = nullptr;
        Image* copySwtImage = nullptr;
        if (Image_isMutable(image)) {
            SwtMutableImage* swtImage = ((SwtMutableImage*) image);
            copySwtImage = ((Image*) SwtMutableImage_getImage(swtImage));
            gc = SwtMutableImage_getGc(swtImage);
            ImageSwtRotationUtil_rotateImage(this->imageSwtRotationUtil, originalSwtImage, copySwtImage, gc, totalAngle);
        } else {
            PreLogUtil_put(java_concat("No rotation for: ", Image_toString(image)), this, "rotateImage");
        }
}


// throws Exception
Image* ImageRotationUtil_createRotatedImage(ImageRotationUtil* this, Image* originalImage, int32_t rotationInDegrees) {
        return originalImage;
}

