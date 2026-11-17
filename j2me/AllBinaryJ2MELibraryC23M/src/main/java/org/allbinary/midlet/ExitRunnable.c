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
// package org.allbinary.midlet

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/NullCanvas.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/midlet/Runnable.h"

typedef struct ExitRunnable ExitRunnable;
struct ExitRunnable {
    Runnable Runnable_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    AllBinaryMidlet* midlet;
    Processor* processor;
    bool isProgress;
};


ExitRunnable* ExitRunnable_new(AllBinaryMidlet* midlet, Processor* processor, bool isProgress);

void ExitRunnable_init(ExitRunnable* this, AllBinaryMidlet* midlet, Processor* processor, bool isProgress);
void ExitRunnable_run(ExitRunnable* this);

static void ExitRunnable_initFields(ExitRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
    
}


void ExitRunnable_init(ExitRunnable* this, AllBinaryMidlet* midlet, Processor* processor, bool isProgress) {
    ExitRunnable_initFields(this);
        this->midlet = midlet;
        this->isProgress = isProgress;
        this->processor = processor;
}

ExitRunnable* ExitRunnable_new(AllBinaryMidlet* midlet, Processor* processor, bool isProgress) {
    ExitRunnable* this = calloc(1, sizeof(ExitRunnable));
    ExitRunnable_init(this, midlet, processor, isProgress);
    return this;
}


void ExitRunnable_run(ExitRunnable* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START_RUNNABLE, this, this->commonStrings->RUN);
            AllBinaryMidlet_destroyAppInRunnable(this->midlet, false, this->isProgress);
            AllBinaryMidlet_setDisplay(this->midlet, NullCanvas_NULL_CANVAS);
            AllBinaryMidlet_notifyDestroyed(this->midlet);
            LogUtil_putF(this->logUtil, this->commonStrings->END_RUNNABLE, this, this->commonStrings->RUN);
            Processor_process(this->processor);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
            JAVA_TRY {
                Processor_process(this->processor);
            } JAVA_CATCH(Exception, e2) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
            } JAVA_END_TRY;
        } JAVA_END_TRY;
}

