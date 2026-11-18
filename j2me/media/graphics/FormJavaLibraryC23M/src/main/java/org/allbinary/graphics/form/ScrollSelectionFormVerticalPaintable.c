// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/ScrollSelectionFormVerticalPaintable.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/form/ItemIndexPaintable.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"





void ScrollSelectionFormVerticalPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ScrollSelectionFormVerticalPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScrollSelectionFormVerticalPaintable", "ItemIndexPaintable");
    java_register_method("ScrollSelectionFormVerticalPaintable", "paint", (void*) ScrollSelectionFormVerticalPaintable_paint);
}

static void ScrollSelectionFormVerticalPaintable_initFields(ScrollSelectionFormVerticalPaintable* this) {
    
}


void ScrollSelectionFormVerticalPaintable_init(ScrollSelectionFormVerticalPaintable* this, ScrollSelectionForm* scrollSelectionForm) {
    ScrollSelectionFormVerticalPaintable_register();
    ItemIndexPaintable_init(&this->base);
    ScrollSelectionFormVerticalPaintable_initFields(this);
        this->scrollSelectionForm = scrollSelectionForm;
}

ScrollSelectionFormVerticalPaintable* ScrollSelectionFormVerticalPaintable_new(ScrollSelectionForm* scrollSelectionForm) {
    ScrollSelectionFormVerticalPaintable* this = java_object_alloc(sizeof(ScrollSelectionFormVerticalPaintable), "ScrollSelectionFormVerticalPaintable");
    ScrollSelectionFormVerticalPaintable_init(this, scrollSelectionForm);
    return this;
}


// throws Exception
int32_t ScrollSelectionFormVerticalPaintable_paint(ScrollSelectionFormVerticalPaintable* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return ScrollSelectionForm_paintItemVertical(this->scrollSelectionForm, graphics, index, item, dx, dy);
}

