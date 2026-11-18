// Generated Code Do Not Modify
#include "org/allbinary/graphics/displayable/screen/FullScreenPaintableFactory.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"


static FullScreenPaintableFactory* FullScreenPaintableFactory_instance;


void FullScreenPaintableFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    FullScreenPaintableFactory_instance = FullScreenPaintableFactory_new();
}

void FullScreenPaintableFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FullScreenPaintableFactory", nullptr);
}

static void FullScreenPaintableFactory_initFields(FullScreenPaintableFactory* this) {
    this->paintable = NullPaintable_getInstance();
}

void FullScreenPaintableFactory_init(FullScreenPaintableFactory* this) {
    FullScreenPaintableFactory_register();
    FullScreenPaintableFactory_initFields(this);
}

FullScreenPaintableFactory* FullScreenPaintableFactory_new(void) {
    FullScreenPaintableFactory* this = java_object_alloc(sizeof(FullScreenPaintableFactory), "FullScreenPaintableFactory");
    FullScreenPaintableFactory_init(this);
    return this;
}


FullScreenPaintableFactory* FullScreenPaintableFactory_getInstance(void) {
        return (FullScreenPaintableFactory_staticInit(), FullScreenPaintableFactory_instance);
}

