/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.game.displayable

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/thread/ARunnable.h"

typedef struct RepaintRunnable RepaintRunnable;
struct RepaintRunnable {
    ARunnable base;
    Canvas* canvas;
};


RepaintRunnable* RepaintRunnable_new(Canvas* canvas);

void RepaintRunnable_init(RepaintRunnable* this, Canvas* canvas);
void RepaintRunnable_run(RepaintRunnable* this);

static void RepaintRunnable_initFields(RepaintRunnable* this) {
    
}


void RepaintRunnable_init(RepaintRunnable* this, Canvas* canvas) {
    ARunnable_init(&this->base);
    RepaintRunnable_initFields(this);
        this->canvas = canvas;
}

RepaintRunnable* RepaintRunnable_new(Canvas* canvas) {
    RepaintRunnable* this = calloc(1, sizeof(RepaintRunnable));
    RepaintRunnable_init(this, canvas);
    return this;
}


void RepaintRunnable_run(RepaintRunnable* this) {
        JAVA_TRY {
            Canvas_repaint(this->canvas);
            DisplayInfoSingleton_process(DisplayInfoSingleton_getInstance());
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil* logUtil = LogUtil_getInstance();
            LogUtil_put(logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
        } JAVA_END_TRY;
}

