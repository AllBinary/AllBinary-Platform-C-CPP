// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/hud/basic/health/HealthHudWidget.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/game/health/Health.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/NoTimeDelayHelper.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif




static void HealthHudWidget_update(HealthHudWidget* this);





void HealthHudWidget_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HealthHudWidget_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HealthHudWidget", "BasicHud");
    java_register_method("HealthHudWidget", "update", (void*) HealthHudWidget_update);
    java_register_method("HealthHudWidget", "setX", (void*) HealthHudWidget_setX);
    java_register_method("HealthHudWidget", "onHealthChange", (void*) HealthHudWidget_onHealthChange);
    java_register_method("HealthHudWidget", "paint", (void*) HealthHudWidget_paint);
    java_register_method("HealthHudWidget", "paintThreed", (void*) HealthHudWidget_paintThreed);
}

static void HealthHudWidget_initFields(HealthHudWidget* this) {
    
    
    
    this->max = 0;
    
    this->gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory_getInstance();
    this->timeDelayHelper = (NoTimeDelayHelper_staticInit(), NoTimeDelayHelper_SINGLETON);
    this->slowBeatTimeDelayHelper = TimeDelayHelper_new(1280);
    this->mediumBeatTimeDelayHelper = TimeDelayHelper_new(640);
    this->fastBeatTimeDelayHelper = TimeDelayHelper_new(320);
}


void HealthHudWidget_init(HealthHudWidget* this, Animation* animationInterface, Health* healthInterface, int32_t location, int32_t direction) {
    HealthHudWidget_register();
        BasicHud_init(&this->base, location, direction, 2, BasicColorFactory_getInstance()->WHITE);
        HealthHudWidget_initFields(this);
        this->animationInterface = animationInterface;
        this->healthInterface = healthInterface;
        Health_addListener(this->healthInterface, this);
        this->healthScale = (Health_getMaxHealth(this->healthInterface) / 6) + 1;
        HealthHudWidget_onHealthChange(this);
        this->base.updateMaxWidth = Health_getMaxHealth(healthInterface) * 16;
        this->base.updateMaxHeight = 16;
        this->xArray = ((int32_t*) java_array_new(sizeof(int32_t), 30));
        HealthHudWidget_update(this);
}

HealthHudWidget* HealthHudWidget_new(Animation* animationInterface, Health* healthInterface, int32_t location, int32_t direction) {
    HealthHudWidget* this = java_object_alloc(sizeof(HealthHudWidget), "HealthHudWidget");
    HealthHudWidget_init(this, animationInterface, healthInterface, location, direction);
    return this;
}


static void HealthHudWidget_update(HealthHudWidget* this) {
        if (this->xArray != nullptr) {
            for (int32_t index = 0; index < java_array_length(this->xArray); index++) {
                this->xArray[index] = BasicHud_getX(this) + (index * 16);
            }
        }
}


void HealthHudWidget_setX(HealthHudWidget* this, int32_t x) {
        BasicHud_setX((&this->base), x);
        HealthHudWidget_update(this);
}


void HealthHudWidget_onHealthChange(HealthHudWidget* this) {
        this->max = (Health_getHealth(this->healthInterface) / this->healthScale);
        this->timeDelayHelper = (NoTimeDelayHelper_staticInit(), NoTimeDelayHelper_SINGLETON);
        if (this->max <= 1 && Health_isAlive(this->healthInterface)) {
            this->max = 1;
            if (this->healthScale - Health_getHealth(this->healthInterface) > (this->healthScale * 2) / 3) {
                this->timeDelayHelper = this->slowBeatTimeDelayHelper;
            } else if (this->healthScale - Health_getHealth(this->healthInterface) > this->healthScale / 3) {
                this->timeDelayHelper = this->mediumBeatTimeDelayHelper;
            } else {
                this->timeDelayHelper = this->fastBeatTimeDelayHelper;
            }
        }
}


void HealthHudWidget_paint(HealthHudWidget* this, Graphics* graphics) {
        MyFontProcessor_process(this->base.myFontProcessor, graphics);
        for (int32_t index = 0; index < this->max; index++) {
            if (TimeDelayHelper_isTime(this->timeDelayHelper, this->gameTickTimeDelayHelper->startTime)) {
                Animation_paintXY(this->animationInterface, graphics, this->xArray[index], BasicHud_getY(this));
            }
        }
}


void HealthHudWidget_paintThreed(HealthHudWidget* this, Graphics* graphics) {
}

