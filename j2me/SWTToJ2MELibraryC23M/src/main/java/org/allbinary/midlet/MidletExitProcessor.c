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
#include "org/allbinary/canvas/Processor.h"

typedef struct MidletExitProcessor MidletExitProcessor;
struct MidletExitProcessor {
    Processor base;
    MIDlet* midlet;
};


MidletExitProcessor* MidletExitProcessor_new(MIDlet* midlet);

void MidletExitProcessor_init(MidletExitProcessor* this, MIDlet* midlet);
void MidletExitProcessor_process(MidletExitProcessor* this);

static void MidletExitProcessor_initFields(MidletExitProcessor* this) {
    
}


void MidletExitProcessor_init(MidletExitProcessor* this, MIDlet* midlet) {
    Processor_init(&this->base);
    MidletExitProcessor_initFields(this);
        this->midlet = midlet;
}

MidletExitProcessor* MidletExitProcessor_new(MIDlet* midlet) {
    MidletExitProcessor* this = calloc(1, sizeof(MidletExitProcessor));
    MidletExitProcessor_init(this, midlet);
    return this;
}


// throws Exception
void MidletExitProcessor_process(MidletExitProcessor* this) {
        exit(0);
}

