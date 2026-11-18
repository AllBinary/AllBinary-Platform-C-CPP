// Generated Code Do Not Modify
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif





static void Input_setId(Input* this, int32_t key);


static void Input_setName(Input* this, const char* keyName);


void Input_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Input_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Input", nullptr);
    java_register_method("Input", "getId", (void*) Input_getId);
    java_register_method("Input", "setId", (void*) Input_setId);
    java_register_method("Input", "getName", (void*) Input_getName);
    java_register_method("Input", "setName", (void*) Input_setName);
    java_register_method("Input", "toString", (void*) Input_toString);
}

static void Input_initFields(Input* this) {
    this->id = 0;
    this->name = StringUtil_getInstance()->EMPTY_STRING;
}


void Input_init(Input* this, int32_t id, const char* name) {
    Input_register();
    Input_initFields(this);
        Input_setId(this, id);
        Input_setName(this, name);
}

Input* Input_new(int32_t id, const char* name) {
    Input* this = java_object_alloc(sizeof(Input), "Input");
    Input_init(this, id, name);
    return this;
}


int32_t Input_getId(Input* this) {
        return this->id;
}


static void Input_setId(Input* this, int32_t key) {
        this->id = key;
}


const char* Input_getName(Input* this) {
        return this->name;
}


static void Input_setName(Input* this, const char* keyName) {
        this->name = keyName;
}


const char* Input_toString(Input* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Name: ");
        StringMaker_append(stringBuffer, Input_getName(this));
        StringMaker_append(stringBuffer, " Id: ");
        StringMaker_appendint(stringBuffer, Input_getId(this));
        return java_string_of(stringBuffer);
}

