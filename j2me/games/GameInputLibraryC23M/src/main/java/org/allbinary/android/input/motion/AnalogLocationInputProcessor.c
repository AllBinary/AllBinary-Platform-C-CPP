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
// package org.allbinary.android.input.motion

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/analog/AnalogLocationInput.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"

typedef struct AnalogLocationInputProcessor AnalogLocationInputProcessor;
struct AnalogLocationInputProcessor {
    char unused;
};


AnalogLocationInputProcessor* AnalogLocationInputProcessor_new(void);
void AnalogLocationInputProcessor_process(AnalogLocationInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, AnalogLocationInput* analogLocationInput);

void AnalogLocationInputProcessor_init(AnalogLocationInputProcessor* this) {
}

AnalogLocationInputProcessor* AnalogLocationInputProcessor_new(void) {
    AnalogLocationInputProcessor* this = calloc(1, sizeof(AnalogLocationInputProcessor));
    AnalogLocationInputProcessor_init(this);
    return this;
}


void AnalogLocationInputProcessor_process(AnalogLocationInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, AnalogLocationInput* analogLocationInput) {
}

