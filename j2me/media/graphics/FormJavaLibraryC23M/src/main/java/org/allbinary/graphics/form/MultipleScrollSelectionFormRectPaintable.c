// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/MultipleScrollSelectionFormRectPaintable.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/form/MultipleScrollSelectionHorizontalForm.h"





void MultipleScrollSelectionFormRectPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MultipleScrollSelectionFormRectPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MultipleScrollSelectionFormRectPaintable", "Paintable");
    java_register_method("MultipleScrollSelectionFormRectPaintable", "paint", (void*) MultipleScrollSelectionFormRectPaintable_paint);
}

static void MultipleScrollSelectionFormRectPaintable_initFields(MultipleScrollSelectionFormRectPaintable* this) {
    
}


void MultipleScrollSelectionFormRectPaintable_init(MultipleScrollSelectionFormRectPaintable* this, MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm) {
    MultipleScrollSelectionFormRectPaintable_register();
    Paintable_init(&this->base);
    MultipleScrollSelectionFormRectPaintable_initFields(this);
        this->multipleScrollSelectionForm = multipleScrollSelectionForm;
}

MultipleScrollSelectionFormRectPaintable* MultipleScrollSelectionFormRectPaintable_new(MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm) {
    MultipleScrollSelectionFormRectPaintable* this = java_object_alloc(sizeof(MultipleScrollSelectionFormRectPaintable), "MultipleScrollSelectionFormRectPaintable");
    MultipleScrollSelectionFormRectPaintable_init(this, multipleScrollSelectionForm);
    return this;
}


void MultipleScrollSelectionFormRectPaintable_paint(MultipleScrollSelectionFormRectPaintable* this, Graphics* graphics) {
        MultipleScrollSelectionHorizontalForm_fillRect(this->multipleScrollSelectionForm, graphics);
}

