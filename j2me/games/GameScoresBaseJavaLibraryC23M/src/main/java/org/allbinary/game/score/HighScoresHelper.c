// Generated Code Do Not Modify
#include "org/allbinary/game/score/HighScoresHelper.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/game/score/HighScoresHelperBase.h"
#include "org/allbinary/game/score/HighScores.h"






void HighScoresHelper_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HighScoresHelper_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HighScoresHelper", "HighScoresHelperBase");
    java_register_method("HighScoresHelper", "setHighScoresArray", (void*) HighScoresHelper_setHighScoresArray);
    java_register_method("HighScoresHelper", "getNextHighScores", (void*) HighScoresHelper_getNextHighScores);
    java_register_method("HighScoresHelper", "isAnyHighScores", (void*) HighScoresHelper_isAnyHighScores);
}

static void HighScoresHelper_initFields(HighScoresHelper* this) {
    this->circularIndexUtil = CircularIndexUtil_createInstanceAt(0, 0);
    this->lastIndex = -1;
}

void HighScoresHelper_init(HighScoresHelper* this) {
    HighScoresHelper_register();
    HighScoresHelperBase_init(&this->base);
    HighScoresHelper_initFields(this);
}

HighScoresHelper* HighScoresHelper_new(void) {
    HighScoresHelper* this = java_object_alloc(sizeof(HighScoresHelper), "HighScoresHelper");
    HighScoresHelper_init(this);
    return this;
}


void HighScoresHelper_setHighScoresArray(HighScoresHelper* this, HighScores** highScoresArrayP) {
        HighScoresHelperBase_setHighScoresArray((&this->base), highScoresArrayP);
        CircularIndexUtil_setSize(this->circularIndexUtil, java_array_length(this->base.highScoresArrayP));
}


HighScores* HighScoresHelper_getNextHighScores(HighScoresHelper* this) {
        HighScores* highScores = this->base.highScoresArrayP[CircularIndexUtil_getIndex(this->circularIndexUtil)];
        int32_t index = 0;
        while ((HighScores_getTotal(highScores) < 1 || this->lastIndex == CircularIndexUtil_getIndex(this->circularIndexUtil)) && index < java_array_length(this->base.highScoresArrayP)) {
            CircularIndexUtil_next(this->circularIndexUtil);
            highScores = this->base.highScoresArrayP[CircularIndexUtil_getIndex(this->circularIndexUtil)];
            index++;
        }
        this->lastIndex = CircularIndexUtil_getIndex(this->circularIndexUtil);
        return highScores;
}


bool HighScoresHelper_isAnyHighScores(HighScoresHelper* this) {
        if (java_array_length(this->base.highScoresArrayP) < 1) {
            return false;
        }
        bool anyScores = false;
        HighScores* highScores = nullptr;
        for (int32_t index = java_array_length(this->base.highScoresArrayP) - 1; index >= 0; index--) {
            highScores = this->base.highScoresArrayP[index];
            if (HighScores_getTotal(highScores) > 0) {
                anyScores = true;
            }
        }
        return anyScores;
}

