// Generated Code Do Not Modify
#include "org/allbinary/game/layer/drop/DropLayerProcessor.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/layer/drop/DropLayerInterface.h"


static BasicLayerProcessor* DropLayerProcessor_LAYER_PROCESSOR;




void DropLayerProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DropLayerProcessor_LAYER_PROCESSOR = DropLayerProcessor_new();
}

void DropLayerProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DropLayerProcessor", "BasicLayerProcessor");
    java_register_method("DropLayerProcessor", "process", (void*) DropLayerProcessor_process);
}


void DropLayerProcessor_init(DropLayerProcessor* this) {
    DropLayerProcessor_register();
    BasicLayerProcessor_init(&this->base);
}

DropLayerProcessor* DropLayerProcessor_new(void) {
    DropLayerProcessor* this = java_object_alloc(sizeof(DropLayerProcessor), "DropLayerProcessor");
    DropLayerProcessor_init(this);
    return this;
}


BasicLayerProcessor* DropLayerProcessor_getInstance(void) {
        return (DropLayerProcessor_staticInit(), DropLayerProcessor_LAYER_PROCESSOR);
}


// throws Exception
void DropLayerProcessor_process(DropLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager) {
        BasicArrayList* list = BasicLayerProcessor_getList(this);
        int32_t size = BasicArrayList_size(list);
        AllBinaryLayer* layerInterface = nullptr;
        DropLayerInterface* dropLayerInterface = nullptr;
        for (int32_t index = 0; index < size; index++) {
            layerInterface = ((AllBinaryLayer*) list->objectArray[index]);
            dropLayerInterface = ((DropLayerInterface*) layerInterface);
            layerInterface = ((AllBinaryLayer*) DropLayerInterface_getDroppedLayer(dropLayerInterface));
            AllBinaryLayerManager_append(allBinaryLayerManager, layerInterface);
        }
        BasicArrayList_clear(list);
}

