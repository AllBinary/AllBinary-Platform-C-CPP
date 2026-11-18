// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/validation/UsernameValidator.h"
#include "org/allbinary/graphics/form/item/ABTextFieldItem.h"
#include "org/allbinary/graphics/form/item/validation/TextFieldItemValidator.h"




void UsernameValidator_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void UsernameValidator_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("UsernameValidator", "TextFieldItemValidator");
}


void UsernameValidator_init(UsernameValidator* this, ABTextFieldItem* textFieldItem, int32_t min, int32_t max, bool allowOnEmpty) {
    UsernameValidator_register();
        TextFieldItemValidator_init(&this->base, textFieldItem, min, max, allowOnEmpty);
}

UsernameValidator* UsernameValidator_new(ABTextFieldItem* textFieldItem, int32_t min, int32_t max, bool allowOnEmpty) {
    UsernameValidator* this = java_object_alloc(sizeof(UsernameValidator), "UsernameValidator");
    UsernameValidator_init(this, textFieldItem, min, max, allowOnEmpty);
    return this;
}

