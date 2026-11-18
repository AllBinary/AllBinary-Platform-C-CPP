// Generated Code Do Not Modify
#include "org/allbinary/midlet/MidletFactoryInterface.h"
#include "javax/microedition/midlet/MIDlet.h"
#include "org/allbinary/midlet/AllBinaryMidlet.h"




void MidletFactoryInterface_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MidletFactoryInterface_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MidletFactoryInterface", nullptr);
    java_register_method("MidletFactoryInterface", "getInstance", (void*) MidletFactoryInterface_getInstance);
}

void MidletFactoryInterface_init(MidletFactoryInterface* this) {
    MidletFactoryInterface_register();
}

MidletFactoryInterface* MidletFactoryInterface_new(void) {
    MidletFactoryInterface* this = java_object_alloc(sizeof(MidletFactoryInterface), "MidletFactoryInterface");
    MidletFactoryInterface_init(this);
    return this;
}


MIDlet* MidletFactoryInterface_getInstance(MidletFactoryInterface* this) {
        return AllBinaryMidlet_getNullInstance();
}

