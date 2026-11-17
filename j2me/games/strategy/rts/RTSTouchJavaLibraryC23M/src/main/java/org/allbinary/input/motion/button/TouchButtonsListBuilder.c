/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2007 AllBinary 
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
// package org.allbinary.input.motion.button

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/input/motion/button/BaseTouchInput.h"

typedef struct TouchButtonsListBuilder TouchButtonsListBuilder;
struct TouchButtonsListBuilder {
    BaseTouchInput base;
    BasicArrayList* baseTouchInputList;
};


TouchButtonsListBuilder* TouchButtonsListBuilder_new(void);
void TouchButtonsListBuilder_addList(TouchButtonsListBuilder* this, BasicArrayList* list);
void TouchButtonsListBuilder_add(TouchButtonsListBuilder* this, BaseTouchInput* baseTouchInput);

static void TouchButtonsListBuilder_initFields(TouchButtonsListBuilder* this) {
    this->baseTouchInputList = BasicArrayListD_new();
}

void TouchButtonsListBuilder_init(TouchButtonsListBuilder* this) {
    BaseTouchInput_init(&this->base);
    TouchButtonsListBuilder_initFields(this);
}

TouchButtonsListBuilder* TouchButtonsListBuilder_new(void) {
    TouchButtonsListBuilder* this = calloc(1, sizeof(TouchButtonsListBuilder));
    TouchButtonsListBuilder_init(this);
    return this;
}


void TouchButtonsListBuilder_addList(TouchButtonsListBuilder* this, BasicArrayList* list) {
        int32_t size = BasicArrayList_size(this->baseTouchInputList);
        BaseTouchInput* baseTouchInput = nullptr;
        for (int32_t index = 0; index < size; index++) {
            baseTouchInput = ((BaseTouchInput*) BasicArrayList_get(this->baseTouchInputList, index));
            BasicArrayList_addAllList(list, BaseTouchInput_getList(baseTouchInput));
        }
}


void TouchButtonsListBuilder_add(TouchButtonsListBuilder* this, BaseTouchInput* baseTouchInput) {
        BasicArrayList_add(this->baseTouchInputList, baseTouchInput);
}

