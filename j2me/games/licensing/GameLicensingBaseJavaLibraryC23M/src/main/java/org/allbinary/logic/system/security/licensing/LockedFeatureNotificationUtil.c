// Generated Code Do Not Modify
#include "org/allbinary/logic/system/security/licensing/LockedFeatureNotificationUtil.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEvent.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/media/audio/ErrorSound.h"
#include "org/allbinary/media/audio/PrimaryPlayerQueueFactory.h"
#include "org/allbinary/logic/system/security/licensing/LicenseStrings.h"
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/logic/java/bool/BooleanFactory.h")
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/PlayerQueue.h")
#include "org/allbinary/logic/system/security/licensing/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/layer/hud/event/PlayerQueue.h")
#include "org/allbinary/game/layer/hud/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/layer/hud/event/PlayerQueue.h")
#include "org/allbinary/game/layer/hud/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/color/PlayerQueue.h")
#include "org/allbinary/graphics/color/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/color/PlayerQueue.h")
#include "org/allbinary/graphics/color/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/java/bool/PlayerQueue.h")
#include "org/allbinary/logic/java/bool/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/math/PlayerQueue.h")
#include "org/allbinary/logic/math/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/media/audio/PlayerQueue.h")
#include "org/allbinary/media/audio/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/media/audio/PlayerQueue.h")
#include "org/allbinary/media/audio/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h")
#include "org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/PlayerQueue.h")
#include "org/allbinary/logic/system/security/licensing/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/layer/hud/event/PlayerQueue.h")
#include "org/allbinary/game/layer/hud/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/layer/hud/event/PlayerQueue.h")
#include "org/allbinary/game/layer/hud/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/color/PlayerQueue.h")
#include "org/allbinary/graphics/color/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/color/PlayerQueue.h")
#include "org/allbinary/graphics/color/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/java/bool/PlayerQueue.h")
#include "org/allbinary/logic/java/bool/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/math/PlayerQueue.h")
#include "org/allbinary/logic/math/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/media/audio/PlayerQueue.h")
#include "org/allbinary/media/audio/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/media/audio/PlayerQueue.h")
#include "org/allbinary/media/audio/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h")
#include "org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h"
#endif


static LockedFeatureNotificationUtil* LockedFeatureNotificationUtil_instance;




void LockedFeatureNotificationUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LockedFeatureNotificationUtil_instance = LockedFeatureNotificationUtil_new();
}

void LockedFeatureNotificationUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LockedFeatureNotificationUtil", nullptr);
    java_register_method("LockedFeatureNotificationUtil", "fire", (void*) LockedFeatureNotificationUtil_fire);
    java_register_method("LockedFeatureNotificationUtil", "fireWithColor", (void*) LockedFeatureNotificationUtil_fireWithColor);
}

static void LockedFeatureNotificationUtil_initFields(LockedFeatureNotificationUtil* this) {
    this->gameNotificationEvent = GameNotificationEvent_new(this, LicenseStrings_getInstance()->LOCKED, SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 3), BasicColorFactory_getInstance()->RED, BooleanFactory_getInstance()->FALSE);
}

void LockedFeatureNotificationUtil_init(LockedFeatureNotificationUtil* this) {
    LockedFeatureNotificationUtil_register();
    LockedFeatureNotificationUtil_initFields(this);
}

LockedFeatureNotificationUtil* LockedFeatureNotificationUtil_new(void) {
    LockedFeatureNotificationUtil* this = java_object_alloc(sizeof(LockedFeatureNotificationUtil), "LockedFeatureNotificationUtil");
    LockedFeatureNotificationUtil_init(this);
    return this;
}


LockedFeatureNotificationUtil* LockedFeatureNotificationUtil_getInstance(void) {
        return (LockedFeatureNotificationUtil_staticInit(), LockedFeatureNotificationUtil_instance);
}


// throws Exception
void LockedFeatureNotificationUtil_fire(LockedFeatureNotificationUtil* this) {
        PlayerQueue_add(PrimaryPlayerQueueFactory_getInstance(), ErrorSound_getInstance());
        BasicEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->gameNotificationEvent);
}


// throws Exception
void LockedFeatureNotificationUtil_fireWithColor(LockedFeatureNotificationUtil* this, BasicColor* basicColor) {
        PlayerQueue_add(PrimaryPlayerQueueFactory_getInstance(), ErrorSound_getInstance());
        GameNotificationEvent_setBasicColorP(this->gameNotificationEvent, basicColor);
        BasicEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->gameNotificationEvent);
}

