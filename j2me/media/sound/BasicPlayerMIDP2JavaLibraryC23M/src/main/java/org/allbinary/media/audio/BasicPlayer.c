// Generated Code Do Not Modify
#include "org/allbinary/media/audio/BasicPlayer.h"
#include "javax/microedition/media/Control.h"
#include "javax/microedition/media/MediaException.h"
#include "javax/microedition/media/PlayerListener.h"
#include "javax/microedition/media/TimeBase.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/media/audio/TimeBaseInterface.h"
#include "org/allbinary/media/audio/Controllable2.h"
#include "org/allbinary/media/audio/NullControl.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


const char* BasicPlayer_CONTROL_TYPE = "ToneControl";























void BasicPlayer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicPlayer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicPlayer", nullptr);
    java_register_method("BasicPlayer", "getContentType", (void*) BasicPlayer_getContentType);
    java_register_method("BasicPlayer", "getControl", (void*) BasicPlayer_getControl);
    java_register_method("BasicPlayer", "getControls", (void*) BasicPlayer_getControls);
    java_register_method("BasicPlayer", "close", (void*) BasicPlayer_close);
    java_register_method("BasicPlayer", "addPlayerListener", (void*) BasicPlayer_addPlayerListener);
    java_register_method("BasicPlayer", "removePlayerListener", (void*) BasicPlayer_removePlayerListener);
    java_register_method("BasicPlayer", "getState", (void*) BasicPlayer_getState);
    java_register_method("BasicPlayer", "setState", (void*) BasicPlayer_setState);
    java_register_method("BasicPlayer", "getDuration", (void*) BasicPlayer_getDuration);
    java_register_method("BasicPlayer", "getMediaTime", (void*) BasicPlayer_getMediaTime);
    java_register_method("BasicPlayer", "getTimeBase", (void*) BasicPlayer_getTimeBase);
    java_register_method("BasicPlayer", "setTimeBase", (void*) BasicPlayer_setTimeBase);
    java_register_method("BasicPlayer", "deallocate", (void*) BasicPlayer_deallocate);
    java_register_method("BasicPlayer", "prefetch", (void*) BasicPlayer_prefetch);
    java_register_method("BasicPlayer", "realize", (void*) BasicPlayer_realize);
    java_register_method("BasicPlayer", "setLoopCount", (void*) BasicPlayer_setLoopCount);
    java_register_method("BasicPlayer", "getLoopCount", (void*) BasicPlayer_getLoopCount);
    java_register_method("BasicPlayer", "setMediaTime", (void*) BasicPlayer_setMediaTime);
    java_register_method("BasicPlayer", "start", (void*) BasicPlayer_start);
    java_register_method("BasicPlayer", "stop", (void*) BasicPlayer_stop);
    java_register_method("BasicPlayer", "setVolume", (void*) BasicPlayer_setVolume);
}

static void BasicPlayer_initFields(BasicPlayer* this) {
    this->listenersList = BasicArrayListD_new();
    this->timeBase = nullptr;
    this->stateP = 0;
    this->loopCountP = 0;
}


void BasicPlayer_init(BasicPlayer* this) {
    BasicPlayer_register();
    BasicPlayer_initFields(this);
        BasicPlayer_setLoopCount(this, 0);
        BasicPlayer_setState(this, (Player_staticInit(), Player_UNREALIZED));
}

BasicPlayer* BasicPlayer_new(void) {
    BasicPlayer* this = java_object_alloc(sizeof(BasicPlayer), "BasicPlayer");
    BasicPlayer_init(this);
    return this;
}


const char* BasicPlayer_getContentType(BasicPlayer* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


Control* BasicPlayer_getControl(BasicPlayer* this, const char* controlType) {
        return NullControl_new();
}


Control** BasicPlayer_getControls(BasicPlayer* this) {
        return ((Control**) java_array_new(sizeof(Control*), 0));
}


void BasicPlayer_close(BasicPlayer* this) {
}


// synchronized
void BasicPlayer_addPlayerListener(BasicPlayer* this, PlayerListener* playerListener) {
        if (!BasicArrayList_contains(this->listenersList, playerListener)) {
            BasicArrayList_add(this->listenersList, playerListener);
        }
}


void BasicPlayer_removePlayerListener(BasicPlayer* this, PlayerListener* playerListener) {
        BasicArrayList_remove(this->listenersList, playerListener);
}


int32_t BasicPlayer_getState(BasicPlayer* this) {
        return this->stateP;
}


// synchronized
void BasicPlayer_setState(BasicPlayer* this, int32_t state) {
        this->stateP = state;
}


int64_t BasicPlayer_getDuration(BasicPlayer* this) {
        return 0LL;
}


int64_t BasicPlayer_getMediaTime(BasicPlayer* this) {
        return 0LL;
}


TimeBase* BasicPlayer_getTimeBase(BasicPlayer* this) {
        return this->timeBase;
}


// synchronized
void BasicPlayer_setTimeBase(BasicPlayer* this, TimeBase* timeBase) {
        this->timeBase = timeBase;
}


void BasicPlayer_deallocate(BasicPlayer* this) {
}


// throws MediaException
void BasicPlayer_prefetch(BasicPlayer* this) {
}


// throws MediaException
void BasicPlayer_realize(BasicPlayer* this) {
}


// synchronized
void BasicPlayer_setLoopCount(BasicPlayer* this, int32_t count) {
        this->loopCountP = count;
}


int32_t BasicPlayer_getLoopCount(BasicPlayer* this) {
        return this->loopCountP;
}


// throws MediaException
// synchronized
int64_t BasicPlayer_setMediaTime(BasicPlayer* this, int64_t now) {
        return 0LL;
}


// throws MediaException
// synchronized
void BasicPlayer_start(BasicPlayer* this) {
        BasicPlayer_setState(this, (Player_staticInit(), Player_STARTED));
}


// throws MediaException
// synchronized
void BasicPlayer_stop(BasicPlayer* this) {
        BasicPlayer_setState(this, (Player_staticInit(), Player_PREFETCHED));
}


void BasicPlayer_setVolume(BasicPlayer* this, int32_t leftVolume, int32_t rightVolume) {
}

