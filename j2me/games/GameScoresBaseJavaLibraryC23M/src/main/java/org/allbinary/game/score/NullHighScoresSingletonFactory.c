// Generated Code Do Not Modify
#include "org/allbinary/game/score/NullHighScoresSingletonFactory.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/score/HighScores.h"
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif


static HighScores* NullHighScoresSingletonFactory_SINGLETON;


void NullHighScoresSingletonFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullHighScoresSingletonFactory_SINGLETON = HighScores_new(CommonStrings_getInstance()->LOADING, "High Scores Not Loaded", CommonStrings_getInstance()->PERIODS);
}

void NullHighScoresSingletonFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullHighScoresSingletonFactory", nullptr);
}

void NullHighScoresSingletonFactory_init(NullHighScoresSingletonFactory* this) {
    NullHighScoresSingletonFactory_register();
}

NullHighScoresSingletonFactory* NullHighScoresSingletonFactory_new(void) {
    NullHighScoresSingletonFactory* this = java_object_alloc(sizeof(NullHighScoresSingletonFactory), "NullHighScoresSingletonFactory");
    NullHighScoresSingletonFactory_init(this);
    return this;
}


HighScores* NullHighScoresSingletonFactory_getInstance(void) {
        return (NullHighScoresSingletonFactory_staticInit(), NullHighScoresSingletonFactory_SINGLETON);
}

