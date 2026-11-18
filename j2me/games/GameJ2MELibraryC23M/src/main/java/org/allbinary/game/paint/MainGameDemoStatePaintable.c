// Generated Code Do Not Modify
#include "org/allbinary/game/paint/MainGameDemoStatePaintable.h"
#include "javax/microedition/lcdui/Graphics.h"







void MainGameDemoStatePaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MainGameDemoStatePaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MainGameDemoStatePaintable", "Paintable");
    java_register_method("MainGameDemoStatePaintable", "paint", (void*) MainGameDemoStatePaintable_paint);
    java_register_method("MainGameDemoStatePaintable", "getOwnershipPaintableInterface", (void*) MainGameDemoStatePaintable_getOwnershipPaintableInterface);
    java_register_method("MainGameDemoStatePaintable", "getMenuPaintableInterface", (void*) MainGameDemoStatePaintable_getMenuPaintableInterface);
}

static void MainGameDemoStatePaintable_initFields(MainGameDemoStatePaintable* this) {
    
    
}


void MainGameDemoStatePaintable_init(MainGameDemoStatePaintable* this, Paintable* ownershipPaintableInterface, Paintable* menuPaintableInterface) {
    MainGameDemoStatePaintable_register();
    Paintable_init(&this->base);
    MainGameDemoStatePaintable_initFields(this);
        this->ownershipPaintableInterface = ownershipPaintableInterface;
        this->menuPaintableInterface = menuPaintableInterface;
}

MainGameDemoStatePaintable* MainGameDemoStatePaintable_new(Paintable* ownershipPaintableInterface, Paintable* menuPaintableInterface) {
    MainGameDemoStatePaintable* this = java_object_alloc(sizeof(MainGameDemoStatePaintable), "MainGameDemoStatePaintable");
    MainGameDemoStatePaintable_init(this, ownershipPaintableInterface, menuPaintableInterface);
    return this;
}


void MainGameDemoStatePaintable_paint(MainGameDemoStatePaintable* this, Graphics* graphics) {
        Paintable_paint(this->menuPaintableInterface, graphics);
        Paintable_paint(this->ownershipPaintableInterface, graphics);
}


Paintable* MainGameDemoStatePaintable_getOwnershipPaintableInterface(MainGameDemoStatePaintable* this) {
        return this->ownershipPaintableInterface;
}


Paintable* MainGameDemoStatePaintable_getMenuPaintableInterface(MainGameDemoStatePaintable* this) {
        return this->menuPaintableInterface;
}

