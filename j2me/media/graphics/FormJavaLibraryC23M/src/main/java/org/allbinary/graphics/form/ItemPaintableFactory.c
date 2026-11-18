// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/ItemPaintableFactory.h"
#include "org/allbinary/graphics/form/ItemPaintable.h"
#include "org/allbinary/graphics/form/PaintableForm.h"


static ItemPaintableFactory* ItemPaintableFactory_instance;



void ItemPaintableFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ItemPaintableFactory_instance = ItemPaintableFactory_new();
}

void ItemPaintableFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ItemPaintableFactory", "ItemPaintable");
    java_register_method("ItemPaintableFactory", "getInstanceItemPaintable", (void*) ItemPaintableFactory_getInstanceItemPaintable);
}

void ItemPaintableFactory_init(ItemPaintableFactory* this) {
    ItemPaintableFactory_register();
    ItemPaintable_init(&this->base);
}

ItemPaintableFactory* ItemPaintableFactory_new(void) {
    ItemPaintableFactory* this = java_object_alloc(sizeof(ItemPaintableFactory), "ItemPaintableFactory");
    ItemPaintableFactory_init(this);
    return this;
}


ItemPaintableFactory* ItemPaintableFactory_getInstance(void) {
        return (ItemPaintableFactory_staticInit(), ItemPaintableFactory_instance);
}


// throws Exception
ItemPaintable* ItemPaintableFactory_getInstanceItemPaintable(ItemPaintableFactory* this, PaintableForm* paintableForm) {
        return (ItemPaintableFactory_staticInit(), ItemPaintableFactory_instance);
}

