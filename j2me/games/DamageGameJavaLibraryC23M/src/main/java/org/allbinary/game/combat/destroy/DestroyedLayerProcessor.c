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
// package org.allbinary.game.combat.destroy

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/combat/destroy/event/DestroyEventCircularStaticPool.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEvent.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/layer/BasicLayerProcessor.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct DestroyedLayerProcessor DestroyedLayerProcessor;
struct DestroyedLayerProcessor {
    BasicLayerProcessor base;
};

static BasicLayerProcessor* DestroyedLayerProcessor_DESTROYED_LAYER_PROCESSOR;

DestroyedLayerProcessor* DestroyedLayerProcessor_new(void);

void DestroyedLayerProcessor_init(DestroyedLayerProcessor* this);
void DestroyedLayerProcessor_init(void);
BasicLayerProcessor* DestroyedLayerProcessor_getInstance(void);
void DestroyedLayerProcessor_process(DestroyedLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager);

// Static fields with runtime initializers: call this once at startup
void DestroyedLayerProcessor_staticInit(void) {
    DestroyedLayerProcessor_DESTROYED_LAYER_PROCESSOR = BasicLayerProcessor_NULL_LAYER_PROCESSOR;
}


void DestroyedLayerProcessor_init(DestroyedLayerProcessor* this) {
    BasicLayerProcessor_init(&this->base);
}

DestroyedLayerProcessor* DestroyedLayerProcessor_new(void) {
    DestroyedLayerProcessor* this = calloc(1, sizeof(DestroyedLayerProcessor));
    DestroyedLayerProcessor_init(this);
    return this;
}


void DestroyedLayerProcessor_init(void) {
        DestroyedLayerProcessor_DESTROYED_LAYER_PROCESSOR = DestroyedLayerProcessor_new();
}


BasicLayerProcessor* DestroyedLayerProcessor_getInstance(void) {
        return DestroyedLayerProcessor_DESTROYED_LAYER_PROCESSOR;
}


// throws Exception
void DestroyedLayerProcessor_process(DestroyedLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager) {
        BasicArrayList* list = DestroyedLayerProcessor_getList(this);
        int32_t size = BasicArrayList_size(list);
        DestroyedEventHandler* destroyedEventHandler = DestroyedEventHandler_getInstance();
        DestroyEventCircularStaticPool* destroyEventCircularStaticPool = DestroyEventCircularStaticPool_getInstance();
        DestroyedEvent* destroyedEvent = nullptr;
        AllBinaryLayer* layerInterface = nullptr;
        for (int32_t index = 0; index < size; index++) {
            Any* layerInterfaceCanBeNull = list->objectArray[index];
            if (layerInterfaceCanBeNull != nullptr) {
                layerInterface = ((AllBinaryLayer*) layerInterfaceCanBeNull);
                AllBinaryLayerManager_remove(allBinaryLayerManager, layerInterface);
                destroyedEvent = DestroyEventCircularStaticPool_getInstanceForLayer(destroyEventCircularStaticPool, layerInterface);
                DestroyedEventHandler_fireEvent(destroyedEventHandler, destroyedEvent);
            } else {
                CommonStrings* commonStrings = CommonStrings_getInstance();
            }
        }
        BasicArrayList_clear(list);
}

