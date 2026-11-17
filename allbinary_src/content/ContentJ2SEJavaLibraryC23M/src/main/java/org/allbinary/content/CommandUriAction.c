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
// package org.allbinary.content

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Command.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct CommandUriAction CommandUriAction;
struct CommandUriAction {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    ABHashtable* hashtable;
};

static CommandUriAction* CommandUriAction_instance;

CommandUriAction* CommandUriAction_new(void);
CommandUriAction* CommandUriAction_getInstance(void);
void CommandUriAction_add(CommandUriAction* this, Command* command, const char* url);
void CommandUriAction_process(CommandUriAction* this, Command* command);
Intent* CommandUriAction_getIntent(CommandUriAction* this, Command* command);

// Static fields with runtime initializers: call this once at startup
void CommandUriAction_staticInit(void) {
    CommandUriAction_instance = CommandUriAction_new();
}

static void CommandUriAction_initFields(CommandUriAction* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->hashtable = StdUtil_createHashtable(StdUtil_getInstance());
}

void CommandUriAction_init(CommandUriAction* this) {
    CommandUriAction_initFields(this);
}

CommandUriAction* CommandUriAction_new(void) {
    CommandUriAction* this = calloc(1, sizeof(CommandUriAction));
    CommandUriAction_init(this);
    return this;
}


CommandUriAction* CommandUriAction_getInstance(void) {
        return CommandUriAction_instance;
}


void CommandUriAction_add(CommandUriAction* this, Command* command, const char* url) {
        ABHashtable_put(this->hashtable, command, url);
}


void CommandUriAction_process(CommandUriAction* this, Command* command) {
        JAVA_TRY {
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, e);
        } JAVA_END_TRY;
}


Intent* CommandUriAction_getIntent(CommandUriAction* this, Command* command) {
        const char* url = ((const char*) ABHashtable_get(this->hashtable, command));
        return this->base.intent;
}

