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
#include "org/allbinary/android/activity/NullProgressActivity.h"
#include "org/allbinary/android/activity/ProgressActivityInterface.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"

typedef struct AndroidTitleProgressBar AndroidTitleProgressBar;
struct AndroidTitleProgressBar {
    ProgressCanvas base;
    ShowTitleProgressBarRunnable* showTitleProgressBarRunnable;
    DismissTitleProgressBarRunnable* dismissTitleProgressBarRunnable;
    TitleProgressBarPortionSetProgressRunnable* progressDialogPortionSetProgressRunnable;
    TitleProgressBarSetProgressRunnable* progressDialogSetProgressRunnable;
    ProgressActivityInterface* progressActivity;
    int32_t portion;
};


AndroidTitleProgressBar* AndroidTitleProgressBar_new(const char* title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void AndroidTitleProgressBar_init(AndroidTitleProgressBar* this, const char* title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
void AndroidTitleProgressBar_init(AndroidTitleProgressBar* this, ProgressActivityInterface* activity);
bool AndroidTitleProgressBar_isInitialized(AndroidTitleProgressBar* this);
void AndroidTitleProgressBar_start(AndroidTitleProgressBar* this);
void AndroidTitleProgressBar_end(AndroidTitleProgressBar* this);
void AndroidTitleProgressBar_addPortion(AndroidTitleProgressBar* this, int32_t value, const char* text, int32_t index);
void AndroidTitleProgressBar_addNormalPortion(AndroidTitleProgressBar* this, int32_t value, const char* text);
void AndroidTitleProgressBar_setValue(AndroidTitleProgressBar* this, int32_t value);
void AndroidTitleProgressBar_waitUntilDisplayed(AndroidTitleProgressBar* this);
void AndroidTitleProgressBar_paint(AndroidTitleProgressBar* this, Graphics* graphics);

static void AndroidTitleProgressBar_initFields(AndroidTitleProgressBar* this) {
    this->showTitleProgressBarRunnable = ShowTitleProgressBarRunnable_new(this);
    this->dismissTitleProgressBarRunnable = DismissTitleProgressBarRunnable_new(this);
    this->progressDialogPortionSetProgressRunnable = TitleProgressBarPortionSetProgressRunnable_new(this);
    this->progressDialogSetProgressRunnable = TitleProgressBarSetProgressRunnable_new(this);
    this->progressActivity = NullProgressActivity_NULL_PROGRESS_ACTIVITY;
    this->portion = 0;
}


void AndroidTitleProgressBar_init(AndroidTitleProgressBar* this, const char* title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        ProgressCanvas_init(&this->base, title, backgroundBasicColor, foregroundBasicColor);
        AndroidTitleProgressBar_initFields(this);
}

AndroidTitleProgressBar* AndroidTitleProgressBar_new(const char* title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    AndroidTitleProgressBar* this = calloc(1, sizeof(AndroidTitleProgressBar));
    AndroidTitleProgressBar_init(this, title, backgroundBasicColor, foregroundBasicColor);
    return this;
}


void AndroidTitleProgressBar_init(AndroidTitleProgressBar* this, ProgressActivityInterface* activity) {
        this->progressActivity = activity;
}


bool AndroidTitleProgressBar_isInitialized(AndroidTitleProgressBar* this) {
        if (this->progressActivity != NullProgressActivity_NULL_PROGRESS_ACTIVITY) {
            return true;
        } else {
            return false;
        }
}


void AndroidTitleProgressBar_start(AndroidTitleProgressBar* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->START_METHOD_NAME);
            ProgressCanvas_start((&this->base));
            ProgressActivityInterface_runOnUiThread(this->progressActivity, this->showTitleProgressBarRunnable);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->START_METHOD_NAME, e);
        } JAVA_END_TRY;
}


void AndroidTitleProgressBar_end(AndroidTitleProgressBar* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->END_METHOD_NAME);
            ProgressActivityInterface_runOnUiThread(this->progressActivity, this->dismissTitleProgressBarRunnable);
            ProgressCanvas_end((&this->base));
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->END_METHOD_NAME, e);
        } JAVA_END_TRY;
}


void AndroidTitleProgressBar_addPortion(AndroidTitleProgressBar* this, int32_t value, const char* text, int32_t index) {
        JAVA_TRY {
            ProgressCanvas_addPortion((&this->base), value, text, index);
            this->portion = value;
            ProgressActivityInterface_runOnUiThread(this->progressActivity, this->progressDialogPortionSetProgressRunnable);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->ADD_PORTION, e);
        } JAVA_END_TRY;
}


