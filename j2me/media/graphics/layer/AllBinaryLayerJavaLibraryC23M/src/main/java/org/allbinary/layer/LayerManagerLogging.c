// Generated Code Do Not Modify
#include "org/allbinary/layer/LayerManagerLogging.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/layer/LayerManagerLoggingBase.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/LayerManager.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif


static LayerManagerLogging* LayerManagerLogging_instance;
static bool LayerManagerLogging_removeFailed = false;






static void LayerManagerLogging_log(LayerManagerLogging* this, LayerManager* layerManager);


void LayerManagerLogging_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LayerManagerLogging_instance = LayerManagerLogging_new();
}

void LayerManagerLogging_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LayerManagerLogging", "LayerManagerLoggingBase");
    java_register_method("LayerManagerLogging", "append", (void*) LayerManagerLogging_append);
    java_register_method("LayerManagerLogging", "appendAt", (void*) LayerManagerLogging_appendAt);
    java_register_method("LayerManagerLogging", "remove", (void*) LayerManagerLogging_remove);
    java_register_method("LayerManagerLogging", "removeResult", (void*) LayerManagerLogging_removeResult);
    java_register_method("LayerManagerLogging", "log", (void*) LayerManagerLogging_log);
    java_register_method("LayerManagerLogging", "clear", (void*) LayerManagerLogging_clear);
}

static void LayerManagerLogging_initFields(LayerManagerLogging* this) {
    this->logUtil = LogUtil_getInstance();
    this->stringBuilder = StringMaker_new();
    this->APPEND = "append";
    this->APPEND_ = " append: ";
    this->_AT__ = " at: ";
    this->ATTEMPT_REMOVE_ = " Remove Attempt: ";
    this->REMOVE_ = " Remove: ";
    this->REMOVE = "remove";
    this->DID_NOT_REMOVE = " Did not remove: ";
    this->CLEAR = " Clear List";
}

void LayerManagerLogging_init(LayerManagerLogging* this) {
    LayerManagerLogging_register();
    LayerManagerLoggingBase_init(&this->base);
    LayerManagerLogging_initFields(this);
}

LayerManagerLogging* LayerManagerLogging_new(void) {
    LayerManagerLogging* this = java_object_alloc(sizeof(LayerManagerLogging), "LayerManagerLogging");
    LayerManagerLogging_init(this);
    return this;
}


LayerManagerLogging* LayerManagerLogging_getInstance(void) {
        return (LayerManagerLogging_staticInit(), LayerManagerLogging_instance);
}


// throws Exception
void LayerManagerLogging_append(LayerManagerLogging* this, AllBinaryLayer* layerInterface) {
        StringMaker_delete(this->stringBuilder, 0, StringMaker_length(this->stringBuilder));
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_appendint(this->stringBuilder, TsUtil_hashCode(TsUtil_getInstance(), this)), this->APPEND_), AllBinaryLayer_getName(layerInterface))), this, this->APPEND);
}


void LayerManagerLogging_appendAt(LayerManagerLogging* this, AllBinaryLayer* layerInterface, int32_t index) {
        StringMaker_delete(this->stringBuilder, 0, StringMaker_length(this->stringBuilder));
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_appendint(this->stringBuilder, TsUtil_hashCode(TsUtil_getInstance(), this)), this->APPEND_), AllBinaryLayer_getName(layerInterface)), this->_AT__), index)), this, this->APPEND);
}


void LayerManagerLogging_remove(LayerManagerLogging* this, AllBinaryLayer* layerInterface) {
        if (layerInterface == nullptr) {
            StringMaker_delete(this->stringBuilder, 0, StringMaker_length(this->stringBuilder));
            LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_appendint(this->stringBuilder, TsUtil_hashCode(TsUtil_getInstance(), this)), this->ATTEMPT_REMOVE_), StringUtil_toString(StringUtil_getInstance(), layerInterface))), this, this->REMOVE);
        } else {
            StringMaker_delete(this->stringBuilder, 0, StringMaker_length(this->stringBuilder));
            LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_appendint(this->stringBuilder, TsUtil_hashCode(TsUtil_getInstance(), this)), this->ATTEMPT_REMOVE_), AllBinaryLayer_getName(layerInterface))), this, this->REMOVE);
        }
}


void LayerManagerLogging_removeResult(LayerManagerLogging* this, LayerManager* layerManager, AllBinaryLayer* layerInterface, bool result) {
        if (layerInterface == nullptr) {
            StringMaker_delete(this->stringBuilder, 0, StringMaker_length(this->stringBuilder));
            LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_appendint(this->stringBuilder, TsUtil_hashCode(TsUtil_getInstance(), this)), this->REMOVE_), StringUtil_toString(StringUtil_getInstance(), layerInterface))), this, this->REMOVE);
        } else if (result) {
            if (LayerManagerLogging_removeFailed) {
                StringMaker_delete(this->stringBuilder, 0, StringMaker_length(this->stringBuilder));
                LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_appendint(this->stringBuilder, TsUtil_hashCode(TsUtil_getInstance(), this)), this->REMOVE_), AllBinaryLayer_getName(layerInterface))), this, this->REMOVE);
            }
        } else {
            StringMaker_delete(this->stringBuilder, 0, StringMaker_length(this->stringBuilder));
            LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_appendint(this->stringBuilder, TsUtil_hashCode(TsUtil_getInstance(), this)), this->DID_NOT_REMOVE), AllBinaryLayer_getName(layerInterface))), this, this->REMOVE);
            LayerManagerLogging_removeFailed = true;
        }
}


static void LayerManagerLogging_log(LayerManagerLogging* this, LayerManager* layerManager) {
        StringMaker_delete(this->stringBuilder, 0, StringMaker_length(this->stringBuilder));
        int32_t size = LayerManager_getSize(layerManager);
        CommonSeps* commonSeps = CommonSeps_getInstance();
        StringMaker_append(StringMaker_append(this->stringBuilder, Integer_toHexString(TsUtil_hashCode(TsUtil_getInstance(), layerManager))), commonSeps->COLON_SEP);
        StringMaker_append(StringMaker_appendint(this->stringBuilder, size), commonSeps->COLON_SEP);
        AllBinaryLayer* allBinaryLayer = nullptr;
        for (int32_t index = 0; index < size; index++) {
            allBinaryLayer = (((AllBinaryLayer*) LayerManager_getLayerAt(layerManager, index)));
            StringMaker_append(StringMaker_append(this->stringBuilder, AllBinaryLayer_getName(allBinaryLayer)), commonSeps->COMMA);
        }
        LogUtil_putF(this->logUtil, java_string_of(this->stringBuilder), this, this->REMOVE);
}


void LayerManagerLogging_clear(LayerManagerLogging* this) {
        StringMaker_delete(this->stringBuilder, 0, StringMaker_length(this->stringBuilder));
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_appendint(this->stringBuilder, TsUtil_hashCode(TsUtil_getInstance(), this)), this->CLEAR)), this, this->CLEAR);
}

