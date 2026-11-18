// Generated Code Do Not Modify
#include "org/allbinary/media/audio/GameBeginSound.h"
#include "org/allbinary/media/audio/CompositeSound.h"
#include "org/allbinary/media/audio/Sound.h"


static Sound* GameBeginSound_soundInterface;



void GameBeginSound_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameBeginSound_soundInterface = GameBeginSound_new();
}

void GameBeginSound_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameBeginSound", "CompositeSound");
}


void GameBeginSound_init(GameBeginSound* this) {
    GameBeginSound_register();
        CompositeSound_init(&this->base, "resource:/wav/begin.wav");
}

GameBeginSound* GameBeginSound_new(void) {
    GameBeginSound* this = java_object_alloc(sizeof(GameBeginSound), "GameBeginSound");
    GameBeginSound_init(this);
    return this;
}


Sound* GameBeginSound_getInstance(void) {
        return (GameBeginSound_staticInit(), GameBeginSound_soundInterface);
}

