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
// package org.allbinary.game.part

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactoryPool.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"

typedef struct MakeCountedPartsSingletonArrayFactory MakeCountedPartsSingletonArrayFactory;
struct MakeCountedPartsSingletonArrayFactory {
    LogUtil* logUtil;
    BasicArrayList* list;
};

static MakeCountedPartsSingletonArrayFactory* MakeCountedPartsSingletonArrayFactory_instance;

MakeCountedPartsSingletonArrayFactory* MakeCountedPartsSingletonArrayFactory_new(void);
MakeCountedPartsSingletonArrayFactory* MakeCountedPartsSingletonArrayFactory_getInstance(void);
PartInterface** MakeCountedPartsSingletonArrayFactory_getUpdated(MakeCountedPartsSingletonArrayFactory* this, PartInterface** partInterfaceArray);

// Static fields with runtime initializers: call this once at startup
void MakeCountedPartsSingletonArrayFactory_staticInit(void) {
    MakeCountedPartsSingletonArrayFactory_instance = MakeCountedPartsSingletonArrayFactory_new();
}

static void MakeCountedPartsSingletonArrayFactory_initFields(MakeCountedPartsSingletonArrayFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->list = BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
}

void MakeCountedPartsSingletonArrayFactory_init(MakeCountedPartsSingletonArrayFactory* this) {
    MakeCountedPartsSingletonArrayFactory_initFields(this);
}

MakeCountedPartsSingletonArrayFactory* MakeCountedPartsSingletonArrayFactory_new(void) {
    MakeCountedPartsSingletonArrayFactory* this = calloc(1, sizeof(MakeCountedPartsSingletonArrayFactory));
    MakeCountedPartsSingletonArrayFactory_init(this);
    return this;
}


MakeCountedPartsSingletonArrayFactory* MakeCountedPartsSingletonArrayFactory_getInstance(void) {
        return MakeCountedPartsSingletonArrayFactory_instance;
}


// throws Exception
PartInterface** MakeCountedPartsSingletonArrayFactory_getUpdated(MakeCountedPartsSingletonArrayFactory* this, PartInterface** partInterfaceArray) {
        this->list = BasicArrayListD_new();
        for (int32_t index = 0; index < java_array_length(partInterfaceArray); index++) {
            BasicArrayList_add(this->list, partInterfaceArray[index]);
        }
        BasicArrayList* countedBasicArrayList = CountedPickedUpLayerInterfaceFactoryPool_getList(CountedPickedUpLayerInterfaceFactoryPool_getInstance());
        CountedPickedUpLayerInterfaceFactory* layerInterfaceFactoryInterface = nullptr;
        int32_t size = BasicArrayList_size(countedBasicArrayList);
        for (int32_t index = 0; index < size; index++) {
            layerInterfaceFactoryInterface = ((CountedPickedUpLayerInterfaceFactory*) countedBasicArrayList->objectArray[index]);
            BasicArrayList_add(this->list, CountedLayerInterfaceFactoryPart_new(0, layerInterfaceFactoryInterface));
        }
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Total Parts: ");
        StringMaker_appendint(stringBuffer, BasicArrayList_size(this->list));
        StringMaker_append(stringBuffer, " Counted: ");
        StringMaker_appendint(stringBuffer, BasicArrayList_size(countedBasicArrayList));
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, commonStrings->GET_INSTANCE);
        PartInterface** newPartInterfaceArray = ((PartInterface**) java_array_new(sizeof(PartInterface*), BasicArrayList_size(this->list)));
        int32_t newSize = java_array_length(newPartInterfaceArray);
        for (int32_t index = 0; index < newSize; index++) {
            newPartInterfaceArray[index] = ((PartInterface*) BasicArrayList_get(this->list, index));
        }
        return newPartInterfaceArray;
}

