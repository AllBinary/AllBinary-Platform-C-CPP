// Generated Code Do Not Modify
#include "org/allbinary/graphics/displayable/screen/ScreenRepaintProcessorFactory.h"
#include "javax/microedition/lcdui/Displayable.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/graphics/displayable/screen/ScreenRepaintProcessor.h"


static ScreenRepaintProcessorFactory* ScreenRepaintProcessorFactory_instance;




void ScreenRepaintProcessorFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ScreenRepaintProcessorFactory_instance = ScreenRepaintProcessorFactory_new();
}

void ScreenRepaintProcessorFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScreenRepaintProcessorFactory", nullptr);
    java_register_method("ScreenRepaintProcessorFactory", "create", (void*) ScreenRepaintProcessorFactory_create);
}


ScreenRepaintProcessorFactory* ScreenRepaintProcessorFactory_getInstance(void) {
        return (ScreenRepaintProcessorFactory_staticInit(), ScreenRepaintProcessorFactory_instance);
}


void ScreenRepaintProcessorFactory_init(ScreenRepaintProcessorFactory* this) {
    ScreenRepaintProcessorFactory_register();
}

ScreenRepaintProcessorFactory* ScreenRepaintProcessorFactory_new(void) {
    ScreenRepaintProcessorFactory* this = java_object_alloc(sizeof(ScreenRepaintProcessorFactory), "ScreenRepaintProcessorFactory");
    ScreenRepaintProcessorFactory_init(this);
    return this;
}


Processor* ScreenRepaintProcessorFactory_create(ScreenRepaintProcessorFactory* this, Displayable* displayable) {
        if (!J2MEUtil_isJ2ME()) {
            return ScreenRepaintProcessor_new(displayable);
        } else {
            return Processor_getInstance();
        }
}