void AndroidTitleProgressBar_addNormalPortion(AndroidTitleProgressBar* this, int32_t value, const char* text) {
        JAVA_TRY {
            ProgressCanvas_addNormalPortion((&this->base), value, text);
            this->portion = value;
            ProgressActivityInterface_runOnUiThread(this->progressActivity, this->progressDialogPortionSetProgressRunnable);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->ADD_PORTION, e);
        } JAVA_END_TRY;
}


void AndroidTitleProgressBar_setValue(AndroidTitleProgressBar* this, int32_t value) {
        JAVA_TRY {
            ProgressCanvas_setValue((&this->base), value);
            ProgressActivityInterface_runOnUiThread(this->progressActivity, this->progressDialogSetProgressRunnable);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "setValue", e);
        } JAVA_END_TRY;
}


void AndroidTitleProgressBar_waitUntilDisplayed(AndroidTitleProgressBar* this) {
}


void AndroidTitleProgressBar_paint(AndroidTitleProgressBar* this, Graphics* graphics) {
}

typedef struct TitleProgressBarSetProgressRunnable TitleProgressBarSetProgressRunnable;
struct TitleProgressBarSetProgressRunnable {
    Runnable Runnable_interface;
    AndroidTitleProgressBar* androidTitleProgressBar;
};


TitleProgressBarSetProgressRunnable* TitleProgressBarSetProgressRunnable_new(AndroidTitleProgressBar* androidTitleProgressBar);
    
    void AndroidTitleProgressBar_init(AndroidTitleProgressBar* this, AndroidTitleProgressBar* androidTitleProgressBar);
    void AndroidTitleProgressBar_run(AndroidTitleProgressBar* this);

static void TitleProgressBarSetProgressRunnable_initFields(TitleProgressBarSetProgressRunnable* this) {
        
}
    

    void AndroidTitleProgressBar_init(AndroidTitleProgressBar* this, AndroidTitleProgressBar* androidTitleProgressBar) {
        AndroidTitleProgressBar_initFields(this);
            this->androidTitleProgressBar = androidTitleProgressBar;
    }

    AndroidTitleProgressBar* AndroidTitleProgressBar_new(AndroidTitleProgressBar* androidTitleProgressBar) {
        AndroidTitleProgressBar* this = calloc(1, sizeof(AndroidTitleProgressBar));
        AndroidTitleProgressBar_init(this, androidTitleProgressBar);
        return this;
    }
    

    void AndroidTitleProgressBar_run(AndroidTitleProgressBar* this) {
            LogUtil* logUtil = LogUtil_getInstance();
            CommonStrings* commonStrings = CommonStrings_getInstance();
            JAVA_TRY {
                int32_t value = ((int32_t) AndroidTitleProgressBar_getValue(this->androidTitleProgressBar));
                JAVA_CALL(this->androidTitleProgressBar->progressActivity, onTitleProgressBarSetProgress, value);
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
            } JAVA_END_TRY;
    }

typedef struct TitleProgressBarPortionSetProgressRunnable TitleProgressBarPortionSetProgressRunnable;
struct TitleProgressBarPortionSetProgressRunnable {
    Runnable Runnable_interface;
    AndroidTitleProgressBar* androidTitleProgressBar;
};


TitleProgressBarPortionSetProgressRunnable* TitleProgressBarPortionSetProgressRunnable_new(AndroidTitleProgressBar* androidTitleProgressBar);
    
    void AndroidTitleProgressBar_init(AndroidTitleProgressBar* this, AndroidTitleProgressBar* androidTitleProgressBar);
    void AndroidTitleProgressBar_run(AndroidTitleProgressBar* this);

