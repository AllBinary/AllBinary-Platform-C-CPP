// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/HorizontalFormProcessor.h"
#include "org/allbinary/graphics/form/ScrollCurrentSelectionForm.h"





void HorizontalFormProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HorizontalFormProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HorizontalFormProcessor", "Processor");
    java_register_method("HorizontalFormProcessor", "process", (void*) HorizontalFormProcessor_process);
}

static void HorizontalFormProcessor_initFields(HorizontalFormProcessor* this) {
    
}


void HorizontalFormProcessor_init(HorizontalFormProcessor* this, ScrollCurrentSelectionForm* scrollCurrentSelectionForm) {
    HorizontalFormProcessor_register();
    Processor_init(&this->base);
    HorizontalFormProcessor_initFields(this);
        this->scrollCurrentSelectionForm = scrollCurrentSelectionForm;
}

HorizontalFormProcessor* HorizontalFormProcessor_new(ScrollCurrentSelectionForm* scrollCurrentSelectionForm) {
    HorizontalFormProcessor* this = java_object_alloc(sizeof(HorizontalFormProcessor), "HorizontalFormProcessor");
    HorizontalFormProcessor_init(this, scrollCurrentSelectionForm);
    return this;
}


// throws Exception
void HorizontalFormProcessor_process(HorizontalFormProcessor* this) {
        ScrollCurrentSelectionForm_processHorizontalForm(this->scrollCurrentSelectionForm);
        this->scrollCurrentSelectionForm->processor = Processor_getInstance();
}

