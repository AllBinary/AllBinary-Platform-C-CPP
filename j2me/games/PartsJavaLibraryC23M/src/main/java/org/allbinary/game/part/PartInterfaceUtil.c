// Generated Code Do Not Modify
#include "org/allbinary/game/part/PartInterfaceUtil.h"
#include "org/allbinary/game/part/PartInterface.h"


static PartInterface** PartInterfaceUtil_SINGLETON;


void PartInterfaceUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PartInterfaceUtil_SINGLETON = ((PartInterface**) java_array_new(sizeof(PartInterface*), 0));
}

void PartInterfaceUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PartInterfaceUtil", nullptr);
}

void PartInterfaceUtil_init(PartInterfaceUtil* this) {
    PartInterfaceUtil_register();
}

PartInterfaceUtil* PartInterfaceUtil_new(void) {
    PartInterfaceUtil* this = java_object_alloc(sizeof(PartInterfaceUtil), "PartInterfaceUtil");
    PartInterfaceUtil_init(this);
    return this;
}


PartInterface** PartInterfaceUtil_getZeroArray(void) {
        return (PartInterfaceUtil_staticInit(), PartInterfaceUtil_SINGLETON);
}

