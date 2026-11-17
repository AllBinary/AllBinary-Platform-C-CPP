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

typedef struct DismissTitleProgressBarRunnable DismissTitleProgressBarRunnable;
struct DismissTitleProgressBarRunnable {
    ProgressRunnable base;
    LogUtil* logUtil;
    int32_t* ZOOM_OUT_AND_IN;
};


DismissTitleProgressBarRunnable* DismissTitleProgressBarRunnable_new(Activity* midletActivity, ProgressCanvas* progressCanvas);

void DismissTitleProgressBarRunnable_init(DismissTitleProgressBarRunnable* this, Activity* midletActivity, ProgressCanvas* progressCanvas);
void DismissTitleProgressBarRunnable_run(DismissTitleProgressBarRunnable* this);

static void DismissTitleProgressBarRunnable_initFields(DismissTitleProgressBarRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    this->ZOOM_OUT_AND_IN = ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ TransistionTypes_getInstance()->ZOOM_OUT, TransistionTypes_getInstance()->ZOOM_IN }) / sizeof(int32_t), (int32_t[]){ TransistionTypes_getInstance()->ZOOM_OUT, TransistionTypes_getInstance()->ZOOM_IN }));
}


void DismissTitleProgressBarRunnable_init(DismissTitleProgressBarRunnable* this, Activity* midletActivity, ProgressCanvas* progressCanvas) {
        ProgressRunnable_init(&this->base, midletActivity, progressCanvas);
        DismissTitleProgressBarRunnable_initFields(this);
}

DismissTitleProgressBarRunnable* DismissTitleProgressBarRunnable_new(Activity* midletActivity, ProgressCanvas* progressCanvas) {
    DismissTitleProgressBarRunnable* this = calloc(1, sizeof(DismissTitleProgressBarRunnable));
    DismissTitleProgressBarRunnable_init(this, midletActivity, progressCanvas);
    return this;
}


void DismissTitleProgressBarRunnable_run(DismissTitleProgressBarRunnable* this) {
        JAVA_TRY {
            Activity_onDismissProgress(this->midletActivity, this->ZOOM_OUT_AND_IN);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
        } JAVA_END_TRY;
}

