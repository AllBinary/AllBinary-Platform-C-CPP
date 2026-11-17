// Generated Code Do Not Modify
#include "org/allbinary/logic/java/character/CharacterSet.h"





void CharacterSet_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CharacterSet_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CharacterSet", nullptr);
    java_register_method("CharacterSet", "toString", (void*) CharacterSet_toString);
}


void CharacterSet_init(CharacterSet* this) {
    CharacterSet_register();
}

CharacterSet* CharacterSet_new(void) {
    CharacterSet* this = java_object_alloc(sizeof(CharacterSet), "CharacterSet");
    CharacterSet_init(this);
    return this;
}


const char* CharacterSet_toString(CharacterSet* this) {
        return "Default Character Set: Empty Implementation";
}

