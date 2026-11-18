// Generated Code Do Not Modify
#include "org/allbinary/J2SEUtil.h"


static J2SEUtil* J2SEUtil_instance;





void J2SEUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    J2SEUtil_instance = J2SEUtil_new();
}

void J2SEUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("J2SEUtil", nullptr);
    java_register_method("J2SEUtil", "getHashMapAsArray", (void*) J2SEUtil_getHashMapAsArray);
    java_register_method("J2SEUtil", "getMapAsArray", (void*) J2SEUtil_getMapAsArray);
    java_register_method("J2SEUtil", "getSetAsArray", (void*) J2SEUtil_getSetAsArray);
}

void J2SEUtil_init(J2SEUtil* this) {
    J2SEUtil_register();
}

J2SEUtil* J2SEUtil_new(void) {
    J2SEUtil* this = java_object_alloc(sizeof(J2SEUtil), "J2SEUtil");
    J2SEUtil_init(this);
    return this;
}


J2SEUtil* J2SEUtil_getInstance(void) {
        return (J2SEUtil_staticInit(), J2SEUtil_instance);
}


void** J2SEUtil_getHashMapAsArray(J2SEUtil* this, HashMap* hashMap) {
        void** objectArray = JAVA_CALL(HashMap_keySet(hashMap), toArray);
        return objectArray;
}


void** J2SEUtil_getMapAsArray(J2SEUtil* this, Map* map) {
        void** objectArray = JAVA_CALL(Map_keySet(map), toArray);
        return objectArray;
}


void** J2SEUtil_getSetAsArray(J2SEUtil* this, Set* set) {
        void** objectArray = Set_toArray(set);
        return objectArray;
}

