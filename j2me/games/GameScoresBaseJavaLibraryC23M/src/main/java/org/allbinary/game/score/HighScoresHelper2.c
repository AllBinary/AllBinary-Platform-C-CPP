// Generated Code Do Not Modify
#include "org/allbinary/game/score/HighScoresHelper2.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/game/score/HighScoresHelperBase.h"
#include "org/allbinary/game/score/NullHighScoresSingletonFactory.h"
#include "org/allbinary/game/score/HighScores.h"







void HighScoresHelper2_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HighScoresHelper2_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HighScoresHelper2", "HighScoresHelperBase");
    java_register_method("HighScoresHelper2", "setSelectedHighScores", (void*) HighScoresHelper2_setSelectedHighScores);
    java_register_method("HighScoresHelper2", "getSelectedHighScores", (void*) HighScoresHelper2_getSelectedHighScores);
    java_register_method("HighScoresHelper2", "setHighScoresArray", (void*) HighScoresHelper2_setHighScoresArray);
    java_register_method("HighScoresHelper2", "selectHighScores", (void*) HighScoresHelper2_selectHighScores);
}

static void HighScoresHelper2_initFields(HighScoresHelper2* this) {
    this->circularIndexUtil = CircularIndexUtil_createInstanceAt(0, 0);
    this->selectedHighScores = NullHighScoresSingletonFactory_getInstance();
}

void HighScoresHelper2_init(HighScoresHelper2* this) {
    HighScoresHelper2_register();
    HighScoresHelperBase_init(&this->base);
    HighScoresHelper2_initFields(this);
}

HighScoresHelper2* HighScoresHelper2_new(void) {
    HighScoresHelper2* this = java_object_alloc(sizeof(HighScoresHelper2), "HighScoresHelper2");
    HighScoresHelper2_init(this);
    return this;
}


void HighScoresHelper2_setSelectedHighScores(HighScoresHelper2* this, HighScores* selectedHighScores) {
        this->selectedHighScores = selectedHighScores;
}


HighScores* HighScoresHelper2_getSelectedHighScores(HighScoresHelper2* this) {
        return this->selectedHighScores;
}


void HighScoresHelper2_setHighScoresArray(HighScoresHelper2* this, HighScores** highScoresArrayP) {
        HighScoresHelperBase_setHighScoresArray((&this->base), highScoresArrayP);
        CircularIndexUtil_setSize(this->circularIndexUtil, java_array_length(this->base.highScoresArrayP));
        HighScoresHelper2_selectHighScores(this);
}


void HighScoresHelper2_selectHighScores(HighScoresHelper2* this) {
        if (java_array_length(this->base.highScoresArrayP) == 0) {
            HighScoresHelper2_setSelectedHighScores(this, NullHighScoresSingletonFactory_getInstance());
            return;
        }
        CircularIndexUtil_next(this->circularIndexUtil);
        HighScores* highScores = this->base.highScoresArrayP[CircularIndexUtil_getIndex(this->circularIndexUtil)];
        int32_t index = 0;
        while (HighScores_getTotal(highScores) < 1 && index < java_array_length(this->base.highScoresArrayP)) {
            highScores = this->base.highScoresArrayP[CircularIndexUtil_next(this->circularIndexUtil)];
            index++;
        }
        HighScoresHelper2_setSelectedHighScores(this, highScores);
}

