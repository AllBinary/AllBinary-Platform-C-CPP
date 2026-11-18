// Generated Code Do Not Modify
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#if __has_include("org/allbinary/game/configuration/feature/Features.h")
#include "org/allbinary/game/configuration/feature/Features.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/InputFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#endif












void GameInput_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameInput_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameInput", nullptr);
    java_register_method("GameInput", "add", (void*) GameInput_add);
    java_register_method("GameInput", "addForRemoval", (void*) GameInput_addForRemoval);
    java_register_method("GameInput", "isForRemoval", (void*) GameInput_isForRemoval);
    java_register_method("GameInput", "clear", (void*) GameInput_clear);
    java_register_method("GameInput", "removeNonAIInputGameKeyEvents", (void*) GameInput_removeNonAIInputGameKeyEvents);
    java_register_method("GameInput", "update", (void*) GameInput_update);
    java_register_method("GameInput", "getRemovalGameKeyEventList", (void*) GameInput_getRemovalGameKeyEventList);
    java_register_method("GameInput", "getGameKeyEventList", (void*) GameInput_getGameKeyEventList);
}

static void GameInput_initFields(GameInput* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
    
}


void GameInput_init(GameInput* this, BasicArrayList* gameKeyEventList, BasicArrayList* removalGameKeyEventList) {
    GameInput_register();
    GameInput_initFields(this);
        this->gameKeyEventList = gameKeyEventList;
        this->removalGameKeyEventList = removalGameKeyEventList;
        this->isRemoveDuplicateKeyPresses = Features_isFeature(Features_getInstance(), InputFeatureFactory_getInstance()->REMOVE_DUPLICATE_KEY_PRESSES);
}

GameInput* GameInput_new(BasicArrayList* gameKeyEventList, BasicArrayList* removalGameKeyEventList) {
    GameInput* this = java_object_alloc(sizeof(GameInput), "GameInput");
    GameInput_init(this, gameKeyEventList, removalGameKeyEventList);
    return this;
}


// synchronized
void GameInput_add(GameInput* this, GameKeyEvent* gameKeyEvent) {
        if (this->isRemoveDuplicateKeyPresses && BasicArrayList_contains(this->gameKeyEventList, gameKeyEvent)) {
            return;
        }
        if (gameKeyEvent != nullptr) {
            BasicArrayList_add(this->gameKeyEventList, gameKeyEvent);
        } else {
            LogUtil_putF(this->logUtil, "Danger Passed Null GameKeyEvent", this, this->commonStrings->ADD);
        }
}


// synchronized
void GameInput_addForRemoval(GameInput* this, GameKeyEvent* gameKeyEvent) {
        BasicArrayList_add(this->removalGameKeyEventList, gameKeyEvent);
}


// synchronized
bool GameInput_isForRemoval(GameInput* this, GameKeyEvent* gameKeyEvent) {
        return BasicArrayList_contains(this->removalGameKeyEventList, gameKeyEvent);
}


// synchronized
void GameInput_clear(GameInput* this) {
        BasicArrayList_clear(this->gameKeyEventList);
}


// synchronized
void GameInput_removeNonAIInputGameKeyEvents(GameInput* this) {
        BasicArrayList* list = this->gameKeyEventList;
        GameKeyEvent* gameKeyEvent = nullptr;
        for (int32_t index = BasicArrayList_size(list); --index >= 0; ) {
            gameKeyEvent = ((GameKeyEvent*) list->objectArray[index]);
            if (GameKeyEvent_getSourceId(gameKeyEvent) != 1) {
                BasicArrayList_removeAt(list, index);
            }
        }
}


// synchronized
void GameInput_update(GameInput* this) {
        BasicArrayList* removeList = this->removalGameKeyEventList;
        BasicArrayList* list = this->gameKeyEventList;
        int32_t size = BasicArrayList_size(removeList);
        for (int32_t index = 0; index < size; index++) {
            void* anyType = removeList->objectArray[index];
            for (int32_t index2 = BasicArrayList_size(list); --index2 >= 0; ) {
                if (list->objectArray[index2] == anyType) {
                    BasicArrayList_removeAt(list, index2);
                }
            }
        }
        BasicArrayList_clear(removeList);
}


BasicArrayList* GameInput_getRemovalGameKeyEventList(GameInput* this) {
        return this->removalGameKeyEventList;
}


BasicArrayList* GameInput_getGameKeyEventList(GameInput* this) {
        return this->gameKeyEventList;
}

