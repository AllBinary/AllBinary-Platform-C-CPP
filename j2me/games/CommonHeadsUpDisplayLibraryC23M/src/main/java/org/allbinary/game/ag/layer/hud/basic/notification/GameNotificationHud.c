// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/hud/basic/notification/GameNotificationHud.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEvent.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/game/ag/layer/hud/basic/notification/GameNotification.h"
#if __has_include("org/allbinary/game/graphics/hud/BasicHudFactory.h")
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"
#endif
#if __has_include("org/allbinary/game/graphics/hud/BasicHudFactory.h")
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif


GameNotificationHud* GameNotificationHud_NULL_GAME_NOTIFICATION;








void GameNotificationHud_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameNotificationHud_NULL_GAME_NOTIFICATION = GameNotificationHud_new(BasicHudFactory_getInstance()->TOPCENTER, BasicHudFactory_getInstance()->HORIZONTAL, 0, BasicColorFactory_getInstance()->RED);
}

void GameNotificationHud_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameNotificationHud", "BasicHud");
    java_register_method("GameNotificationHud", "onEvent", (void*) GameNotificationHud_onEvent);
    java_register_method("GameNotificationHud", "onGameNotificationEvent", (void*) GameNotificationHud_onGameNotificationEvent);
    java_register_method("GameNotificationHud", "add", (void*) GameNotificationHud_add);
    java_register_method("GameNotificationHud", "processTick", (void*) GameNotificationHud_processTick);
    java_register_method("GameNotificationHud", "paint", (void*) GameNotificationHud_paint);
    java_register_method("GameNotificationHud", "clear", (void*) GameNotificationHud_clear);
}

static void GameNotificationHud_initFields(GameNotificationHud* this) {
    this->METHOD_NAME = "onGameNotificationEvent";
    this->lastGameNotificationEvent = (GameNotification_staticInit(), GameNotification_NULL_GAME_NOTIFICATION_EVENT);
}


void GameNotificationHud_init(GameNotificationHud* this, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) {
    GameNotificationHud_register();
        BasicHud_init(&this->base, location, direction, bufferZone, basicColor);
        GameNotificationHud_initFields(this);
}

GameNotificationHud* GameNotificationHud_new(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) {
    GameNotificationHud* this = java_object_alloc(sizeof(GameNotificationHud), "GameNotificationHud");
    GameNotificationHud_init(this, location, direction, bufferZone, basicColor);
    return this;
}


void GameNotificationHud_onEvent(GameNotificationHud* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


// throws Exception
void GameNotificationHud_onGameNotificationEvent(GameNotificationHud* this, GameNotificationEvent* gameNotificationEvent) {
        if (this->lastGameNotificationEvent != gameNotificationEvent) {
            this->lastGameNotificationEvent = gameNotificationEvent;
            LogUtil_putF(this->base.logUtil, GameNotificationEvent_getString(gameNotificationEvent), this, this->METHOD_NAME);
        }
        GameNotificationHud_add(this, GameNotificationEvent_getString(gameNotificationEvent), GameNotificationEvent_getSeconds(gameNotificationEvent), GameNotificationEvent_getBasicColorP(gameNotificationEvent), GameNotificationEvent_getPermanent(gameNotificationEvent));
}


void GameNotificationHud_add(GameNotificationHud* this, const char* string, int32_t seconds, BasicColor* basicColor, bool permanent) {
}


// throws Exception
void GameNotificationHud_processTick(GameNotificationHud* this) {
}


void GameNotificationHud_paint(GameNotificationHud* this, Graphics* graphics) {
}


void GameNotificationHud_clear(GameNotificationHud* this) {
}

