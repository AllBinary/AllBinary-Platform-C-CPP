// Generated Code Do Not Modify
#include "org/allbinary/game/input/GameInputProcessorUtil.h"
#include "org/allbinary/game/input/GameInputProcessor.h"
#include "org/allbinary/game/input/InputFactory.h"




void GameInputProcessorUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameInputProcessorUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameInputProcessorUtil", nullptr);
}

void GameInputProcessorUtil_init(GameInputProcessorUtil* this) {
    GameInputProcessorUtil_register();
}

GameInputProcessorUtil* GameInputProcessorUtil_new(void) {
    GameInputProcessorUtil* this = java_object_alloc(sizeof(GameInputProcessorUtil), "GameInputProcessorUtil");
    GameInputProcessorUtil_init(this);
    return this;
}


void GameInputProcessorUtil_initMethod(GameInputProcessor** inputProcessorArray) {
        GameInputProcessor* noInputProcessor = GameInputProcessor_getInstance();
        int32_t total = InputFactory_getInstance()->MAX;
        for (int32_t index = 0; index < total; index++) {
            GameInputProcessor* inputProcessorCanBeNull = inputProcessorArray[index];
            if (inputProcessorCanBeNull == nullptr) {
                inputProcessorArray[index] = noInputProcessor;
            }
        }
}

