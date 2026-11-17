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
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLUtil.h"
#include "org/allbinary/image/opengles/OpenGLESDeviceImageTranslate.h"
#include "org/allbinary/image/opengles/OpenGLESImage.h"
#include "org/allbinary/image/opengles/OpenGLESImageExclusionUtil.h"
#include "org/allbinary/image/opengles/OpenGLESImageProperties.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/eclipse/swt/graphics/ImageData.h"
#include "org/microemu/app/ui/swt/SwtDeviceComponent.h"
#include "org/microemu/device/swt/PostLoadSwtImmutableImageProcessor.h"
#include "org/microemu/device/swt/PostLoadSwtMutableImageProcessor.h"
#include "org/microemu/device/swt/SwtImmutableImage.h"
#include "org/microemu/device/swt/SwtMutableImage.h"

typedef struct ImageCopyUtil ImageCopyUtil;
struct ImageCopyUtil {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    GameFeatureFactory* gameFeatureFactory;
    Features* features;
    OpenGLFeatureFactory* openGLFeatureFactory;
    OpenGLUtil* openGLUtil;
    OpenGLESImageExclusionUtil* openGLESImageExclusionUtil;
    const char* NO_COPY;
    const char* UNABLE;
    const char* INFORMATION;
    const char* LEADERBOARD;
};

static ImageCopyUtil* ImageCopyUtil_instance;

ImageCopyUtil* ImageCopyUtil_new(void);
ImageCopyUtil* ImageCopyUtil_getInstance(void);

void ImageCopyUtil_init(ImageCopyUtil* this);
Image* ImageCopyUtil_createImageForRotation(ImageCopyUtil* this, Image* originalImage);
Image* ImageCopyUtil_createImage(ImageCopyUtil* this, Image* originalImage);
Image* ImageCopyUtil_createImageWH(ImageCopyUtil* this, Image* originalImage, int32_t width, int32_t height, bool mutable);
Image* ImageCopyUtil_createImage2(ImageCopyUtil* this, Image* originalImage, int32_t width, int32_t height, bool mutable);
Image* ImageCopyUtil_createImageScale(ImageCopyUtil* this, Image* originalImage, float canvasScale, bool resize);

// Static fields with runtime initializers: call this once at startup
void ImageCopyUtil_staticInit(void) {
    ImageCopyUtil_instance = ImageCopyUtil_new();
}

static void ImageCopyUtil_initFields(ImageCopyUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->gameFeatureFactory = GameFeatureFactory_getInstance();
    this->features = Features_getInstance();
    this->openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
    this->openGLUtil = OpenGLUtil_getInstance();
    this->openGLESImageExclusionUtil = OpenGLESImageExclusionUtil_getInstance();
    this->NO_COPY = "SWT should not copy images after initial loading as the alpha is not honored";
    this->UNABLE = "Unable to scale image without dimensions";
    this->INFORMATION = "about_";
    this->LEADERBOARD = "leaderboard";
}


ImageCopyUtil* ImageCopyUtil_getInstance(void) {
        return ImageCopyUtil_instance;
}


void ImageCopyUtil_init(ImageCopyUtil* this) {
    ImageCopyUtil_initFields(this);
}

ImageCopyUtil* ImageCopyUtil_new(void) {
    ImageCopyUtil* this = calloc(1, sizeof(ImageCopyUtil));
    ImageCopyUtil_init(this);
    return this;
}


// throws Exception
Image* ImageCopyUtil_createImageForRotation(ImageCopyUtil* this, Image* originalImage) {
        if (Features_isFeature(this->features, this->openGLFeatureFactory->OPENGL)) {
            Image* image = originalImage;
            image = OpenGLUtil_addImage(this->openGLUtil, image);
            return image;
        } else {
            return ImageCopyUtil_createImage(this, originalImage);
        }
}


// throws Exception
Image* ImageCopyUtil_createImage(ImageCopyUtil* this, Image* originalImage) {
        if (!Features_isFeature(this->features, this->gameFeatureFactory->POST_IMAGE_LOADING_MODIFICATION)) {
            LogUtil_putF(this->logUtil, this->NO_COPY, this, this->commonStrings->CONSTRUCTOR);
            return originalImage;
        }
        Image* originalImage2 = originalImage;
        if (Features_isFeature(this->features, this->openGLFeatureFactory->OPENGL)) {
            if (Image_getType(originalImage) >= OpenGLESImage_TYPE) {
                OpenGLESImage* openGLESImage = (((OpenGLESImage*) originalImage));
                originalImage2 = JAVA_CALL(openGLESImage->openGLBitmap, getImage);
            }
        }
        Image* image = nullptr;
        if (Image_isMutable(originalImage2)) {
            SwtMutableImage* originalMutableImage = ((SwtMutableImage*) originalImage2);
            image = SwtMutableImage_new(SwtDeviceComponent_createImage(JAVA_CALL(originalMutableImage->image, getImageData)));
        } else {
            SwtImmutableImage* originalImmutableImage = ((SwtImmutableImage*) originalImage2);
            image = SwtMutableImage_new(SwtDeviceComponent_createImage(JAVA_CALL(originalImmutableImage->image, getImageData)));
        }
        image = OpenGLUtil_addImage(this->openGLUtil, image);
        return image;
}


