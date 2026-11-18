// Generated Code Do Not Modify
#include "org/allbinary/game/health/HealthBar.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/health/HealthListenerInterface.h"
#include "org/allbinary/game/health/HealthBarAnimation.h"
#include "org/allbinary/game/health/HealthInterface.h"
#include "org/allbinary/game/health/Health.h"







void HealthBar_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HealthBar_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HealthBar", "Paintable");
    java_register_method("HealthBar", "onHealthChange", (void*) HealthBar_onHealthChange);
    java_register_method("HealthBar", "paint", (void*) HealthBar_paint);
    java_register_method("HealthBar", "paintThreed", (void*) HealthBar_paintThreed);
}

static void HealthBar_initFields(HealthBar* this) {
    
    
    
}


void HealthBar_init(HealthBar* this, AllBinaryLayer* layerInterface, Health* healthInterface, HealthBarAnimation* animationInterface, int32_t direction) {
    HealthBar_register();
    Paintable_init(&this->base);
    HealthBar_initFields(this);
        this->allbinaryLayer = layerInterface;
        this->animationInterface = animationInterface;
        this->healthInterface = healthInterface;
        HealthInterface_addListener(this->healthInterface, this);
        HealthBar_onHealthChange(this);
}

HealthBar* HealthBar_new(AllBinaryLayer* layerInterface, Health* healthInterface, HealthBarAnimation* animationInterface, int32_t direction) {
    HealthBar* this = java_object_alloc(sizeof(HealthBar), "HealthBar");
    HealthBar_init(this, layerInterface, healthInterface, animationInterface, direction);
    return this;
}


void HealthBar_onHealthChange(HealthBar* this) {
        HealthBarAnimation_onHealthChange(this->animationInterface, HealthInterface_getHealth(this->healthInterface) * AllBinaryLayer_getWidth(this->allbinaryLayer) / HealthInterface_getMaxHealth(this->healthInterface));
}


void HealthBar_paint(HealthBar* this, Graphics* graphics) {
        Animation_paintXY(this->animationInterface, graphics, 0, 0);
}


void HealthBar_paintThreed(HealthBar* this, Graphics* graphics) {
        Animation_paintThreedXYZ(this->animationInterface, graphics, 0, 0, 0);
}

