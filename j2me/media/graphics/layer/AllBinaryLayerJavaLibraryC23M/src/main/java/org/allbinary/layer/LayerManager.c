// Generated Code Do Not Modify
#include "org/allbinary/layer/LayerManager.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/thread/SynchObject.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/ABSystemWrapper.h"
#include "org/allbinary/layer/LayerManagerLoggingBase.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/Layer.h"














void LayerManager_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LayerManager_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LayerManager", nullptr);
    java_register_method("LayerManager", "contains", (void*) LayerManager_contains);
    java_register_method("LayerManager", "update", (void*) LayerManager_update);
    java_register_method("LayerManager", "insert", (void*) LayerManager_insert);
    java_register_method("LayerManager", "append", (void*) LayerManager_append);
    java_register_method("LayerManager", "appendAt", (void*) LayerManager_appendAt);
    java_register_method("LayerManager", "remove", (void*) LayerManager_remove);
    java_register_method("LayerManager", "getLayerAt", (void*) LayerManager_getLayerAt);
    java_register_method("LayerManager", "getSize", (void*) LayerManager_getSize);
    java_register_method("LayerManager", "cleanup", (void*) LayerManager_cleanup);
    java_register_method("LayerManager", "paint", (void*) LayerManager_paint);
}

static void LayerManager_initFields(LayerManager* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->systemWrapper = ABSystemWrapper_getInstance();
    this->tsUtil = TsUtil_getInstance();
    
    this->list = BasicArrayListD_new();
    this->anyType = SynchObject_new();
}


void LayerManager_init(LayerManager* this, LayerManagerLoggingBase* layerManagerLogging) {
    LayerManager_register();
    LayerManager_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        this->layerManagerLogging = layerManagerLogging;
}

LayerManager* LayerManager_new(LayerManagerLoggingBase* layerManagerLogging) {
    LayerManager* this = java_object_alloc(sizeof(LayerManager), "LayerManager");
    LayerManager_init(this, layerManagerLogging);
    return this;
}


bool LayerManager_contains(LayerManager* this, AllBinaryLayer* layerInterface) {
        return BasicArrayList_contains(this->list, layerInterface);
}


// throws Exception
void LayerManager_update(LayerManager* this, AllBinaryLayer* layerInterface) {
        bool had = BasicArrayList_remove(this->list, layerInterface);
        if (had) {
            AllBinaryLayer* nextLayerInterface = nullptr;
            int32_t size = BasicArrayList_size(this->list);
            for (int32_t index = 0; index < size; index++) {
                nextLayerInterface = ((AllBinaryLayer*) BasicArrayList_get(this->list, index));
                if (AllBinaryLayer_getZP(layerInterface) > AllBinaryLayer_getZP(nextLayerInterface)) {
                    BasicArrayList_addAt(this->list, index, layerInterface);
                    return;
                }
            }
            BasicArrayList_add(this->list, layerInterface);
        }
}


// throws Exception
void LayerManager_insert(LayerManager* this, AllBinaryLayer* layerInterface) {
        AllBinaryLayer* nextLayerInterface = nullptr;
        int32_t size = BasicArrayList_size(this->list);
        for (int32_t index = 0; index < size; index++) {
            nextLayerInterface = ((AllBinaryLayer*) BasicArrayList_get(this->list, index));
            if (AllBinaryLayer_getZP(layerInterface) > AllBinaryLayer_getZP(nextLayerInterface)) {
                LayerManager_appendAt(this, layerInterface, index);
                return;
            }
        }
        LayerManager_append(this, layerInterface);
}


// throws Exception
void LayerManager_append(LayerManager* this, AllBinaryLayer* layerInterface) {
        LayerManagerLoggingBase_append(this->layerManagerLogging, layerInterface);
        BasicArrayList_add(this->list, layerInterface);
}


// throws Exception
void LayerManager_appendAt(LayerManager* this, AllBinaryLayer* layerInterface, int32_t index) {
        LayerManagerLoggingBase_appendAt(this->layerManagerLogging, layerInterface, index);
        BasicArrayList_addAt(this->list, index, layerInterface);
}


// throws Exception
void LayerManager_remove(LayerManager* this, AllBinaryLayer* layerInterface) {
        java_monitor_enter(this->anyType);
        {
            LayerManagerLoggingBase_remove(this->layerManagerLogging, layerInterface);
            bool result = BasicArrayList_remove(this->list, layerInterface);
            LayerManagerLoggingBase_removeResult(this->layerManagerLogging, this, layerInterface, result);
        }
        java_monitor_exit(this->anyType);
}


Layer* LayerManager_getLayerAt(LayerManager* this, int32_t index) {
        return ((Layer*) this->list->objectArray[index]);
}


int32_t LayerManager_getSize(LayerManager* this) {
        return BasicArrayList_size(this->list);
}


// throws Exception
void LayerManager_cleanup(LayerManager* this) {
        java_monitor_enter(this->anyType);
        {
            BasicArrayList_clear(this->list);
            LayerManagerLoggingBase_clear(this->layerManagerLogging);
            TsUtil_gc(this->tsUtil);
            TsUtil_gc(this->tsUtil);
        }
        java_monitor_exit(this->anyType);
}


void LayerManager_paint(LayerManager* this, Graphics* g, int32_t x, int32_t y) {
        java_monitor_enter(this->anyType);
        {
            Layer* comp = nullptr;
            for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
                comp = ((Layer*) this->list->objectArray[index]);
                if (comp != nullptr && Layer_isVisible(comp)) {
                    Layer_paint(comp, g);
                }
            }
        }
        java_monitor_exit(this->anyType);
}

