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
// package org.allbinary.graphics.canvas.transition.progress

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/lcdui/Image.h"
// #include "javax/microedition/lcdui/NullImage.h"
#include "android/app/Activity.h"
#include "org/allbinary/AndroidUtil.h"
#include "org/allbinary/image/GameFeatureImageCacheFactory.h"
#include "org/allbinary/image/PreResourceImageUtil.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/java/exception/ExceptionUtil.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h"
#include "org/allbinary/image/ImageCacheFactory.h"
#include "org/allbinary/media/image/ImageScaleUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/image/ImageAnimation.h"
#include "org/allbinary/data/resource/ResourceUtil.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/thread/ARunnable.h"
#include "org/allbinary/thread/NullRunnable.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"

typedef struct AndroidBasicTitleProgressBar AndroidBasicTitleProgressBar;
struct AndroidBasicTitleProgressBar {
    ProgressCanvas base;
    DisplayChangeEventListener DisplayChangeEventListener_interface;
    ARunnable* showTitleProgressBarRunnable;
    ARunnable* dismissTitleProgressBarRunnable;
    ARunnable* titleProgressDialogPortionSetProgressRunnable;
    ARunnable* titleProgressDialogSetProgressRunnable;
    Activity* midletActivity;
    int32_t portion;
    Image** IMAGE;
    Image* image;
    Animation* animation;
};

const char* AndroidBasicTitleProgressBar_RESOURCE = "ProgressImage";
static int32_t AndroidBasicTitleProgressBar_background = 0;

