// Generated Code Do Not Modify
#include "org/allbinary/game/input/PCGameKey.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/InputFactory.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif






void PCGameKey_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PCGameKey_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PCGameKey", "Input");
    java_register_method("PCGameKey", "toString", (void*) PCGameKey_toString);
}


void PCGameKey_init(PCGameKey* this, int32_t keyCode, const char* name) {
    PCGameKey_register();
        Input_init(&this->base, keyCode, name);
        int32_t id = Input_getId(this);
        if (id >= 0) {
            InputFactory_add(InputFactory_getInstance(), id, this);
        }
}

PCGameKey* PCGameKey_new(int32_t keyCode, const char* name) {
    PCGameKey* this = java_object_alloc(sizeof(PCGameKey), "PCGameKey");
    PCGameKey_init(this, keyCode, name);
    return this;
}


const char* PCGameKey_toString(PCGameKey* this) {
        return java_concat("PCGameKey: ", Input_toString((&this->base)));
}


const char* PCGameKey_getString(int32_t keyCode) {
        Input* input = InputFactory_getInstanceById(InputFactory_getInstance(), keyCode);
        if (input != nullptr) {
            return Input_getName(input);
        } else {
            return StringUtil_getInstance()->EMPTY_STRING;
        }
}

