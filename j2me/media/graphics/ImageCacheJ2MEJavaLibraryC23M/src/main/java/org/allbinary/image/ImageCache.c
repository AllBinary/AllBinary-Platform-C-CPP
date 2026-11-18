// Generated Code Do Not Modify
#include "org/allbinary/image/ImageCache.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/data/resource/ResourceUtil.h"
#include "org/allbinary/game/gd/resource/GDResources.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/system/Memory.h"
#include "org/allbinary/image/ImageCacheBase.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


ImageCache* ImageCache_NULL_IMAGE_CACHE;










void ImageCache_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ImageCache_NULL_IMAGE_CACHE = ImageCache_new();
}

void ImageCache_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageCache", "ImageCacheBase");
    java_register_method("ImageCache", "addListener", (void*) ImageCache_addListener);
    java_register_method("ImageCache", "getIndex", (void*) ImageCache_getIndex);
    java_register_method("ImageCache", "get", (void*) ImageCache_get);
    java_register_method("ImageCache", "getWithKey", (void*) ImageCache_getWithKey);
    java_register_method("ImageCache", "loadImageForAnimation", (void*) ImageCache_loadImageForAnimation);
    java_register_method("ImageCache", "progressEnded", (void*) ImageCache_progressEnded);
    java_register_method("ImageCache", "runTask", (void*) ImageCache_runTask);
    java_register_method("ImageCache", "isLazy", (void*) ImageCache_isLazy);
}

static void ImageCache_initFields(ImageCache* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->tsUtil = TsUtil_getInstance();
}


void ImageCache_init(ImageCache* this) {
    ImageCache_register();
    ImageCacheBase_init(&this->base);
    ImageCache_initFields(this);
}

ImageCache* ImageCache_new(void) {
    ImageCache* this = java_object_alloc(sizeof(ImageCache), "ImageCache");
    ImageCache_init(this);
    return this;
}


void ImageCache_addListener(ImageCache* this, void* renderer) {
}


int32_t ImageCache_getIndex(ImageCache* this, void* key) {
        GDResources* gdResources = GDResources_getInstance();
        const char** resourceStringArray = gdResources->resourceStringArray;
        int32_t size = java_array_length(resourceStringArray);
        for (int32_t index = 0; index < size; index++) {
            if (resourceStringArray[index] == key) {
                return index;
            }
        }
        LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "unable to find key: "), StringUtil_toString(StringUtil_getInstance(), key))), this, this->commonStrings->RUN);
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
Image* ImageCache_get(ImageCache* this, const char* caller, int32_t width, int32_t height) {
        int32_t foundIndex = ImageCacheBase_getIndexWH(this, width, height);
        Image* image = ImageCacheBase_getFromAvailable(this, foundIndex, width, height);
        if (image == (NullImage_staticInit(), NullImage_NULL_IMAGE)) {
            this->base.volume += width * height;
            if (this->base.volume > 32000) {
                TsUtil_gc(this->tsUtil);
                this->base.volume = 0;
            }
            image = ImageCacheBase_createImage(this, caller, width, height);
            int32_t* widths = this->base.widths;
            if (this->base.nextIndex > java_array_length(widths) - 1) {
                if (foundIndex == -1) {
                    foundIndex = this->base.nextIndex;
                    widths[this->base.nextIndex] = width;
                    this->base.heights[this->base.nextIndex] = height;
                    this->base.nextIndex++;
                }
                JAVA_CALL(this->base.listOfList[foundIndex], add, image);
            }
        }
        return image;
}


// throws Exception
Image* ImageCache_getWithKey(ImageCache* this, void* key) {
        Image* image = ImageCacheBase_getImage(this, key);
        if (image == (NullImage_staticInit(), NullImage_NULL_IMAGE)) {
            ResourceUtil* resourceUtil = ResourceUtil_getInstance();
            InputStream* resourceInputStream = ResourceUtil_getResourceAsStream(resourceUtil, ((const char*) key));
            if (resourceInputStream == nullptr) {
                java_throw(java_exception_new("RuntimeException", java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "Image resource is not available for key: "), StringUtil_toString(StringUtil_getInstance(), key)))));
            }
            JAVA_TRY {
                image = ImageCacheBase_createImageFromInputStream(this, key, resourceInputStream);
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->base.logUtil, "Exception: Trying Again After GC", this, this->commonStrings->GET, e);
                LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "InputStream: "), StringUtil_toString(StringUtil_getInstance(), resourceInputStream))), this, this->commonStrings->GET);
                TsUtil_gc(this->tsUtil);
                TsUtil_gc(this->tsUtil);
                LogUtil_putF(this->base.logUtil, Memory_getInfo(), this, this->commonStrings->GET);
                java_sleep(100);
                image = ImageCacheBase_createImageFromInputStream(this, key, resourceInputStream);
            } JAVA_END_TRY;
            if (J2MEUtil_isHTML()) {
            } else {
                InputStream_close(resourceInputStream);
            }
            Hashtable_put(this->base.hashtable, key, image);
        }
        return image;
}


// throws Exception
void ImageCache_loadImageForAnimation(ImageCache* this) {
}


void ImageCache_progressEnded(ImageCache* this) {
}


void ImageCache_runTask(ImageCache* this) {
}


bool ImageCache_isLazy(ImageCache* this) {
        return false;
}