AndroidBasicTitleProgressBar* AndroidBasicTitleProgressBar_new(const char* title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void AndroidBasicTitleProgressBar_init(AndroidBasicTitleProgressBar* this, const char* title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
static void AndroidBasicTitleProgressBar_init(AndroidBasicTitleProgressBar* this);
void AndroidBasicTitleProgressBar_initActivity(AndroidBasicTitleProgressBar* this, Activity* activity);
static void AndroidBasicTitleProgressBar_updateCurrent(AndroidBasicTitleProgressBar* this);
void AndroidBasicTitleProgressBar_onEvent(AndroidBasicTitleProgressBar* this, AllBinaryEventObject* eventObject);
void AndroidBasicTitleProgressBar_onDisplayChangeEvent(AndroidBasicTitleProgressBar* this, DisplayChangeEvent* displayChangeEvent);
static void AndroidBasicTitleProgressBar_loadProgressImages(AndroidBasicTitleProgressBar* this);
bool AndroidBasicTitleProgressBar_isInitialized(AndroidBasicTitleProgressBar* this);
void AndroidBasicTitleProgressBar_start(AndroidBasicTitleProgressBar* this);
void AndroidBasicTitleProgressBar_end(AndroidBasicTitleProgressBar* this);
void AndroidBasicTitleProgressBar_addEarlyPortion(AndroidBasicTitleProgressBar* this, int32_t value, const char* text, int32_t index);
void AndroidBasicTitleProgressBar_addPortion(AndroidBasicTitleProgressBar* this, int32_t value, const char* text, int32_t index);
void AndroidBasicTitleProgressBar_addNormalPortion(AndroidBasicTitleProgressBar* this, int32_t value, const char* text);
void AndroidBasicTitleProgressBar_setValue(AndroidBasicTitleProgressBar* this, int32_t value);
void AndroidBasicTitleProgressBar_waitUntilDisplayed(AndroidBasicTitleProgressBar* this);
static void AndroidBasicTitleProgressBar_setImages(AndroidBasicTitleProgressBar* this, int32_t index, int32_t lastWidth, int32_t lastHeight);
void AndroidBasicTitleProgressBar_initOpenGL(AndroidBasicTitleProgressBar* this, Graphics* graphics);
void AndroidBasicTitleProgressBar_update(AndroidBasicTitleProgressBar* this, Graphics* graphics);
static Image* AndroidBasicTitleProgressBar_getImage(AndroidBasicTitleProgressBar* this, int32_t index);
void AndroidBasicTitleProgressBar_paint2(AndroidBasicTitleProgressBar* this, Graphics* graphics);
void AndroidBasicTitleProgressBar_setBackgroundResource(int32_t background);
void AndroidBasicTitleProgressBar_setBackground(AndroidBasicTitleProgressBar* this, bool background);
void AndroidBasicTitleProgressBar_setPortion(AndroidBasicTitleProgressBar* this, int32_t portion);
int32_t AndroidBasicTitleProgressBar_getPortion(AndroidBasicTitleProgressBar* this);

static void AndroidBasicTitleProgressBar_initFields(AndroidBasicTitleProgressBar* this) {
    this->showTitleProgressBarRunnable = NullRunnable_getInstance();
    this->dismissTitleProgressBarRunnable = NullRunnable_getInstance();
    this->titleProgressDialogPortionSetProgressRunnable = NullRunnable_getInstance();
    this->titleProgressDialogSetProgressRunnable = NullRunnable_getInstance();
    this->midletActivity = AndroidUtil_NULL_ACTIVITY;
    this->portion = 0;
    this->IMAGE = ((Image**) java_array_new(sizeof(Image*), 4));
    this->image = NullImage_NULL_IMAGE;
    this->animation = JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0);
}


void AndroidBasicTitleProgressBar_init(AndroidBasicTitleProgressBar* this, const char* title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        ProgressCanvas_init(&this->base, title, backgroundBasicColor, foregroundBasicColor);
        AndroidBasicTitleProgressBar_initFields(this);
        AndroidBasicTitleProgressBar_init(this);
        DisplayChangeEventHandler_addListenerInterface(DisplayChangeEventHandler_getInstance(), this);
        int32_t size = java_array_length(this->IMAGE);
        for (int32_t index = 0; index < size; index++) {
            this->IMAGE[index] = NullImage_NULL_IMAGE;
        }
}

AndroidBasicTitleProgressBar* AndroidBasicTitleProgressBar_new(const char* title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    AndroidBasicTitleProgressBar* this = calloc(1, sizeof(AndroidBasicTitleProgressBar));
    AndroidBasicTitleProgressBar_init(this, title, backgroundBasicColor, foregroundBasicColor);
    return this;
}


static void AndroidBasicTitleProgressBar_init(AndroidBasicTitleProgressBar* this) {
        JAVA_TRY {
            if (AndroidBasicTitleProgressBar_background != 0) {
                ResourceUtil_addResource(ResourceUtil_getInstance(), AndroidBasicTitleProgressBar_RESOURCE, AndroidBasicTitleProgressBar_background);
                GameFeatureImageCacheFactory_init();
                this->image = ImageCacheFactory_getWithKey(ImageCacheFactory_getInstance(), AndroidBasicTitleProgressBar_RESOURCE);
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, e);
        } JAVA_END_TRY;
}


void AndroidBasicTitleProgressBar_initActivity(AndroidBasicTitleProgressBar* this, Activity* activity) {
        JAVA_TRY {
            if (this->midletActivity != activity) {
                this->midletActivity = activity;
                this->showTitleProgressBarRunnable = ShowTitleProgressBarRunnable_new(this->midletActivity, this);
                this->dismissTitleProgressBarRunnable = DismissTitleProgressBarRunnable_new(this->midletActivity, this);
                this->titleProgressDialogSetProgressRunnable = TitleProgressBarSetProgressRunnable_new(this->midletActivity, this);
                this->titleProgressDialogPortionSetProgressRunnable = TitleProgressBarPortionSetProgressRunnable_new(this->midletActivity, this);
                AndroidBasicTitleProgressBar_loadProgressImages(this);
            }
            AndroidBasicTitleProgressBar_updateCurrent(this);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, e);
        } JAVA_END_TRY;
}


static void AndroidBasicTitleProgressBar_updateCurrent(AndroidBasicTitleProgressBar* this) {
        JAVA_TRY {
            if (!AndroidBasicTitleProgressBar_isBackground(this)) {
                this->animation = JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0);
            } else if (AndroidBasicTitleProgressBar_background != 0) {
                DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
                Image* currentImage = nullptr;
                if (DisplayInfoSingleton_isPortrait(displayInfo)) {
                    currentImage = AndroidBasicTitleProgressBar_getImage(this, 0);
                } else {
                    currentImage = AndroidBasicTitleProgressBar_getImage(this, 2);
                }
                if (currentImage == nullptr) {
                    this->animation = JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0);
                } else {
                    this->animation = ImageAnimation_new(currentImage, AnimationBehavior_getInstance());
                }
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->commonStrings->UPDATE, e);
        } JAVA_END_TRY;
}


void AndroidBasicTitleProgressBar_onEvent(AndroidBasicTitleProgressBar* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void AndroidBasicTitleProgressBar_onDisplayChangeEvent(AndroidBasicTitleProgressBar* this, DisplayChangeEvent* displayChangeEvent) {
        JAVA_TRY {
            AndroidBasicTitleProgressBar_loadProgressImages(this);
            AndroidBasicTitleProgressBar_updateCurrent(this);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, putF, this->commonStrings->EXCEPTION_LABEL + ExceptionUtil_getStackTrace(ExceptionUtil_getInstance(), e), this, this->canvasStrings->ON_DISPLAY_CHANGE_EVENT);
            this->animation = JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0);
        } JAVA_END_TRY;
}


