// Generated Code Do Not Modify
#include "org/allbinary/game/score/NoHighScoresFactory.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/game/score/HighScoresBase.h"
#include "org/allbinary/game/score/HighScores.h"
#include "org/allbinary/game/score/HighScoresResultsListener.h"
#include "org/allbinary/game/score/HighScoresHelperBase.h"
#include "org/allbinary/game/score/HighScoresHelperBaseInterface.h"


static NoHighScoresFactory* NoHighScoresFactory_instance;





void NoHighScoresFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NoHighScoresFactory_instance = NoHighScoresFactory_new();
}

void NoHighScoresFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoHighScoresFactory", "HighScoresBase");
    java_register_method("NoHighScoresFactory", "fetchHighScores", (void*) NoHighScoresFactory_fetchHighScores);
    java_register_method("NoHighScoresFactory", "createHighScoresHelper", (void*) NoHighScoresFactory_createHighScoresHelper);
}

static void NoHighScoresFactory_initFields(NoHighScoresFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->NO_HIGH_SCORES = ((HighScores**) java_array_new(sizeof(HighScores*), 0));
}


NoHighScoresFactory* NoHighScoresFactory_getInstance(void) {
        return (NoHighScoresFactory_staticInit(), NoHighScoresFactory_instance);
}


void NoHighScoresFactory_init(NoHighScoresFactory* this) {
    NoHighScoresFactory_register();
    HighScoresBase_init(&this->base);
    NoHighScoresFactory_initFields(this);
}

NoHighScoresFactory* NoHighScoresFactory_new(void) {
    NoHighScoresFactory* this = java_object_alloc(sizeof(NoHighScoresFactory), "NoHighScoresFactory");
    NoHighScoresFactory_init(this);
    return this;
}


void NoHighScoresFactory_fetchHighScores(NoHighScoresFactory* this, GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener) {
        LogUtil_putF(this->logUtil, "Getting No HighScores", this, "fetchHighScores");
        HighScoresResultsListener_setHighScoresArray(highScoresResultsListener, this->NO_HIGH_SCORES);
}


HighScoresHelperBaseInterface* NoHighScoresFactory_createHighScoresHelper(NoHighScoresFactory* this) {
        return HighScoresHelperBase_new();
}

