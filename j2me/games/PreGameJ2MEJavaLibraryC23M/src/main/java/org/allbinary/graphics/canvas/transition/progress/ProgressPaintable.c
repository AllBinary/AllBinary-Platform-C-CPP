// Generated Code Do Not Modify
#include "org/allbinary/graphics/canvas/transition/progress/ProgressPaintable.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"





void ProgressPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ProgressPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ProgressPaintable", "Paintable");
    java_register_method("ProgressPaintable", "paint", (void*) ProgressPaintable_paint);
}

static void ProgressPaintable_initFields(ProgressPaintable* this) {
    
}


void ProgressPaintable_init(ProgressPaintable* this, ProgressCanvas* progressCanvas) {
    ProgressPaintable_register();
    Paintable_init(&this->base);
    ProgressPaintable_initFields(this);
        this->progressCanvas = progressCanvas;
}

ProgressPaintable* ProgressPaintable_new(ProgressCanvas* progressCanvas) {
    ProgressPaintable* this = java_object_alloc(sizeof(ProgressPaintable), "ProgressPaintable");
    ProgressPaintable_init(this, progressCanvas);
    return this;
}


void ProgressPaintable_paint(ProgressPaintable* this, Graphics* graphics) {
        ProgressCanvas_paint2(this->progressCanvas, graphics);
}

