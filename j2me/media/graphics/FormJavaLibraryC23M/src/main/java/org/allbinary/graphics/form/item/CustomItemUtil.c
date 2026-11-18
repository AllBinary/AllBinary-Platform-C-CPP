// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/CustomItemUtil.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"


static CustomItemUtil* CustomItemUtil_instance;


void CustomItemUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CustomItemUtil_instance = CustomItemUtil_new();
}

void CustomItemUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CustomItemUtil", nullptr);
}

static void CustomItemUtil_initFields(CustomItemUtil* this) {
    this->CUSTOM_ITEM_ARRAY = ((ABCustomItem**) java_array_new(sizeof(ABCustomItem*), 0));
}

void CustomItemUtil_init(CustomItemUtil* this) {
    CustomItemUtil_register();
    CustomItemUtil_initFields(this);
}

CustomItemUtil* CustomItemUtil_new(void) {
    CustomItemUtil* this = java_object_alloc(sizeof(CustomItemUtil), "CustomItemUtil");
    CustomItemUtil_init(this);
    return this;
}


CustomItemUtil* CustomItemUtil_getInstance(void) {
        return (CustomItemUtil_staticInit(), CustomItemUtil_instance);
}

