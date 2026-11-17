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
// package org.allbinary.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct BasicLayerProcessor BasicLayerProcessor;
struct BasicLayerProcessor {
    LogUtil* logUtil;
    BasicArrayList* list;
};

BasicLayerProcessor* BasicLayerProcessor_NULL_LAYER_PROCESSOR;

BasicLayerProcessor* BasicLayerProcessor_new(void);

void BasicLayerProcessor_init(BasicLayerProcessor* this);
void BasicLayerProcessor_add(BasicLayerProcessor* this, AllBinaryLayer* layerInterface);
void BasicLayerProcessor_process(BasicLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager);
BasicArrayList* BasicLayerProcessor_getList(BasicLayerProcessor* this);

// Static fields with runtime initializers: call this once at startup
void BasicLayerProcessor_staticInit(void) {
    BasicLayerProcessor_NULL_LAYER_PROCESSOR = BasicLayerProcessor_new();
}

static void BasicLayerProcessor_initFields(BasicLayerProcessor* this) {
    this->logUtil = LogUtil_getInstance();
    this->list = BasicArrayListD_new();
}


void BasicLayerProcessor_init(BasicLayerProcessor* this) {
    BasicLayerProcessor_initFields(this);
}

BasicLayerProcessor* BasicLayerProcessor_new(void) {
    BasicLayerProcessor* this = calloc(1, sizeof(BasicLayerProcessor));
    BasicLayerProcessor_init(this);
    return this;
}


void BasicLayerProcessor_add(BasicLayerProcessor* this, AllBinaryLayer* layerInterface) {
        if (!BasicArrayList_contains(this->list, layerInterface)) {
            BasicArrayList_add(this->list, layerInterface);
        }
}


// throws Exception
void BasicLayerProcessor_process(BasicLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager) {
        java_throw(java_exception_new("Exception", CommonStrings_getInstance()->NOT_IMPLEMENTED));
}


BasicArrayList* BasicLayerProcessor_getList(BasicLayerProcessor* this) {
        return this->list;
}

