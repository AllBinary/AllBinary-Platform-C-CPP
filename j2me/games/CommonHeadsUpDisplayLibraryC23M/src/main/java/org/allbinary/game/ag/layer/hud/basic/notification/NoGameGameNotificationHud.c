// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/hud/basic/notification/NoGameGameNotificationHud.h"
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/game/ag/layer/hud/basic/notification/GameNotificationHud.h"
#if __has_include("org/allbinary/game/graphics/hud/BasicHudFactory.h")
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"
#endif
#if __has_include("org/allbinary/game/graphics/hud/BasicHudFactory.h")
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif




void NoGameGameNotificationHud_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NoGameGameNotificationHud_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoGameGameNotificationHud", "GameNotificationHud");
}


void NoGameGameNotificationHud_init(NoGameGameNotificationHud* this) {
    NoGameGameNotificationHud_register();
        GameNotificationHud_init(&this->base, BasicHudFactory_getInstance()->TOPCENTER, BasicHudFactory_getInstance()->HORIZONTAL, 2, BasicColorFactory_getInstance()->RED);
        this->base.base.updateMaxWidth = 40;
        this->base.base.updateMaxHeight = 14;
}

NoGameGameNotificationHud* NoGameGameNotificationHud_new(void) {
    NoGameGameNotificationHud* this = java_object_alloc(sizeof(NoGameGameNotificationHud), "NoGameGameNotificationHud");
    NoGameGameNotificationHud_init(this);
    return this;
}

