// Generated Code Do Not Modify
#include "org/allbinary/game/input/GameInputLayerProcessor.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/input/GameInputLayerManager.h"
#include "org/allbinary/game/input/GameInputInterface.h"






void GameInputLayerProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameInputLayerProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameInputLayerProcessor", "LayerProcessor");
    java_register_method("GameInputLayerProcessor", "processAt", (void*) GameInputLayerProcessor_processAt);
    java_register_method("GameInputLayerProcessor", "isProcessorLayer", (void*) GameInputLayerProcessor_isProcessorLayer);
}


void GameInputLayerProcessor_init(GameInputLayerProcessor* this) {
    GameInputLayerProcessor_register();
        LayerProcessor_init(&this->base, GameInputLayerManager_new());
}

GameInputLayerProcessor* GameInputLayerProcessor_new(void) {
    GameInputLayerProcessor* this = java_object_alloc(sizeof(GameInputLayerProcessor), "GameInputLayerProcessor");
    GameInputLayerProcessor_init(this);
    return this;
}


// throws Exception
void GameInputLayerProcessor_processAt(GameInputLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index) {
        GameInputInterface* gameInputInterface = ((GameInputInterface*) layerInterface);
        GameInputInterface_processInput(gameInputInterface, allBinaryLayerManager);
}


bool GameInputLayerProcessor_isProcessorLayer(GameInputLayerProcessor* this, AllBinaryLayer* layerInterface) {
        if (AllBinaryLayer_implmentsGameInputInterface(layerInterface)) {
            return true;
        } else {
            return false;
        }
}

