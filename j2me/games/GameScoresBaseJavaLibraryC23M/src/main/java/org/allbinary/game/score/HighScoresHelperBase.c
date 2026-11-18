// Generated Code Do Not Modify
#include "org/allbinary/game/score/HighScoresHelperBase.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/score/HighScoresHelperBaseInterface.h"
#include "org/allbinary/game/score/LastFetchHighScoresFactory.h"
#include "org/allbinary/game/score/HighScores.h"
#include "org/allbinary/game/score/NullHighScoresSingletonFactory.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif










void HighScoresHelperBase_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HighScoresHelperBase_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HighScoresHelperBase", nullptr);
    java_register_method("HighScoresHelperBase", "setHighScoresArray", (void*) HighScoresHelperBase_setHighScoresArray);
    java_register_method("HighScoresHelperBase", "getNextHighScores", (void*) HighScoresHelperBase_getNextHighScores);
    java_register_method("HighScoresHelperBase", "isAnyHighScores", (void*) HighScoresHelperBase_isAnyHighScores);
    java_register_method("HighScoresHelperBase", "setSelectedHighScores", (void*) HighScoresHelperBase_setSelectedHighScores);
    java_register_method("HighScoresHelperBase", "getSelectedHighScores", (void*) HighScoresHelperBase_getSelectedHighScores);
    java_register_method("HighScoresHelperBase", "getHighScoresArray", (void*) HighScoresHelperBase_getHighScoresArray);
    java_register_method("HighScoresHelperBase", "selectHighScores", (void*) HighScoresHelperBase_selectHighScores);
}

static void HighScoresHelperBase_initFields(HighScoresHelperBase* this) {
    this->logUtil = LogUtil_getInstance();
    this->highScoresArrayP = LastFetchHighScoresFactory_getInstance()->highScoresArray;
}

void HighScoresHelperBase_init(HighScoresHelperBase* this) {
    HighScoresHelperBase_register();
    HighScoresHelperBase_initFields(this);
}

HighScoresHelperBase* HighScoresHelperBase_new(void) {
    HighScoresHelperBase* this = java_object_alloc(sizeof(HighScoresHelperBase), "HighScoresHelperBase");
    HighScoresHelperBase_init(this);
    return this;
}


void HighScoresHelperBase_setHighScoresArray(HighScoresHelperBase* this, HighScores** highScoresArrayP) {
        if (highScoresArrayP != nullptr) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), commonStrings->START), java_array_length(highScoresArrayP))), this, "setHighScoresArray");
        } else {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_putF(this->logUtil, commonStrings->START, this, "setHighScoresArray");
        }
        this->highScoresArrayP = highScoresArrayP;
}


HighScores* HighScoresHelperBase_getNextHighScores(HighScoresHelperBase* this) {
        return NullHighScoresSingletonFactory_getInstance();
}


bool HighScoresHelperBase_isAnyHighScores(HighScoresHelperBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void HighScoresHelperBase_setSelectedHighScores(HighScoresHelperBase* this, HighScores* selectedHighScores) {
}


HighScores* HighScoresHelperBase_getSelectedHighScores(HighScoresHelperBase* this) {
        return NullHighScoresSingletonFactory_getInstance();
}


HighScores** HighScoresHelperBase_getHighScoresArray(HighScoresHelperBase* this) {
        return this->highScoresArrayP;
}


void HighScoresHelperBase_selectHighScores(HighScoresHelperBase* this) {
}

