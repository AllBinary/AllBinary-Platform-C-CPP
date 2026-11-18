// Generated Code Do Not Modify
#include "org/allbinary/image/ImageCacheBase.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/image/ImageFactory.h"
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif
















void ImageCacheBase_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ImageCacheBase_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageCacheBase", nullptr);
    java_register_method("ImageCacheBase", "getImage", (void*) ImageCacheBase_getImage);
    java_register_method("ImageCacheBase", "releaseAll", (void*) ImageCacheBase_releaseAll);
    java_register_method("ImageCacheBase", "getIndexWH", (void*) ImageCacheBase_getIndexWH);
    java_register_method("ImageCacheBase", "getFromAvailable", (void*) ImageCacheBase_getFromAvailable);
    java_register_method("ImageCacheBase", "get", (void*) ImageCacheBase_get);
    java_register_method("ImageCacheBase", "getWithKey", (void*) ImageCacheBase_getWithKey);
    java_register_method("ImageCacheBase", "createImage", (void*) ImageCacheBase_createImage);
    java_register_method("ImageCacheBase", "createImageFromInputStream", (void*) ImageCacheBase_createImageFromInputStream);
    java_register_method("ImageCacheBase", "toString", (void*) ImageCacheBase_toString);
    java_register_method("ImageCacheBase", "getHashtableP", (void*) ImageCacheBase_getHashtableP);
    java_register_method("ImageCacheBase", "init", (void*) ImageCacheBase_initMethod);
    java_register_method("ImageCacheBase", "initProgress", (void*) ImageCacheBase_initProgress);
}

static void ImageCacheBase_initFields(ImageCacheBase* this) {
    this->logUtil = LogUtil_getInstance();
    this->imageFactory = ImageFactory_getInstance();
    this->hashtable = StdUtil_createHashtable(StdUtil_getInstance());
    this->SIZE = 128;
    this->widths = ((int32_t*) java_array_new(sizeof(int32_t), this->SIZE));
    this->heights = ((int32_t*) java_array_new(sizeof(int32_t), this->SIZE));
    this->listOfList = ((BasicArrayList**) java_array_new(sizeof(BasicArrayList*), this->SIZE));
    this->availableListOfList = ((BasicArrayList**) java_array_new(sizeof(BasicArrayList*), this->SIZE));
    this->volume = 0;
    this->nextIndex = 0;
}


void ImageCacheBase_init(ImageCacheBase* this) {
    ImageCacheBase_register();
    ImageCacheBase_initFields(this);
        for (int32_t index = java_array_length(this->listOfList) - 1; index >= 0; index--) {
            this->listOfList[index] = BasicArrayListD_new();
        }
        for (int32_t index = java_array_length(this->availableListOfList) - 1; index >= 0; index--) {
            this->availableListOfList[index] = BasicArrayListD_new();
        }
}

ImageCacheBase* ImageCacheBase_new(void) {
    ImageCacheBase* this = java_object_alloc(sizeof(ImageCacheBase), "ImageCacheBase");
    ImageCacheBase_init(this);
    return this;
}


Image* ImageCacheBase_getImage(ImageCacheBase* this, void* resourceId) {
        void* imageCanBeNull = Hashtable_get(this->hashtable, resourceId);
        if (imageCanBeNull == nullptr) {
            return (NullImage_staticInit(), NullImage_NULL_IMAGE);
        }
        return ((Image*) imageCanBeNull);
}


void ImageCacheBase_releaseAll(ImageCacheBase* this) {
        for (int32_t index = java_array_length(this->listOfList) - 1; index >= 0; index--) {
            BasicArrayList_clear(this->availableListOfList[index]);
            BasicArrayList_addAllList(this->availableListOfList[index], this->listOfList[index]);
        }
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "ImageCache: "), ImageCacheBase_toString(this))), this, "releaseAll");
}


int32_t ImageCacheBase_getIndexWH(ImageCacheBase* this, int32_t width, int32_t height) {
        int32_t foundIndex = -1;
        int32_t size = java_array_length(this->widths);
        for (int32_t index = 0; index < size; index++) {
            if (this->widths[index] == width && this->heights[index] == height) {
                foundIndex = index;
                return foundIndex;
            }
        }
        return foundIndex;
}


Image* ImageCacheBase_getFromAvailable(ImageCacheBase* this, int32_t foundIndex, int32_t width, int32_t height) {
        if (foundIndex != -1) {
            if (BasicArrayList_size(this->availableListOfList[foundIndex]) > 0) {
                BasicArrayList* list = this->availableListOfList[foundIndex];
                return ((Image*) BasicArrayList_removeAt(list, BasicArrayList_size(list) - 1));
            }
        }
        return (NullImage_staticInit(), NullImage_NULL_IMAGE);
}


// throws Exception
Image* ImageCacheBase_get(ImageCacheBase* this, const char* caller, int32_t width, int32_t height) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
Image* ImageCacheBase_getWithKey(ImageCacheBase* this, void* key) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
Image* ImageCacheBase_createImage(ImageCacheBase* this, const char* caller, int32_t width, int32_t height) {
        return ImageFactory_createImage(this->imageFactory, caller, width, height);
}


// throws Exception
Image* ImageCacheBase_createImageFromInputStream(ImageCacheBase* this, void* key, InputStream* inputStream) {
        return ImageFactory_createImageFromInputStream(this->imageFactory, key, inputStream);
}


const char* ImageCacheBase_toString(ImageCacheBase* this) {
        StringMaker* stringBuffer = StringMaker_new();
        for (int32_t index = this->nextIndex - 1; index >= 0; index--) {
            int32_t width = this->widths[index];
            int32_t height = this->heights[index];
            int32_t total = BasicArrayList_size(this->listOfList[index]);
            int32_t totalAvailable = BasicArrayList_size(this->availableListOfList[index]);
            StringMaker_append(stringBuffer, " w: ");
            StringMaker_appendint(stringBuffer, width);
            StringMaker_append(stringBuffer, " h: ");
            StringMaker_appendint(stringBuffer, height);
            StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
            StringMaker_append(stringBuffer, CommonLabels_getInstance()->TOTAL_LABEL);
            StringMaker_appendint(stringBuffer, total);
            StringMaker_append(stringBuffer, " available: ");
            StringMaker_appendint(stringBuffer, totalAvailable);
        }
        return java_string_of(stringBuffer);
}


ABHashtable* ImageCacheBase_getHashtableP(ImageCacheBase* this) {
        return this->hashtable;
}


void ImageCacheBase_initMethod(ImageCacheBase* this, Image* image) {
}


void ImageCacheBase_initProgress(ImageCacheBase* this) {
}

