// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/validation/PasswordValidator.h"
#include "org/allbinary/graphics/form/item/ABTextFieldItem.h"
#include "org/allbinary/graphics/form/item/validation/TextFieldItemValidator.h"




void PasswordValidator_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PasswordValidator_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PasswordValidator", "TextFieldItemValidator");
}


void PasswordValidator_init(PasswordValidator* this, ABTextFieldItem* textFieldItem, int32_t min, int32_t max, bool allowOnEmpty) {
    PasswordValidator_register();
        TextFieldItemValidator_init(&this->base, textFieldItem, min, max, allowOnEmpty);
}

PasswordValidator* PasswordValidator_new(ABTextFieldItem* textFieldItem, int32_t min, int32_t max, bool allowOnEmpty) {
    PasswordValidator* this = java_object_alloc(sizeof(PasswordValidator), "PasswordValidator");
    PasswordValidator_init(this, textFieldItem, min, max, allowOnEmpty);
    return this;
}

