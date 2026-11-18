// Generated Code Do Not Modify
#include "org/allbinary/view/CenterViewPositionFactory.h"
#include "org/allbinary/view/CenterStaticViewPositionFactory.h"



void CenterViewPositionFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CenterViewPositionFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CenterViewPositionFactory", "CenterStaticViewPositionFactory");
}

void CenterViewPositionFactory_init(CenterViewPositionFactory* this) {
    CenterViewPositionFactory_register();
    CenterStaticViewPositionFactory_init(&this->base);
}

CenterViewPositionFactory* CenterViewPositionFactory_new(void) {
    CenterViewPositionFactory* this = java_object_alloc(sizeof(CenterViewPositionFactory), "CenterViewPositionFactory");
    CenterViewPositionFactory_init(this);
    return this;
}

