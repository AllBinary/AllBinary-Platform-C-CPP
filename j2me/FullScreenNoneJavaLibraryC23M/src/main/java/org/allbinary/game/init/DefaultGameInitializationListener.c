// Generated Code Do Not Modify
#include "org/allbinary/game/init/DefaultGameInitializationListener.h"
#include "org/allbinary/game/configuration/event/GameInitializedEvent.h"
#include "org/allbinary/game/configuration/event/GameInitializedEventHandler.h"
#include "org/allbinary/game/resource/FeatureResourceInitializationUtil.h"
#include "org/allbinary/graphics/threed/SWTJOGLProcessor.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif
#if __has_include("org/allbinary/game/resource/FeatureResourceInitializationUtil.h")
#include "org/allbinary/game/resource/FeatureResourceInitializationUtil.h"
#endif






void DefaultGameInitializationListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DefaultGameInitializationListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DefaultGameInitializationListener", nullptr);
    java_register_method("DefaultGameInitializationListener", "onEvent", (void*) DefaultGameInitializationListener_onEvent);
    java_register_method("DefaultGameInitializationListener", "onGameInitialized", (void*) DefaultGameInitializationListener_onGameInitialized);
}

static void DefaultGameInitializationListener_initFields(DefaultGameInitializationListener* this) {
    this->logUtil = LogUtil_getInstance();
    this->swtJOGLProcessor = SWTJOGLProcessor_getInstance();
    this->firstTime = true;
}


void DefaultGameInitializationListener_init(DefaultGameInitializationListener* this) {
    DefaultGameInitializationListener_register();
    DefaultGameInitializationListener_initFields(this);
        GameInitializedEventHandler* gameInitializedEventHandler = GameInitializedEventHandler_getInstance();
        BasicEventHandler_removeAllListeners(gameInitializedEventHandler);
        BasicEventHandler_addListenerInterface(gameInitializedEventHandler, ((GameInitializedListenerInterface*) this));
}

DefaultGameInitializationListener* DefaultGameInitializationListener_new(void) {
    DefaultGameInitializationListener* this = java_object_alloc(sizeof(DefaultGameInitializationListener), "DefaultGameInitializationListener");
    DefaultGameInitializationListener_init(this);
    return this;
}


void DefaultGameInitializationListener_onEvent(DefaultGameInitializationListener* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void DefaultGameInitializationListener_onGameInitialized(DefaultGameInitializationListener* this, GameInitializedEvent* gameInitializedEvent) {
        const char* ON_GAME_INITIALIZED = "onGameInitialized";
        CommonStrings* commonStrings = CommonStrings_getInstance();
        JAVA_TRY {
            LogUtil_putF(this->logUtil, commonStrings->START, this, ON_GAME_INITIALIZED);
            while (!SWTJOGLProcessor_isHolderCreated(this->swtJOGLProcessor)) {
                LogUtil_putF(this->logUtil, commonStrings->UPDATE, this, ON_GAME_INITIALIZED);
                java_sleep(20);
            }
            FeatureResourceInitializationUtil_initMethod(FeatureResourceInitializationUtil_getInstance(), GameInitializedEvent_getLevel(gameInitializedEvent));
            if (this->firstTime) {
                this->firstTime = false;
            } else {
                SWTJOGLProcessor_onSurfaceChanged(this->swtJOGLProcessor);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, ON_GAME_INITIALIZED, e);
        } JAVA_END_TRY;
}

