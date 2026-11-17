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
// package org.allbinary.graphics.displayable.command

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Command.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct MyCommandsFactory MyCommandsFactory;
struct MyCommandsFactory {
    Command* NO_COMMAND;
    Command* GAUGE_CHANGE;
    Command* SET_DISPLAYABLE;
    Command* PAUSE_COMMAND;
    Command* RESUME_COMMAND;
};

static MyCommandsFactory* MyCommandsFactory_instance;

MyCommandsFactory* MyCommandsFactory_new(void);
MyCommandsFactory* MyCommandsFactory_getInstance(void);

void MyCommandsFactory_init(MyCommandsFactory* this);

// Static fields with runtime initializers: call this once at startup
void MyCommandsFactory_staticInit(void) {
    MyCommandsFactory_instance = MyCommandsFactory_new();
}

static void MyCommandsFactory_initFields(MyCommandsFactory* this) {
    this->NO_COMMAND = Command_new(StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING, -1, -1);
    this->GAUGE_CHANGE = Command_new("GAUGE_CHANGE", StringUtil_getInstance()->EMPTY_STRING, Command_ITEM, 1);
    this->SET_DISPLAYABLE = Command_new("Display", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 2);
    this->PAUSE_COMMAND = Command_new("Pause", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 0);
    this->RESUME_COMMAND = Command_new("Resume", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 0);
}


MyCommandsFactory* MyCommandsFactory_getInstance(void) {
        return MyCommandsFactory_instance;
}


void MyCommandsFactory_init(MyCommandsFactory* this) {
    MyCommandsFactory_initFields(this);
}

MyCommandsFactory* MyCommandsFactory_new(void) {
    MyCommandsFactory* this = calloc(1, sizeof(MyCommandsFactory));
    MyCommandsFactory_init(this);
    return this;
}

