// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/hud/basic/notification/GameNotification.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEvent.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/logic/java/bool/BooleanFactory.h")
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#endif


GameNotificationEvent* GameNotification_NULL_GAME_NOTIFICATION_EVENT;




void GameNotification_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameNotification_NULL_GAME_NOTIFICATION_EVENT = GameNotificationEvent_new(NullUtil_getInstance()->NULL_OBJECT, StringUtil_getInstance()->EMPTY_STRING, 0, BasicColorFactory_getInstance()->RED, BooleanFactory_getInstance()->FALSE);
}

void GameNotification_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameNotification", nullptr);
    java_register_method("GameNotification", "add", (void*) GameNotification_add);
    java_register_method("GameNotification", "clear", (void*) GameNotification_clear);
    java_register_method("GameNotification", "getSize", (void*) GameNotification_getSize);
}

static void GameNotification_initFields(GameNotification* this) {
    this->stringList = BasicArrayListD_new();
    this->timeList = BasicArrayListD_new();
    this->colorList = BasicArrayListD_new();
}

void GameNotification_init(GameNotification* this) {
    GameNotification_register();
    GameNotification_initFields(this);
}

GameNotification* GameNotification_new(void) {
    GameNotification* this = java_object_alloc(sizeof(GameNotification), "GameNotification");
    GameNotification_init(this);
    return this;
}


void GameNotification_add(GameNotification* this, const char* string, int32_t seconds, BasicColor* basicColor) {
        if (!BasicArrayList_contains(this->stringList, string)) {
            BasicArrayList_add(this->stringList, string);
            BasicArrayList_add(this->timeList, JAVA_BOX(seconds));
            BasicArrayList_add(this->colorList, basicColor);
        }
}


void GameNotification_clear(GameNotification* this) {
        BasicArrayList_clear(this->stringList);
        BasicArrayList_clear(this->timeList);
        BasicArrayList_clear(this->colorList);
}


int32_t GameNotification_getSize(GameNotification* this) {
        return BasicArrayList_size(this->stringList);
}

