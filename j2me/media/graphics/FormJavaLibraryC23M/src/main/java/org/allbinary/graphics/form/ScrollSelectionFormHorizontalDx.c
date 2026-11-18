// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/ScrollSelectionFormHorizontalDx.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/form/ItemIndexDx.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"





void ScrollSelectionFormHorizontalDx_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ScrollSelectionFormHorizontalDx_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScrollSelectionFormHorizontalDx", "ItemIndexDx");
    java_register_method("ScrollSelectionFormHorizontalDx", "getDx", (void*) ScrollSelectionFormHorizontalDx_getDx);
}

static void ScrollSelectionFormHorizontalDx_initFields(ScrollSelectionFormHorizontalDx* this) {
    
}


void ScrollSelectionFormHorizontalDx_init(ScrollSelectionFormHorizontalDx* this, ScrollSelectionForm* scrollSelectionForm) {
    ScrollSelectionFormHorizontalDx_register();
    ItemIndexDx_init(&this->base);
    ScrollSelectionFormHorizontalDx_initFields(this);
        this->scrollSelectionForm = scrollSelectionForm;
}

ScrollSelectionFormHorizontalDx* ScrollSelectionFormHorizontalDx_new(ScrollSelectionForm* scrollSelectionForm) {
    ScrollSelectionFormHorizontalDx* this = java_object_alloc(sizeof(ScrollSelectionFormHorizontalDx), "ScrollSelectionFormHorizontalDx");
    ScrollSelectionFormHorizontalDx_init(this, scrollSelectionForm);
    return this;
}


// throws Exception
int32_t ScrollSelectionFormHorizontalDx_getDx(ScrollSelectionFormHorizontalDx* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return ScrollSelectionForm_getSelectedIndexForPointHorizontalDx(this->scrollSelectionForm, index, item, dx, dy);
}

