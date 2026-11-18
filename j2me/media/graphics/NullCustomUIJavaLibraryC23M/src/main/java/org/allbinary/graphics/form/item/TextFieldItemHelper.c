// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/TextFieldItemHelper.h"



void TextFieldItemHelper_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TextFieldItemHelper_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TextFieldItemHelper", nullptr);
}

void TextFieldItemHelper_init(TextFieldItemHelper* this) {
    TextFieldItemHelper_register();
}

TextFieldItemHelper* TextFieldItemHelper_new(void) {
    TextFieldItemHelper* this = java_object_alloc(sizeof(TextFieldItemHelper), "TextFieldItemHelper");
    TextFieldItemHelper_init(this);
    return this;
}

