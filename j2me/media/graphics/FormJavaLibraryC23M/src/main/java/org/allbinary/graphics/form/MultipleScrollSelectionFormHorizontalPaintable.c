// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/MultipleScrollSelectionFormHorizontalPaintable.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/form/ItemIndexPaintable.h"
#include "org/allbinary/graphics/form/MultipleScrollSelectionHorizontalForm.h"





void MultipleScrollSelectionFormHorizontalPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MultipleScrollSelectionFormHorizontalPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MultipleScrollSelectionFormHorizontalPaintable", "ItemIndexPaintable");
    java_register_method("MultipleScrollSelectionFormHorizontalPaintable", "paint", (void*) MultipleScrollSelectionFormHorizontalPaintable_paint);
}

static void MultipleScrollSelectionFormHorizontalPaintable_initFields(MultipleScrollSelectionFormHorizontalPaintable* this) {
    
}


void MultipleScrollSelectionFormHorizontalPaintable_init(MultipleScrollSelectionFormHorizontalPaintable* this, MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm) {
    MultipleScrollSelectionFormHorizontalPaintable_register();
    ItemIndexPaintable_init(&this->base);
    MultipleScrollSelectionFormHorizontalPaintable_initFields(this);
        this->multipleScrollSelectionForm = multipleScrollSelectionForm;
}

MultipleScrollSelectionFormHorizontalPaintable* MultipleScrollSelectionFormHorizontalPaintable_new(MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm) {
    MultipleScrollSelectionFormHorizontalPaintable* this = java_object_alloc(sizeof(MultipleScrollSelectionFormHorizontalPaintable), "MultipleScrollSelectionFormHorizontalPaintable");
    MultipleScrollSelectionFormHorizontalPaintable_init(this, multipleScrollSelectionForm);
    return this;
}


// throws Exception
int32_t MultipleScrollSelectionFormHorizontalPaintable_paint(MultipleScrollSelectionFormHorizontalPaintable* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return MultipleScrollSelectionHorizontalForm_paintHorizontal(this->multipleScrollSelectionForm, graphics, index, item, dx, dy);
}

