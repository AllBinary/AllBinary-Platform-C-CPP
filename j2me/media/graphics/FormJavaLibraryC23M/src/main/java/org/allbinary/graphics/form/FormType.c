// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/FormType.h"





void FormType_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void FormType_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FormType", nullptr);
    java_register_method("FormType", "toString", (void*) FormType_toString);
}

static void FormType_initFields(FormType* this) {
    
}


void FormType_init(FormType* this, const char* name) {
    FormType_register();
    FormType_initFields(this);
        this->name = name;
}

FormType* FormType_new(const char* name) {
    FormType* this = java_object_alloc(sizeof(FormType), "FormType");
    FormType_init(this, name);
    return this;
}


const char* FormType_toString(FormType* this) {
        return this->name;
}

