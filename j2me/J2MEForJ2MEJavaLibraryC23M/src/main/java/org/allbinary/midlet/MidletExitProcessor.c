// Generated Code Do Not Modify
#include "org/allbinary/midlet/MidletExitProcessor.h"
#include "javax/microedition/midlet/MIDlet.h"





void MidletExitProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MidletExitProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MidletExitProcessor", "Processor");
    java_register_method("MidletExitProcessor", "process", (void*) MidletExitProcessor_process);
}

static void MidletExitProcessor_initFields(MidletExitProcessor* this) {
    
}


void MidletExitProcessor_init(MidletExitProcessor* this, MIDlet* midlet) {
    MidletExitProcessor_register();
    Processor_init(&this->base);
    MidletExitProcessor_initFields(this);
        this->midlet = midlet;
}

MidletExitProcessor* MidletExitProcessor_new(MIDlet* midlet) {
    MidletExitProcessor* this = java_object_alloc(sizeof(MidletExitProcessor), "MidletExitProcessor");
    MidletExitProcessor_init(this, midlet);
    return this;
}


// throws Exception
void MidletExitProcessor_process(MidletExitProcessor* this) {
}

