// Generated Code Do Not Modify
#include "org/allbinary/graphics/displayable/screen/ScreenRepaintProcessor.h"
#include "javax/microedition/lcdui/Displayable.h"
#include "org/allbinary/graphics/displayable/screen/ScreenRepaintUtil.h"





void ScreenRepaintProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ScreenRepaintProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScreenRepaintProcessor", "Processor");
    java_register_method("ScreenRepaintProcessor", "process", (void*) ScreenRepaintProcessor_process);
}

static void ScreenRepaintProcessor_initFields(ScreenRepaintProcessor* this) {
    
}


void ScreenRepaintProcessor_init(ScreenRepaintProcessor* this, Displayable* displayable) {
    ScreenRepaintProcessor_register();
    Processor_init(&this->base);
    ScreenRepaintProcessor_initFields(this);
        this->displayable = displayable;
}

ScreenRepaintProcessor* ScreenRepaintProcessor_new(Displayable* displayable) {
    ScreenRepaintProcessor* this = java_object_alloc(sizeof(ScreenRepaintProcessor), "ScreenRepaintProcessor");
    ScreenRepaintProcessor_init(this, displayable);
    return this;
}


// throws Exception
void ScreenRepaintProcessor_process(ScreenRepaintProcessor* this) {
        ScreenRepaintUtil_repaint(this->displayable);
}

