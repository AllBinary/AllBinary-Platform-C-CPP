// Generated Code Do Not Modify
#include "org/allbinary/graphics/paint/PaintableComposite.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"






void PaintableComposite_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PaintableComposite_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PaintableComposite", "Paintable");
    java_register_method("PaintableComposite", "paint", (void*) PaintableComposite_paint);
    java_register_method("PaintableComposite", "paintThreed", (void*) PaintableComposite_paintThreed);
}

static void PaintableComposite_initFields(PaintableComposite* this) {
    
}


void PaintableComposite_init(PaintableComposite* this, PaintableInterface** paintableArray) {
    PaintableComposite_register();
    Paintable_init(&this->base);
    PaintableComposite_initFields(this);
        this->paintableArray = paintableArray;
}

PaintableComposite* PaintableComposite_new(PaintableInterface** paintableArray) {
    PaintableComposite* this = java_object_alloc(sizeof(PaintableComposite), "PaintableComposite");
    PaintableComposite_init(this, paintableArray);
    return this;
}


void PaintableComposite_paint(PaintableComposite* this, Graphics* graphics) {
        for (int32_t index = java_array_length(this->paintableArray) - 1; index >= 0; index--) {
            PaintableInterface_paint(this->paintableArray[index], graphics);
        }
}


void PaintableComposite_paintThreed(PaintableComposite* this, Graphics* graphics) {
        for (int32_t index = java_array_length(this->paintableArray) - 1; index >= 0; index--) {
            PaintableInterface_paintThreed(this->paintableArray[index], graphics);
        }
}

