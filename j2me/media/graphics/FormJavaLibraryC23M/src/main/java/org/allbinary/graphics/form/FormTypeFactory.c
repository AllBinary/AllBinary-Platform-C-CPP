// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/FormTypeFactory.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/graphics/form/FormType.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static FormTypeFactory* FormTypeFactory_instance;



void FormTypeFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    FormTypeFactory_instance = FormTypeFactory_new();
}

void FormTypeFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FormTypeFactory", nullptr);
    java_register_method("FormTypeFactory", "getFormType", (void*) FormTypeFactory_getFormType);
}

static void FormTypeFactory_initFields(FormTypeFactory* this) {
    this->UNK = "Unknown FormType";
    this->NULL_FORM_TYPE = FormType_new(StringUtil_getInstance()->NULL_STRING);
    this->TEMP_HORIZONTAL_FORM = FormType_new("TempHorizontal");
    this->HORIZONTAL_FORM = FormType_new("Horizontal");
    this->VERTICAL_CENTER_FORM = FormType_new("Vertical");
}

void FormTypeFactory_init(FormTypeFactory* this) {
    FormTypeFactory_register();
    FormTypeFactory_initFields(this);
}

FormTypeFactory* FormTypeFactory_new(void) {
    FormTypeFactory* this = java_object_alloc(sizeof(FormTypeFactory), "FormTypeFactory");
    FormTypeFactory_init(this);
    return this;
}


FormTypeFactory* FormTypeFactory_getInstance(void) {
        return (FormTypeFactory_staticInit(), FormTypeFactory_instance);
}


FormType* FormTypeFactory_getFormType(FormTypeFactory* this) {
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        FormType* formType = nullptr;
        if (DisplayInfoSingleton_isPortrait(displayInfo)) {
            formType = this->VERTICAL_CENTER_FORM;
        } else {
            formType = this->HORIZONTAL_FORM;
        }
        return formType;
}

