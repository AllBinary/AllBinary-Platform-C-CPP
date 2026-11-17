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
// package org.allbinary.game.score.displayable

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/logic/ABSystemWrapper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/thread/ARunnable.h"

typedef struct HighScoreRunnable HighScoreRunnable;
struct HighScoreRunnable {
    ARunnable base;
    HighScoresCanvas* highScoresCanvas;
};


HighScoreRunnable* HighScoreRunnable_new(HighScoresCanvas* highScoresCanvas);

void HighScoreRunnable_init(HighScoreRunnable* this, HighScoresCanvas* highScoresCanvas);
void HighScoreRunnable_run(HighScoreRunnable* this);

static void HighScoreRunnable_initFields(HighScoreRunnable* this) {
    
}


void HighScoreRunnable_init(HighScoreRunnable* this, HighScoresCanvas* highScoresCanvas) {
    ARunnable_init(&this->base);
    HighScoreRunnable_initFields(this);
        this->highScoresCanvas = highScoresCanvas;
}

HighScoreRunnable* HighScoreRunnable_new(HighScoresCanvas* highScoresCanvas) {
    HighScoreRunnable* this = calloc(1, sizeof(HighScoreRunnable));
    HighScoreRunnable_init(this, highScoresCanvas);
    return this;
}


void HighScoreRunnable_run(HighScoreRunnable* this) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil* logUtil = LogUtil_getInstance();
        HighScoresCanvas* highScoresCanvas = this->highScoresCanvas;
        JAVA_TRY {
            bool isHTML = J2MEUtil_isHTML();
            if (!isHTML) {
                while (!highScoresCanvas->hasPainted) {
                }
                highScoresCanvas->hasPainted = false;
            }
            StringMaker* stringMaker = StringMaker_new();
            ABSystemWrapper* systemWrapper = ABSystemWrapper_getInstance();
            int64_t currentTimeMillis = ABSystemWrapper_currentTimeMillis(systemWrapper);
            LogUtil_putF(logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, "HighScoresCanvas - Request repaint to be sure: "), appendlong, currentTimeMillis), toString), this, commonStrings->RUN);
            JAVA_CALL(highScoresCanvas->repaintBehavior, onChangeRepaint, highScoresCanvas);
            if (!isHTML) {
                while (!highScoresCanvas->hasPainted) {
                }
            }
            StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
            LogUtil_putF(logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, "HighScoresCanvas - Now that the canvas has completed repaint go ahead and fetch the scores: "), appendlong, currentTimeMillis), toString), this, commonStrings->RUN);
            HighScoresCanvas_executeUpdate(highScoresCanvas);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
        } JAVA_END_TRY;
}

