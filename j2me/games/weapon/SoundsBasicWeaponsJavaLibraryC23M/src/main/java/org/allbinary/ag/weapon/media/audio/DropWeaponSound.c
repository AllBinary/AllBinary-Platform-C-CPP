// Generated Code Do Not Modify
#include "org/allbinary/ag/weapon/media/audio/DropWeaponSound.h"
#include "org/allbinary/media/audio/Sound.h"


static Sound* DropWeaponSound_soundInterface;



void DropWeaponSound_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DropWeaponSound_soundInterface = DropWeaponSound_new();
}

void DropWeaponSound_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DropWeaponSound", "CompositeSound");
}


void DropWeaponSound_init(DropWeaponSound* this) {
    DropWeaponSound_register();
        CompositeSound_init(&this->base, "resource:/wav/mine.wav");
}

DropWeaponSound* DropWeaponSound_new(void) {
    DropWeaponSound* this = java_object_alloc(sizeof(DropWeaponSound), "DropWeaponSound");
    DropWeaponSound_init(this);
    return this;
}


Sound* DropWeaponSound_getInstance(void) {
        return (DropWeaponSound_staticInit(), DropWeaponSound_soundInterface);
}

