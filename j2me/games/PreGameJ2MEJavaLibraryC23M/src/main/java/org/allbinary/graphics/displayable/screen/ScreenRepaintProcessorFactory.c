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
// package org.allbinary.graphics.displayable.screen

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Displayable.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/canvas/Processor.h"

typedef struct ScreenRepaintProcessorFactory ScreenRepaintProcessorFactory;
struct ScreenRepaintProcessorFactory {
    char unused;
};

static ScreenRepaintProcessorFactory* ScreenRepaintProcessorFactory_instance;

ScreenRepaintProcessorFactory* ScreenRepaintProcessorFactory_new(void);
ScreenRepaintProcessorFactory* ScreenRepaintProcessorFactory_getInstance(void);

void ScreenRepaintProcessorFactory_init(ScreenRepaintProcessorFactory* this);
Processor* ScreenRepaintProcessorFactory_create(ScreenRepaintProcessorFactory* this, Displayable* displayable);

// Static fields with runtime initializers: call this once at startup
void ScreenRepaintProcessorFactory_staticInit(void) {
    ScreenRepaintProcessorFactory_instance = ScreenRepaintProcessorFactory_new();
}


ScreenRepaintProcessorFactory* ScreenRepaintProcessorFactory_getInstance(void) {
        return ScreenRepaintProcessorFactory_instance;
}


void ScreenRepaintProcessorFactory_init(ScreenRepaintProcessorFactory* this) {
}

ScreenRepaintProcessorFactory* ScreenRepaintProcessorFactory_new(void) {
    ScreenRepaintProcessorFactory* this = calloc(1, sizeof(ScreenRepaintProcessorFactory));
    ScreenRepaintProcessorFactory_init(this);
    return this;
}


Processor* ScreenRepaintProcessorFactory_create(ScreenRepaintProcessorFactory* this, Displayable* displayable) {
        if (!J2MEUtil_isJ2ME()) {
            return ScreenRepaintProcessor_new(displayable);
        } else {
            return Processor_getInstance();
        }
}

