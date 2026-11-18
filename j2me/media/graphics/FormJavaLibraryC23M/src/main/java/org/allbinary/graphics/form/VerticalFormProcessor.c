// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/VerticalFormProcessor.h"
#include "org/allbinary/graphics/form/ScrollCurrentSelectionForm.h"





void VerticalFormProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void VerticalFormProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("VerticalFormProcessor", "Processor");
    java_register_method("VerticalFormProcessor", "process", (void*) VerticalFormProcessor_process);
}

static void VerticalFormProcessor_initFields(VerticalFormProcessor* this) {
    
}


void VerticalFormProcessor_init(VerticalFormProcessor* this, ScrollCurrentSelectionForm* scrollCurrentSelectionForm) {
    VerticalFormProcessor_register();
    Processor_init(&this->base);
    VerticalFormProcessor_initFields(this);
        this->scrollCurrentSelectionForm = scrollCurrentSelectionForm;
}

VerticalFormProcessor* VerticalFormProcessor_new(ScrollCurrentSelectionForm* scrollCurrentSelectionForm) {
    VerticalFormProcessor* this = java_object_alloc(sizeof(VerticalFormProcessor), "VerticalFormProcessor");
    VerticalFormProcessor_init(this, scrollCurrentSelectionForm);
    return this;
}


// throws Exception
void VerticalFormProcessor_process(VerticalFormProcessor* this) {
        ScrollCurrentSelectionForm_processVerticalForm(this->scrollCurrentSelectionForm);
        this->scrollCurrentSelectionForm->processor = Processor_getInstance();
}

