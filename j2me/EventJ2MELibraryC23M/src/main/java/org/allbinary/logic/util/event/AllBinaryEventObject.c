// Generated Code Do Not Modify
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/NullUtil.h"


AllBinaryEventObject* AllBinaryEventObject_NULL_EVENT;




void AllBinaryEventObject_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AllBinaryEventObject_NULL_EVENT = AllBinaryEventObject_new(NullUtil_getInstance()->NULL_OBJECT);
}

void AllBinaryEventObject_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinaryEventObject", nullptr);
    java_register_method("AllBinaryEventObject", "getSource", (void*) AllBinaryEventObject_getSource);
    java_register_method("AllBinaryEventObject", "setSource", (void*) AllBinaryEventObject_setSource);
}

static void AllBinaryEventObject_initFields(AllBinaryEventObject* this) {
    
}


void AllBinaryEventObject_init(AllBinaryEventObject* this, void* anyType) {
    AllBinaryEventObject_register();
    AllBinaryEventObject_initFields(this);
        this->source = anyType;
}

AllBinaryEventObject* AllBinaryEventObject_new(void* anyType) {
    AllBinaryEventObject* this = java_object_alloc(sizeof(AllBinaryEventObject), "AllBinaryEventObject");
    AllBinaryEventObject_init(this, anyType);
    return this;
}


void* AllBinaryEventObject_getSource(AllBinaryEventObject* this) {
        return this->source;
}


void AllBinaryEventObject_setSource(AllBinaryEventObject* this, void* source) {
        this->source = source;
}

