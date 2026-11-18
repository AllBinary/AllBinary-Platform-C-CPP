// Generated Code Do Not Modify
#include "org/allbinary/emulator/swt/SWTProcessor.h"
#include "org/eclipse/swt/widgets/Display.h"
#include "org/allbinary/thread/NullRunnable.h"


static SWTProcessor* SWTProcessor_instance;



void SWTProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    SWTProcessor_instance = SWTProcessor_new();
}

void SWTProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SWTProcessor", nullptr);
    java_register_method("SWTProcessor", "process", (void*) SWTProcessor_process);
}

static void SWTProcessor_initFields(SWTProcessor* this) {
    this->runnable = NullRunnable_getInstance();
}

void SWTProcessor_init(SWTProcessor* this) {
    SWTProcessor_register();
    SWTProcessor_initFields(this);
}

SWTProcessor* SWTProcessor_new(void) {
    SWTProcessor* this = java_object_alloc(sizeof(SWTProcessor), "SWTProcessor");
    SWTProcessor_init(this);
    return this;
}


SWTProcessor* SWTProcessor_getInstance(void) {
        return (SWTProcessor_staticInit(), SWTProcessor_instance);
}


void SWTProcessor_process(SWTProcessor* this, Display* display) {
        Display_sleep(display);
}

