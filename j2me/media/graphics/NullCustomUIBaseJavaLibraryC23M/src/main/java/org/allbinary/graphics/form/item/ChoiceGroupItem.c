// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/ChoiceGroupItem.h"



void ChoiceGroupItem_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ChoiceGroupItem_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ChoiceGroupItem", nullptr);
}

void ChoiceGroupItem_init(ChoiceGroupItem* this) {
    ChoiceGroupItem_register();
}

ChoiceGroupItem* ChoiceGroupItem_new(void) {
    ChoiceGroupItem* this = java_object_alloc(sizeof(ChoiceGroupItem), "ChoiceGroupItem");
    ChoiceGroupItem_init(this);
    return this;
}

