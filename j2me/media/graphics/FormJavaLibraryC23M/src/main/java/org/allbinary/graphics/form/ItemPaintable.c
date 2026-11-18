// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/ItemPaintable.h"
#include "javax/microedition/lcdui/Graphics.h"




void ItemPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ItemPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ItemPaintable", nullptr);
    java_register_method("ItemPaintable", "paint", (void*) ItemPaintable_paint);
}

void ItemPaintable_init(ItemPaintable* this) {
    ItemPaintable_register();
}

ItemPaintable* ItemPaintable_new(void) {
    ItemPaintable* this = java_object_alloc(sizeof(ItemPaintable), "ItemPaintable");
    ItemPaintable_init(this);
    return this;
}


void ItemPaintable_paint(ItemPaintable* this, Graphics* graphics, int32_t currentIndex, int32_t x, int32_t y) {
}

