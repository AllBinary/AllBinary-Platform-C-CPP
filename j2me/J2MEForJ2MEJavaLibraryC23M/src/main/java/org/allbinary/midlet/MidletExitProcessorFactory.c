// Generated Code Do Not Modify
#include "org/allbinary/midlet/MidletExitProcessorFactory.h"
#include "javax/microedition/midlet/MIDlet.h"
#include "org/allbinary/AppletUtil.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/midlet/MidletExitProcessor.h"


static MidletExitProcessorFactory* MidletExitProcessorFactory_instance;



void MidletExitProcessorFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    MidletExitProcessorFactory_instance = MidletExitProcessorFactory_new();
}

void MidletExitProcessorFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MidletExitProcessorFactory", nullptr);
    java_register_method("MidletExitProcessorFactory", "getExitInstance", (void*) MidletExitProcessorFactory_getExitInstance);
}

void MidletExitProcessorFactory_init(MidletExitProcessorFactory* this) {
    MidletExitProcessorFactory_register();
}

MidletExitProcessorFactory* MidletExitProcessorFactory_new(void) {
    MidletExitProcessorFactory* this = java_object_alloc(sizeof(MidletExitProcessorFactory), "MidletExitProcessorFactory");
    MidletExitProcessorFactory_init(this);
    return this;
}


MidletExitProcessorFactory* MidletExitProcessorFactory_getInstance(void) {
        return (MidletExitProcessorFactory_staticInit(), MidletExitProcessorFactory_instance);
}


Processor* MidletExitProcessorFactory_getExitInstance(MidletExitProcessorFactory* this, MIDlet* midlet) {
        if (AppletUtil_isAppletLoader(midlet) || J2MEUtil_isJ2ME()) {
            return Processor_getInstance();
        } else {
            return MidletExitProcessor_new(midlet);
        }
}

