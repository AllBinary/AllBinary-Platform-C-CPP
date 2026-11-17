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
// package org.allbinary.graphics.displayable.screen

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Canvas.h"
// #include "javax/microedition/lcdui/Command.h"
// #include "javax/microedition/lcdui/CommandListener.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct WebCommandProcessor WebCommandProcessor;
struct WebCommandProcessor {
    LogUtil* logUtil;
    AboutCommandProcessor* aboutCommandProcessor;
    BasicArrayList* list;
};

static WebCommandProcessor* WebCommandProcessor_instance;

WebCommandProcessor* WebCommandProcessor_new(void);
WebCommandProcessor* WebCommandProcessor_getInstance(void);
void WebCommandProcessor_process(WebCommandProcessor* this, CommandListener* midletCommandListener, Command* command, Canvas* canvas);

// Static fields with runtime initializers: call this once at startup
void WebCommandProcessor_staticInit(void) {
    WebCommandProcessor_instance = WebCommandProcessor_new();
}

static void WebCommandProcessor_initFields(WebCommandProcessor* this) {
    this->logUtil = LogUtil_getInstance();
    this->aboutCommandProcessor = AboutCommandProcessor_getInstance();
    this->list = BasicArrayListD_new();
}

void WebCommandProcessor_init(WebCommandProcessor* this) {
    WebCommandProcessor_initFields(this);
}

WebCommandProcessor* WebCommandProcessor_new(void) {
    WebCommandProcessor* this = calloc(1, sizeof(WebCommandProcessor));
    WebCommandProcessor_init(this);
    return this;
}


WebCommandProcessor* WebCommandProcessor_getInstance(void) {
        return WebCommandProcessor_instance;
}


void WebCommandProcessor_process(WebCommandProcessor* this, CommandListener* midletCommandListener, Command* command, Canvas* canvas) {
        JAVA_TRY {
            BasicArrayList_removeAt(this->list, 0);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->PROCESS, e);
        } JAVA_END_TRY;
}

