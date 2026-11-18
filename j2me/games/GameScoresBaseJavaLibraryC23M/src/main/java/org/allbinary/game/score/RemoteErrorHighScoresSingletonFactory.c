// Generated Code Do Not Modify
#include "org/allbinary/game/score/RemoteErrorHighScoresSingletonFactory.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/score/HighScores.h"
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif


static HighScores* RemoteErrorHighScoresSingletonFactory_SINGLETON;


void RemoteErrorHighScoresSingletonFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    RemoteErrorHighScoresSingletonFactory_SINGLETON = HighScores_new(CommonStrings_getInstance()->LOADING, "Remote High Scores Did Not Load", CommonStrings_getInstance()->PERIODS);
}

void RemoteErrorHighScoresSingletonFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RemoteErrorHighScoresSingletonFactory", nullptr);
}

void RemoteErrorHighScoresSingletonFactory_init(RemoteErrorHighScoresSingletonFactory* this) {
    RemoteErrorHighScoresSingletonFactory_register();
}

RemoteErrorHighScoresSingletonFactory* RemoteErrorHighScoresSingletonFactory_new(void) {
    RemoteErrorHighScoresSingletonFactory* this = java_object_alloc(sizeof(RemoteErrorHighScoresSingletonFactory), "RemoteErrorHighScoresSingletonFactory");
    RemoteErrorHighScoresSingletonFactory_init(this);
    return this;
}


HighScores* RemoteErrorHighScoresSingletonFactory_getInstance(void) {
        return (RemoteErrorHighScoresSingletonFactory_staticInit(), RemoteErrorHighScoresSingletonFactory_SINGLETON);
}

