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
// package org.allbinary.midlet

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/midlet/MIDlet.h"
#include "org/allbinary/AppletUtil.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/canvas/Processor.h"

typedef struct MidletExitProcessorFactory MidletExitProcessorFactory;
struct MidletExitProcessorFactory {
    char unused;
};

static MidletExitProcessorFactory* MidletExitProcessorFactory_instance;

MidletExitProcessorFactory* MidletExitProcessorFactory_new(void);
MidletExitProcessorFactory* MidletExitProcessorFactory_getInstance(void);
Processor* MidletExitProcessorFactory_getExitInstance(MidletExitProcessorFactory* this, MIDlet* midlet);

// Static fields with runtime initializers: call this once at startup
void MidletExitProcessorFactory_staticInit(void) {
    MidletExitProcessorFactory_instance = MidletExitProcessorFactory_new();
}

void MidletExitProcessorFactory_init(MidletExitProcessorFactory* this) {
}

MidletExitProcessorFactory* MidletExitProcessorFactory_new(void) {
    MidletExitProcessorFactory* this = calloc(1, sizeof(MidletExitProcessorFactory));
    MidletExitProcessorFactory_init(this);
    return this;
}


MidletExitProcessorFactory* MidletExitProcessorFactory_getInstance(void) {
        return MidletExitProcessorFactory_instance;
}


Processor* MidletExitProcessorFactory_getExitInstance(MidletExitProcessorFactory* this, MIDlet* midlet) {
        if (AppletUtil_isAppletLoader(midlet) || J2MEUtil_isJ2ME()) {
            return Processor_getInstance();
        } else {
            return MidletExitProcessor_new(midlet);
        }
}

