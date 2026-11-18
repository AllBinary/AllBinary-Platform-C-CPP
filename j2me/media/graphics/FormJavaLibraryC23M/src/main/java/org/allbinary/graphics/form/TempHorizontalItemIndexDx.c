// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/TempHorizontalItemIndexDx.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/form/ItemIndexDx.h"
#include "org/allbinary/graphics/form/ScrollCurrentSelectionForm.h"





void TempHorizontalItemIndexDx_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TempHorizontalItemIndexDx_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TempHorizontalItemIndexDx", "ItemIndexDx");
    java_register_method("TempHorizontalItemIndexDx", "getDx", (void*) TempHorizontalItemIndexDx_getDx);
}

static void TempHorizontalItemIndexDx_initFields(TempHorizontalItemIndexDx* this) {
    
}


void TempHorizontalItemIndexDx_init(TempHorizontalItemIndexDx* this, ScrollCurrentSelectionForm* scrollCurrentSelectionForm) {
    TempHorizontalItemIndexDx_register();
    ItemIndexDx_init(&this->base);
    TempHorizontalItemIndexDx_initFields(this);
        this->scrollCurrentSelectionForm = scrollCurrentSelectionForm;
}

TempHorizontalItemIndexDx* TempHorizontalItemIndexDx_new(ScrollCurrentSelectionForm* scrollCurrentSelectionForm) {
    TempHorizontalItemIndexDx* this = java_object_alloc(sizeof(TempHorizontalItemIndexDx), "TempHorizontalItemIndexDx");
    TempHorizontalItemIndexDx_init(this, scrollCurrentSelectionForm);
    return this;
}


// throws Exception
int32_t TempHorizontalItemIndexDx_getDx(TempHorizontalItemIndexDx* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return ScrollCurrentSelectionForm_getXTempHorizontalForm(this->scrollCurrentSelectionForm, index, item, dx, dy);
}

