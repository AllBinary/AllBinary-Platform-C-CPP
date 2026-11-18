// Generated Code Do Not Modify
#include "org/allbinary/game/paint/BasicGameDemoPaintable.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#if __has_include("org/allbinary/graphics/paint/Paintable.h")
#include "org/allbinary/graphics/paint/Paintable.h"
#endif










void BasicGameDemoPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicGameDemoPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicGameDemoPaintable", "StatePaintable");
    java_register_method("BasicGameDemoPaintable", "setState", (void*) BasicGameDemoPaintable_setState);
    java_register_method("BasicGameDemoPaintable", "paint", (void*) BasicGameDemoPaintable_paint);
    java_register_method("BasicGameDemoPaintable", "getHelpPaintableInterface", (void*) BasicGameDemoPaintable_getHelpPaintableInterface);
    java_register_method("BasicGameDemoPaintable", "setCurrentStatePaintable", (void*) BasicGameDemoPaintable_setCurrentStatePaintable);
    java_register_method("BasicGameDemoPaintable", "getCurrentStatePaintable", (void*) BasicGameDemoPaintable_getCurrentStatePaintable);
    java_register_method("BasicGameDemoPaintable", "getMainDemoStatePaintable", (void*) BasicGameDemoPaintable_getMainDemoStatePaintable);
}

static void BasicGameDemoPaintable_initFields(BasicGameDemoPaintable* this) {
    
    
    
    this->currentStatePaintable = NullPaintable_getInstance();
}


void BasicGameDemoPaintable_init(BasicGameDemoPaintable* this, Paintable* mainDemoStatePaintable, Paintable* ownershipPaintable, Paintable* helpPaintableInterface) {
    BasicGameDemoPaintable_register();
    StatePaintable_init(&this->base);
    BasicGameDemoPaintable_initFields(this);
        this->mainDemoStatePaintable = mainDemoStatePaintable;
        BasicGameDemoPaintable_setCurrentStatePaintable(this, NullPaintable_getInstance());
        this->ownershipPaintable = ownershipPaintable;
        this->helpPaintableInterface = helpPaintableInterface;
}

BasicGameDemoPaintable* BasicGameDemoPaintable_new(Paintable* mainDemoStatePaintable, Paintable* ownershipPaintable, Paintable* helpPaintableInterface) {
    BasicGameDemoPaintable* this = java_object_alloc(sizeof(BasicGameDemoPaintable), "BasicGameDemoPaintable");
    BasicGameDemoPaintable_init(this, mainDemoStatePaintable, ownershipPaintable, helpPaintableInterface);
    return this;
}


void BasicGameDemoPaintable_setState(BasicGameDemoPaintable* this, int32_t state) {
        if (state == 0) {
            BasicGameDemoPaintable_setCurrentStatePaintable(this, BasicGameDemoPaintable_getMainDemoStatePaintable(this));
        } else if (state == 1) {
            BasicGameDemoPaintable_setCurrentStatePaintable(this, this->helpPaintableInterface);
        } else {
            BasicGameDemoPaintable_setCurrentStatePaintable(this, this->ownershipPaintable);
        }
}


void BasicGameDemoPaintable_paint(BasicGameDemoPaintable* this, Graphics* graphics) {
        Paintable_paint(BasicGameDemoPaintable_getCurrentStatePaintable(this), graphics);
}


Paintable* BasicGameDemoPaintable_getHelpPaintableInterface(BasicGameDemoPaintable* this) {
        return this->helpPaintableInterface;
}


void BasicGameDemoPaintable_setCurrentStatePaintable(BasicGameDemoPaintable* this, Paintable* currentStatePaintable) {
        this->currentStatePaintable = currentStatePaintable;
}


Paintable* BasicGameDemoPaintable_getCurrentStatePaintable(BasicGameDemoPaintable* this) {
        return this->currentStatePaintable;
}


Paintable* BasicGameDemoPaintable_getMainDemoStatePaintable(BasicGameDemoPaintable* this) {
        return this->mainDemoStatePaintable;
}