static void AndroidBasicTitleProgressBar_loadProgressImages(AndroidBasicTitleProgressBar* this) {
        JAVA_TRY {
            DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
            int32_t lastWidth = DisplayInfoSingleton_getLastWidth(displayInfo);
            int32_t lastHeight = DisplayInfoSingleton_getLastHeight(displayInfo);
            if (DisplayInfoSingleton_isPortraitWH(displayInfo, lastWidth, lastHeight)) {
                AndroidBasicTitleProgressBar_setImages(this, 0, lastWidth, lastHeight);
            } else {
                AndroidBasicTitleProgressBar_setImages(this, 2, lastWidth, lastHeight);
            }
        } JAVA_CATCH(IllegalArgumentException, e) {
            JAVA_CALL(this->logUtil, putF, java_concat("IllegalArgumentException ", java_string_of(ExceptionUtil_getStackTrace(ExceptionUtil_getInstance(), e))), this, "loadProgressImages");
            this->animation = JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, putF, this->commonStrings->EXCEPTION_LABEL + ExceptionUtil_getStackTrace(ExceptionUtil_getInstance(), e), this, "loadProgressImages");
            this->animation = JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0);
        } JAVA_END_TRY;
}


bool AndroidBasicTitleProgressBar_isInitialized(AndroidBasicTitleProgressBar* this) {
        if (this->midletActivity != AndroidUtil_NULL_ACTIVITY) {
            return true;
        } else {
            return false;
        }
}


void AndroidBasicTitleProgressBar_start(AndroidBasicTitleProgressBar* this) {
        JAVA_TRY {
            JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->commonStrings->START_METHOD_NAME);
            ProgressCanvas_start((&this->base));
            Activity_runOnUiThread(this->midletActivity, this->showTitleProgressBarRunnable);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->commonStrings->START_METHOD_NAME, e);
        } JAVA_END_TRY;
}


void AndroidBasicTitleProgressBar_end(AndroidBasicTitleProgressBar* this) {
        JAVA_TRY {
            JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->commonStrings->END_METHOD_NAME);
            Activity_runOnUiThread(this->midletActivity, this->dismissTitleProgressBarRunnable);
            ProgressCanvas_end((&this->base));
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->commonStrings->END_METHOD_NAME, e);
        } JAVA_END_TRY;
}


void AndroidBasicTitleProgressBar_addEarlyPortion(AndroidBasicTitleProgressBar* this, int32_t value, const char* text, int32_t index) {
        JAVA_TRY {
            this->portion = value;
            ProgressCanvas_addEarlyPortion((&this->base), value, text, index);
            if (this->midletActivity != AndroidUtil_NULL_ACTIVITY) {
                Activity_runOnUiThread(this->midletActivity, this->titleProgressDialogPortionSetProgressRunnable);
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->ADD_PORTION, e);
        } JAVA_END_TRY;
}


void AndroidBasicTitleProgressBar_addPortion(AndroidBasicTitleProgressBar* this, int32_t value, const char* text, int32_t index) {
        JAVA_TRY {
            this->portion = value;
            ProgressCanvas_addPortion((&this->base), value, text, index);
            Activity_runOnUiThread(this->midletActivity, this->titleProgressDialogPortionSetProgressRunnable);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->ADD_PORTION, e);
        } JAVA_END_TRY;
}


void AndroidBasicTitleProgressBar_addNormalPortion(AndroidBasicTitleProgressBar* this, int32_t value, const char* text) {
        JAVA_TRY {
            this->portion = value;
            ProgressCanvas_addNormalPortion((&this->base), value, text);
            Activity_runOnUiThread(this->midletActivity, this->titleProgressDialogPortionSetProgressRunnable);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->ADD_PORTION, e);
        } JAVA_END_TRY;
}


void AndroidBasicTitleProgressBar_setValue(AndroidBasicTitleProgressBar* this, int32_t value) {
        JAVA_TRY {
            ProgressCanvas_setValue((&this->base), value);
            Activity_runOnUiThread(this->midletActivity, this->titleProgressDialogSetProgressRunnable);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, "setValue", e);
        } JAVA_END_TRY;
}


