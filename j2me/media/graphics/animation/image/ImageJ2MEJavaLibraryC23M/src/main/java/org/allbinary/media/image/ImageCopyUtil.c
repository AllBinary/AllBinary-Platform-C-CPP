// Generated Code Do Not Modify
#include "org/allbinary/media/image/ImageCopyUtil.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/media/image/ImageCreationUtil.h"
#if __has_include("javax/microedition/lcdui/Graphics.h")
#include "javax/microedition/lcdui/Graphics.h"
#endif


static ImageCopyUtil* ImageCopyUtil_instance;






void ImageCopyUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ImageCopyUtil_instance = ImageCopyUtil_new();
}

void ImageCopyUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageCopyUtil", nullptr);
    java_register_method("ImageCopyUtil", "createImageForRotation", (void*) ImageCopyUtil_createImageForRotation);
    java_register_method("ImageCopyUtil", "createImage", (void*) ImageCopyUtil_createImage);
    java_register_method("ImageCopyUtil", "createImageScale", (void*) ImageCopyUtil_createImageScale);
}

static void ImageCopyUtil_initFields(ImageCopyUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->imageCreationUtil = ImageCreationUtil_getInstance();
    this->anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
    this->gameFeatureFactory = GameFeatureFactory_getInstance();
    this->features = Features_getInstance();
    this->NO_COPY = "J2ME does not need to copy images after initial loading";
}


ImageCopyUtil* ImageCopyUtil_getInstance(void) {
        return (ImageCopyUtil_staticInit(), ImageCopyUtil_instance);
}


void ImageCopyUtil_init(ImageCopyUtil* this) {
    ImageCopyUtil_register();
    ImageCopyUtil_initFields(this);
}

ImageCopyUtil* ImageCopyUtil_new(void) {
    ImageCopyUtil* this = java_object_alloc(sizeof(ImageCopyUtil), "ImageCopyUtil");
    ImageCopyUtil_init(this);
    return this;
}


// throws Exception
Image* ImageCopyUtil_createImageForRotation(ImageCopyUtil* this, Image* originalImage) {
        return ImageCopyUtil_createImage(this, originalImage);
}


// throws Exception
Image* ImageCopyUtil_createImage(ImageCopyUtil* this, Image* originalImage) {
        if (!Features_isFeature(this->features, this->gameFeatureFactory->POST_IMAGE_LOADING_MODIFICATION)) {
            LogUtil_put(this->logUtil, this->NO_COPY, this, this->commonStrings->CONSTRUCTOR, java_exception_new("Exception", ""));
            return originalImage;
        }
        Image* image = ImageCreationUtil_createImageWH(this->imageCreationUtil, Image_getWidth(originalImage), Image_getHeight(originalImage));
        if (Image_isMutable(image)) {
            Graphics_drawImage(Image_getGraphics(image), originalImage, 0, 0, this->anchor);
            return image;
        } else {
            java_throw(java_exception_new("Exception", "Not Mutable"));
        }
}


// throws Exception
Image* ImageCopyUtil_createImageScale(ImageCopyUtil* this, Image* originalImage, float canvasScale, bool resize) {
        if (!Features_isFeature(this->features, this->gameFeatureFactory->POST_IMAGE_LOADING_MODIFICATION)) {
            LogUtil_put(this->logUtil, this->NO_COPY, this, this->commonStrings->CONSTRUCTOR, java_exception_new("Exception", ""));
            return originalImage;
        }
        int32_t newWidth = ((int32_t) (((float) Image_getWidth(originalImage)) * canvasScale));
        int32_t newHeight = ((int32_t) (((float) Image_getHeight(originalImage)) * canvasScale));
        if (resize) {
            if (newWidth < newHeight) {
                newWidth = newHeight;
            }
            if (newHeight < newWidth) {
                newHeight = newWidth;
            }
        }
        Image* image = ImageCreationUtil_createImageWH(this->imageCreationUtil, newWidth, newHeight);
        if (Image_isMutable(image)) {
            int32_t halfWidthDelta = (newWidth - Image_getWidth(originalImage)) / 2;
            int32_t halfHeightDelta = (newHeight - Image_getHeight(originalImage)) / 2;
            Graphics* graphics = Image_getGraphics(image);
            Graphics_drawImage(graphics, originalImage, halfWidthDelta, halfHeightDelta, this->anchor);
            return image;
        } else {
            java_throw(java_exception_new("Exception", "Not Mutable"));
        }
}

