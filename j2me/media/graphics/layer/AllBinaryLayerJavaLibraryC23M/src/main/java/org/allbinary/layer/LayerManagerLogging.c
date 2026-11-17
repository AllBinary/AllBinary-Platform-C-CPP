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
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/layer/LayerManagerLoggingBase.h"

typedef struct LayerManagerLogging LayerManagerLogging;
struct LayerManagerLogging {
    LayerManagerLoggingBase base;
    LogUtil* logUtil;
    StringMaker* stringBuilder;
    const char* APPEND;
    const char* APPEND_;
    const char* _AT_;
    const char* ATTEMPT_REMOVE_;
    const char* REMOVE_;
    const char* REMOVE;
    const char* DID_NOT_REMOVE;
    const char* CLEAR;
};

static LayerManagerLogging* LayerManagerLogging_instance;
static bool LayerManagerLogging_removeFailed = false;

LayerManagerLogging* LayerManagerLogging_new(void);
LayerManagerLogging* LayerManagerLogging_getInstance(void);
void LayerManagerLogging_append(LayerManagerLogging* this, AllBinaryLayer* layerInterface);
void LayerManagerLogging_appendAt(LayerManagerLogging* this, AllBinaryLayer* layerInterface, int32_t index);
void LayerManagerLogging_remove(LayerManagerLogging* this, AllBinaryLayer* layerInterface);
void LayerManagerLogging_removeResult(LayerManagerLogging* this, LayerManager* layerManager, AllBinaryLayer* layerInterface, bool result);
static void LayerManagerLogging_log(LayerManagerLogging* this, LayerManager* layerManager);
void LayerManagerLogging_clear(LayerManagerLogging* this);

// Static fields with runtime initializers: call this once at startup
void LayerManagerLogging_staticInit(void) {
    LayerManagerLogging_instance = LayerManagerLogging_new();
}

static void LayerManagerLogging_initFields(LayerManagerLogging* this) {
    this->logUtil = LogUtil_getInstance();
    this->stringBuilder = StringMaker_new();
    this->APPEND = "append";
    this->APPEND_ = " append: ";
    this->_AT_ = " at: ";
    this->ATTEMPT_REMOVE_ = " Remove Attempt: ";
    this->REMOVE_ = " Remove: ";
    this->REMOVE = "remove";
    this->DID_NOT_REMOVE = " Did not remove: ";
    this->CLEAR = " Clear List";
}

void LayerManagerLogging_init(LayerManagerLogging* this) {
    LayerManagerLoggingBase_init(&this->base);
    LayerManagerLogging_initFields(this);
}

LayerManagerLogging* LayerManagerLogging_new(void) {
    LayerManagerLogging* this = calloc(1, sizeof(LayerManagerLogging));
    LayerManagerLogging_init(this);
    return this;
}


LayerManagerLogging* LayerManagerLogging_getInstance(void) {
        return LayerManagerLogging_instance;
}


// throws Exception
void LayerManagerLogging_append(LayerManagerLogging* this, AllBinaryLayer* layerInterface) {
        StringMaker_delete(this->stringBuilder, 0, StringMaker_length(this->stringBuilder));
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_appendint(this->stringBuilder, ((int32_t) TsUtil_hashCode(TsUtil_getInstance(), this))), append, this->APPEND_), append, AllBinaryLayer_getName(layerInterface)), toString), this, this->APPEND);
}


void LayerManagerLogging_appendAt(LayerManagerLogging* this, AllBinaryLayer* layerInterface, int32_t index) {
        StringMaker_delete(this->stringBuilder, 0, StringMaker_length(this->stringBuilder));
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_appendint(this->stringBuilder, ((int32_t) TsUtil_hashCode(TsUtil_getInstance(), this))), append, this->APPEND_), append, AllBinaryLayer_getName(layerInterface)), append, this->_AT_), appendint, index), toString), this, this->APPEND);
}


