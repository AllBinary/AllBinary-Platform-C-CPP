// Generated Code Do Not Modify
#include "org/allbinary/media/audio/GameYouLoseSound.h"
#include "org/allbinary/media/audio/CompositeSound.h"
#include "org/allbinary/media/audio/Sound.h"


static Sound* GameYouLoseSound_soundInterface;



void GameYouLoseSound_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameYouLoseSound_soundInterface = GameYouLoseSound_new();
}

void GameYouLoseSound_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameYouLoseSound", "CompositeSound");
}


void GameYouLoseSound_init(GameYouLoseSound* this) {
    GameYouLoseSound_register();
        CompositeSound_init(&this->base, "resource:/wav/youlose.wav");
}

GameYouLoseSound* GameYouLoseSound_new(void) {
    GameYouLoseSound* this = java_object_alloc(sizeof(GameYouLoseSound), "GameYouLoseSound");
    GameYouLoseSound_init(this);
    return this;
}


Sound* GameYouLoseSound_getInstance(void) {
        return (GameYouLoseSound_staticInit(), GameYouLoseSound_soundInterface);
}

