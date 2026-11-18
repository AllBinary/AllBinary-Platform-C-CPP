// Generated Code Do Not Modify
#include "org/allbinary/game/score/LastFetchHighScoresFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/game/score/NoHighScoresFactory.h"
#include "org/allbinary/game/score/HighScores.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif


static void* LastFetchHighScoresFactory_instance;


void LastFetchHighScoresFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LastFetchHighScoresFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void LastFetchHighScoresFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LastFetchHighScoresFactory", nullptr);
}

static void LastFetchHighScoresFactory_initFields(LastFetchHighScoresFactory* this) {
    this->highScoresArray = NoHighScoresFactory_getInstance()->NO_HIGH_SCORES;
}

void LastFetchHighScoresFactory_init(LastFetchHighScoresFactory* this) {
    LastFetchHighScoresFactory_register();
    LastFetchHighScoresFactory_initFields(this);
}

LastFetchHighScoresFactory* LastFetchHighScoresFactory_new(void) {
    LastFetchHighScoresFactory* this = java_object_alloc(sizeof(LastFetchHighScoresFactory), "LastFetchHighScoresFactory");
    LastFetchHighScoresFactory_init(this);
    return this;
}


LastFetchHighScoresFactory* LastFetchHighScoresFactory_getInstance(void) {
        if ((LastFetchHighScoresFactory_staticInit(), LastFetchHighScoresFactory_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            LastFetchHighScoresFactory_instance = LastFetchHighScoresFactory_new();
        }
        return ((LastFetchHighScoresFactory*) (LastFetchHighScoresFactory_staticInit(), LastFetchHighScoresFactory_instance));
}