static void TitleProgressBarPortionSetProgressRunnable_initFields(TitleProgressBarPortionSetProgressRunnable* this) {
        
}
    

    void AndroidTitleProgressBar_init(AndroidTitleProgressBar* this, AndroidTitleProgressBar* androidTitleProgressBar) {
        AndroidTitleProgressBar_initFields(this);
            this->androidTitleProgressBar = androidTitleProgressBar;
    }

    AndroidTitleProgressBar* AndroidTitleProgressBar_new(AndroidTitleProgressBar* androidTitleProgressBar) {
        AndroidTitleProgressBar* this = calloc(1, sizeof(AndroidTitleProgressBar));
        AndroidTitleProgressBar_init(this, androidTitleProgressBar);
        return this;
    }
    

    void AndroidTitleProgressBar_run(AndroidTitleProgressBar* this) {
            LogUtil* logUtil = LogUtil_getInstance();
            CommonStrings* commonStrings = CommonStrings_getInstance();
            JAVA_TRY {
                int32_t value = ((int32_t) (AndroidTitleProgressBar_getValue(this->androidTitleProgressBar) + AndroidTitleProgressBar_getMaxValue(this->androidTitleProgressBar) / this->androidTitleProgressBar->portion));
                JAVA_CALL(this->androidTitleProgressBar->progressActivity, onTitleProgressBarSetProgress, value);
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
            } JAVA_END_TRY;
    }

typedef struct ShowTitleProgressBarRunnable ShowTitleProgressBarRunnable;
struct ShowTitleProgressBarRunnable {
    Runnable Runnable_interface;
    AndroidTitleProgressBar* androidTitleProgressBar;
};


ShowTitleProgressBarRunnable* ShowTitleProgressBarRunnable_new(AndroidTitleProgressBar* androidTitleProgressBar);
    
    void AndroidTitleProgressBar_init(AndroidTitleProgressBar* this, AndroidTitleProgressBar* androidTitleProgressBar);
    void AndroidTitleProgressBar_run(AndroidTitleProgressBar* this);

static void ShowTitleProgressBarRunnable_initFields(ShowTitleProgressBarRunnable* this) {
        
}
    

    void AndroidTitleProgressBar_init(AndroidTitleProgressBar* this, AndroidTitleProgressBar* androidTitleProgressBar) {
        AndroidTitleProgressBar_initFields(this);
            this->androidTitleProgressBar = androidTitleProgressBar;
    }

    AndroidTitleProgressBar* AndroidTitleProgressBar_new(AndroidTitleProgressBar* androidTitleProgressBar) {
        AndroidTitleProgressBar* this = calloc(1, sizeof(AndroidTitleProgressBar));
        AndroidTitleProgressBar_init(this, androidTitleProgressBar);
        return this;
    }
    

    void AndroidTitleProgressBar_run(AndroidTitleProgressBar* this) {
            LogUtil* logUtil = LogUtil_getInstance();
            CommonStrings* commonStrings = CommonStrings_getInstance();
            JAVA_TRY {
                int32_t maxValue = ((int32_t) AndroidTitleProgressBar_getMaxValue(this->androidTitleProgressBar));
                JAVA_CALL(this->androidTitleProgressBar->progressActivity, onShowTitleProgressBar, maxValue, false);
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
            } JAVA_END_TRY;
    }

typedef struct DismissTitleProgressBarRunnable DismissTitleProgressBarRunnable;
struct DismissTitleProgressBarRunnable {
    Runnable Runnable_interface;
    AndroidTitleProgressBar* androidTitleProgressBar;
};


DismissTitleProgressBarRunnable* DismissTitleProgressBarRunnable_new(AndroidTitleProgressBar* androidTitleProgressBar);
    
    void AndroidTitleProgressBar_init(AndroidTitleProgressBar* this, AndroidTitleProgressBar* androidTitleProgressBar);
    void AndroidTitleProgressBar_run(AndroidTitleProgressBar* this);

static void DismissTitleProgressBarRunnable_initFields(DismissTitleProgressBarRunnable* this) {
        
}
    

    void AndroidTitleProgressBar_init(AndroidTitleProgressBar* this, AndroidTitleProgressBar* androidTitleProgressBar) {
        AndroidTitleProgressBar_initFields(this);
            this->androidTitleProgressBar = androidTitleProgressBar;
    }

    AndroidTitleProgressBar* AndroidTitleProgressBar_new(AndroidTitleProgressBar* androidTitleProgressBar) {
        AndroidTitleProgressBar* this = calloc(1, sizeof(AndroidTitleProgressBar));
        AndroidTitleProgressBar_init(this, androidTitleProgressBar);
        return this;
    }
    

    void AndroidTitleProgressBar_run(AndroidTitleProgressBar* this) {
            LogUtil* logUtil = LogUtil_getInstance();
            CommonStrings* commonStrings = CommonStrings_getInstance();
            JAVA_TRY {
                JAVA_CALL(this->androidTitleProgressBar->progressActivity, onDismissTitleProgressBar);
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
            } JAVA_END_TRY;
    }

