// Generated Code Do Not Modify
#include "org/allbinary/media/audio/NoPlayer.h"
#include "javax/microedition/media/Control.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/media/audio/BasicPlayer.h"
#include "org/allbinary/media/audio/NullControl.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


NoPlayer* NoPlayer_NO_PLAYER;






void NoPlayer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NoPlayer_NO_PLAYER = NoPlayer_new();
}

void NoPlayer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoPlayer", "BasicPlayer");
    java_register_method("NoPlayer", "close", (void*) NoPlayer_close);
    java_register_method("NoPlayer", "getContentType", (void*) NoPlayer_getContentType);
    java_register_method("NoPlayer", "getControl", (void*) NoPlayer_getControl);
    java_register_method("NoPlayer", "getControls", (void*) NoPlayer_getControls);
}


void NoPlayer_init(NoPlayer* this) {
    NoPlayer_register();
    BasicPlayer_init(&this->base);
}

NoPlayer* NoPlayer_new(void) {
    NoPlayer* this = java_object_alloc(sizeof(NoPlayer), "NoPlayer");
    NoPlayer_init(this);
    return this;
}


void NoPlayer_close(NoPlayer* this) {
}


const char* NoPlayer_getContentType(NoPlayer* this) {
        return StringUtil_getInstance()->NULL_STRING;
}


Control* NoPlayer_getControl(NoPlayer* this, const char* controlType) {
        return NullControl_new();
}


Control** NoPlayer_getControls(NoPlayer* this) {
        return ((Control**) java_array_new(sizeof(Control*), 0));
}

