// Generated Code Do Not Modify
#include "org/allbinary/logic/java/character/CharArrayFactory.h"


static CharArrayFactory* CharArrayFactory_instance;



void CharArrayFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CharArrayFactory_instance = CharArrayFactory_new();
}

void CharArrayFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CharArrayFactory", nullptr);
    java_register_method("CharArrayFactory", "getZeroCharArray", (void*) CharArrayFactory_getZeroCharArray);
}

static void CharArrayFactory_initFields(CharArrayFactory* this) {
    this->zeroCharArray = ((uint16_t*) java_array_new(sizeof(uint16_t), 0));
}

void CharArrayFactory_init(CharArrayFactory* this) {
    CharArrayFactory_register();
    CharArrayFactory_initFields(this);
}

CharArrayFactory* CharArrayFactory_new(void) {
    CharArrayFactory* this = java_object_alloc(sizeof(CharArrayFactory), "CharArrayFactory");
    CharArrayFactory_init(this);
    return this;
}


CharArrayFactory* CharArrayFactory_getInstance(void) {
        return (CharArrayFactory_staticInit(), CharArrayFactory_instance);
}


uint16_t* CharArrayFactory_getZeroCharArray(CharArrayFactory* this) {
        return this->zeroCharArray;
}

