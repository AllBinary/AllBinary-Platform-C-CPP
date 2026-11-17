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
// package org.allbinary.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/InputStream.h"
// #include "javax/microedition/lcdui/Image.h"
// #include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/animation/image/LazyImageRotationAnimation.h"
#include "org/allbinary/canvas/GameGlobalsFactory.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/data/resource/ResourceUtil.h"
#include "org/allbinary/game/canvas/ABToGBUtil.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "org/allbinary/game/gd/resource/GDLazyResources.h"
#include "org/allbinary/game/gd/resource/GDResources.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/system/Memory.h"
#include "org/allbinary/thread/BaseImageLoadingProcessor.h"
#include "org/allbinary/thread/ConcurrentImageLoadingProcessor.h"
#include "org/allbinary/thread/SynchObject.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/ABSystemWrapper.h"
#include "org/allbinary/image/ImageCacheBase.h"

typedef struct ImageCache ImageCache;
struct ImageCache {
    ImageCacheBase base;
    TsUtil* tsUtil;
    BaseImageLoadingProcessor* concurrentImageLoadingProcessor;
    CommonStrings* commonStrings;
    CommonSeps* commonSeps;
    ResourceUtil* resourceUtil;
    GameGlobalsFactory* gameGlobalsFactory;
    GDResources* gdResources;
    BasicArrayList* loadNowList;
    BasicArrayList* loadSoonList;
    BasicArrayList* loadList;
    BasicArrayList* loadAfterList;
    SynchObject* lock;
    bool firstTime;
    int32_t totalLoaded;
    bool progressEnded;
    bool hasAnyLazyAnimationFactories;
    Processor* processor;
    Processor* endProcessor;
    const char* LOAD_IMAGE_FOR_ANIMATION;
};

ImageCache* ImageCache_NULL_IMAGE_CACHE;

ImageCache* ImageCache_new(void);

void ImageCache_init(ImageCache* this);
void ImageCache_firstProcess(ImageCache* this);
void ImageCache_addListener(ImageCache* this, Any* renderer);
void ImageCache_waitForLoadNow(ImageCache* this);
void ImageCache_loadImageForAnimation(ImageCache* this);
void ImageCache_loadImages(ImageCache* this);
void ImageCache_loadImageForAnimations(ImageCache* this);
void ImageCache_loadRemainingAnimations(ImageCache* this);
static bool ImageCache_loadImageForLazyAnimation(ImageCache* this, LazyImageRotationAnimation* lazyImageRotationAnimation);
static void ImageCache_loadNextImage(ImageCache* this);
static bool ImageCache_loadImage(ImageCache* this, Image* image);
void ImageCache_init(ImageCache* this, Image* image, Image* image2);
Image* ImageCache_creatImage(ImageCache* this, const char* key);
Image* ImageCache_get(ImageCache* this, const char* caller, int32_t width, int32_t height);
Image* ImageCache_getWithKey(ImageCache* this, Any* key);
int32_t ImageCache_getIndex(ImageCache* this, Any* key);
Image* ImageCache_createImageFromInputStream(ImageCache* this, Any* key, InputStream* inputStream);
Image* ImageCache_createImageLater(ImageCache* this, const char* key, int32_t width, int32_t height);
BasicArrayList* ImageCache_getAssociated(ImageCache* this, LazyImageRotationAnimation* lazyImageRotationAnimation);
void ImageCache_add(ImageCache* this, LazyImageRotationAnimation* lazyImageRotationAnimation);
void ImageCache_insertFirst(ImageCache* this, LazyImageRotationAnimation* lazyImageRotationAnimation);
void ImageCache_progressEnded(ImageCache* this);
void ImageCache_runTask(ImageCache* this);
void ImageCache_initProgress(ImageCache* this);
bool ImageCache_isLazy(ImageCache* this);

// Static fields with runtime initializers: call this once at startup
void ImageCache_staticInit(void) {
    ImageCache_NULL_IMAGE_CACHE = ImageCache_new();
}

