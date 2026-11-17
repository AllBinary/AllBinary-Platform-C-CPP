/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.view

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Displayable.h"
// #include "javax/microedition/midlet/MIDlet.h"
#include "org/allbinary/view/EmulatorViewInterface.h"

typedef struct NullEmulatorView NullEmulatorView;
struct NullEmulatorView {
    EmulatorViewInterface EmulatorViewInterface_interface;
};

NullEmulatorView* NullEmulatorView_NULL_EMULATOR_VIEW;

NullEmulatorView* NullEmulatorView_new(void);
void NullEmulatorView_setMidlet(NullEmulatorView* this, MIDlet* midlet);
void NullEmulatorView_onEmulatorInitComplete(NullEmulatorView* this, Any* midletActivity);
void NullEmulatorView_onSetDisplayable(NullEmulatorView* this, Displayable* displayable);

// Static fields with runtime initializers: call this once at startup
void NullEmulatorView_staticInit(void) {
    NullEmulatorView_NULL_EMULATOR_VIEW = NullEmulatorView_new();
}

void NullEmulatorView_init(NullEmulatorView* this) {
}

NullEmulatorView* NullEmulatorView_new(void) {
    NullEmulatorView* this = calloc(1, sizeof(NullEmulatorView));
    NullEmulatorView_init(this);
    return this;
}


void NullEmulatorView_setMidlet(NullEmulatorView* this, MIDlet* midlet) {
}


void NullEmulatorView_onEmulatorInitComplete(NullEmulatorView* this, Any* midletActivity) {
}


void NullEmulatorView_onSetDisplayable(NullEmulatorView* this, Displayable* displayable) {
}

