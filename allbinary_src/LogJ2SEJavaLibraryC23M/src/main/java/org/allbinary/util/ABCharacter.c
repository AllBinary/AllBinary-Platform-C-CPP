// Generated Code Do Not Modify
#include "org/allbinary/util/ABCharacter.h"




void ABCharacter_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ABCharacter_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ABCharacter", nullptr);
}

void ABCharacter_init(ABCharacter* this) {
    ABCharacter_register();
}

ABCharacter* ABCharacter_new(void) {
    ABCharacter* this = java_object_alloc(sizeof(ABCharacter), "ABCharacter");
    ABCharacter_init(this);
    return this;
}


const char* ABCharacter_toString(uint16_t ch) {
        return java_string_of(ch);
}

