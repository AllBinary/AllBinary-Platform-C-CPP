// Generated Code Do Not Modify
#include "org/allbinary/game/input/PlayerGameInput.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/input/GameInputStrings.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif












void PlayerGameInput_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PlayerGameInput_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PlayerGameInput", "GameInput");
    java_register_method("PlayerGameInput", "onPressGameKeyEvent", (void*) PlayerGameInput_onPressGameKeyEvent);
    java_register_method("PlayerGameInput", "onDownGameKeyEvent", (void*) PlayerGameInput_onDownGameKeyEvent);
    java_register_method("PlayerGameInput", "onDownKeyEvent", (void*) PlayerGameInput_onDownKeyEvent);
    java_register_method("PlayerGameInput", "onDownKey", (void*) PlayerGameInput_onDownKey);
    java_register_method("PlayerGameInput", "onUpGameKeyEvent", (void*) PlayerGameInput_onUpGameKeyEvent);
    java_register_method("PlayerGameInput", "onUpKeyEvent", (void*) PlayerGameInput_onUpKeyEvent);
    java_register_method("PlayerGameInput", "onEvent", (void*) PlayerGameInput_onEvent);
    java_register_method("PlayerGameInput", "getPlayerInputId", (void*) PlayerGameInput_getPlayerInputId);
}

static void PlayerGameInput_initFields(PlayerGameInput* this) {
    this->gameInputStrings = GameInputStrings_getInstance();
    
}


void PlayerGameInput_init(PlayerGameInput* this, BasicArrayList* gameKeyEventList, BasicArrayList* removalGameKeyEventList, int32_t playerInputId) {
    PlayerGameInput_register();
        GameInput_init(&this->base, gameKeyEventList, removalGameKeyEventList);
        PlayerGameInput_initFields(this);
        this->playerInputId = playerInputId;
}

PlayerGameInput* PlayerGameInput_new(BasicArrayList* gameKeyEventList, BasicArrayList* removalGameKeyEventList, int32_t playerInputId) {
    PlayerGameInput* this = java_object_alloc(sizeof(PlayerGameInput), "PlayerGameInput");
    PlayerGameInput_init(this, gameKeyEventList, removalGameKeyEventList, playerInputId);
    return this;
}


// synchronized
void PlayerGameInput_onPressGameKeyEvent(PlayerGameInput* this, GameKeyEvent* gameKeyEvent) {
        GameInput_add(this, gameKeyEvent);
        GameInput_addForRemoval(this, gameKeyEvent);
}


// synchronized
void PlayerGameInput_onDownGameKeyEvent(PlayerGameInput* this, GameKeyEvent* gameKeyEvent) {
        GameInput_add(this, gameKeyEvent);
}


// synchronized
void PlayerGameInput_onDownKeyEvent(PlayerGameInput* this, GameKeyEvent* gameKeyEvent) {
        GameInput_add(this, gameKeyEvent);
        GameInput_addForRemoval(this, gameKeyEvent);
}


// synchronized
void PlayerGameInput_onDownKey(PlayerGameInput* this, int32_t gameKeyEvent) {
        PreLogUtil_put(java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->START_LABEL), java_string_of(gameKeyEvent))), this, this->gameInputStrings->ON_DOWN_GAME_KEY);
}


// synchronized
void PlayerGameInput_onUpGameKeyEvent(PlayerGameInput* this, GameKeyEvent* gameKeyEvent) {
        GameInput_addForRemoval(this, gameKeyEvent);
}


// synchronized
void PlayerGameInput_onUpKeyEvent(PlayerGameInput* this, int32_t gameKeyEvent) {
}


void PlayerGameInput_onEvent(PlayerGameInput* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


int32_t PlayerGameInput_getPlayerInputId(PlayerGameInput* this) {
        return this->playerInputId;
}

