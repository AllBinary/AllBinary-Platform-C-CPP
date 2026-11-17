// Generated Code Do Not Modify
#include "org/allbinary/logic/java/characters/CharacterSetData.h"


static CharacterSetData* CharacterSetData_instance;



void CharacterSetData_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CharacterSetData_instance = CharacterSetData_new();
}

void CharacterSetData_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CharacterSetData", nullptr);
}

static void CharacterSetData_initFields(CharacterSetData* this) {
    this->US_ASCII = "US-ASCII";
    this->ISO_8859_1 = "ISO-8859-1";
    this->UTF_8 = "UTF-8";
    this->UTF_16 = "UTF-16";
    this->UTF_16BE = "UTF-16BE";
    this->UTF_16LE = "UTF-16LE";
}


CharacterSetData* CharacterSetData_getInstance(void) {
        return (CharacterSetData_staticInit(), CharacterSetData_instance);
}


void CharacterSetData_init(CharacterSetData* this) {
    CharacterSetData_register();
    CharacterSetData_initFields(this);
}

CharacterSetData* CharacterSetData_new(void) {
    CharacterSetData* this = java_object_alloc(sizeof(CharacterSetData), "CharacterSetData");
    CharacterSetData_init(this);
    return this;
}

