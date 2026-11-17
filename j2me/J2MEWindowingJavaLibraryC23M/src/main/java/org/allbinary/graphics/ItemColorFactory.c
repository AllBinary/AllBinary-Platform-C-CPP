// Generated Code Do Not Modify
#include "org/allbinary/graphics/ItemColorFactory.h"


static ItemColorFactory* ItemColorFactory_instance;


void ItemColorFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ItemColorFactory_instance = ItemColorFactory_new();
}

void ItemColorFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ItemColorFactory", nullptr);
}

static void ItemColorFactory_initFields(ItemColorFactory* this) {
    this->INVERT_PAINT = 0xFF000000;
    this->PAINT = 0xFFe07718;
    this->TEXT_FIELD_NO_FOCUS = 0x7F7F7F;
}

void ItemColorFactory_init(ItemColorFactory* this) {
    ItemColorFactory_register();
    ItemColorFactory_initFields(this);
}

ItemColorFactory* ItemColorFactory_new(void) {
    ItemColorFactory* this = java_object_alloc(sizeof(ItemColorFactory), "ItemColorFactory");
    ItemColorFactory_init(this);
    return this;
}


ItemColorFactory* ItemColorFactory_getInstance(void) {
        return (ItemColorFactory_staticInit(), ItemColorFactory_instance);
}

