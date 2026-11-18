// Generated Code Do Not Modify
#include "org/allbinary/media/audio/SoundStrings.h"


static SoundStrings* SoundStrings_instance;


void SoundStrings_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    SoundStrings_instance = SoundStrings_new();
}

void SoundStrings_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SoundStrings", nullptr);
}

static void SoundStrings_initFields(SoundStrings* this) {
    this->STOP_ALL = "stopAll";
    this->CLOSE_ALL = "closeAll";
    this->SOUND = " Sound: ";
    this->INIT_SOUND = "Initializing Sound: ";
    this->STOPPING_SOUND = "Stopping Sound: ";
    this->CLOSING_SOUND = "Closing Sound: ";
}

void SoundStrings_init(SoundStrings* this) {
    SoundStrings_register();
    SoundStrings_initFields(this);
}

SoundStrings* SoundStrings_new(void) {
    SoundStrings* this = java_object_alloc(sizeof(SoundStrings), "SoundStrings");
    SoundStrings_init(this);
    return this;
}


SoundStrings* SoundStrings_getInstance(void) {
        return (SoundStrings_staticInit(), SoundStrings_instance);
}

