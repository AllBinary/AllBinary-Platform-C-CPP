// Generated Code Do Not Modify
#include "org/allbinary/animation/vector/ARectangleFilledAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/animation/vector/RectangleFilledAnimation.h"
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif






void ARectangleFilledAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ARectangleFilledAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ARectangleFilledAnimation", "RectangleFilledAnimation");
    java_register_method("ARectangleFilledAnimation", "nextFrame", (void*) ARectangleFilledAnimation_nextFrame);
    java_register_method("ARectangleFilledAnimation", "paintXY", (void*) ARectangleFilledAnimation_paintXY);
}

static void ARectangleFilledAnimation_initFields(ARectangleFilledAnimation* this) {
    this->x = 0;
    this->y = 0;
}


void ARectangleFilledAnimation_init(ARectangleFilledAnimation* this) {
    ARectangleFilledAnimation_register();
        RectangleFilledAnimation_init(&this->base, 0, 0, BasicColorFactory_getInstance()->BLACK);
        ARectangleFilledAnimation_initFields(this);
}

ARectangleFilledAnimation* ARectangleFilledAnimation_new(void) {
    ARectangleFilledAnimation* this = java_object_alloc(sizeof(ARectangleFilledAnimation), "ARectangleFilledAnimation");
    ARectangleFilledAnimation_init(this);
    return this;
}


void ARectangleFilledAnimation_nextFrame(ARectangleFilledAnimation* this) {
}


void ARectangleFilledAnimation_paintXY(ARectangleFilledAnimation* this, Graphics* graphics, int32_t unusedX, int32_t unusedY) {
        RectangleFilledAnimation_paintXY((&this->base), graphics, this->x, this->y);
}