// throws Exception
Image* ImageCopyUtil_createImageWH(ImageCopyUtil* this, Image* originalImage, int32_t width, int32_t height, bool mutable) {
        Image* originalImage2 = originalImage;
        if (!Features_isFeature(this->features, this->gameFeatureFactory->POST_IMAGE_LOADING_MODIFICATION)) {
            LogUtil_putF(this->logUtil, this->NO_COPY, this, this->commonStrings->CONSTRUCTOR);
            return originalImage;
        }
        if (Features_isFeature(this->features, this->openGLFeatureFactory->OPENGL)) {
            if (OpenGLESImageExclusionUtil_isCustomScaling(this->openGLESImageExclusionUtil, originalImage)) {
                return ImageCopyUtil_createImage2(this, originalImage, width, height, mutable);
            }
            if (Image_getType(originalImage) >= OpenGLESImage_TYPE) {
                OpenGLESImage* openGLESImage = (((OpenGLESImage*) originalImage));
                originalImage2 = JAVA_CALL(openGLESImage->openGLBitmap, getImage);
            }
        }
        Image* image = nullptr;
        if (Image_isMutable(originalImage2) && mutable) {
            SwtMutableImage* originalMutableImage = ((SwtMutableImage*) originalImage2);
            if (SwtMutableImage_getImage(originalMutableImage) != nullptr) {
                ImageData* imageData2 = JAVA_CALL(originalMutableImage->image, getImageData);
                ImageData* imageData = ImageData_scaledTo(imageData2, width, height);
                image = SwtMutableImage_new(SwtDeviceComponent_createImage(imageData));
            } else {
                image = SwtMutableImage_new(SwtMutableImage_getName(originalMutableImage), PostLoadSwtMutableImageProcessor_new(originalMutableImage));
            }
        } else {
            SwtImmutableImage* originalImmutableImage = ((SwtImmutableImage*) originalImage2);
            if (SwtImmutableImage_getImage(originalImmutableImage) != nullptr) {
                ImageData* imageData2 = JAVA_CALL(originalImmutableImage->image, getImageData);
                if (width > 0 && height > 0) {
                    ImageData* imageData = ImageData_scaledTo(imageData2, width, height);
                    image = SwtImmutableImage_new(Image_getName(originalImage), SwtDeviceComponent_createImage(imageData));
                } else {
                    LogUtil_putF(this->logUtil, this->UNABLE, this, this->commonStrings->CONSTRUCTOR);
                    image = SwtImmutableImage_new(SwtImmutableImage_getName(originalImmutableImage), PostLoadSwtImmutableImageProcessor_new(originalImmutableImage));
                }
            } else {
                image = SwtImmutableImage_new(SwtImmutableImage_getName(originalImmutableImage), PostLoadSwtImmutableImageProcessor_new(originalImmutableImage));
            }
        }
        image = OpenGLUtil_addImage(this->openGLUtil, image);
        return image;
}


