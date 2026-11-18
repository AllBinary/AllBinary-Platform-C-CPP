// Generated Code Do Not Modify
#include "org/allbinary/init/Init.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/init/InitInterface.h"




void Init_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Init_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Init", nullptr);
    java_register_method("Init", "init", (void*) Init_initMethod);
}

static void Init_initFields(Init* this) {
    this->commonStrings = CommonStrings_getInstance();
}

void Init_init(Init* this) {
    Init_register();
    Init_initFields(this);
}

Init* Init_new(void) {
    Init* this = java_object_alloc(sizeof(Init), "Init");
    Init_init(this);
    return this;
}


// throws Exception
void Init_initMethod(Init* this) {
}

