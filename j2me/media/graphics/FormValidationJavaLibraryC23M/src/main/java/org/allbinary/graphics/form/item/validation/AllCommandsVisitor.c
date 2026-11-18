// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/validation/AllCommandsVisitor.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#if __has_include("org/allbinary/logic/java/bool/BooleanFactory.h")
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#endif





void AllCommandsVisitor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AllCommandsVisitor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllCommandsVisitor", "Visitor");
    java_register_method("AllCommandsVisitor", "visit", (void*) AllCommandsVisitor_visit);
}


void AllCommandsVisitor_init(AllCommandsVisitor* this) {
    AllCommandsVisitor_register();
    Visitor_init(&this->base);
}

AllCommandsVisitor* AllCommandsVisitor_new(void) {
    AllCommandsVisitor* this = java_object_alloc(sizeof(AllCommandsVisitor), "AllCommandsVisitor");
    AllCommandsVisitor_init(this);
    return this;
}


void* AllCommandsVisitor_visit(AllCommandsVisitor* this, void* anyType) {
        return JAVA_BOX(BooleanFactory_getInstance()->TRUE);
}

