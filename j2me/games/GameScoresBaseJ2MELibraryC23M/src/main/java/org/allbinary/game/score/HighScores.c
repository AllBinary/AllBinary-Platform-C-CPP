// Generated Code Do Not Modify
#include "org/allbinary/game/score/HighScores.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/score/HighScoresInterface.h"
#include "org/allbinary/game/score/HighScore.h"
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif














void HighScores_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HighScores_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HighScores", nullptr);
    java_register_method("HighScores", "setList", (void*) HighScores_setList);
    java_register_method("HighScores", "getList", (void*) HighScores_getList);
    java_register_method("HighScores", "getName", (void*) HighScores_getName);
    java_register_method("HighScores", "getTotal", (void*) HighScores_getTotal);
    java_register_method("HighScores", "addHighScore", (void*) HighScores_addHighScore);
    java_register_method("HighScores", "getHeading", (void*) HighScores_getHeading);
    java_register_method("HighScores", "getColumnOneHeading", (void*) HighScores_getColumnOneHeading);
    java_register_method("HighScores", "getColumnTwoHeading", (void*) HighScores_getColumnTwoHeading);
    java_register_method("HighScores", "isBestScore", (void*) HighScores_isBestScore);
    java_register_method("HighScores", "toString", (void*) HighScores_toString);
}

static void HighScores_initFields(HighScores* this) {
    this->orderedHighScoresList = BasicArrayListD_new();
    
    
    this->columnOneHeading = "Name";
    
}


void HighScores_init(HighScores* this, const char* name, const char* heading, const char* columnTwoHeading) {
    HighScores_register();
    HighScores_initFields(this);
        this->name = name;
        this->heading = heading;
        this->columnTwoHeading = columnTwoHeading;
}

HighScores* HighScores_new(const char* name, const char* heading, const char* columnTwoHeading) {
    HighScores* this = java_object_alloc(sizeof(HighScores), "HighScores");
    HighScores_init(this, name, heading, columnTwoHeading);
    return this;
}


void HighScores_setList(HighScores* this, BasicArrayList* orderedHighScoresList) {
        this->orderedHighScoresList = orderedHighScoresList;
}


BasicArrayList* HighScores_getList(HighScores* this) {
        return this->orderedHighScoresList;
}


const char* HighScores_getName(HighScores* this) {
        return this->name;
}


int32_t HighScores_getTotal(HighScores* this) {
        return BasicArrayList_size(HighScores_getList(this));
}


void HighScores_addHighScore(HighScores* this, HighScore* newHighScore) {
        BasicArrayList_add(this->orderedHighScoresList, newHighScore);
}


const char* HighScores_getHeading(HighScores* this) {
        return this->heading;
}


const char* HighScores_getColumnOneHeading(HighScores* this) {
        return this->columnOneHeading;
}


const char* HighScores_getColumnTwoHeading(HighScores* this) {
        return this->columnTwoHeading;
}


// throws Exception
bool HighScores_isBestScore(HighScores* this, HighScore* newHighScore) {
        return false;
}


const char* HighScores_toString(HighScores* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "HighScores: ");
        StringMaker_append(stringBuffer, this->heading);
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, CommonLabels_getInstance()->TOTAL_LABEL);
        StringMaker_appendint(stringBuffer, BasicArrayList_size(this->orderedHighScoresList));
        return java_string_of(stringBuffer);
}

