// Generated Code Do Not Modify
#include "org/allbinary/layer/NullLayer.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/layer/Layer.h"


static NullLayer* NullLayer_instance;




void NullLayer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullLayer_instance = NullLayer_new();
}

void NullLayer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullLayer", "Layer");
    java_register_method("NullLayer", "paint", (void*) NullLayer_paint);
}


NullLayer* NullLayer_getInstance(void) {
        return (NullLayer_staticInit(), NullLayer_instance);
}


void NullLayer_init(NullLayer* this) {
    NullLayer_register();
        Layer_init(&this->base, 0, 0);
}

NullLayer* NullLayer_new(void) {
    NullLayer* this = java_object_alloc(sizeof(NullLayer), "NullLayer");
    NullLayer_init(this);
    return this;
}


void NullLayer_paint(NullLayer* this, Graphics* graphics) {
}

