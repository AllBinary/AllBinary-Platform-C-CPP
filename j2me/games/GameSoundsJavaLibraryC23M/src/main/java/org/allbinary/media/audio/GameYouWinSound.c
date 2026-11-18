// Generated Code Do Not Modify
#include "org/allbinary/media/audio/GameYouWinSound.h"
#include "org/allbinary/media/audio/CompositeSound.h"
#include "org/allbinary/media/audio/Sound.h"


static Sound* GameYouWinSound_soundInterface;



void GameYouWinSound_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameYouWinSound_soundInterface = GameYouWinSound_new();
}

void GameYouWinSound_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameYouWinSound", "CompositeSound");
}


void GameYouWinSound_init(GameYouWinSound* this) {
    GameYouWinSound_register();
        CompositeSound_init(&this->base, "resource:/wav/youwin.wav");
}

GameYouWinSound* GameYouWinSound_new(void) {
    GameYouWinSound* this = java_object_alloc(sizeof(GameYouWinSound), "GameYouWinSound");
    GameYouWinSound_init(this);
    return this;
}


Sound* GameYouWinSound_getInstance(void) {
        return (GameYouWinSound_staticInit(), GameYouWinSound_soundInterface);
}

