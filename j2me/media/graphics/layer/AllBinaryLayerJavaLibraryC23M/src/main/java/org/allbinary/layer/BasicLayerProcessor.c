// Generated Code Do Not Modify
#include "org/allbinary/layer/BasicLayerProcessor.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif


BasicLayerProcessor* BasicLayerProcessor_NULL_LAYER_PROCESSOR;





void BasicLayerProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BasicLayerProcessor_NULL_LAYER_PROCESSOR = BasicLayerProcessor_new();
}

void BasicLayerProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicLayerProcessor", nullptr);
    java_register_method("BasicLayerProcessor", "add", (void*) BasicLayerProcessor_add);
    java_register_method("BasicLayerProcessor", "process", (void*) BasicLayerProcessor_process);
    java_register_method("BasicLayerProcessor", "getList", (void*) BasicLayerProcessor_getList);
}

static void BasicLayerProcessor_initFields(BasicLayerProcessor* this) {
    this->logUtil = LogUtil_getInstance();
    this->list = BasicArrayListD_new();
}


void BasicLayerProcessor_init(BasicLayerProcessor* this) {
    BasicLayerProcessor_register();
    BasicLayerProcessor_initFields(this);
}

BasicLayerProcessor* BasicLayerProcessor_new(void) {
    BasicLayerProcessor* this = java_object_alloc(sizeof(BasicLayerProcessor), "BasicLayerProcessor");
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

