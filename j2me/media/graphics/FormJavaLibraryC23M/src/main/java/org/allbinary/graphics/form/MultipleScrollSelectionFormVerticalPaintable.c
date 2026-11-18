// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/MultipleScrollSelectionFormVerticalPaintable.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/form/ItemIndexPaintable.h"
#include "org/allbinary/graphics/form/MultipleScrollSelectionHorizontalForm.h"





void MultipleScrollSelectionFormVerticalPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MultipleScrollSelectionFormVerticalPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MultipleScrollSelectionFormVerticalPaintable", "ItemIndexPaintable");
    java_register_method("MultipleScrollSelectionFormVerticalPaintable", "paint", (void*) MultipleScrollSelectionFormVerticalPaintable_paint);
}

static void MultipleScrollSelectionFormVerticalPaintable_initFields(MultipleScrollSelectionFormVerticalPaintable* this) {
    
}


void MultipleScrollSelectionFormVerticalPaintable_init(MultipleScrollSelectionFormVerticalPaintable* this, MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm) {
    MultipleScrollSelectionFormVerticalPaintable_register();
    ItemIndexPaintable_init(&this->base);
    MultipleScrollSelectionFormVerticalPaintable_initFields(this);
        this->multipleScrollSelectionForm = multipleScrollSelectionForm;
}

MultipleScrollSelectionFormVerticalPaintable* MultipleScrollSelectionFormVerticalPaintable_new(MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm) {
    MultipleScrollSelectionFormVerticalPaintable* this = java_object_alloc(sizeof(MultipleScrollSelectionFormVerticalPaintable), "MultipleScrollSelectionFormVerticalPaintable");
    MultipleScrollSelectionFormVerticalPaintable_init(this, multipleScrollSelectionForm);
    return this;
}


// throws Exception
int32_t MultipleScrollSelectionFormVerticalPaintable_paint(MultipleScrollSelectionFormVerticalPaintable* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return MultipleScrollSelectionHorizontalForm_paintVertical(this->multipleScrollSelectionForm, graphics, index, item, dx, dy);
}

