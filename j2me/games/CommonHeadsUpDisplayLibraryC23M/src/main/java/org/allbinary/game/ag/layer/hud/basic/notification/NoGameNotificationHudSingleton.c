// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/hud/basic/notification/NoGameNotificationHudSingleton.h"
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/ag/layer/hud/basic/notification/GameNotificationHud.h"
#include "org/allbinary/game/ag/layer/hud/basic/notification/NoGameGameNotificationHud.h"


static NoGameNotificationHudSingleton* NoGameNotificationHudSingleton_instance;




void NoGameNotificationHudSingleton_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NoGameNotificationHudSingleton_instance = NoGameNotificationHudSingleton_new();
}

void NoGameNotificationHudSingleton_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoGameNotificationHudSingleton", nullptr);
    java_register_method("NoGameNotificationHudSingleton", "getGameNotificationHud", (void*) NoGameNotificationHudSingleton_getGameNotificationHud);
}

static void NoGameNotificationHudSingleton_initFields(NoGameNotificationHudSingleton* this) {
    this->logUtil = LogUtil_getInstance();
    this->gameNotificationHud = (GameNotificationHud_staticInit(), GameNotificationHud_NULL_GAME_NOTIFICATION);
}


NoGameNotificationHudSingleton* NoGameNotificationHudSingleton_getInstance(void) {
        return (NoGameNotificationHudSingleton_staticInit(), NoGameNotificationHudSingleton_instance);
}


void NoGameNotificationHudSingleton_init(NoGameNotificationHudSingleton* this) {
    NoGameNotificationHudSingleton_register();
    NoGameNotificationHudSingleton_initFields(this);
        JAVA_TRY {
            BasicHudFactory* basicHudFactory = BasicHudFactory_getInstance();
            this->gameNotificationHud = NoGameGameNotificationHud_new();
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
}

NoGameNotificationHudSingleton* NoGameNotificationHudSingleton_new(void) {
    NoGameNotificationHudSingleton* this = java_object_alloc(sizeof(NoGameNotificationHudSingleton), "NoGameNotificationHudSingleton");
    NoGameNotificationHudSingleton_init(this);
    return this;
}


GameNotificationHud* NoGameNotificationHudSingleton_getGameNotificationHud(NoGameNotificationHudSingleton* this) {
        return this->gameNotificationHud;
}

