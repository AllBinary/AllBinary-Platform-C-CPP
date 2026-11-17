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
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct StartIntermissionProcessor StartIntermissionProcessor;
struct StartIntermissionProcessor {
    Processor base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    AllBinaryGameCanvas* gameCanvas;
    int64_t WAIT;
};


StartIntermissionProcessor* StartIntermissionProcessor_new(AllBinaryGameCanvas* gameCanvas);

void StartIntermissionProcessor_init(StartIntermissionProcessor* this, AllBinaryGameCanvas* gameCanvas);
void StartIntermissionProcessor_process(StartIntermissionProcessor* this);

static void StartIntermissionProcessor_initFields(StartIntermissionProcessor* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    this->WAIT = 5000LL;
}


void StartIntermissionProcessor_init(StartIntermissionProcessor* this, AllBinaryGameCanvas* gameCanvas) {
    Processor_init(&this->base);
    StartIntermissionProcessor_initFields(this);
        this->gameCanvas = gameCanvas;
}

StartIntermissionProcessor* StartIntermissionProcessor_new(AllBinaryGameCanvas* gameCanvas) {
    StartIntermissionProcessor* this = calloc(1, sizeof(StartIntermissionProcessor));
    StartIntermissionProcessor_init(this, gameCanvas);
    return this;
}


// throws Exception
void StartIntermissionProcessor_process(StartIntermissionProcessor* this) {
        if (JAVA_CALL(JAVA_CALL(AllBinaryGameCanvas_getStartIntermissionInterface(this->gameCanvas), getTimeDelayHelper), isElapsedTNT, this->WAIT)) {
            LogUtil_putF(this->logUtil, "Intermission End", this, this->commonStrings->PROCESS);
            JAVA_CALL(AllBinaryGameCanvas_getStartIntermissionInterface(this->gameCanvas), setEnabled, false);
        }
}

