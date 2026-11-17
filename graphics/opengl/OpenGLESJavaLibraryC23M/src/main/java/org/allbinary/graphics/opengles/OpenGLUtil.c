// Generated Code Do Not Modify
// package org.allbinary.graphics.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/khronos/opengles/GL10.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/device/LoadTextures.h"
#include "org/allbinary/device/OpenGLESGraphics.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/opengles/renderer/RendererStrings.h"
#include "org/allbinary/image/PreResourceImageUtil.h"
#include "org/allbinary/image/opengles/OpenGLESImage.h"
#include "org/allbinary/image/opengles/OpenGLImageCache.h"
#include "org/allbinary/image/opengles/OpenGLImageCacheFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/thread/SynchObject.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct OpenGLUtil OpenGLUtil;
struct OpenGLUtil {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    RendererStrings* renderStrings;
    CanvasStrings* canvasStrings;
    DisplayInfoSingleton* displayInfoSingleton;
    PreResourceImageUtil* preResourceImageUtil;
    SynchObject* lockObject;
    SynchObject* anyType;
    BasicArrayList* list;
    BasicArrayList* runnableList;
    bool created;
    bool surfaceCreatedAndInitialized;
};

static OpenGLUtil* OpenGLUtil_instance;

OpenGLUtil* OpenGLUtil_new(void);
OpenGLUtil* OpenGLUtil_getInstance(void);
void OpenGLUtil_onSurfaceCreated(OpenGLUtil* this, GL10* gl);
void OpenGLUtil_onSurfaceCreated(OpenGLUtil* this, GL10* gl, LoadTextures* loadTextures);
void OpenGLUtil_onSurfaceChanged(OpenGLUtil* this, GL10* gl, OpenGLESGraphics* graphics);
Image* OpenGLUtil_addImage(OpenGLUtil* this, Image* image);
void OpenGLUtil_clear(OpenGLUtil* this);
void OpenGLUtil_addRunnable(OpenGLUtil* this, Runnable* runnable);
static void OpenGLUtil_processRunnables(OpenGLUtil* this);
static void OpenGLUtil_set(OpenGLUtil* this, GL10* gl);

// Static fields with runtime initializers: call this once at startup
void OpenGLUtil_staticInit(void) {
    OpenGLUtil_instance = OpenGLUtil_new();
}

static void OpenGLUtil_initFields(OpenGLUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->renderStrings = RendererStrings_getInstance();
    this->canvasStrings = CanvasStrings_getInstance();
    this->displayInfoSingleton = DisplayInfoSingleton_getInstance();
    this->preResourceImageUtil = PreResourceImageUtil_getInstance();
    this->lockObject = SynchObject_new();
    this->anyType = SynchObject_new();
    this->list = BasicArrayListD_new();
    this->runnableList = BasicArrayListD_new();
    this->created = false;
    this->surfaceCreatedAndInitialized = false;
}

void OpenGLUtil_init(OpenGLUtil* this) {
    OpenGLUtil_initFields(this);
}

OpenGLUtil* OpenGLUtil_new(void) {
    OpenGLUtil* this = calloc(1, sizeof(OpenGLUtil));
    OpenGLUtil_init(this);
    return this;
}


OpenGLUtil* OpenGLUtil_getInstance(void) {
        return OpenGLUtil_instance;
}


void OpenGLUtil_onSurfaceCreated(OpenGLUtil* this, GL10* gl) {
        JAVA_TRY {
            if (!this->created) {
                this->created = true;
                PreLogUtil_put(java_concat(java_string_of(CommonLabels_getInstance()->START_LABEL), OpenGLCapabilities_toString(OpenGLCapabilities_getInstance())), this, this->renderStrings->ON_SURFACE_CREATED);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->renderStrings->ON_SURFACE_CREATED, e);
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
void OpenGLUtil_onSurfaceCreated(OpenGLUtil* this, GL10* gl, LoadTextures* loadTextures) {
        JAVA_TRY {
            LoadTextures_load(loadTextures, gl);
            OpenGLLogUtil_logError(OpenGLLogUtil_getInstance(), gl);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->renderStrings->ON_SURFACE_CREATED, e);
        } JAVA_END_TRY;
}


// throws Exception
void OpenGLUtil_onSurfaceChanged(OpenGLUtil* this, GL10* gl, OpenGLESGraphics* graphics) {
        if (!this->surfaceCreatedAndInitialized) {
            OpenGLESGraphics_init(graphics);
            this->surfaceCreatedAndInitialized = true;
        }
        OpenGLESGraphics_update(graphics);
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        ProgressCanvas_update(progressCanvas, graphics);
        OpenGLImageCache_update((((OpenGLImageCache*) OpenGLImageCacheFactory_getInstance())), gl);
        OpenGLUtil_processRunnables(this);
        OpenGLUtil_set(this, gl);
}


Image* OpenGLUtil_addImage(OpenGLUtil* this, Image* image) {
        Image* encapsulateImage = PreResourceImageUtil_encapsulate(this->preResourceImageUtil, image);
        if (encapsulateImage != image) {
            java_monitor_enter(this->anyType);
            {
                BasicArrayList_add(this->list, encapsulateImage);
            }
            java_monitor_exit(this->anyType);
            return encapsulateImage;
        }
        return image;
}


void OpenGLUtil_clear(OpenGLUtil* this) {
        java_monitor_enter(this->anyType);
        {
            BasicArrayList_clear(this->list);
        }
        java_monitor_exit(this->anyType);
}


void OpenGLUtil_addRunnable(OpenGLUtil* this, Runnable* runnable) {
        java_monitor_enter(this->lockObject);
        {
            if (!BasicArrayList_contains(this->runnableList, runnable)) {
                BasicArrayList_add(this->runnableList, runnable);
                DisplayInfoSingleton_add(this->displayInfoSingleton, this->canvasStrings->SCALED_IMAGES);
            }
        }
        java_monitor_exit(this->lockObject);
}


static void OpenGLUtil_processRunnables(OpenGLUtil* this) {
        java_monitor_enter(this->lockObject);
        {
            Runnable* runnable = nullptr;
            int32_t size = BasicArrayList_size(this->runnableList);
            for (int32_t index = 0; index < size; index++) {
                runnable = ((Runnable*) BasicArrayList_get(this->runnableList, index));
                Runnable_run(runnable);
            }
            BasicArrayList_clear(this->runnableList);
        }
        java_monitor_exit(this->lockObject);
}


// throws Exception
static void OpenGLUtil_set(OpenGLUtil* this, GL10* gl) {
        int32_t size = BasicArrayList_size(this->list);
        OpenGLESImage* image = nullptr;
        for (int32_t index2 = 0; index2 < size; index2++) {
            image = ((OpenGLESImage*) BasicArrayList_get(this->list, index2));
            Image_set(image, gl);
        }
}

