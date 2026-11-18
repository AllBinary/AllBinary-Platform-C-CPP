// Generated Code Do Not Modify
#include "org/allbinary/game/layer/PaintableLayerComposite.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#include "org/allbinary/layer/Layer.h"
#if __has_include("org/allbinary/layer/Layer.h")
#include "org/allbinary/layer/Layer.h"
#endif






void PaintableLayerComposite_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PaintableLayerComposite_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PaintableLayerComposite", "Paintable");
    java_register_method("PaintableLayerComposite", "paint", (void*) PaintableLayerComposite_paint);
    java_register_method("PaintableLayerComposite", "paintThreed", (void*) PaintableLayerComposite_paintThreed);
}

static void PaintableLayerComposite_initFields(PaintableLayerComposite* this) {
    
}


void PaintableLayerComposite_init(PaintableLayerComposite* this, Layer** paintableArray) {
    PaintableLayerComposite_register();
    Paintable_init(&this->base);
    PaintableLayerComposite_initFields(this);
        this->paintableArray = paintableArray;
}

PaintableLayerComposite* PaintableLayerComposite_new(Layer** paintableArray) {
    PaintableLayerComposite* this = java_object_alloc(sizeof(PaintableLayerComposite), "PaintableLayerComposite");
    PaintableLayerComposite_init(this, paintableArray);
    return this;
}


void PaintableLayerComposite_paint(PaintableLayerComposite* this, Graphics* graphics) {
        for (int32_t index = java_array_length(this->paintableArray); --index >= 0; ) {
            Layer_paint(this->paintableArray[index], graphics);
        }
}


void PaintableLayerComposite_paintThreed(PaintableLayerComposite* this, Graphics* graphics) {
        PaintableInterface* paintableInterface = nullptr;
        for (int32_t index = java_array_length(this->paintableArray); --index >= 0; ) {
            paintableInterface = ((PaintableInterface*) this->paintableArray[index]);
            PaintableInterface_paintThreed(paintableInterface, graphics);
        }
}

