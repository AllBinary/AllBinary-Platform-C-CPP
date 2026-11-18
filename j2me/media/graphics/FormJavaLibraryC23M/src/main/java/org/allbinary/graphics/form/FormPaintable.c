// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/FormPaintable.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/form/PaintableForm.h"






void FormPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void FormPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FormPaintable", "Paintable");
    java_register_method("FormPaintable", "paint", (void*) FormPaintable_paint);
    java_register_method("FormPaintable", "getForm", (void*) FormPaintable_getForm);
}

static void FormPaintable_initFields(FormPaintable* this) {
    
}


void FormPaintable_init(FormPaintable* this, PaintableForm* form) {
    FormPaintable_register();
    Paintable_init(&this->base);
    FormPaintable_initFields(this);
        this->form = form;
}

FormPaintable* FormPaintable_new(PaintableForm* form) {
    FormPaintable* this = java_object_alloc(sizeof(FormPaintable), "FormPaintable");
    FormPaintable_init(this, form);
    return this;
}


void FormPaintable_paint(FormPaintable* this, Graphics* graphics) {
        ABCustomForm_paint(this->form, graphics);
}


PaintableForm* FormPaintable_getForm(FormPaintable* this) {
        return this->form;
}

