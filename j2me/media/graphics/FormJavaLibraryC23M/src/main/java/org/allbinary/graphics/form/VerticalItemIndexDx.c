// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/VerticalItemIndexDx.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/form/ItemIndexDx.h"
#include "org/allbinary/graphics/form/ScrollCurrentSelectionForm.h"





void VerticalItemIndexDx_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void VerticalItemIndexDx_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("VerticalItemIndexDx", "ItemIndexDx");
    java_register_method("VerticalItemIndexDx", "getDx", (void*) VerticalItemIndexDx_getDx);
}

static void VerticalItemIndexDx_initFields(VerticalItemIndexDx* this) {
    
}


void VerticalItemIndexDx_init(VerticalItemIndexDx* this, ScrollCurrentSelectionForm* scrollCurrentSelectionForm) {
    VerticalItemIndexDx_register();
    ItemIndexDx_init(&this->base);
    VerticalItemIndexDx_initFields(this);
        this->scrollCurrentSelectionForm = scrollCurrentSelectionForm;
}

VerticalItemIndexDx* VerticalItemIndexDx_new(ScrollCurrentSelectionForm* scrollCurrentSelectionForm) {
    VerticalItemIndexDx* this = java_object_alloc(sizeof(VerticalItemIndexDx), "VerticalItemIndexDx");
    VerticalItemIndexDx_init(this, scrollCurrentSelectionForm);
    return this;
}


// throws Exception
int32_t VerticalItemIndexDx_getDx(VerticalItemIndexDx* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return ScrollCurrentSelectionForm_getXVerticalForm(this->scrollCurrentSelectionForm, index, item, dx, dy);
}

