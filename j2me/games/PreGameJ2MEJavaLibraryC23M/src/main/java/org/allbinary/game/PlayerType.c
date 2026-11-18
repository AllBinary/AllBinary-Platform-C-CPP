// Generated Code Do Not Modify
#include "org/allbinary/game/PlayerType.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif







void PlayerType_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PlayerType_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PlayerType", nullptr);
    java_register_method("PlayerType", "getId", (void*) PlayerType_getId);
    java_register_method("PlayerType", "getName", (void*) PlayerType_getName);
    java_register_method("PlayerType", "toString", (void*) PlayerType_toString);
}

static void PlayerType_initFields(PlayerType* this) {
    
    this->name = StringUtil_getInstance()->EMPTY_STRING;
}


void PlayerType_init(PlayerType* this, const char* name, int32_t value) {
    PlayerType_register();
    PlayerType_initFields(this);
        this->name = name;
        this->id = value;
}

PlayerType* PlayerType_new(const char* name, int32_t value) {
    PlayerType* this = java_object_alloc(sizeof(PlayerType), "PlayerType");
    PlayerType_init(this, name, value);
    return this;
}


int32_t PlayerType_getId(PlayerType* this) {
        return this->id;
}


const char* PlayerType_getName(PlayerType* this) {
        return this->name;
}


const char* PlayerType_toString(PlayerType* this) {
        return PlayerType_getName(this);
}