static void ImageCache_initFields(ImageCache* this) {
    this->tsUtil = TsUtil_getInstance();
    this->concurrentImageLoadingProcessor = ConcurrentImageLoadingProcessor_new(this);
    this->commonStrings = CommonStrings_getInstance();
    this->commonSeps = CommonSeps_getInstance();
    this->resourceUtil = ResourceUtil_getInstance();
    this->gameGlobalsFactory = GameGlobalsFactory_getInstance();
    this->gdResources = GDResources_getInstance();
    this->loadNowList = BasicArrayListD_new();
    this->loadSoonList = BasicArrayListD_new();
    this->loadList = BasicArrayListD_new();
    this->loadAfterList = BasicArrayListD_new();
    this->lock = SynchObject_new();
    this->firstTime = true;
    this->totalLoaded = 0;
    this->progressEnded = false;
    this->hasAnyLazyAnimationFactories = false;
    this->processor = FirstProcessor_new();
    this->endProcessor = Processor_getInstance();
    this->LOAD_IMAGE_FOR_ANIMATION = "Load Image Animation";
}


void ImageCache_init(ImageCache* this) {
    ImageCacheBase_init(&this->base);
    ImageCache_initFields(this);
}

ImageCache* ImageCache_new(void) {
    ImageCache* this = calloc(1, sizeof(ImageCache));
    ImageCache_init(this);
    return this;
}


void ImageCache_firstProcess(ImageCache* this) {
        LogUtil* logUtil = LogUtil_getInstance();
        bool isHTML = J2MEUtil_isHTML();
        if (isHTML) {
            this->processor = Processor_getInstance();
            this->endProcessor = HTMLEndProcessor_new();
        } else {
            this->processor = NotHTMLProcessor_new();
            this->endProcessor = NotHTMLEndProcessor_new();
            JAVA_TRY {
                ImageCache_runTask(this);
            } JAVA_CATCH(Exception, e) {
                LogUtil_putF(logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->END_METHOD_NAME);
            } JAVA_END_TRY;
        }
}


void ImageCache_addListener(ImageCache* this, Any* renderer) {
}


// throws Exception
void ImageCache_waitForLoadNow(ImageCache* this) {
        if (this->firstTime) {
            ABToGBUtil* abToGBUtil = ABToGBUtil_getInstance();
            AllBinaryGameCanvas* abCanvas = ((AllBinaryGameCanvas*) abToGBUtil->abCanvas);
            while (BasicArrayList_isEmpty(this->loadNowList) && (!AllBinaryGameCanvas_isInitialized(abCanvas) || (AllBinaryGameCanvas_isInitialized(abCanvas) && this->hasAnyLazyAnimationFactories)) && !this->progressEnded) {
                java_sleep(120);
            }
            this->firstTime = false;
        }
}


// throws Exception
void ImageCache_loadImageForAnimation(ImageCache* this) {
        LazyImageRotationAnimation* lazyImageRotationAnimation = nullptr;
        java_monitor_enter(this->lock);
        {
            if (BasicArrayList_isEmpty(this->loadNowList)) {
                Processor_process(this->endProcessor);
                if (BasicArrayList_isEmpty(this->loadSoonList)) {
                    if (BasicArrayList_isEmpty(this->loadAfterList)) {
                        if (this->firstTime) {
                        } else if (this->gameGlobalsFactory->newCanvas) {
                        } else {
                            ImageCache_loadNextImage(this);
                        }
                        return;
                    } else {
                        lazyImageRotationAnimation = ((LazyImageRotationAnimation*) BasicArrayList_get(this->loadAfterList, 0));
                        if (ImageCache_loadImageForLazyAnimation(this, lazyImageRotationAnimation)) {
                            BasicArrayList_remove(this->loadAfterList, lazyImageRotationAnimation);
                        }
                    }
                } else {
                    lazyImageRotationAnimation = ((LazyImageRotationAnimation*) BasicArrayList_get(this->loadSoonList, 0));
                    if (ImageCache_loadImageForLazyAnimation(this, lazyImageRotationAnimation)) {
                        BasicArrayList_remove(this->loadSoonList, lazyImageRotationAnimation);
                    }
                }
                return;
            }
            lazyImageRotationAnimation = ((LazyImageRotationAnimation*) BasicArrayList_get(this->loadNowList, 0));
        }
        java_monitor_exit(this->lock);
        if (ImageCache_loadImageForLazyAnimation(this, lazyImageRotationAnimation)) {
            java_monitor_enter(this->lock);
            {
                BasicArrayList_remove(this->loadNowList, lazyImageRotationAnimation);
            }
            java_monitor_exit(this->lock);
            if (lazyImageRotationAnimation->layoutIndex != 0) {
                BasicArrayList* list = ImageCache_getAssociated(this, lazyImageRotationAnimation);
                java_monitor_enter(this->lock);
                {
                    int32_t size = BasicArrayList_size(list);
                    if (size > 0) {
                        BasicArrayList_addAllList(this->loadSoonList, list);
                    }
                }
                java_monitor_exit(this->lock);
            }
            ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
            bool isHTML = J2MEUtil_isHTML();
            if (BasicArrayList_isEmpty(this->loadNowList) && (!isHTML || this->firstTime)) {
                ProgressCanvas_endFromInitialLazyLoadingComplete(progressCanvas);
            } else {
                if (this->totalLoaded % 10 == 0) {
                    ProgressCanvas_addNormalPortion(progressCanvas, 1, this->LOAD_IMAGE_FOR_ANIMATION);
                }
            }
        }
}


