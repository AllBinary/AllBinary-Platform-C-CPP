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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/score/displayable/HighScoreTextBox.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/displayable/canvas/Runnable.h"

typedef struct SaveHighScoreRunnable SaveHighScoreRunnable;
struct SaveHighScoreRunnable {
    Runnable Runnable_interface;
    ProgressCanvas* progressCanvas;
    bool isLast;
    HighScoreTextBox* textBox;
};


SaveHighScoreRunnable* SaveHighScoreRunnable_new(bool isLast, HighScoreTextBox* textBox);

void SaveHighScoreRunnable_init(SaveHighScoreRunnable* this, bool isLast, HighScoreTextBox* textBox);
void SaveHighScoreRunnable_run(SaveHighScoreRunnable* this);

static void SaveHighScoreRunnable_initFields(SaveHighScoreRunnable* this) {
    this->progressCanvas = ProgressCanvasFactory_getInstance();
    
    
}


void SaveHighScoreRunnable_init(SaveHighScoreRunnable* this, bool isLast, HighScoreTextBox* textBox) {
    SaveHighScoreRunnable_initFields(this);
        this->isLast = isLast;
        this->textBox = textBox;
}

SaveHighScoreRunnable* SaveHighScoreRunnable_new(bool isLast, HighScoreTextBox* textBox) {
    SaveHighScoreRunnable* this = calloc(1, sizeof(SaveHighScoreRunnable));
    SaveHighScoreRunnable_init(this, isLast, textBox);
    return this;
}


void SaveHighScoreRunnable_run(SaveHighScoreRunnable* this) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            if (this->isLast) {
                HighScoreTextBox_submit(this->textBox);
            } else {
                HighScoreTextBox_saveHighScore(this->textBox);
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(logUtil, commonStrings->EXCEPTION, this, "run", e);
            ProgressCanvas_end(this->progressCanvas);
        } JAVA_END_TRY;
}

