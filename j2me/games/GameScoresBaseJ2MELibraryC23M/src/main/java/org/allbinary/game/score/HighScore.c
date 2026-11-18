// Generated Code Do Not Modify
#include "org/allbinary/game/score/HighScore.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif












void HighScore_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HighScore_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HighScore", nullptr);
    java_register_method("HighScore", "getId", (void*) HighScore_getId);
    java_register_method("HighScore", "getName", (void*) HighScore_getName);
    java_register_method("HighScore", "getScore", (void*) HighScore_getScore);
    java_register_method("HighScore", "getAsBytes", (void*) HighScore_getAsBytes);
    java_register_method("HighScore", "getGameInfo", (void*) HighScore_getGameInfo);
    java_register_method("HighScore", "getScoreString", (void*) HighScore_getScoreString);
    java_register_method("HighScore", "setName", (void*) HighScore_setName);
    java_register_method("HighScore", "toString", (void*) HighScore_toString);
}

static void HighScore_initFields(HighScore* this) {
    
    
    
    
    
}


void HighScore_init(HighScore* this, int32_t id, const char* name, GameInfo* gameInfo, int64_t score) {
    HighScore_register();
    HighScore_initFields(this);
        this->id = id;
        this->name = name;
        this->gameInfo = gameInfo;
        this->score = score;
        this->scoreString = java_string_of(this->score);
}

HighScore* HighScore_new(int32_t id, const char* name, GameInfo* gameInfo, int64_t score) {
    HighScore* this = java_object_alloc(sizeof(HighScore), "HighScore");
    HighScore_init(this, id, name, gameInfo, score);
    return this;
}


int32_t HighScore_getId(HighScore* this) {
        return this->id;
}


const char* HighScore_getName(HighScore* this) {
        return this->name;
}


int64_t HighScore_getScore(HighScore* this) {
        return this->score;
}


// throws Exception
int8_t* HighScore_getAsBytes(HighScore* this) {
        ByteArrayOutputStream* byteArrayOutputStream = ByteArrayOutputStream_new();
        DataOutputStream* outputStream = DataOutputStream_new(byteArrayOutputStream);
        DataOutputStream_writeUTF(outputStream, HighScore_getName(this));
        DataOutputStream_writeLong(outputStream, HighScore_getScore(this));
        return ByteArrayOutputStream_toByteArray(byteArrayOutputStream);
}


GameInfo* HighScore_getGameInfo(HighScore* this) {
        return this->gameInfo;
}


const char* HighScore_getScoreString(HighScore* this) {
        return this->scoreString;
}


void HighScore_setName(HighScore* this, const char* name) {
        this->name = name;
}


const char* HighScore_toString(HighScore* this) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        return java_string_of(StringMaker_append(StringMaker_append(StringMaker_appendlong(StringMaker_append(StringMaker_append(StringMaker_new(), this->name), commonSeps->COLON), this->score), commonSeps->FORWARD_SLASH), this->scoreString));
}

