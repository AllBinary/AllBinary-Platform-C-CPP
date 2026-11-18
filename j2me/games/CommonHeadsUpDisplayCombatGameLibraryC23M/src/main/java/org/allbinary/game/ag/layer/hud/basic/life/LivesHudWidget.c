// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/hud/basic/life/LivesHudWidget.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/game/ag/life/Life.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/game/ag/life/Life.h")
#include "org/allbinary/game/ag/life/Life.h"
#endif
#if __has_include("org/allbinary/game/ag/life/Life.h")
#include "org/allbinary/game/ag/life/Life.h"
#endif
#if __has_include("org/allbinary/game/ag/life/Life.h")
#include "org/allbinary/game/ag/life/Life.h"
#endif










void LivesHudWidget_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LivesHudWidget_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LivesHudWidget", "BasicHud");
    java_register_method("LivesHudWidget", "updateMeasurement", (void*) LivesHudWidget_updateMeasurement);
    java_register_method("LivesHudWidget", "onDisplayChangeEvent", (void*) LivesHudWidget_onDisplayChangeEvent);
    java_register_method("LivesHudWidget", "setX", (void*) LivesHudWidget_setX);
    java_register_method("LivesHudWidget", "paint", (void*) LivesHudWidget_paint);
    java_register_method("LivesHudWidget", "paintThreed", (void*) LivesHudWidget_paintThreed);
    java_register_method("LivesHudWidget", "getLifeInterface", (void*) LivesHudWidget_getLifeInterface);
}

static void LivesHudWidget_initFields(LivesHudWidget* this) {
    
    
    
}


void LivesHudWidget_init(LivesHudWidget* this, Animation* animationInterface, Life* lifeInterface, int32_t location, int32_t direction) {
    LivesHudWidget_register();
        BasicHud_init(&this->base, location, direction, 2, BasicColorFactory_getInstance()->WHITE);
        LivesHudWidget_initFields(this);
        this->lifeInterface = lifeInterface;
        int32_t size = ((int32_t) Life_getMaxlives(LivesHudWidget_getLifeInterface(this)));
        this->xArray = ((int32_t*) java_array_new(sizeof(int32_t), size));
        this->animationInterface = animationInterface;
        this->base.updateMaxWidth = ((int32_t) Life_getMaxlives(this->lifeInterface)) * 16;
        this->base.updateMaxHeight = 16;
}

LivesHudWidget* LivesHudWidget_new(Animation* animationInterface, Life* lifeInterface, int32_t location, int32_t direction) {
    LivesHudWidget* this = java_object_alloc(sizeof(LivesHudWidget), "LivesHudWidget");
    LivesHudWidget_init(this, animationInterface, lifeInterface, location, direction);
    return this;
}


void LivesHudWidget_updateMeasurement(LivesHudWidget* this, Graphics* graphics) {
        BasicHud_updateMeasurement((&this->base), graphics);
        int32_t maxLives = ((int32_t) Life_getMaxlives(LivesHudWidget_getLifeInterface(this)));
        for (int32_t index = 0; index < maxLives; index++) {
            this->xArray[index] = BasicHud_getX(this) + (index * 16);
        }
}


void LivesHudWidget_onDisplayChangeEvent(LivesHudWidget* this, DisplayChangeEvent* displayChangeEvent) {
        BasicHud_onDisplayChangeEvent((&this->base), displayChangeEvent);
        this->base.myFontProcessor = this->base.updateMyFontProcessor;
}


void LivesHudWidget_setX(LivesHudWidget* this, int32_t x) {
        BasicHud_setX((&this->base), x);
        this->base.myFontProcessor = this->base.updateMyFontProcessor;
}


void LivesHudWidget_paint(LivesHudWidget* this, Graphics* graphics) {
        MyFontProcessor_process(this->base.myFontProcessor, graphics);
        for (int32_t index = ((int32_t) Life_get(LivesHudWidget_getLifeInterface(this))); --index >= 0; ) {
            Animation_paintXY(this->animationInterface, graphics, this->xArray[index], BasicHud_getY(this));
        }
}


void LivesHudWidget_paintThreed(LivesHudWidget* this, Graphics* graphics) {
}


Life* LivesHudWidget_getLifeInterface(LivesHudWidget* this) {
        return this->lifeInterface;
}

