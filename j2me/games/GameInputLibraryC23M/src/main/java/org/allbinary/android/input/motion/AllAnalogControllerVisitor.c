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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/android/input/motion/AnalogControllerVisitor.h"

typedef struct AllAnalogControllerVisitor AllAnalogControllerVisitor;
struct AllAnalogControllerVisitor {
    AnalogControllerVisitor base;
};


AllAnalogControllerVisitor* AllAnalogControllerVisitor_new(void);
void AllAnalogControllerVisitor_process(AllAnalogControllerVisitor* this, AllBinaryLayerManager* allbinaryLayerManager, AnalogLocationInputProcessor* analogLocationInputProcessor);

void AllAnalogControllerVisitor_init(AllAnalogControllerVisitor* this) {
    AnalogControllerVisitor_init(&this->base);
}

AllAnalogControllerVisitor* AllAnalogControllerVisitor_new(void) {
    AllAnalogControllerVisitor* this = calloc(1, sizeof(AllAnalogControllerVisitor));
    AllAnalogControllerVisitor_init(this);
    return this;
}


void AllAnalogControllerVisitor_process(AllAnalogControllerVisitor* this, AllBinaryLayerManager* allbinaryLayerManager, AnalogLocationInputProcessor* analogLocationInputProcessor) {
        BasicArrayList* analogLocationInputList = AnalogLocationInputFactory_getList(AnalogLocationInputFactory_getInstance());
        AnalogLocationInput* analogLocationInput = nullptr;
        for (int32_t index = BasicArrayList_size(analogLocationInputList) - 1; index >= 0; index--) {
            analogLocationInput = ((AnalogLocationInput*) BasicArrayList_get(analogLocationInputList, index));
            AnalogLocationInputProcessor_process(analogLocationInputProcessor, allbinaryLayerManager, analogLocationInput);
        }
}

