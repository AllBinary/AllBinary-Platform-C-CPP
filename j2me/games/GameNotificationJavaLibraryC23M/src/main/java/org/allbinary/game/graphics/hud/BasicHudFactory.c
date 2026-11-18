// Generated Code Do Not Modify
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"


static BasicHudFactory* BasicHudFactory_instance;



void BasicHudFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BasicHudFactory_instance = BasicHudFactory_new();
}

void BasicHudFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicHudFactory", nullptr);
}

static void BasicHudFactory_initFields(BasicHudFactory* this) {
    this->DIRECTION_EXCEPTION = "Only Horizontal Direction is Allowed Currently";
    this->VERTICAL = 0;
    this->HORIZONTAL = 1;
    this->BOTTOMLEFT = 0;
    this->BOTTOMRIGHT = 1;
    this->TOPLEFT = 2;
    this->TOPRIGHT = 3;
    this->BOTTOMCENTER = 4;
    this->TOPCENTER = 5;
    this->ABSOLUTE = 6;
}


BasicHudFactory* BasicHudFactory_getInstance(void) {
        return (BasicHudFactory_staticInit(), BasicHudFactory_instance);
}


void BasicHudFactory_init(BasicHudFactory* this) {
    BasicHudFactory_register();
    BasicHudFactory_initFields(this);
}

BasicHudFactory* BasicHudFactory_new(void) {
    BasicHudFactory* this = java_object_alloc(sizeof(BasicHudFactory), "BasicHudFactory");
    BasicHudFactory_init(this);
    return this;
}

