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

typedef struct AboutCommandProcessor AboutCommandProcessor;
struct AboutCommandProcessor {
    char unused;
};

static AboutCommandProcessor* AboutCommandProcessor_instance;

AboutCommandProcessor* AboutCommandProcessor_new(void);
AboutCommandProcessor* AboutCommandProcessor_getInstance(void);
void AboutCommandProcessor_process(AboutCommandProcessor* this, CommandListener* midletCommandListener, Command* command, Canvas* canvas);

// Static fields with runtime initializers: call this once at startup
void AboutCommandProcessor_staticInit(void) {
    AboutCommandProcessor_instance = AboutCommandProcessor_new();
}

void AboutCommandProcessor_init(AboutCommandProcessor* this) {
}

AboutCommandProcessor* AboutCommandProcessor_new(void) {
    AboutCommandProcessor* this = calloc(1, sizeof(AboutCommandProcessor));
    AboutCommandProcessor_init(this);
    return this;
}


AboutCommandProcessor* AboutCommandProcessor_getInstance(void) {
        return AboutCommandProcessor_instance;
}


void AboutCommandProcessor_process(AboutCommandProcessor* this, CommandListener* midletCommandListener, Command* command, Canvas* canvas) {
        CommandListener_commandAction(midletCommandListener, command, canvas);
}

