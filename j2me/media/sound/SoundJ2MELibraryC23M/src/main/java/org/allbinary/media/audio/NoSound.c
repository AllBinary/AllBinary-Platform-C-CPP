// Generated Code Do Not Modify
#include "org/allbinary/media/audio/NoSound.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/media/audio/Sound.h"
#include "org/allbinary/media/audio/NoPlayer.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static NoSound* NoSound_instance;



void NoSound_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NoSound_instance = NoSound_new();
}

void NoSound_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoSound", "Sound");
}


NoSound* NoSound_getInstance(void) {
        return (NoSound_staticInit(), NoSound_instance);
}


void NoSound_init(NoSound* this) {
    NoSound_register();
        Sound_init(&this->base, StringUtil_getInstance()->EMPTY_STRING);
        Sound_setPlayerP(this, (NoPlayer_staticInit(), NoPlayer_NO_PLAYER));
}

NoSound* NoSound_new(void) {
    NoSound* this = java_object_alloc(sizeof(NoSound), "NoSound");
    NoSound_init(this);
    return this;
}

