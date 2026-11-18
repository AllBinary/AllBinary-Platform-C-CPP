// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/TempHorizontalFormProcessor.h"
#include "org/allbinary/graphics/form/ScrollCurrentSelectionForm.h"





void TempHorizontalFormProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TempHorizontalFormProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TempHorizontalFormProcessor", "Processor");
    java_register_method("TempHorizontalFormProcessor", "process", (void*) TempHorizontalFormProcessor_process);
}

static void TempHorizontalFormProcessor_initFields(TempHorizontalFormProcessor* this) {
    
}


void TempHorizontalFormProcessor_init(TempHorizontalFormProcessor* this, ScrollCurrentSelectionForm* scrollCurrentSelectionForm) {
    TempHorizontalFormProcessor_register();
    Processor_init(&this->base);
    TempHorizontalFormProcessor_initFields(this);
        this->scrollCurrentSelectionForm = scrollCurrentSelectionForm;
}

TempHorizontalFormProcessor* TempHorizontalFormProcessor_new(ScrollCurrentSelectionForm* scrollCurrentSelectionForm) {
    TempHorizontalFormProcessor* this = java_object_alloc(sizeof(TempHorizontalFormProcessor), "TempHorizontalFormProcessor");
    TempHorizontalFormProcessor_init(this, scrollCurrentSelectionForm);
    return this;
}


// throws Exception
void TempHorizontalFormProcessor_process(TempHorizontalFormProcessor* this) {
        ScrollCurrentSelectionForm_processTempHorizontalForm(this->scrollCurrentSelectionForm);
        this->scrollCurrentSelectionForm->processor = Processor_getInstance();
}