// throws Exception
void ImageCache_loadImages(ImageCache* this) {
        while (!BasicArrayList_isEmpty(this->loadList) || !BasicArrayList_isEmpty(this->loadNowList)) {
            ImageCache_loadImageForAnimations(this);
            ImageCache_loadNextImage(this);
        }
}


// throws Exception
void ImageCache_loadImageForAnimations(ImageCache* this) {
        while (!BasicArrayList_isEmpty(this->loadNowList)) {
            ImageCache_loadImageForAnimation(this);
        }
}


// throws Exception
void ImageCache_loadRemainingAnimations(ImageCache* this) {
        while (!BasicArrayList_isEmpty(this->loadAfterList) || !BasicArrayList_isEmpty(this->loadNowList)) {
            while (!BasicArrayList_isEmpty(this->loadNowList)) {
                ImageCache_loadImageForAnimation(this);
            }
            LazyImageRotationAnimation* lazyImageRotationAnimation = nullptr;
            java_monitor_enter(this->lock);
            {
                if (!BasicArrayList_isEmpty(this->loadAfterList)) {
                    lazyImageRotationAnimation = ((LazyImageRotationAnimation*) BasicArrayList_removeAt(this->loadAfterList, 0));
                }
            }
            java_monitor_exit(this->lock);
            if (lazyImageRotationAnimation != nullptr) {
                ImageCache_loadImageForLazyAnimation(this, lazyImageRotationAnimation);
            }
        }
}


// throws Exception
static bool ImageCache_loadImageForLazyAnimation(ImageCache* this, LazyImageRotationAnimation* lazyImageRotationAnimation) {
        Image* image = JAVA_CALL(lazyImageRotationAnimation->animationInterfaceFactoryInterface, getImage);
        if (ImageCache_loadImage(this, image)) {
            LazyImageRotationAnimation_setRealAnimation(lazyImageRotationAnimation);
            return true;
        }
        return false;
}


// throws Exception
static void ImageCache_loadNextImage(ImageCache* this) {
        Image* image = nullptr;
        java_monitor_enter(this->lock);
        {
            if (BasicArrayList_size(this->loadList) == 0) {
                return;
            }
            image = ((Image*) BasicArrayList_removeAt(this->loadList, 0));
        }
        java_monitor_exit(this->lock);
        ImageCache_loadImage(this, image);
}


// throws Exception
static bool ImageCache_loadImage(ImageCache* this, Image* image) {
        if (Image_isReady(image)) {
            return true;
        } else {
            if (Image_getImage(image) != nullptr) {
                if (Image_setReady(image)) {
                    if (Image_isReady(image)) {
                        this->totalLoaded++;
                        return true;
                    }
                }
            } else {
                const char* key = Image_getName(image);
                Image* image2 = ImageCache_creatImage(this, key);
                if (Image_isReady(image2)) {
                    ImageCache_init(this, image, image2);
                    return true;
                } else {
                    Image_setImage(image, Image_getImage(image2));
                }
            }
        }
        return false;
}


// throws Exception
void ImageCache_init(ImageCache* this, Image* image, Image* image2) {
        Image_init(image, Image_getImage(image2));
}


// throws Exception
Image* ImageCache_creatImage(ImageCache* this, const char* key) {
        InputStream* inputStream = ResourceUtil_getResourceAsStream(this->resourceUtil, key);
        Image* image = ImageFactory_createImageFromInputStream(ImageFactory_getInstance(), inputStream);
        Image_setName(image, key);
        return image;
}


