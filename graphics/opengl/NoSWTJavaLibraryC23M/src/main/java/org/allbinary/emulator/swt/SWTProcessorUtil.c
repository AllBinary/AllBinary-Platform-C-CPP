// Generated Code Do Not Modify
#include "org/allbinary/emulator/swt/SWTProcessorUtil.h"
#include "org/allbinary/emulator/swt/SWTProcessor.h"


static SWTProcessorUtil* SWTProcessorUtil_instance;


void SWTProcessorUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    SWTProcessorUtil_instance = SWTProcessorUtil_new();
}

void SWTProcessorUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SWTProcessorUtil", nullptr);
}

static void SWTProcessorUtil_initFields(SWTProcessorUtil* this) {
    this->swtProcessor = SWTProcessor_getInstance();
}

void SWTProcessorUtil_init(SWTProcessorUtil* this) {
    SWTProcessorUtil_register();
    SWTProcessorUtil_initFields(this);
}

SWTProcessorUtil* SWTProcessorUtil_new(void) {
    SWTProcessorUtil* this = java_object_alloc(sizeof(SWTProcessorUtil), "SWTProcessorUtil");
    SWTProcessorUtil_init(this);
    return this;
}


SWTProcessorUtil* SWTProcessorUtil_getInstance(void) {
        return (SWTProcessorUtil_staticInit(), SWTProcessorUtil_instance);
}

