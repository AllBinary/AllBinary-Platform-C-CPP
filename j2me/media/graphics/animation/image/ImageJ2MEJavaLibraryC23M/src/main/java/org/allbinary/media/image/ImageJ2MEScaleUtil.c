// Generated Code Do Not Modify
#include "org/allbinary/media/image/ImageJ2MEScaleUtil.h"
#include "javax/microedition/lcdui/Image.h"


static ImageJ2MEScaleUtil* ImageJ2MEScaleUtil_instance;





void ImageJ2MEScaleUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ImageJ2MEScaleUtil_instance = ImageJ2MEScaleUtil_new();
}

void ImageJ2MEScaleUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageJ2MEScaleUtil", nullptr);
    java_register_method("ImageJ2MEScaleUtil", "scaleArray", (void*) ImageJ2MEScaleUtil_scaleArray);
    java_register_method("ImageJ2MEScaleUtil", "scale", (void*) ImageJ2MEScaleUtil_scale);
}


ImageJ2MEScaleUtil* ImageJ2MEScaleUtil_getInstance(void) {
        return (ImageJ2MEScaleUtil_staticInit(), ImageJ2MEScaleUtil_instance);
}


void ImageJ2MEScaleUtil_init(ImageJ2MEScaleUtil* this) {
    ImageJ2MEScaleUtil_register();
}

ImageJ2MEScaleUtil* ImageJ2MEScaleUtil_new(void) {
    ImageJ2MEScaleUtil* this = java_object_alloc(sizeof(ImageJ2MEScaleUtil), "ImageJ2MEScaleUtil");
    ImageJ2MEScaleUtil_init(this);
    return this;
}


// throws Exception
Image** ImageJ2MEScaleUtil_scaleArray(ImageJ2MEScaleUtil* this, Image** images, int32_t width, int32_t height) {
        Image** scaledImages = ((Image**) java_array_new(sizeof(Image*), java_array_length(images)));
        for (int32_t index = java_array_length(images); --index >= 0; ) {
            scaledImages[index] = ImageJ2MEScaleUtil_scale(this, images[index], width, height);
        }
        return scaledImages;
}


// throws Exception
Image* ImageJ2MEScaleUtil_scale(ImageJ2MEScaleUtil* this, Image* image, int32_t width, int32_t height) {
        int32_t sourceWidth = Image_getWidth(image);
        int32_t sourceHeight = Image_getHeight(image);
        int32_t* originalData = ((int32_t*) java_array_new(sizeof(int32_t), Image_getWidth(image) * Image_getHeight(image)));
        Image_getRGB(image, originalData, 0, Image_getWidth(image), 0, 0, Image_getWidth(image), Image_getHeight(image));
        int32_t* scaledData = ((int32_t*) java_array_new(sizeof(int32_t), width * height));
        int32_t heightRatioFactor = (8 * sourceHeight) / height;
        int32_t widthRatioFactor = (8 * sourceWidth) / width;
        int32_t scaledIndex = java_array_length(scaledData) - 1;
        int32_t dx = 0;
        int32_t dy = 0;
        for (int32_t index = height; --index >= 0; ) {
            dy = (index * heightRatioFactor) >> 3;
            for (int32_t index2 = width; --index2 >= 0; ) {
                dx = (index2 * widthRatioFactor) >> 3;
                scaledData[scaledIndex--] = originalData[(sourceWidth * dy) + dx];
            }
        }
        Image* scaledImage = Image_createRGBImage(scaledData, width, height, true);
        return scaledImage;
}