// throws Exception
Image* ImageCache_get(ImageCache* this, const char* caller, int32_t width, int32_t height) {
        int32_t foundIndex = ImageCache_getIndexWH(this, width, height);
        Image* image = ImageCache_getFromAvailable(this, foundIndex, width, height);
        if (image == NullImage_NULL_IMAGE) {
            this->volume += width * height;
            if (this->volume > 32000) {
                TsUtil_gc(this->tsUtil);
                this->volume = 0;
            }
            image = ImageCache_createImage(this, caller, width, height);
            if (this->nextIndex > java_array_length(this->widths) - 1) {
                if (foundIndex == -1) {
                    foundIndex = this->nextIndex;
                    this->widths[this->nextIndex] = width;
                    this->heights[this->nextIndex] = height;
                    this->nextIndex++;
                }
                JAVA_CALL(this->listOfList[foundIndex], add, image);
            }
        }
        return image;
}


// throws Exception
Image* ImageCache_getWithKey(ImageCache* this, Any* key) {
        Image* image = ImageCache_getImage(this, key);
        if (image == NullImage_NULL_IMAGE) {
            InputStream* inputStream = nullptr;
            JAVA_TRY {
                image = ImageCache_createImageFromInputStream(this, key, inputStream);
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->logUtil, "Exception: Trying Again After GC", this, this->commonStrings->GET, e);
                LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "InputStream: "), append, StringUtil_toString(StringUtil_getInstance(), inputStream)), toString), this, this->commonStrings->GET);
                TsUtil_gc(this->tsUtil);
                TsUtil_gc(this->tsUtil);
                LogUtil_putF(this->logUtil, Memory_getInfo(), this, this->commonStrings->GET);
                java_sleep(100);
                image = ImageCache_createImageFromInputStream(this, key, inputStream);
            } JAVA_END_TRY;
            JAVA_CALL(this->hashtable, put, key, image);
        }
        return image;
}


int32_t ImageCache_getIndex(ImageCache* this, Any* key) {
        GDResources* gdResources = GDResources_getInstance();
        const char** resourceStringArray = gdResources->resourceStringArray;
        int32_t size = java_array_length(resourceStringArray);
        for (int32_t index = 0; index < size; index++) {
            if (resourceStringArray[index] == key) {
                return index;
            }
        }
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "unable to find key: "), append, StringUtil_toString(StringUtil_getInstance(), key)), toString), this, this->commonStrings->RUN);
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
Image* ImageCache_createImageFromInputStream(ImageCache* this, Any* key, InputStream* inputStream) {
        GDLazyResources* gdLazyResources = GDLazyResources_getInstance();
        const char** resourceStringArray = gdLazyResources->requiredResourcesBeforeLoadingArray;
        int32_t size = java_array_length(resourceStringArray);
        for (int32_t index = 0; index < size; index++) {
            if (key == resourceStringArray[index]) {
                return ImageCache_creatImage(this, ((const char*) key));
            }
        }
        ImageCache_runTask(this);
        int32_t index = ImageCache_getIndex(this, key);
        int32_t width = gdLazyResources->imageResourceWidthArray[index];
        int32_t height = gdLazyResources->imageResourceHeightArray[index];
        Image* image = ImageCache_createImageLater(this, ((const char*) key), width, height);
        java_monitor_enter(this->lock);
        {
            BasicArrayList_add(this->loadList, image);
        }
        java_monitor_exit(this->lock);
        return image;
}


// throws Exception
Image* ImageCache_createImageLater(ImageCache* this, const char* key, int32_t width, int32_t height) {
        return Image_createImageLater(key, width, height);
}


BasicArrayList* ImageCache_getAssociated(ImageCache* this, LazyImageRotationAnimation* lazyImageRotationAnimation) {
        BasicArrayList* list = BasicArrayListD_new();
        java_monitor_enter(this->lock);
        {
            LazyImageRotationAnimation* lazyImageRotationAnimation2 = nullptr;
            int32_t size = BasicArrayList_size(this->loadAfterList);
            for (int32_t index = 0; index < size; index++) {
                lazyImageRotationAnimation2 = ((LazyImageRotationAnimation*) BasicArrayList_get(this->loadAfterList, index));
                if (lazyImageRotationAnimation2->instanceId == lazyImageRotationAnimation->instanceId) {
                    BasicArrayList_add(list, lazyImageRotationAnimation2);
                }
            }
            int32_t size2 = BasicArrayList_size(list);
            for (int32_t index = 0; index < size2; index++) {
                BasicArrayList_remove(this->loadAfterList, BasicArrayList_get(list, index));
            }
        }
        java_monitor_exit(this->lock);
        return list;
}


