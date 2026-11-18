// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/hud/basic/HudResources.h"


static HudResources* HudResources_instance;



void HudResources_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    HudResources_instance = HudResources_new();
}

void HudResources_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HudResources", nullptr);
}

static void HudResources_initFields(HudResources* this) {
    this->RESOURCE_LIFE = "/hud_life_10_by_10.png";
    this->RESOURCE_HEALTH = "/hud_health_10_by_10.png";
}


HudResources* HudResources_getInstance(void) {
        return (HudResources_staticInit(), HudResources_instance);
}


void HudResources_init(HudResources* this) {
    HudResources_register();
    HudResources_initFields(this);
}

HudResources* HudResources_new(void) {
    HudResources* this = java_object_alloc(sizeof(HudResources), "HudResources");
    HudResources_init(this);
    return this;
}