void AndroidBasicTitleProgressBar_waitUntilDisplayed(AndroidBasicTitleProgressBar* this) {
}


// throws Exception
static void AndroidBasicTitleProgressBar_setImages(AndroidBasicTitleProgressBar* this, int32_t index, int32_t lastWidth, int32_t lastHeight) {
        Image* image = this->image;
        if (image != NullImage_NULL_IMAGE) {
            if (Features_isFeature(Features_getInstance(), MainFeatureFactory_getInstance()->FULL_SCREEN)) {
                if (this->IMAGE[index] == NullImage_NULL_IMAGE) {
                    this->IMAGE[index] = ImageScaleUtil_createImage2(ImageScaleUtil_getInstance(), ImageCacheFactory_getInstance(), image, ((float) lastWidth), ((float) Image_getWidth(image)), ((float) lastHeight) - 20.0f, ((float) Image_getHeight(image)), false);
                }
            } else {
                int32_t nextIndex = index + 1;
                if (this->IMAGE[nextIndex] == NullImage_NULL_IMAGE) {
                    this->IMAGE[nextIndex] = ImageScaleUtil_createImage2(ImageScaleUtil_getInstance(), ImageCacheFactory_getInstance(), image, ((float) lastWidth), ((float) Image_getWidth(image)), ((float) lastHeight) - 28.0f, ((float) Image_getHeight(image)), false);
                }
            }
        }
}


// throws Exception
void AndroidBasicTitleProgressBar_initOpenGL(AndroidBasicTitleProgressBar* this, Graphics* graphics) {
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->commonStrings->INIT);
        this->image = GameFeatureImageCacheFactory_getWithKey(GameFeatureImageCacheFactory_getInstance(), AndroidBasicTitleProgressBar_RESOURCE);
        PreResourceImageUtil* preResourceImageUtil = PreResourceImageUtil_getInstance();
        int32_t size = java_array_length(this->IMAGE);
        for (int32_t index = 0; index < size; index++) {
            if (this->IMAGE[index] != NullImage_NULL_IMAGE) {
                this->IMAGE[index] = PreResourceImageUtil_encapsulate(preResourceImageUtil, this->IMAGE[index]);
            }
        }
        AndroidBasicTitleProgressBar_updateCurrent(this);
}


// throws Exception
void AndroidBasicTitleProgressBar_update(AndroidBasicTitleProgressBar* this, Graphics* graphics) {
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->commonStrings->UPDATE);
        AndroidBasicTitleProgressBar_initOpenGL(this, graphics);
        this->image = GameFeatureImageCacheFactory_getWithKey(GameFeatureImageCacheFactory_getInstance(), AndroidBasicTitleProgressBar_RESOURCE);
        PreResourceImageUtil* preResourceImageUtil = PreResourceImageUtil_getInstance();
        int32_t size = java_array_length(this->IMAGE);
        for (int32_t index = 0; index < size; index++) {
            if (this->IMAGE[index] != NullImage_NULL_IMAGE) {
                PreResourceImageUtil_update(preResourceImageUtil, graphics, this->IMAGE[index]);
            }
        }
}


// throws Exception
static Image* AndroidBasicTitleProgressBar_getImage(AndroidBasicTitleProgressBar* this, int32_t index) {
        Image* image = NullImage_NULL_IMAGE;
        if (Features_isFeature(Features_getInstance(), MainFeatureFactory_getInstance()->FULL_SCREEN)) {
            image = this->IMAGE[index];
        } else {
            image = this->IMAGE[index + 1];
        }
        return image;
}


void AndroidBasicTitleProgressBar_paint2(AndroidBasicTitleProgressBar* this, Graphics* graphics) {
        JAVA_TRY {
            Animation_paintXY(this->animation, graphics, 0, 20);
            ProgressCanvas_paint2((&this->base), graphics);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->canvasStrings->PAINT, e);
        } JAVA_END_TRY;
}


void AndroidBasicTitleProgressBar_setBackgroundResource(int32_t background) {
        AndroidBasicTitleProgressBar_background = background;
}


void AndroidBasicTitleProgressBar_setBackground(AndroidBasicTitleProgressBar* this, bool background) {
        ProgressCanvas_setBackground((&this->base), background);
        AndroidBasicTitleProgressBar_updateCurrent(this);
}


void AndroidBasicTitleProgressBar_setPortion(AndroidBasicTitleProgressBar* this, int32_t portion) {
        this->portion = portion;
}


int32_t AndroidBasicTitleProgressBar_getPortion(AndroidBasicTitleProgressBar* this) {
        return this->portion;
}

