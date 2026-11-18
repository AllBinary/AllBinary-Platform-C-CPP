// Generated Code Do Not Modify
#include "org/allbinary/media/audio/SelectSound.h"
#include "org/allbinary/media/audio/CompositeSound.h"
#include "org/allbinary/media/audio/Sound.h"


static Sound* SelectSound_soundInterface;



void SelectSound_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    SelectSound_soundInterface = SelectSound_new();
}

void SelectSound_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SelectSound", "CompositeSound");
}


void SelectSound_init(SelectSound* this) {
    SelectSound_register();
        CompositeSound_init(&this->base, "resource:/wav/select.wav");
}

SelectSound* SelectSound_new(void) {
    SelectSound* this = java_object_alloc(sizeof(SelectSound), "SelectSound");
    SelectSound_init(this);
    return this;
}


Sound* SelectSound_getInstance(void) {
        return (SelectSound_staticInit(), SelectSound_soundInterface);
}

