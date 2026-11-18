// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/ScrollSelectionFormHorizontalPaintable.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/form/ItemIndexPaintable.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"





void ScrollSelectionFormHorizontalPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ScrollSelectionFormHorizontalPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScrollSelectionFormHorizontalPaintable", "ItemIndexPaintable");
    java_register_method("ScrollSelectionFormHorizontalPaintable", "paint", (void*) ScrollSelectionFormHorizontalPaintable_paint);
}

static void ScrollSelectionFormHorizontalPaintable_initFields(ScrollSelectionFormHorizontalPaintable* this) {
    
}


void ScrollSelectionFormHorizontalPaintable_init(ScrollSelectionFormHorizontalPaintable* this, ScrollSelectionForm* scrollSelectionForm) {
    ScrollSelectionFormHorizontalPaintable_register();
    ItemIndexPaintable_init(&this->base);
    ScrollSelectionFormHorizontalPaintable_initFields(this);
        this->scrollSelectionForm = scrollSelectionForm;
}

ScrollSelectionFormHorizontalPaintable* ScrollSelectionFormHorizontalPaintable_new(ScrollSelectionForm* scrollSelectionForm) {
    ScrollSelectionFormHorizontalPaintable* this = java_object_alloc(sizeof(ScrollSelectionFormHorizontalPaintable), "ScrollSelectionFormHorizontalPaintable");
    ScrollSelectionFormHorizontalPaintable_init(this, scrollSelectionForm);
    return this;
}


// throws Exception
int32_t ScrollSelectionFormHorizontalPaintable_paint(ScrollSelectionFormHorizontalPaintable* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return ScrollSelectionForm_paintItemHorizontal(this->scrollSelectionForm, graphics, index, item, dx, dy);
}

