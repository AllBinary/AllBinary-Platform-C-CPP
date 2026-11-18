// Generated Code Do Not Modify
#include "org/allbinary/game/score/HighScoresBase.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/score/HighScoresFactoryInterface.h"
#include "org/allbinary/game/score/HighScoresResultsListener.h"
#include "org/allbinary/game/score/HighScoresHelperBaseInterface.h"







void HighScoresBase_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HighScoresBase_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HighScoresBase", nullptr);
    java_register_method("HighScoresBase", "fetchHighScores", (void*) HighScoresBase_fetchHighScores);
    java_register_method("HighScoresBase", "fetchHighScoresPreload", (void*) HighScoresBase_fetchHighScoresPreload);
    java_register_method("HighScoresBase", "createHighScoresHelper", (void*) HighScoresBase_createHighScoresHelper);
}

static void HighScoresBase_initFields(HighScoresBase* this) {
    this->commonStrings = CommonStrings_getInstance();
}


void HighScoresBase_init(HighScoresBase* this) {
    HighScoresBase_register();
    HighScoresBase_initFields(this);
}

HighScoresBase* HighScoresBase_new(void) {
    HighScoresBase* this = java_object_alloc(sizeof(HighScoresBase), "HighScoresBase");
    HighScoresBase_init(this);
    return this;
}


void HighScoresBase_fetchHighScores(HighScoresBase* this, GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void HighScoresBase_fetchHighScoresPreload(HighScoresBase* this, GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener, bool preload) {
        java_throw(java_exception_new("RuntimeException", ""));
}


HighScoresHelperBaseInterface* HighScoresBase_createHighScoresHelper(HighScoresBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}

