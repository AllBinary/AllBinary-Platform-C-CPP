// Generated Code Do Not Modify
#include "org/allbinary/resources/KeyValueFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif


static KeyValueFactory* KeyValueFactory_instance;



void KeyValueFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    KeyValueFactory_instance = KeyValueFactory_new();
}

void KeyValueFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("KeyValueFactory", nullptr);
    java_register_method("KeyValueFactory", "get", (void*) KeyValueFactory_get);
}

static void KeyValueFactory_initFields(KeyValueFactory* this) {
    this->MAP = StdUtil_createHashtable(StdUtil_getInstance());
}

void KeyValueFactory_init(KeyValueFactory* this) {
    KeyValueFactory_register();
    KeyValueFactory_initFields(this);
}

KeyValueFactory* KeyValueFactory_new(void) {
    KeyValueFactory* this = java_object_alloc(sizeof(KeyValueFactory), "KeyValueFactory");
    KeyValueFactory_init(this);
    return this;
}


KeyValueFactory* KeyValueFactory_getInstance(void) {
        return (KeyValueFactory_staticInit(), KeyValueFactory_instance);
}


const char* KeyValueFactory_get(KeyValueFactory* this, const char* key) {
        if (!Hashtable_containsKey(this->MAP, ((void*) key))) {
            return key;
        }
        return ((const char*) Hashtable_get(this->MAP, ((void*) key)));
}

