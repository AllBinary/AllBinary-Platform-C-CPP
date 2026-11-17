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
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "android/app/Activity.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressRunnable.h"

typedef struct TitleProgressBarPortionSetProgressRunnable TitleProgressBarPortionSetProgressRunnable;
struct TitleProgressBarPortionSetProgressRunnable {
    ProgressRunnable base;
    LogUtil* logUtil;
};


TitleProgressBarPortionSetProgressRunnable* TitleProgressBarPortionSetProgressRunnable_new(Activity* midletActivity, ProgressCanvas* progressCanvas);

void TitleProgressBarPortionSetProgressRunnable_init(TitleProgressBarPortionSetProgressRunnable* this, Activity* midletActivity, ProgressCanvas* progressCanvas);
void TitleProgressBarPortionSetProgressRunnable_run(TitleProgressBarPortionSetProgressRunnable* this);

static void TitleProgressBarPortionSetProgressRunnable_initFields(TitleProgressBarPortionSetProgressRunnable* this) {
    this->logUtil = LogUtil_getInstance();
}


void TitleProgressBarPortionSetProgressRunnable_init(TitleProgressBarPortionSetProgressRunnable* this, Activity* midletActivity, ProgressCanvas* progressCanvas) {
        ProgressRunnable_init(&this->base, midletActivity, progressCanvas);
        TitleProgressBarPortionSetProgressRunnable_initFields(this);
}

TitleProgressBarPortionSetProgressRunnable* TitleProgressBarPortionSetProgressRunnable_new(Activity* midletActivity, ProgressCanvas* progressCanvas) {
    TitleProgressBarPortionSetProgressRunnable* this = calloc(1, sizeof(TitleProgressBarPortionSetProgressRunnable));
    TitleProgressBarPortionSetProgressRunnable_init(this, midletActivity, progressCanvas);
    return this;
}


void TitleProgressBarPortionSetProgressRunnable_run(TitleProgressBarPortionSetProgressRunnable* this) {
        JAVA_TRY {
            AndroidBasicTitleProgressBar* progressCanvas = ((AndroidBasicTitleProgressBar*) this->progressCanvas);
            Activity_onSetProgress(this->midletActivity, ((int32_t) (ProgressCanvas_getValue(this->progressCanvas) + ProgressCanvas_getMaxValue(this->progressCanvas) / ProgressCanvas_getPortion(progressCanvas))), ProgressCanvas_getText(this->progressCanvas));
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
        } JAVA_END_TRY;
}

