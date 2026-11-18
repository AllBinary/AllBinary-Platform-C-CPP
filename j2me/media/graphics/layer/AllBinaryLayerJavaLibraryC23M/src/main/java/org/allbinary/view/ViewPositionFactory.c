// Generated Code Do Not Modify
#include "org/allbinary/view/ViewPositionFactory.h"
#include "org/allbinary/view/ViewPositionFactoryInterface.h"
#include "org/allbinary/view/ViewPosition.h"
#include "org/allbinary/view/ViewPositionBase.h"




void ViewPositionFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ViewPositionFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ViewPositionFactory", nullptr);
    java_register_method("ViewPositionFactory", "getInstance", (void*) ViewPositionFactory_getInstance);
}

void ViewPositionFactory_init(ViewPositionFactory* this) {
    ViewPositionFactory_register();
}

ViewPositionFactory* ViewPositionFactory_new(void) {
    ViewPositionFactory* this = java_object_alloc(sizeof(ViewPositionFactory), "ViewPositionFactory");
    ViewPositionFactory_init(this);
    return this;
}


ViewPositionBase* ViewPositionFactory_getInstance(ViewPositionFactory* this) {
        return ViewPosition_getInstanceD();
}

