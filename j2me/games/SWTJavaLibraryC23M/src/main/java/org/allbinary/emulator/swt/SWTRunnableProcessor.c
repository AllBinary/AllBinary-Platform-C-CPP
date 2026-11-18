// Generated Code Do Not Modify
#include "org/allbinary/emulator/swt/SWTRunnableProcessor.h"
#include "org/eclipse/swt/widgets/Display.h"
#include "org/allbinary/emulator/swt/SWTProcessor.h"


static SWTRunnableProcessor* SWTRunnableProcessor_instanceR;




void SWTRunnableProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    SWTRunnableProcessor_instanceR = SWTRunnableProcessor_new();
}

void SWTRunnableProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SWTRunnableProcessor", "SWTProcessor");
    java_register_method("SWTRunnableProcessor", "process", (void*) SWTRunnableProcessor_process);
}


SWTRunnableProcessor* SWTRunnableProcessor_getInstance(void) {
        return (SWTRunnableProcessor_staticInit(), SWTRunnableProcessor_instanceR);
}


void SWTRunnableProcessor_init(SWTRunnableProcessor* this) {
    SWTRunnableProcessor_register();
    SWTProcessor_init(&this->base);
}

SWTRunnableProcessor* SWTRunnableProcessor_new(void) {
    SWTRunnableProcessor* this = java_object_alloc(sizeof(SWTRunnableProcessor), "SWTRunnableProcessor");
    SWTRunnableProcessor_init(this);
    return this;
}


void SWTRunnableProcessor_process(SWTRunnableProcessor* this, Display* display) {
        Runnable_run(this->base.runnable);
}

