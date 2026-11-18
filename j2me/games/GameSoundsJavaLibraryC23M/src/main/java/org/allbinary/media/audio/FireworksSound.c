// Generated Code Do Not Modify
#include "org/allbinary/media/audio/FireworksSound.h"
#include "org/allbinary/media/audio/CompositeSound.h"
#include "org/allbinary/media/audio/Sound.h"


static Sound* FireworksSound_soundInterface;



void FireworksSound_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    FireworksSound_soundInterface = FireworksSound_new();
}

void FireworksSound_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FireworksSound", "CompositeSound");
}


void FireworksSound_init(FireworksSound* this) {
    FireworksSound_register();
        CompositeSound_init(&this->base, "resource:/wav/fireworks.wav");
}

FireworksSound* FireworksSound_new(void) {
    FireworksSound* this = java_object_alloc(sizeof(FireworksSound), "FireworksSound");
    FireworksSound_init(this);
    return this;
}


Sound* FireworksSound_getInstance(void) {
        return (FireworksSound_staticInit(), FireworksSound_soundInterface);
}

