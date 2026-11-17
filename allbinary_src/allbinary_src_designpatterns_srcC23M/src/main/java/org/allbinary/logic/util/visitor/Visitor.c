// Generated Code Do Not Modify
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/util/visitor/VisitorInterface.h"


static Visitor* Visitor_instance;



void Visitor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    Visitor_instance = Visitor_new();
}

void Visitor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Visitor", nullptr);
    java_register_method("Visitor", "visit", (void*) Visitor_visit);
}

static void Visitor_initFields(Visitor* this) {
    this->nullUtil = NullUtil_getInstance();
}

void Visitor_init(Visitor* this) {
    Visitor_register();
    Visitor_initFields(this);
}

Visitor* Visitor_new(void) {
    Visitor* this = java_object_alloc(sizeof(Visitor), "Visitor");
    Visitor_init(this);
    return this;
}


void* Visitor_visit(Visitor* this, void* anyType) {
        return this->nullUtil->NULL_OBJECT;
}


Visitor* Visitor_getInstance(void) {
        return (Visitor_staticInit(), Visitor_instance);
}

