// Generated Code Do Not Modify
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/ABStack.h"
#include "org/allbinary/util/ABVector.h"


static StdUtil* StdUtil_instance;





void StdUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    StdUtil_instance = StdUtil_new();
}

void StdUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("StdUtil", nullptr);
    java_register_method("StdUtil", "createStack", (void*) StdUtil_createStack);
    java_register_method("StdUtil", "createVector", (void*) StdUtil_createVector);
    java_register_method("StdUtil", "createHashtable", (void*) StdUtil_createHashtable);
}

static void StdUtil_initFields(StdUtil* this) {
    this->EMPTY_VECTOR = StdUtil_createVector(this);
    this->NULL_TABLE = StdUtil_createHashtable(this);
}

void StdUtil_init(StdUtil* this) {
    StdUtil_register();
    StdUtil_initFields(this);
}

StdUtil* StdUtil_new(void) {
    StdUtil* this = java_object_alloc(sizeof(StdUtil), "StdUtil");
    StdUtil_init(this);
    return this;
}


StdUtil* StdUtil_getInstance(void) {
        return (StdUtil_staticInit(), StdUtil_instance);
}


ABStack* StdUtil_createStack(StdUtil* this) {
        return ABStack_new();
}


ABVector* StdUtil_createVector(StdUtil* this) {
        return ABVector_new();
}


ABHashtable* StdUtil_createHashtable(StdUtil* this) {
        return ABHashtable_new0();
}

