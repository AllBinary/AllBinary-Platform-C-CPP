// Generated Code Do Not Modify
#include "org/allbinary/media/audio/PlayerComposite.h"
#include "javax/microedition/media/Control.h"
#include "javax/microedition/media/MediaException.h"
#include "javax/microedition/media/PlayerListener.h"
#include "javax/microedition/media/TimeBase.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/media/audio/TimeBaseInterface.h"
#include "org/allbinary/media/audio/Controllable2.h"
























void PlayerComposite_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PlayerComposite_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PlayerComposite", nullptr);
    java_register_method("PlayerComposite", "addPlayerListener", (void*) PlayerComposite_addPlayerListener);
    java_register_method("PlayerComposite", "removePlayerListener", (void*) PlayerComposite_removePlayerListener);
    java_register_method("PlayerComposite", "close", (void*) PlayerComposite_close);
    java_register_method("PlayerComposite", "deallocate", (void*) PlayerComposite_deallocate);
    java_register_method("PlayerComposite", "getContentType", (void*) PlayerComposite_getContentType);
    java_register_method("PlayerComposite", "getDuration", (void*) PlayerComposite_getDuration);
    java_register_method("PlayerComposite", "getMediaTime", (void*) PlayerComposite_getMediaTime);
    java_register_method("PlayerComposite", "getTimeBase", (void*) PlayerComposite_getTimeBase);
    java_register_method("PlayerComposite", "setTimeBase", (void*) PlayerComposite_setTimeBase);
    java_register_method("PlayerComposite", "prefetch", (void*) PlayerComposite_prefetch);
    java_register_method("PlayerComposite", "realize", (void*) PlayerComposite_realize);
    java_register_method("PlayerComposite", "getState", (void*) PlayerComposite_getState);
    java_register_method("PlayerComposite", "setLoopCount", (void*) PlayerComposite_setLoopCount);
    java_register_method("PlayerComposite", "setMediaTime", (void*) PlayerComposite_setMediaTime);
    java_register_method("PlayerComposite", "start", (void*) PlayerComposite_start);
    java_register_method("PlayerComposite", "stop", (void*) PlayerComposite_stop);
    java_register_method("PlayerComposite", "getControl", (void*) PlayerComposite_getControl);
    java_register_method("PlayerComposite", "getControls", (void*) PlayerComposite_getControls);
    java_register_method("PlayerComposite", "setVolume", (void*) PlayerComposite_setVolume);
    java_register_method("PlayerComposite", "getPlayerP", (void*) PlayerComposite_getPlayerP);
}

static void PlayerComposite_initFields(PlayerComposite* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    this->timeElapsedHelper = TimeDelayHelper_new(0);
    this->gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory_getInstance();
}


void PlayerComposite_init(PlayerComposite* this, Player* player, int32_t repeatTime) {
    PlayerComposite_register();
    PlayerComposite_initFields(this);
        this->player = player;
        this->timeElapsedHelper->delay = repeatTime;
}

PlayerComposite* PlayerComposite_new(Player* player, int32_t repeatTime) {
    PlayerComposite* this = java_object_alloc(sizeof(PlayerComposite), "PlayerComposite");
    PlayerComposite_init(this, player, repeatTime);
    return this;
}


// synchronized
void PlayerComposite_addPlayerListener(PlayerComposite* this, PlayerListener* playerListener) {
        Player_addPlayerListener(this->player, playerListener);
}


void PlayerComposite_removePlayerListener(PlayerComposite* this, PlayerListener* playerListener) {
        Player_removePlayerListener(this->player, playerListener);
}


void PlayerComposite_close(PlayerComposite* this) {
        Player_close(this->player);
}


void PlayerComposite_deallocate(PlayerComposite* this) {
        Player_deallocate(this->player);
}


const char* PlayerComposite_getContentType(PlayerComposite* this) {
        return Player_getContentType(this->player);
}


int64_t PlayerComposite_getDuration(PlayerComposite* this) {
        return Player_getDuration(this->player);
}


int64_t PlayerComposite_getMediaTime(PlayerComposite* this) {
        return Player_getMediaTime(this->player);
}


TimeBase* PlayerComposite_getTimeBase(PlayerComposite* this) {
        return TimeBaseInterface_getTimeBase((((TimeBaseInterface*) this->player)));
}


// throws MediaException
// synchronized
void PlayerComposite_setTimeBase(PlayerComposite* this, TimeBase* timeBase) {
        TimeBaseInterface_setTimeBase((((TimeBaseInterface*) this->player)), timeBase);
}


void PlayerComposite_prefetch(PlayerComposite* this) {
        JAVA_TRY {
            Player_prefetch(this->player);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "prefetch", e);
        } JAVA_END_TRY;
}


void PlayerComposite_realize(PlayerComposite* this) {
        JAVA_TRY {
            Player_realize(this->player);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "realize", e);
        } JAVA_END_TRY;
}


int32_t PlayerComposite_getState(PlayerComposite* this) {
        return Player_getState(this->player);
}


void PlayerComposite_setLoopCount(PlayerComposite* this, int32_t count) {
        Player_setLoopCount(this->player, count);
}


int64_t PlayerComposite_setMediaTime(PlayerComposite* this, int64_t now) {
        JAVA_TRY {
            return Player_setMediaTime(this->player, now);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "setMediaTime", e);
            return ((int64_t) (-1));
        } JAVA_END_TRY;
}


void PlayerComposite_start(PlayerComposite* this) {
        JAVA_TRY {
            if (TimeDelayHelper_isTime(this->timeElapsedHelper, this->gameTickTimeDelayHelper->startTime)) {
                Player_start(this->player);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->START_METHOD_NAME, e);
        } JAVA_END_TRY;
}


void PlayerComposite_stop(PlayerComposite* this) {
        JAVA_TRY {
            Player_stop(this->player);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "stop", e);
        } JAVA_END_TRY;
}


Control* PlayerComposite_getControl(PlayerComposite* this, const char* controlType) {
        return Controllable_getControl(this->player, controlType);
}


Control** PlayerComposite_getControls(PlayerComposite* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void PlayerComposite_setVolume(PlayerComposite* this, int32_t leftVolume, int32_t rightVolume) {
        Controllable2* controllable2 = (((Controllable2*) this->player));
        Controllable2_setVolume(controllable2, leftVolume, rightVolume);
}


Player* PlayerComposite_getPlayerP(PlayerComposite* this) {
        return this->player;
}

