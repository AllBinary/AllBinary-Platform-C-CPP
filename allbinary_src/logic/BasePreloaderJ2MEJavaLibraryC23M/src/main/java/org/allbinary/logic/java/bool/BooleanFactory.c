// Generated Code Do Not Modify
#include "org/allbinary/logic/java/bool/BooleanFactory.h"


static BooleanFactory* BooleanFactory_instance;



void BooleanFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BooleanFactory_instance = BooleanFactory_new();
}

void BooleanFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BooleanFactory", nullptr);
    java_register_method("BooleanFactory", "toStringb", (void*) BooleanFactory_toStringb);
}

static void BooleanFactory_initFields(BooleanFactory* this) {
    this->TRUE = true;
    this->FALSE = false;
    this->TRUE_STRING = java_string_of(this->TRUE);
    this->FALSE_STRING = java_string_of(this->FALSE);
    this->YES = "yes";
    this->NO = "no";
}

void BooleanFactory_init(BooleanFactory* this) {
    BooleanFactory_register();
    BooleanFactory_initFields(this);
}

BooleanFactory* BooleanFactory_new(void) {
    BooleanFactory* this = java_object_alloc(sizeof(BooleanFactory), "BooleanFactory");
    BooleanFactory_init(this);
    return this;
}


BooleanFactory* BooleanFactory_getInstance(void) {
        return (BooleanFactory_staticInit(), BooleanFactory_instance);
}


const char* BooleanFactory_toStringb(BooleanFactory* this, bool bool_) {
        if (bool_) {
            return this->TRUE_STRING;
        } else {
            return this->FALSE_STRING;
        }
}