void ImageCache_add(ImageCache* this, LazyImageRotationAnimation* lazyImageRotationAnimation) {
        java_monitor_enter(this->lock);
        {
            BasicArrayList_add(this->loadAfterList, lazyImageRotationAnimation);
        }
        java_monitor_exit(this->lock);
}


// throws Exception
void ImageCache_insertFirst(ImageCache* this, LazyImageRotationAnimation* lazyImageRotationAnimation) {
        if (BasicArrayList_contains(this->loadNowList, lazyImageRotationAnimation)) {
        } else {
            java_monitor_enter(this->lock);
            {
                BasicArrayList_add(this->loadNowList, lazyImageRotationAnimation);
                BasicArrayList_remove(this->loadAfterList, lazyImageRotationAnimation);
            }
            java_monitor_exit(this->lock);
        }
        ImageCache_runTask(this);
}


void ImageCache_progressEnded(ImageCache* this) {
        this->progressEnded = true;
}


// throws Exception
void ImageCache_runTask(ImageCache* this) {
        Processor_process(this->processor);
}


void ImageCache_initProgress(ImageCache* this) {
        if (this->firstTime) {
            this->firstTime = false;
        }
}


bool ImageCache_isLazy(ImageCache* this) {
        return true;
}

typedef struct NotHTMLProcessor NotHTMLProcessor;
struct NotHTMLProcessor {
    Processor base;
};


NotHTMLProcessor* NotHTMLProcessor_new(void);
    void ImageCache_process(ImageCache* this);

void NotHTMLProcessor_init(NotHTMLProcessor* this) {
    Processor_init(&this->base);
}

NotHTMLProcessor* NotHTMLProcessor_new(void) {
    NotHTMLProcessor* this = calloc(1, sizeof(NotHTMLProcessor));
    NotHTMLProcessor_init(this);
    return this;
}
    

    void ImageCache_process(ImageCache* this) {
            BaseImageLoadingProcessor_runTask(this->concurrentImageLoadingProcessor);
    }

typedef struct NotHTMLEndProcessor NotHTMLEndProcessor;
struct NotHTMLEndProcessor {
    Processor base;
};


NotHTMLEndProcessor* NotHTMLEndProcessor_new(void);
    void ImageCache_process(ImageCache* this);

void NotHTMLEndProcessor_init(NotHTMLEndProcessor* this) {
    Processor_init(&this->base);
}

NotHTMLEndProcessor* NotHTMLEndProcessor_new(void) {
    NotHTMLEndProcessor* this = calloc(1, sizeof(NotHTMLEndProcessor));
    NotHTMLEndProcessor_init(this);
    return this;
}
    

    void ImageCache_process(ImageCache* this) {
            ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
            ProgressCanvas_endIfPaintedSinceStart(progressCanvas);
    }

typedef struct HTMLEndProcessor HTMLEndProcessor;
struct HTMLEndProcessor {
    Processor base;
};


HTMLEndProcessor* HTMLEndProcessor_new(void);
    void ImageCache_process(ImageCache* this);

void HTMLEndProcessor_init(HTMLEndProcessor* this) {
    Processor_init(&this->base);
}

HTMLEndProcessor* HTMLEndProcessor_new(void) {
    HTMLEndProcessor* this = calloc(1, sizeof(HTMLEndProcessor));
    HTMLEndProcessor_init(this);
    return this;
}
    

    void ImageCache_process(ImageCache* this) {
            int32_t size = this->gdResources->currentLayoutRequiredTotal;
            if (size == 0) {
                ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
                ProgressCanvas_endIfPaintedSinceStart(progressCanvas);
            } else if (this->totalLoaded > size / 12) {
                ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
                ProgressCanvas_endIfPaintedSinceStart(progressCanvas);
                this->endProcessor = NotHTMLEndProcessor_new();
            }
    }

typedef struct FirstProcessor FirstProcessor;
struct FirstProcessor {
    Processor base;
};


FirstProcessor* FirstProcessor_new(void);
    void ImageCache_process(ImageCache* this);

void FirstProcessor_init(FirstProcessor* this) {
    Processor_init(&this->base);
}

FirstProcessor* FirstProcessor_new(void) {
    FirstProcessor* this = calloc(1, sizeof(FirstProcessor));
    FirstProcessor_init(this);
    return this;
}
    

    void ImageCache_process(ImageCache* this) {
            ImageCache_firstProcess(this);
    }

