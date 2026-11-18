// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/ScrollSelectionFormTempHorizontalPaintable.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/form/ItemIndexPaintable.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"





void ScrollSelectionFormTempHorizontalPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ScrollSelectionFormTempHorizontalPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScrollSelectionFormTempHorizontalPaintable", "ItemIndexPaintable");
    java_register_method("ScrollSelectionFormTempHorizontalPaintable", "paint", (void*) ScrollSelectionFormTempHorizontalPaintable_paint);
}

static void ScrollSelectionFormTempHorizontalPaintable_initFields(ScrollSelectionFormTempHorizontalPaintable* this) {
    
}


void ScrollSelectionFormTempHorizontalPaintable_init(ScrollSelectionFormTempHorizontalPaintable* this, ScrollSelectionForm* scrollSelectionForm) {
    ScrollSelectionFormTempHorizontalPaintable_register();
    ItemIndexPaintable_init(&this->base);
    ScrollSelectionFormTempHorizontalPaintable_initFields(this);
        this->scrollSelectionForm = scrollSelectionForm;
}

ScrollSelectionFormTempHorizontalPaintable* ScrollSelectionFormTempHorizontalPaintable_new(ScrollSelectionForm* scrollSelectionForm) {
    ScrollSelectionFormTempHorizontalPaintable* this = java_object_alloc(sizeof(ScrollSelectionFormTempHorizontalPaintable), "ScrollSelectionFormTempHorizontalPaintable");
    ScrollSelectionFormTempHorizontalPaintable_init(this, scrollSelectionForm);
    return this;
}


// throws Exception
int32_t ScrollSelectionFormTempHorizontalPaintable_paint(ScrollSelectionFormTempHorizontalPaintable* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return ScrollSelectionForm_paintItemTempHorizontal(this->scrollSelectionForm, graphics, index, item, dx, dy);
}

