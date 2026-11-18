// Generated Code Do Not Modify
#include "org/allbinary/media/audio/Sound.h"
#include "javax/microedition/media/Player.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/media/audio/SoundInterface.h"
#include "org/allbinary/media/audio/NoPlayer.h"










void Sound_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Sound_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Sound", nullptr);
    java_register_method("Sound", "getResource", (void*) Sound_getResource);
    java_register_method("Sound", "getPlayerP", (void*) Sound_getPlayerP);
    java_register_method("Sound", "setPlayerP", (void*) Sound_setPlayerP);
    java_register_method("Sound", "init", (void*) Sound_initMethod);
    java_register_method("Sound", "getDuration", (void*) Sound_getDuration);
    java_register_method("Sound", "run", (void*) Sound_run);
}

static void Sound_initFields(Sound* this) {
    
    this->player = (NoPlayer_staticInit(), NoPlayer_NO_PLAYER);
}


void Sound_init(Sound* this, const char* resource) {
    Sound_register();
    Sound_initFields(this);
        this->resource = resource;
}

Sound* Sound_new(const char* resource) {
    Sound* this = java_object_alloc(sizeof(Sound), "Sound");
    Sound_init(this, resource);
    return this;
}


const char* Sound_getResource(Sound* this) {
        return this->resource;
}


Player* Sound_getPlayerP(Sound* this) {
        return this->player;
}


void Sound_setPlayerP(Sound* this, Player* player) {
        this->player = player;
}


// throws Exception
void Sound_initMethod(Sound* this) {
}


int32_t Sound_getDuration(Sound* this) {
        return -1;
}


void Sound_run(Sound* this) {
        JAVA_TRY {
            Player_start(this->player);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            PreLogUtil_put(commonStrings->EXCEPTION, this, commonStrings->RUN);
        } JAVA_END_TRY;
}

