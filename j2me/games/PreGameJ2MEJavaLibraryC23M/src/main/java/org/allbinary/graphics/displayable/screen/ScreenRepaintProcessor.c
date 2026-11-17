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
#include "org/allbinary/canvas/Processor.h"

typedef struct ScreenRepaintProcessor ScreenRepaintProcessor;
struct ScreenRepaintProcessor {
    Processor base;
    Displayable* displayable;
};


ScreenRepaintProcessor* ScreenRepaintProcessor_new(Displayable* displayable);

void ScreenRepaintProcessor_init(ScreenRepaintProcessor* this, Displayable* displayable);
void ScreenRepaintProcessor_process(ScreenRepaintProcessor* this);

static void ScreenRepaintProcessor_initFields(ScreenRepaintProcessor* this) {
    
}


void ScreenRepaintProcessor_init(ScreenRepaintProcessor* this, Displayable* displayable) {
    Processor_init(&this->base);
    ScreenRepaintProcessor_initFields(this);
        this->displayable = displayable;
}

ScreenRepaintProcessor* ScreenRepaintProcessor_new(Displayable* displayable) {
    ScreenRepaintProcessor* this = calloc(1, sizeof(ScreenRepaintProcessor));
    ScreenRepaintProcessor_init(this, displayable);
    return this;
}


// throws Exception
void ScreenRepaintProcessor_process(ScreenRepaintProcessor* this) {
        ScreenRepaintUtil_repaint(this->displayable);
}

