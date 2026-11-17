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
#include "org/allbinary/animation/transition/TransistionTypes.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "android/app/Activity.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressRunnable.h"

typedef struct ShowTitleProgressBarRunnable ShowTitleProgressBarRunnable;
struct ShowTitleProgressBarRunnable {
    ProgressRunnable base;
    LogUtil* logUtil;
    int32_t* FADE_IN_HALF;
};


ShowTitleProgressBarRunnable* ShowTitleProgressBarRunnable_new(Activity* midletActivity, ProgressCanvas* progressCanvas);

void ShowTitleProgressBarRunnable_init(ShowTitleProgressBarRunnable* this, Activity* midletActivity, ProgressCanvas* progressCanvas);
void ShowTitleProgressBarRunnable_run(ShowTitleProgressBarRunnable* this);

static void ShowTitleProgressBarRunnable_initFields(ShowTitleProgressBarRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    this->FADE_IN_HALF = ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ TransistionTypes_getInstance()->FADE_IN_TO_HALF_ALPHA, TransistionTypes_getInstance()->FADE_IN_FROM_HALF_ALPHA }) / sizeof(int32_t), (int32_t[]){ TransistionTypes_getInstance()->FADE_IN_TO_HALF_ALPHA, TransistionTypes_getInstance()->FADE_IN_FROM_HALF_ALPHA }));
}


void ShowTitleProgressBarRunnable_init(ShowTitleProgressBarRunnable* this, Activity* midletActivity, ProgressCanvas* progressCanvas) {
        ProgressRunnable_init(&this->base, midletActivity, progressCanvas);
        ShowTitleProgressBarRunnable_initFields(this);
}

ShowTitleProgressBarRunnable* ShowTitleProgressBarRunnable_new(Activity* midletActivity, ProgressCanvas* progressCanvas) {
    ShowTitleProgressBarRunnable* this = calloc(1, sizeof(ShowTitleProgressBarRunnable));
    ShowTitleProgressBarRunnable_init(this, midletActivity, progressCanvas);
    return this;
}


void ShowTitleProgressBarRunnable_run(ShowTitleProgressBarRunnable* this) {
        JAVA_TRY {
            Activity_onShowProgress(this->midletActivity, false, this->FADE_IN_HALF);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
        } JAVA_END_TRY;
}

