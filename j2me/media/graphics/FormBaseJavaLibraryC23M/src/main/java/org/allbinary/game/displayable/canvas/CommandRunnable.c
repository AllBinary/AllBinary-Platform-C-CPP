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
// #include "javax/microedition/lcdui/Command.h"
// #include "javax/microedition/lcdui/CommandListener.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/displayable/canvas/Runnable.h"

typedef struct CommandRunnable CommandRunnable;
struct CommandRunnable {
    Runnable Runnable_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    CommandFormInputProcessor* commandFormInputProcessor;
    Command* command;
};


CommandRunnable* CommandRunnable_new(CommandFormInputProcessor* commandFormInputProcessor, Command* command);

void CommandRunnable_init(CommandRunnable* this, CommandFormInputProcessor* commandFormInputProcessor, Command* command);
void CommandRunnable_run(CommandRunnable* this);

static void CommandRunnable_initFields(CommandRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
}


void CommandRunnable_init(CommandRunnable* this, CommandFormInputProcessor* commandFormInputProcessor, Command* command) {
    CommandRunnable_initFields(this);
        this->commandFormInputProcessor = commandFormInputProcessor;
        this->command = command;
}

CommandRunnable* CommandRunnable_new(CommandFormInputProcessor* commandFormInputProcessor, Command* command) {
    CommandRunnable* this = calloc(1, sizeof(CommandRunnable));
    CommandRunnable_init(this, commandFormInputProcessor, command);
    return this;
}


void CommandRunnable_run(CommandRunnable* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START_RUNNABLE, this, this->commonStrings->RUN);
            MyCanvas* canvas = CommandFormInputProcessor_getCanvas(this->commandFormInputProcessor);
            CommandListener* commandListener = MyCanvas_getCustomCommandListener(canvas);
            CommandListener_commandAction(commandListener, this->command, canvas);
            LogUtil_putF(this->logUtil, this->commonStrings->END_RUNNABLE, this, this->commonStrings->RUN);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
        } JAVA_END_TRY;
}

