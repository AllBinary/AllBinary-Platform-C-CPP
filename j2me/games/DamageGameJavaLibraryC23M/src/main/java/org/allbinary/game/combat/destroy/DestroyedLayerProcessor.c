// Generated Code Do Not Modify
#include "org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h"
#include "org/allbinary/game/combat/destroy/event/DestroyEventCircularStaticPool.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEvent.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"


static BasicLayerProcessor* DestroyedLayerProcessor_DESTROYED_LAYER_PROCESSOR;





void DestroyedLayerProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DestroyedLayerProcessor_DESTROYED_LAYER_PROCESSOR = (BasicLayerProcessor_staticInit(), BasicLayerProcessor_NULL_LAYER_PROCESSOR);
}

void DestroyedLayerProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DestroyedLayerProcessor", "BasicLayerProcessor");
    java_register_method("DestroyedLayerProcessor", "process", (void*) DestroyedLayerProcessor_process);
}


void DestroyedLayerProcessor_init(DestroyedLayerProcessor* this) {
    DestroyedLayerProcessor_register();
    BasicLayerProcessor_init(&this->base);
}

DestroyedLayerProcessor* DestroyedLayerProcessor_new(void) {
    DestroyedLayerProcessor* this = java_object_alloc(sizeof(DestroyedLayerProcessor), "DestroyedLayerProcessor");
    DestroyedLayerProcessor_init(this);
    return this;
}


void DestroyedLayerProcessor_initMethod(void) {
        DestroyedLayerProcessor_DESTROYED_LAYER_PROCESSOR = DestroyedLayerProcessor_new();
}


BasicLayerProcessor* DestroyedLayerProcessor_getInstance(void) {
        return (DestroyedLayerProcessor_staticInit(), DestroyedLayerProcessor_DESTROYED_LAYER_PROCESSOR);
}


// throws Exception
void DestroyedLayerProcessor_process(DestroyedLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager) {
        BasicArrayList* list = BasicLayerProcessor_getList(this);
        int32_t size = BasicArrayList_size(list);
        DestroyedEventHandler* destroyedEventHandler = DestroyedEventHandler_getInstance();
        DestroyEventCircularStaticPool* destroyEventCircularStaticPool = DestroyEventCircularStaticPool_getInstance();
        DestroyedEvent* destroyedEvent = nullptr;
        AllBinaryLayer* layerInterface = nullptr;
        for (int32_t index = 0; index < size; index++) {
            void* layerInterfaceCanBeNull = list->objectArray[index];
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

