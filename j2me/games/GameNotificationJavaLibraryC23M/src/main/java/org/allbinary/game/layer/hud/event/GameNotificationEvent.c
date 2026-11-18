// Generated Code Do Not Modify
#include "org/allbinary/game/layer/hud/event/GameNotificationEvent.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif










void GameNotificationEvent_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameNotificationEvent_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameNotificationEvent", "AllBinaryEventObject");
    java_register_method("GameNotificationEvent", "getString", (void*) GameNotificationEvent_getString);
    java_register_method("GameNotificationEvent", "getSeconds", (void*) GameNotificationEvent_getSeconds);
    java_register_method("GameNotificationEvent", "getBasicColorP", (void*) GameNotificationEvent_getBasicColorP);
    java_register_method("GameNotificationEvent", "getPermanent", (void*) GameNotificationEvent_getPermanent);
    java_register_method("GameNotificationEvent", "setString", (void*) GameNotificationEvent_setString);
    java_register_method("GameNotificationEvent", "setBasicColorP", (void*) GameNotificationEvent_setBasicColorP);
}

static void GameNotificationEvent_initFields(GameNotificationEvent* this) {
    this->string = StringUtil_getInstance()->EMPTY_STRING;
    
    this->basicColor = BasicColorFactory_getInstance()->BLACK;
    
}


void GameNotificationEvent_init(GameNotificationEvent* this, void* anyType, const char* string, int32_t seconds, BasicColor* basicColor, bool permanent) {
    GameNotificationEvent_register();
        AllBinaryEventObject_init(&this->base, anyType);
        GameNotificationEvent_initFields(this);
        GameNotificationEvent_setString(this, string);
        this->seconds = seconds;
        GameNotificationEvent_setBasicColorP(this, basicColor);
        this->removeable = permanent;
}

GameNotificationEvent* GameNotificationEvent_new(void* anyType, const char* string, int32_t seconds, BasicColor* basicColor, bool permanent) {
    GameNotificationEvent* this = java_object_alloc(sizeof(GameNotificationEvent), "GameNotificationEvent");
    GameNotificationEvent_init(this, anyType, string, seconds, basicColor, permanent);
    return this;
}


const char* GameNotificationEvent_getString(GameNotificationEvent* this) {
        return this->string;
}


int32_t GameNotificationEvent_getSeconds(GameNotificationEvent* this) {
        return this->seconds;
}


BasicColor* GameNotificationEvent_getBasicColorP(GameNotificationEvent* this) {
        return this->basicColor;
}


bool GameNotificationEvent_getPermanent(GameNotificationEvent* this) {
        return this->removeable;
}


void GameNotificationEvent_setString(GameNotificationEvent* this, const char* string) {
        this->string = string;
}


void GameNotificationEvent_setBasicColorP(GameNotificationEvent* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
}

