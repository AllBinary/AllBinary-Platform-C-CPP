// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/HorizontalItemIndexDx.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/form/ItemIndexDx.h"
#include "org/allbinary/graphics/form/ScrollCurrentSelectionForm.h"





void HorizontalItemIndexDx_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HorizontalItemIndexDx_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HorizontalItemIndexDx", "ItemIndexDx");
    java_register_method("HorizontalItemIndexDx", "getDx", (void*) HorizontalItemIndexDx_getDx);
}

static void HorizontalItemIndexDx_initFields(HorizontalItemIndexDx* this) {
    
}


void HorizontalItemIndexDx_init(HorizontalItemIndexDx* this, ScrollCurrentSelectionForm* scrollCurrentSelectionForm) {
    HorizontalItemIndexDx_register();
    ItemIndexDx_init(&this->base);
    HorizontalItemIndexDx_initFields(this);
        this->scrollCurrentSelectionForm = scrollCurrentSelectionForm;
}

HorizontalItemIndexDx* HorizontalItemIndexDx_new(ScrollCurrentSelectionForm* scrollCurrentSelectionForm) {
    HorizontalItemIndexDx* this = java_object_alloc(sizeof(HorizontalItemIndexDx), "HorizontalItemIndexDx");
    HorizontalItemIndexDx_init(this, scrollCurrentSelectionForm);
    return this;
}


// throws Exception
int32_t HorizontalItemIndexDx_getDx(HorizontalItemIndexDx* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return ScrollCurrentSelectionForm_getXHorizontalForm(this->scrollCurrentSelectionForm, index, item, dx, dy);
}

