// Generated Code Do Not Modify
#include "org/allbinary/media/audio/CompositeSound.h"
#include "org/allbinary/media/audio/Sound.h"
#include "org/allbinary/media/audio/PlayerComposite.h"
#include "org/allbinary/media/audio/AllBinaryMediaManager.h"





void CompositeSound_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CompositeSound_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CompositeSound", "Sound");
    java_register_method("CompositeSound", "init", (void*) CompositeSound_initMethod);
}


void CompositeSound_init(CompositeSound* this, const char* resource) {
    CompositeSound_register();
        Sound_init(&this->base, resource);
}

CompositeSound* CompositeSound_new(const char* resource) {
    CompositeSound* this = java_object_alloc(sizeof(CompositeSound), "CompositeSound");
    CompositeSound_init(this, resource);
    return this;
}


// throws Exception
void CompositeSound_initMethod(CompositeSound* this) {
        Sound_setPlayerP(this, PlayerComposite_new(AllBinaryMediaManager_createPlayer(Sound_getResource(this)), 570));
}

