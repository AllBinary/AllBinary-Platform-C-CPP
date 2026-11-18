// Generated Code Do Not Modify
#include "org/allbinary/game/input/TextNotificationUtil.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEvent.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/media/audio/ErrorSound.h"
#include "org/allbinary/media/audio/PrimaryPlayerQueueFactory.h"
#include "org/allbinary/media/audio/SelectSound.h"
#if __has_include("org/allbinary/game/input/PlayerQueue.h")
#include "org/allbinary/game/input/PlayerQueue.h"
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
#if __has_include("org/allbinary/media/audio/PlayerQueue.h")
#include "org/allbinary/media/audio/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/PlayerQueue.h")
#include "org/allbinary/game/input/PlayerQueue.h"
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
#if __has_include("org/allbinary/media/audio/PlayerQueue.h")
#include "org/allbinary/media/audio/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/PlayerQueue.h")
#include "org/allbinary/game/input/PlayerQueue.h"
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
#if __has_include("org/allbinary/media/audio/PlayerQueue.h")
#include "org/allbinary/media/audio/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif
#if __has_include("org/allbinary/logic/java/bool/BooleanFactory.h")
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif


static TextNotificationUtil* TextNotificationUtil_instance;






void TextNotificationUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TextNotificationUtil_instance = TextNotificationUtil_new();
}

void TextNotificationUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TextNotificationUtil", nullptr);
    java_register_method("TextNotificationUtil", "fireError", (void*) TextNotificationUtil_fireError);
    java_register_method("TextNotificationUtil", "fireNew", (void*) TextNotificationUtil_fireNew);
    java_register_method("TextNotificationUtil", "fireSuccess", (void*) TextNotificationUtil_fireSuccess);
    java_register_method("TextNotificationUtil", "fire", (void*) TextNotificationUtil_fire);
}

static void TextNotificationUtil_initFields(TextNotificationUtil* this) {
    this->TWO = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 2);
    this->FALSE = BooleanFactory_getInstance()->FALSE;
    this->gameNotificationEventHandler = GameNotificationEventHandler_getInstance();
}

void TextNotificationUtil_init(TextNotificationUtil* this) {
    TextNotificationUtil_register();
    TextNotificationUtil_initFields(this);
}

TextNotificationUtil* TextNotificationUtil_new(void) {
    TextNotificationUtil* this = java_object_alloc(sizeof(TextNotificationUtil), "TextNotificationUtil");
    TextNotificationUtil_init(this);
    return this;
}


TextNotificationUtil* TextNotificationUtil_getInstance(void) {
        return (TextNotificationUtil_staticInit(), TextNotificationUtil_instance);
}


// throws Exception
void TextNotificationUtil_fireError(TextNotificationUtil* this, const char* message) {
        PlayerQueue_add(PrimaryPlayerQueueFactory_getInstance(), ErrorSound_getInstance());
        TextNotificationUtil_fire(this, message);
}


// throws Exception
void TextNotificationUtil_fireNew(TextNotificationUtil* this, const char* message) {
        PlayerQueue_add(PrimaryPlayerQueueFactory_getInstance(), SelectSound_getInstance());
        TextNotificationUtil_fire(this, message);
}


// throws Exception
void TextNotificationUtil_fireSuccess(TextNotificationUtil* this, const char* message) {
        PlayerQueue_add(PrimaryPlayerQueueFactory_getInstance(), SelectSound_getInstance());
        TextNotificationUtil_fire(this, message);
}


// throws Exception
void TextNotificationUtil_fire(TextNotificationUtil* this, const char* message) {
        GameNotificationEvent* gameNotificationEvent = GameNotificationEvent_new(this, message, this->TWO, BasicColorFactory_getInstance()->RED, this->FALSE);
        BasicEventHandler_fireEvent(this->gameNotificationEventHandler, gameNotificationEvent);
}

