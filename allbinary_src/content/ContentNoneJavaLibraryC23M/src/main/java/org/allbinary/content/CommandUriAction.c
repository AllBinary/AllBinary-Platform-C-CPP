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
#include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct CommandUriAction CommandUriAction;
struct CommandUriAction {
    LogUtil* logUtil;
};

static CommandUriAction* CommandUriAction_instance;

CommandUriAction* CommandUriAction_new(void);
CommandUriAction* CommandUriAction_getInstance(void);
void CommandUriAction_add(CommandUriAction* this, Command* command, const char* url);
void CommandUriAction_process(CommandUriAction* this, Command* command);

// Static fields with runtime initializers: call this once at startup
void CommandUriAction_staticInit(void) {
    CommandUriAction_instance = CommandUriAction_new();
}

static void CommandUriAction_initFields(CommandUriAction* this) {
    this->logUtil = LogUtil_getInstance();
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
}


void CommandUriAction_process(CommandUriAction* this, Command* command) {
}

