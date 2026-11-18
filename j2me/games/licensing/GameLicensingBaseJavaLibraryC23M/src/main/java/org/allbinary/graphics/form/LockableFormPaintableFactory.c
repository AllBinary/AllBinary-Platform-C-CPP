// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/LockableFormPaintableFactory.h"
#include "org/allbinary/graphics/form/ItemPaintableFactory.h"
#include "org/allbinary/graphics/form/LockablePaintable.h"
#include "org/allbinary/graphics/form/ItemPaintable.h"
#include "org/allbinary/graphics/form/PaintableForm.h"





void LockableFormPaintableFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LockableFormPaintableFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LockableFormPaintableFactory", "ItemPaintableFactory");
    java_register_method("LockableFormPaintableFactory", "getInstanceItemPaintable", (void*) LockableFormPaintableFactory_getInstanceItemPaintable);
}

static void LockableFormPaintableFactory_initFields(LockableFormPaintableFactory* this) {
    
}


void LockableFormPaintableFactory_init(LockableFormPaintableFactory* this, int32_t lockedIndex) {
    LockableFormPaintableFactory_register();
    ItemPaintableFactory_init(&this->base);
    LockableFormPaintableFactory_initFields(this);
        this->lockedIndex = lockedIndex;
}

LockableFormPaintableFactory* LockableFormPaintableFactory_new(int32_t lockedIndex) {
    LockableFormPaintableFactory* this = java_object_alloc(sizeof(LockableFormPaintableFactory), "LockableFormPaintableFactory");
    LockableFormPaintableFactory_init(this, lockedIndex);
    return this;
}


// throws Exception
ItemPaintable* LockableFormPaintableFactory_getInstanceItemPaintable(LockableFormPaintableFactory* this, PaintableForm* paintableForm) {
        return LockablePaintable_new(this->lockedIndex);
}

