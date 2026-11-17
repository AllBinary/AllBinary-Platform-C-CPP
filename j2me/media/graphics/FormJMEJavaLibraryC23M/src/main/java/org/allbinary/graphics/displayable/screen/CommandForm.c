/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2002 AllBinary 
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
// #include "javax/microedition/lcdui/Command.h"
// #include "javax/microedition/lcdui/CommandListener.h"
// #include "javax/microedition/lcdui/Form.h"
// #include "javax/microedition/lcdui/NullCommandListener.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/game/displayable/canvas/MenuListener.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/displayable/command/MyCommandInterface.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABStack.h"

typedef struct CommandForm CommandForm;
struct CommandForm {
    Form base;
    MyCommandInterface MyCommandInterface_interface;
    MenuListener MenuListener_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    Processor* repaintProcessor;
    ABStack* commandStack;
};

static Any* CommandForm_NULL_COMMAND_FORM;

CommandForm* CommandForm_new(CommandListener* commandListener, const char* formTitle, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);
CommandForm* CommandForm_getNullCommandForm(void);

void CommandForm_init(CommandForm* this, CommandListener* commandListener, const char* formTitle, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);
void CommandForm_initCommands(CommandForm* this, CommandListener* cmdListener);
void CommandForm_open(CommandForm* this);
void CommandForm_close(CommandForm* this);
void CommandForm_update(CommandForm* this);
int32_t CommandForm_getSourceId(CommandForm* this);
void CommandForm_addCommand(CommandForm* this, Command* command);
void CommandForm_removeAllCommands(CommandForm* this);

// Static fields with runtime initializers: call this once at startup
void CommandForm_staticInit(void) {
    CommandForm_NULL_COMMAND_FORM = NullUtil_getInstance()->NULL_OBJECT;
}

static void CommandForm_initFields(CommandForm* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->repaintProcessor = ScreenRepaintProcessorFactory_create(ScreenRepaintProcessorFactory_getInstance(), this);
    
}


CommandForm* CommandForm_getNullCommandForm(void) {
        if (CommandForm_NULL_COMMAND_FORM == NullUtil_getInstance()->NULL_OBJECT) {
            CommandForm_NULL_COMMAND_FORM = CommandForm_new(NullCommandListener_NULL_COMMAND_LISTENER, StringUtil_getInstance()->EMPTY_STRING, BasicColorFactory_getInstance()->BLACK, BasicColorFactory_getInstance()->WHITE);
        }
        return ((CommandForm*) CommandForm_NULL_COMMAND_FORM);
}


void CommandForm_init(CommandForm* this, CommandListener* commandListener, const char* formTitle, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
        Form_init(&this->base, formTitle);
        CommandForm_initFields(this);
        this->commandStack = StdUtil_createStack(StdUtil_getInstance());
        JAVA_TRY {
            Processor_process(this->repaintProcessor);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
}

CommandForm* CommandForm_new(CommandListener* commandListener, const char* formTitle, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
    CommandForm* this = calloc(1, sizeof(CommandForm));
    CommandForm_init(this, commandListener, formTitle, backgrounBasicColor, foregroundBasicColor);
    return this;
}


void CommandForm_initCommands(CommandForm* this, CommandListener* cmdListener) {
}


void CommandForm_open(CommandForm* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "open");
}


// throws Exception
void CommandForm_close(CommandForm* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CLOSE);
}


// throws Exception
void CommandForm_update(CommandForm* this) {
        Processor_process(this->repaintProcessor);
}


int32_t CommandForm_getSourceId(CommandForm* this) {
        return 0;
}


void CommandForm_addCommand(CommandForm* this, Command* command) {
        ABStack_push(this->commandStack, command);
        Form_addCommand((&this->base), command);
}


void CommandForm_removeAllCommands(CommandForm* this) {
        int32_t size = ABStack_size(this->commandStack);
        for (int32_t index = 0; index < size; index++) {
            Form_removeCommand((&this->base), ((Command*) ABStack_pop(this->commandStack)));
        }
}

