// Generated Code Do Not Modify
#include "org/allbinary/game/ag/life/HealthIncludingLifeBar.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/health/Health.h"
#include "org/allbinary/game/health/HealthBarAnimation.h"
#include "org/allbinary/game/health/HealthBarTwodAnimation.h"
#include "org/allbinary/game/health/HealthInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/ag/life/Life.h"








void HealthIncludingLifeBar_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HealthIncludingLifeBar_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HealthIncludingLifeBar", "Paintable");
    java_register_method("HealthIncludingLifeBar", "onHealthChange", (void*) HealthIncludingLifeBar_onHealthChange);
    java_register_method("HealthIncludingLifeBar", "paint", (void*) HealthIncludingLifeBar_paint);
    java_register_method("HealthIncludingLifeBar", "paintThreed", (void*) HealthIncludingLifeBar_paintThreed);
}

static void HealthIncludingLifeBar_initFields(HealthIncludingLifeBar* this) {
    
    
    
    
}


// throws Exception
HealthIncludingLifeBar* HealthIncludingLifeBar_createHealthIncludingLifeBar(AllBinaryLayer* layerInterface, Life* life, Health* healthInterface, int32_t location, int32_t direction) {
        return HealthIncludingLifeBar_new(layerInterface, life, healthInterface, HealthBarTwodAnimation_new(layerInterface, location), direction);
}


void HealthIncludingLifeBar_init(HealthIncludingLifeBar* this, AllBinaryLayer* layerInterface, Life* life, Health* healthInterface, HealthBarAnimation* animationInterface, int32_t direction) {
    HealthIncludingLifeBar_register();
    Paintable_init(&this->base);
    HealthIncludingLifeBar_initFields(this);
        this->allbinaryLayer = layerInterface;
        this->animationInterface = animationInterface;
        this->life = life;
        this->healthInterface = healthInterface;
        HealthInterface_addListener(this->healthInterface, this);
        HealthIncludingLifeBar_onHealthChange(this);
}

HealthIncludingLifeBar* HealthIncludingLifeBar_new(AllBinaryLayer* layerInterface, Life* life, Health* healthInterface, HealthBarAnimation* animationInterface, int32_t direction) {
    HealthIncludingLifeBar* this = java_object_alloc(sizeof(HealthIncludingLifeBar), "HealthIncludingLifeBar");
    HealthIncludingLifeBar_init(this, layerInterface, life, healthInterface, animationInterface, direction);
    return this;
}


void HealthIncludingLifeBar_onHealthChange(HealthIncludingLifeBar* this) {
        HealthBarAnimation_onHealthChange(this->animationInterface, ((HealthInterface_getHealth(this->healthInterface) + (HealthInterface_getMaxHealth(this->healthInterface) * ((int32_t) Life_get(this->life)))) * AllBinaryLayer_getWidth(this->allbinaryLayer)) / (HealthInterface_getMaxHealth(this->healthInterface) + (HealthInterface_getMaxHealth(this->healthInterface) * ((int32_t) Life_getStartLives(this->life)))));
}


void HealthIncludingLifeBar_paint(HealthIncludingLifeBar* this, Graphics* graphics) {
        Animation_paintXY(this->animationInterface, graphics, 0, 0);
}


void HealthIncludingLifeBar_paintThreed(HealthIncludingLifeBar* this, Graphics* graphics) {
        Animation_paintThreedXYZ(this->animationInterface, graphics, 0, 0, 0);
}

