// Generated Code Do Not Modify
#include "org/allbinary/audio/AudioContentTypeData.h"





void AudioContentTypeData_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AudioContentTypeData_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AudioContentTypeData", nullptr);
    java_register_method("AudioContentTypeData", "getName", (void*) AudioContentTypeData_getName);
}

static void AudioContentTypeData_initFields(AudioContentTypeData* this) {
    
}


void AudioContentTypeData_init(AudioContentTypeData* this, const char* name) {
    AudioContentTypeData_register();
    AudioContentTypeData_initFields(this);
        this->name = name;
}

AudioContentTypeData* AudioContentTypeData_new(const char* name) {
    AudioContentTypeData* this = java_object_alloc(sizeof(AudioContentTypeData), "AudioContentTypeData");
    AudioContentTypeData_init(this, name);
    return this;
}


const char* AudioContentTypeData_getName(AudioContentTypeData* this) {
        return this->name;
}

