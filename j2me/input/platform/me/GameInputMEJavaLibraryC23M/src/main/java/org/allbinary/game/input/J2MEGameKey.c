// Generated Code Do Not Modify
#include "org/allbinary/game/input/J2MEGameKey.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/InputFactory.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif






void J2MEGameKey_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void J2MEGameKey_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("J2MEGameKey", "Input");
    java_register_method("J2MEGameKey", "toString", (void*) J2MEGameKey_toString);
}


void J2MEGameKey_init(J2MEGameKey* this, int32_t key, const char* keyName) {
    J2MEGameKey_register();
        Input_init(&this->base, key, keyName);
        int32_t id = Input_getId(this);
        if (id >= 0) {
            InputFactory* inputFactory = InputFactory_getInstance();
            InputFactory_add(inputFactory, id, this);
        }
}

J2MEGameKey* J2MEGameKey_new(int32_t key, const char* keyName) {
    J2MEGameKey* this = java_object_alloc(sizeof(J2MEGameKey), "J2MEGameKey");
    J2MEGameKey_init(this, key, keyName);
    return this;
}


const char* J2MEGameKey_toString(J2MEGameKey* this) {
        return java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "J2MEGameKey: "), Input_toString((&this->base))));
}


const char* J2MEGameKey_getString(int32_t keyCode) {
        Input* input = InputFactory_getInstanceById(InputFactory_getInstance(), keyCode);
        if (input != nullptr) {
            return Input_getName(input);
        } else {
            return StringUtil_getInstance()->EMPTY_STRING;
        }
}

