// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/ScrollSelectionFormTempHorizontalDx.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/form/ItemIndexDx.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"





void ScrollSelectionFormTempHorizontalDx_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ScrollSelectionFormTempHorizontalDx_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScrollSelectionFormTempHorizontalDx", "ItemIndexDx");
    java_register_method("ScrollSelectionFormTempHorizontalDx", "getDx", (void*) ScrollSelectionFormTempHorizontalDx_getDx);
}

static void ScrollSelectionFormTempHorizontalDx_initFields(ScrollSelectionFormTempHorizontalDx* this) {
    
}


void ScrollSelectionFormTempHorizontalDx_init(ScrollSelectionFormTempHorizontalDx* this, ScrollSelectionForm* scrollSelectionForm) {
    ScrollSelectionFormTempHorizontalDx_register();
    ItemIndexDx_init(&this->base);
    ScrollSelectionFormTempHorizontalDx_initFields(this);
        this->scrollSelectionForm = scrollSelectionForm;
}

ScrollSelectionFormTempHorizontalDx* ScrollSelectionFormTempHorizontalDx_new(ScrollSelectionForm* scrollSelectionForm) {
    ScrollSelectionFormTempHorizontalDx* this = java_object_alloc(sizeof(ScrollSelectionFormTempHorizontalDx), "ScrollSelectionFormTempHorizontalDx");
    ScrollSelectionFormTempHorizontalDx_init(this, scrollSelectionForm);
    return this;
}


// throws Exception
int32_t ScrollSelectionFormTempHorizontalDx_getDx(ScrollSelectionFormTempHorizontalDx* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return ScrollSelectionForm_getSelectedIndexForPointTempHorizontalDx(this->scrollSelectionForm, index, item, dx, dy);
}