void LayerManagerLogging_remove(LayerManagerLogging* this, AllBinaryLayer* layerInterface) {
        if (layerInterface == nullptr) {
            StringMaker_delete(this->stringBuilder, 0, StringMaker_length(this->stringBuilder));
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_appendint(this->stringBuilder, ((int32_t) TsUtil_hashCode(TsUtil_getInstance(), this))), append, this->ATTEMPT_REMOVE_), append, StringUtil_toString(StringUtil_getInstance(), layerInterface)), toString), this, this->REMOVE);
        } else {
            StringMaker_delete(this->stringBuilder, 0, StringMaker_length(this->stringBuilder));
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_appendint(this->stringBuilder, ((int32_t) TsUtil_hashCode(TsUtil_getInstance(), this))), append, this->ATTEMPT_REMOVE_), append, AllBinaryLayer_getName(layerInterface)), toString), this, this->REMOVE);
        }
}


void LayerManagerLogging_removeResult(LayerManagerLogging* this, LayerManager* layerManager, AllBinaryLayer* layerInterface, bool result) {
        if (layerInterface == nullptr) {
            StringMaker_delete(this->stringBuilder, 0, StringMaker_length(this->stringBuilder));
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_appendint(this->stringBuilder, ((int32_t) TsUtil_hashCode(TsUtil_getInstance(), this))), append, this->REMOVE_), append, StringUtil_toString(StringUtil_getInstance(), layerInterface)), toString), this, this->REMOVE);
        } else if (result) {
            if (LayerManagerLogging_removeFailed) {
                StringMaker_delete(this->stringBuilder, 0, StringMaker_length(this->stringBuilder));
                LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_appendint(this->stringBuilder, ((int32_t) TsUtil_hashCode(TsUtil_getInstance(), this))), append, this->REMOVE_), append, AllBinaryLayer_getName(layerInterface)), toString), this, this->REMOVE);
            }
        } else {
            StringMaker_delete(this->stringBuilder, 0, StringMaker_length(this->stringBuilder));
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_appendint(this->stringBuilder, ((int32_t) TsUtil_hashCode(TsUtil_getInstance(), this))), append, this->DID_NOT_REMOVE), append, AllBinaryLayer_getName(layerInterface)), toString), this, this->REMOVE);
            LayerManagerLogging_removeFailed = true;
        }
}


static void LayerManagerLogging_log(LayerManagerLogging* this, LayerManager* layerManager) {
        StringMaker_delete(this->stringBuilder, 0, StringMaker_length(this->stringBuilder));
        int32_t size = LayerManager_getSize(layerManager);
        CommonSeps* commonSeps = CommonSeps_getInstance();
        JAVA_CALL(StringMaker_append(this->stringBuilder, Integer_toHexString(TsUtil_hashCode(TsUtil_getInstance(), layerManager))), append, commonSeps->COLON_SEP);
        JAVA_CALL(StringMaker_appendint(this->stringBuilder, size), append, commonSeps->COLON_SEP);
        AllBinaryLayer* allBinaryLayer = nullptr;
        for (int32_t index = 0; index < size; index++) {
            allBinaryLayer = (((AllBinaryLayer*) LayerManager_getLayerAt(layerManager, index)));
            JAVA_CALL(StringMaker_append(this->stringBuilder, AllBinaryLayer_getName(allBinaryLayer)), append, commonSeps->COMMA);
        }
        LogUtil_putF(this->logUtil, StringMaker_toString(this->stringBuilder), this, this->REMOVE);
}


void LayerManagerLogging_clear(LayerManagerLogging* this) {
        StringMaker_delete(this->stringBuilder, 0, StringMaker_length(this->stringBuilder));
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_appendint(this->stringBuilder, ((int32_t) TsUtil_hashCode(TsUtil_getInstance(), this))), append, this->CLEAR), toString), this, this->CLEAR);
}

