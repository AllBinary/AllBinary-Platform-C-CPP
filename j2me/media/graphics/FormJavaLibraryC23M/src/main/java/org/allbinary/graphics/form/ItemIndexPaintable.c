// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/ItemIndexPaintable.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"


static ItemIndexPaintable* ItemIndexPaintable_instance;



void ItemIndexPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ItemIndexPaintable_instance = ItemIndexPaintable_new();
}

void ItemIndexPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ItemIndexPaintable", nullptr);
    java_register_method("ItemIndexPaintable", "paint", (void*) ItemIndexPaintable_paint);
}

void ItemIndexPaintable_init(ItemIndexPaintable* this) {
    ItemIndexPaintable_register();
}

ItemIndexPaintable* ItemIndexPaintable_new(void) {
    ItemIndexPaintable* this = java_object_alloc(sizeof(ItemIndexPaintable), "ItemIndexPaintable");
    ItemIndexPaintable_init(this);
    return this;
}


ItemIndexPaintable* ItemIndexPaintable_getInstance(void) {
        return (ItemIndexPaintable_staticInit(), ItemIndexPaintable_instance);
}


// throws Exception
int32_t ItemIndexPaintable_paint(ItemIndexPaintable* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return 0;
}

