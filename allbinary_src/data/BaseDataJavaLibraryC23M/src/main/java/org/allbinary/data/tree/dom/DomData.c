// Generated Code Do Not Modify
#include "org/allbinary/data/tree/dom/DomData.h"


const char* DomData_ID = "id";
const char* DomData_CHILD = "child";
const char* DomData_NAME = "name";
const char* DomData_VALUE = "value";
const char* DomData_INDEX = "index";


void DomData_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DomData_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DomData", nullptr);
}


void DomData_init(DomData* this) {
    DomData_register();
}

DomData* DomData_new(void) {
    DomData* this = java_object_alloc(sizeof(DomData), "DomData");
    DomData_init(this);
    return this;
}

