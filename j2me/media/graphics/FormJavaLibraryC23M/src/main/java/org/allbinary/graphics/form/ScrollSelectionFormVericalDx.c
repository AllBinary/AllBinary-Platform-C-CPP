// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/ScrollSelectionFormVericalDx.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/form/ItemIndexDx.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"





void ScrollSelectionFormVericalDx_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ScrollSelectionFormVericalDx_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScrollSelectionFormVericalDx", "ItemIndexDx");
    java_register_method("ScrollSelectionFormVericalDx", "getDx", (void*) ScrollSelectionFormVericalDx_getDx);
}

static void ScrollSelectionFormVericalDx_initFields(ScrollSelectionFormVericalDx* this) {
    
}


void ScrollSelectionFormVericalDx_init(ScrollSelectionFormVericalDx* this, ScrollSelectionForm* scrollSelectionForm) {
    ScrollSelectionFormVericalDx_register();
    ItemIndexDx_init(&this->base);
    ScrollSelectionFormVericalDx_initFields(this);
        this->scrollSelectionForm = scrollSelectionForm;
}

ScrollSelectionFormVericalDx* ScrollSelectionFormVericalDx_new(ScrollSelectionForm* scrollSelectionForm) {
    ScrollSelectionFormVericalDx* this = java_object_alloc(sizeof(ScrollSelectionFormVericalDx), "ScrollSelectionFormVericalDx");
    ScrollSelectionFormVericalDx_init(this, scrollSelectionForm);
    return this;
}


// throws Exception
int32_t ScrollSelectionFormVericalDx_getDx(ScrollSelectionFormVericalDx* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return ScrollSelectionForm_getSelectedIndexForPointVerticalDx(this->scrollSelectionForm, index, item, dx, dy);
}