// throws Exception
Image* ImageCopyUtil_createImage2(ImageCopyUtil* this, Image* originalImage, int32_t width, int32_t height, bool mutable) {
        Image* originalImage2 = originalImage;
        if (!Features_isFeature(this->features, this->gameFeatureFactory->POST_IMAGE_LOADING_MODIFICATION)) {
            LogUtil_putF(this->logUtil, this->NO_COPY, this, this->commonStrings->CONSTRUCTOR);
            return originalImage;
        }
        Image* image = nullptr;
        if (Features_isFeature(this->features, this->openGLFeatureFactory->OPENGL)) {
            DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton_getInstance();
            if (Image_getType(originalImage) >= OpenGLESImage_TYPE) {
                OpenGLESImage* openGLESImage = (((OpenGLESImage*) originalImage));
                OpenGLESImageProperties* openGLESImageProperties = openGLESImage->openGLESImageProperties;
                int32_t openGLWidth = JAVA_CALL(openGLESImage->openGLBitmap, getWidth);
                int32_t openGLHeight = JAVA_CALL(openGLESImage->openGLBitmap, getHeight);
                openGLESImageProperties->scaleX2 = ((((float) width)) / ((float) openGLWidth));
                openGLESImageProperties->scaleX = openGLESImageProperties->scaleX2;
                openGLESImageProperties->scaleY2 = ((((float) height)) / ((float) openGLHeight));
                openGLESImageProperties->scaleY = openGLESImageProperties->scaleY2;
                openGLESImageProperties->scaleX = openGLESImageProperties->scaleX * 0.75f;
                openGLESImageProperties->scaleY = openGLESImageProperties->scaleY * 0.75f;
                if (Image_getHeight(originalImage) % 2 != 0) {
                    openGLESImageProperties->scaleX2 += 1.0f / ((float) openGLWidth);
                    openGLESImageProperties->scaleY2 += 1.0f / ((float) openGLHeight);
                }
                image = openGLESImage;
            } else {
                image = originalImage;
                OpenGLESImage* openGLESImage = ((OpenGLESImage*) OpenGLUtil_addImage(this->openGLUtil, image));
                OpenGLESImageProperties* openGLESImageProperties = openGLESImage->openGLESImageProperties;
                openGLESImageProperties->scaleX2 = ((float) ((((float) width)) / OpenGLESImage_getWidth(openGLESImage)));
                openGLESImageProperties->scaleX = openGLESImageProperties->scaleX2;
                openGLESImageProperties->scaleY2 = ((float) ((((float) height)) / OpenGLESImage_getHeight(openGLESImage)));
                openGLESImageProperties->scaleY = openGLESImageProperties->scaleY2;
                if (JAVA_CALL(Image_getName(image), startsWith, this->INFORMATION)) {
                    openGLESImage->openGLESImageTranslate = OpenGLESDeviceImageTranslate_new();
                    OpenGLESDeviceImageTranslate* openGLESDeviceImageTranslate = ((OpenGLESDeviceImageTranslate*) openGLESImage->openGLESImageTranslate);
                    openGLESDeviceImageTranslate->translateX = DisplayInfoSingleton_getLastWidth(displayInfoSingleton) / 1.4f / openGLESImageProperties->scaleX;
                    openGLESDeviceImageTranslate->translateY = DisplayInfoSingleton_getLastHeight(displayInfoSingleton) / 4 / openGLESImageProperties->scaleY;
                    openGLESImageProperties->scaleX = openGLESImageProperties->scaleX * 0.25f;
                    openGLESImageProperties->scaleY = openGLESImageProperties->scaleY * 0.25f;
                } else {
                    openGLESImageProperties->scaleX = openGLESImageProperties->scaleX * 0.75f;
                    openGLESImageProperties->scaleY = openGLESImageProperties->scaleY * 0.75f;
                    if (JAVA_CALL(Image_getName(image), startsWith, this->LEADERBOARD)) {
                        openGLESImage->openGLESImageTranslate = OpenGLESDeviceImageTranslate_new();
                        OpenGLESDeviceImageTranslate* openGLESDeviceImageTranslate = ((OpenGLESDeviceImageTranslate*) openGLESImage->openGLESImageTranslate);
                        openGLESDeviceImageTranslate->translateX = -DisplayInfoSingleton_getLastWidth(displayInfoSingleton) / 40 / openGLESImageProperties->scaleX;
                    }
                    if (JAVA_CALL(Image_getName(image), startsWith, this->LEADERBOARD)) {
                    } else {
                        openGLESImageProperties->scaleX = 1.0f;
                        openGLESImageProperties->scaleY = 1.0f;
                    }
                }
                image = openGLESImage;
            }
        } else {
            if (Image_isMutable(originalImage2) && mutable) {
                SwtMutableImage* originalMutableImage = ((SwtMutableImage*) originalImage2);
                if (SwtMutableImage_getImage(originalMutableImage) != nullptr) {
                    ImageData* imageData2 = JAVA_CALL(originalMutableImage->image, getImageData);
                    ImageData* imageData = ImageData_scaledTo(imageData2, width, height);
                    image = SwtMutableImage_new(SwtDeviceComponent_createImage(imageData));
                } else {
                    image = SwtMutableImage_new(SwtMutableImage_getName(originalMutableImage), PostLoadSwtMutableImageProcessor_new(originalMutableImage));
                }
            } else {
                SwtImmutableImage* originalImmutableImage = ((SwtImmutableImage*) originalImage2);
                if (SwtImmutableImage_getImage(originalImmutableImage) != nullptr) {
                    ImageData* imageData2 = JAVA_CALL(originalImmutableImage->image, getImageData);
                    ImageData* imageData = ImageData_scaledTo(imageData2, width, height);
                    image = SwtImmutableImage_new(Image_getName(originalImage), SwtDeviceComponent_createImage(imageData));
                } else {
                    image = SwtImmutableImage_new(SwtImmutableImage_getName(originalImmutableImage), PostLoadSwtImmutableImageProcessor_new(originalImmutableImage));
                }
            }
            image = OpenGLUtil_addImage(this->openGLUtil, image);
        }
        return image;
}


