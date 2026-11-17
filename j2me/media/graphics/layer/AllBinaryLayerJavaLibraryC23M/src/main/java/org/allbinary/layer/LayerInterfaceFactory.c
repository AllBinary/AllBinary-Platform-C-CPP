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
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"

typedef struct LayerInterfaceFactory LayerInterfaceFactory;
struct LayerInterfaceFactory {
    LogUtil* logUtil;
    BasicArrayList* list;
    const char* HASHTABLE_LABEL;
};

static LayerInterfaceFactory* LayerInterfaceFactory_SINGLETON;

LayerInterfaceFactory* LayerInterfaceFactory_new(void);
LayerInterfaceFactory* LayerInterfaceFactory_getInstance(void);
void LayerInterfaceFactory_init(LayerInterfaceFactory* this);
AllBinaryLayer* LayerInterfaceFactory_getNexInstance(LayerInterfaceFactory* this, ABHashtable* hashtable, int32_t x, int32_t y, int32_t z);
void LayerInterfaceFactory_add(LayerInterfaceFactory* this, LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface);

// Static fields with runtime initializers: call this once at startup
void LayerInterfaceFactory_staticInit(void) {
    LayerInterfaceFactory_SINGLETON = LayerInterfaceFactory_new();
}

static void LayerInterfaceFactory_initFields(LayerInterfaceFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->list = BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
    this->HASHTABLE_LABEL = "Hashtable: ";
}

void LayerInterfaceFactory_init(LayerInterfaceFactory* this) {
    LayerInterfaceFactory_initFields(this);
}

LayerInterfaceFactory* LayerInterfaceFactory_new(void) {
    LayerInterfaceFactory* this = calloc(1, sizeof(LayerInterfaceFactory));
    LayerInterfaceFactory_init(this);
    return this;
}


LayerInterfaceFactory* LayerInterfaceFactory_getInstance(void) {
        return LayerInterfaceFactory_SINGLETON;
}


void LayerInterfaceFactory_init(LayerInterfaceFactory* this) {
        this->list = BasicArrayListD_new();
}


// throws Exception
AllBinaryLayer* LayerInterfaceFactory_getNexInstance(LayerInterfaceFactory* this, ABHashtable* hashtable, int32_t x, int32_t y, int32_t z) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->HASHTABLE_LABEL), append, StringUtil_toString(StringUtil_getInstance(), hashtable)), toString), this, commonStrings->GET_INSTANCE);
        int32_t typeInteger = ((int32_t) ABHashtable_get(hashtable, ((Any*) Layer_ID)));
        LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface = ((LayerInterfaceFactoryInterface*) this->list->objectArray[Integer_intValue(typeInteger) - 1]);
        return LayerInterfaceFactoryInterface_getNextInstance(layerInterfaceFactoryInterface, hashtable, x, y, z);
}


void LayerInterfaceFactory_add(LayerInterfaceFactory* this, LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface) {
        BasicArrayList_add(this->list, layerInterfaceFactoryInterface);
}

