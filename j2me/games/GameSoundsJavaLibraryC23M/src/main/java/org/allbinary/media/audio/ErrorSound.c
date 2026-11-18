// Generated Code Do Not Modify
#include "org/allbinary/media/audio/ErrorSound.h"
#include "org/allbinary/media/audio/CompositeSound.h"
#include "org/allbinary/media/audio/Sound.h"


static Sound* ErrorSound_soundInterface;



void ErrorSound_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ErrorSound_soundInterface = ErrorSound_new();
}

void ErrorSound_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ErrorSound", "CompositeSound");
}


void ErrorSound_init(ErrorSound* this) {
    ErrorSound_register();
        CompositeSound_init(&this->base, "resource:/wav/error.wav");
}

ErrorSound* ErrorSound_new(void) {
    ErrorSound* this = java_object_alloc(sizeof(ErrorSound), "ErrorSound");
    ErrorSound_init(this);
    return this;
}


Sound* ErrorSound_getInstance(void) {
        return (ErrorSound_staticInit(), ErrorSound_soundInterface);
}