// throws Exception
Image* ImageCopyUtil_createImageScale(ImageCopyUtil* this, Image* originalImage, float canvasScale, bool resize) {
        if (!Features_isFeature(this->features, this->gameFeatureFactory->POST_IMAGE_LOADING_MODIFICATION)) {
            LogUtil_putF(this->logUtil, this->NO_COPY, this, this->commonStrings->CONSTRUCTOR);
            return originalImage;
        }
        int32_t newWidth = ((int32_t) (Image_getWidth(originalImage) * canvasScale));
        int32_t newHeight = ((int32_t) (Image_getHeight(originalImage) * canvasScale));
        if (resize) {
            if (newWidth < newHeight) {
                newWidth = newHeight;
            }
            if (newHeight < newWidth) {
                newHeight = newWidth;
            }
        }
        Image* image = ImageCopyUtil_createImageWH(this, originalImage, newWidth, newHeight, true);
        if (Image_isMutable(image)) {
            ImageData* originalImageData = Image_getImageData((((Image*) Image_getImage(originalImage))));
            SwtMutableImage* mutableImage2 = ((SwtMutableImage*) image);
            int32_t halfWidthDelta = (newWidth - Image_getWidth(originalImage)) / 2;
            int32_t halfHeightDelta = (newHeight - Image_getHeight(originalImage)) / 2;
            int32_t* originalPixelArray = ((int32_t*) java_array_new(sizeof(int32_t), Image_getWidth(originalImage) * Image_getHeight(originalImage)));
            int32_t* newPixelArray = ((int32_t*) java_array_new(sizeof(int32_t), Image_getWidth(image) * Image_getHeight(image)));
            int32_t width = Image_getWidth(originalImage);
            int32_t height = Image_getHeight(originalImage);
            for (int32_t i = 0; i < height; i++) {
                ImageData_getPixels(originalImageData, 0, i, width, originalPixelArray, (i * width));
            }
            for (int32_t index = halfWidthDelta; index < width; index++) {
                for (int32_t index2 = halfHeightDelta; index2 < height; index2++) {
                    newPixelArray[index + (index2 * width)] = originalPixelArray[(index - halfWidthDelta) + ((index2 - halfHeightDelta) * width)];
                }
            }
            JAVA_CALL(Image_getImageData((((Image*) SwtMutableImage_getImage(mutableImage2)))), setPixels, 0, 0, Image_getWidth(image), newPixelArray, 0);
            return image;
        } else {
            SwtImmutableImage* originalImmutableImage = ((SwtImmutableImage*) image);
            ImageData* originalImageData = Image_getImageData((((Image*) Image_getImage(originalImage))));
            int32_t halfWidthDelta = (newWidth - Image_getWidth(originalImage)) / 2;
            int32_t halfHeightDelta = (newHeight - Image_getHeight(originalImage)) / 2;
            int32_t* originalPixelArray = ((int32_t*) java_array_new(sizeof(int32_t), Image_getWidth(originalImage) * Image_getHeight(originalImage)));
            int32_t* newPixelArray = ((int32_t*) java_array_new(sizeof(int32_t), Image_getWidth(image) * Image_getHeight(image)));
            int32_t width = Image_getWidth(originalImage);
            int32_t height = Image_getHeight(originalImage);
            for (int32_t i = 0; i < height; i++) {
                ImageData_getPixels(originalImageData, 0, i, width, originalPixelArray, (i * width));
            }
            for (int32_t index = halfWidthDelta; index < width; index++) {
                for (int32_t index2 = halfHeightDelta; index2 < height; index2++) {
                    newPixelArray[index + (index2 * width)] = originalPixelArray[(index - halfWidthDelta) + ((index2 - halfHeightDelta) * width)];
                }
            }
            JAVA_CALL(Image_getImageData((((Image*) SwtImmutableImage_getImage(originalImmutableImage)))), setPixels, 0, 0, Image_getWidth(image), newPixelArray, 0);
            return image;
        }
}

