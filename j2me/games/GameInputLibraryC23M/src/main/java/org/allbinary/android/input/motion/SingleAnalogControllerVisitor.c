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
#include "org/allbinary/game/input/analog/AnalogLocationInputFactory.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/android/input/motion/AnalogControllerVisitor.h"

typedef struct SingleAnalogControllerVisitor SingleAnalogControllerVisitor;
struct SingleAnalogControllerVisitor {
    AnalogControllerVisitor base;
    int32_t playerInputId;
};


SingleAnalogControllerVisitor* SingleAnalogControllerVisitor_new(int32_t playerInputId);

void SingleAnalogControllerVisitor_init(SingleAnalogControllerVisitor* this, int32_t playerInputId);
void SingleAnalogControllerVisitor_process(SingleAnalogControllerVisitor* this, AllBinaryLayerManager* allbinaryLayerManager, AnalogLocationInputProcessor* analogLocationInputProcessor);

static void SingleAnalogControllerVisitor_initFields(SingleAnalogControllerVisitor* this) {
    
}


void SingleAnalogControllerVisitor_init(SingleAnalogControllerVisitor* this, int32_t playerInputId) {
    AnalogControllerVisitor_init(&this->base);
    SingleAnalogControllerVisitor_initFields(this);
        this->playerInputId = playerInputId;
}

SingleAnalogControllerVisitor* SingleAnalogControllerVisitor_new(int32_t playerInputId) {
    SingleAnalogControllerVisitor* this = calloc(1, sizeof(SingleAnalogControllerVisitor));
    SingleAnalogControllerVisitor_init(this, playerInputId);
    return this;
}


void SingleAnalogControllerVisitor_process(SingleAnalogControllerVisitor* this, AllBinaryLayerManager* allbinaryLayerManager, AnalogLocationInputProcessor* analogLocationInputProcessor) {
        AnalogLocationInput* analogLocationInput = AnalogLocationInputFactory_getInstanceForPlayer(AnalogLocationInputFactory_getInstance(), this->playerInputId);
        AnalogLocationInputProcessor_process(analogLocationInputProcessor, allbinaryLayerManager, analogLocationInput);
}

