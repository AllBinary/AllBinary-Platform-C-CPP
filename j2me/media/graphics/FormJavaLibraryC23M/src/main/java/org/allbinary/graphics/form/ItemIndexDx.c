// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/ItemIndexDx.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"


static ItemIndexDx* ItemIndexDx_instance;



void ItemIndexDx_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ItemIndexDx_instance = ItemIndexDx_new();
}

void ItemIndexDx_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ItemIndexDx", nullptr);
    java_register_method("ItemIndexDx", "getDx", (void*) ItemIndexDx_getDx);
}

void ItemIndexDx_init(ItemIndexDx* this) {
    ItemIndexDx_register();
}

ItemIndexDx* ItemIndexDx_new(void) {
    ItemIndexDx* this = java_object_alloc(sizeof(ItemIndexDx), "ItemIndexDx");
    ItemIndexDx_init(this);
    return this;
}


ItemIndexDx* ItemIndexDx_getInstance(void) {
        return (ItemIndexDx_staticInit(), ItemIndexDx_instance);
}


// throws Exception
int32_t ItemIndexDx_getDx(ItemIndexDx* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return 0;
}

