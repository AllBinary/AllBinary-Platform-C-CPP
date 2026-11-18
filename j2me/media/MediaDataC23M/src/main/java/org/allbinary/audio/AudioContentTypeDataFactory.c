// Generated Code Do Not Modify
#include "org/allbinary/audio/AudioContentTypeDataFactory.h"
#include "org/allbinary/audio/AudioContentTypeData.h"


static AudioContentTypeDataFactory* AudioContentTypeDataFactory_instance;



void AudioContentTypeDataFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AudioContentTypeDataFactory_instance = AudioContentTypeDataFactory_new();
}

void AudioContentTypeDataFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AudioContentTypeDataFactory", nullptr);
}

static void AudioContentTypeDataFactory_initFields(AudioContentTypeDataFactory* this) {
    this->MIME_AUDIO_TONE = AudioContentTypeData_new("audio/x-tone-seq");
    this->MIME_AUDIO_AMR = AudioContentTypeData_new("audio/amr");
    this->MIME_AUDIO_AMR_WB = AudioContentTypeData_new("audio/amr-wb");
    this->MIME_AUDIO_WAV = AudioContentTypeData_new("audio/x-wav");
    this->MIME_AUDIO_MIDI = AudioContentTypeData_new("audio/midi");
    this->MIME_AUDIO_SP_MIDI = AudioContentTypeData_new("audio/sp-midi");
}


AudioContentTypeDataFactory* AudioContentTypeDataFactory_getInstance(void) {
        return (AudioContentTypeDataFactory_staticInit(), AudioContentTypeDataFactory_instance);
}


void AudioContentTypeDataFactory_init(AudioContentTypeDataFactory* this) {
    AudioContentTypeDataFactory_register();
    AudioContentTypeDataFactory_initFields(this);
}

AudioContentTypeDataFactory* AudioContentTypeDataFactory_new(void) {
    AudioContentTypeDataFactory* this = java_object_alloc(sizeof(AudioContentTypeDataFactory), "AudioContentTypeDataFactory");
    AudioContentTypeDataFactory_init(this);
    return this;
}

