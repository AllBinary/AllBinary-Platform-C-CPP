// Generated Code Do Not Modify
#include "org/allbinary/ag/weapon/media/audio/ExplosionBasicSound.h"
#include "org/allbinary/media/audio/Sound.h"


static Sound* ExplosionBasicSound_soundInterface;



void ExplosionBasicSound_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ExplosionBasicSound_soundInterface = ExplosionBasicSound_new();
}

void ExplosionBasicSound_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ExplosionBasicSound", "CompositeSound");
}


void ExplosionBasicSound_init(ExplosionBasicSound* this) {
    ExplosionBasicSound_register();
        CompositeSound_init(&this->base, "resource:/wav/explosion.wav");
}

ExplosionBasicSound* ExplosionBasicSound_new(void) {
    ExplosionBasicSound* this = java_object_alloc(sizeof(ExplosionBasicSound), "ExplosionBasicSound");
    ExplosionBasicSound_init(this);
    return this;
}


Sound* ExplosionBasicSound_getInstance(void) {
        return (ExplosionBasicSound_staticInit(), ExplosionBasicSound_soundInterface);
}

