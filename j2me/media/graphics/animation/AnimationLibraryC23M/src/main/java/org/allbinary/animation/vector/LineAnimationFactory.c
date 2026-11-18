// Generated Code Do Not Modify
#include "org/allbinary/animation/vector/LineAnimationFactory.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/animation/vector/LineAnimation.h"






void LineAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LineAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LineAnimationFactory", nullptr);
    java_register_method("LineAnimationFactory", "getInstance", (void*) LineAnimationFactory_getInstance);
    java_register_method("LineAnimationFactory", "setInitialScale", (void*) LineAnimationFactory_setInitialScale);
}

static void LineAnimationFactory_initFields(LineAnimationFactory* this) {
    
}


void LineAnimationFactory_init(LineAnimationFactory* this, BasicColor* basicColor) {
    LineAnimationFactory_register();
    LineAnimationFactory_initFields(this);
        this->basicColor = basicColor;
}

LineAnimationFactory* LineAnimationFactory_new(BasicColor* basicColor) {
    LineAnimationFactory* this = java_object_alloc(sizeof(LineAnimationFactory), "LineAnimationFactory");
    LineAnimationFactory_init(this, basicColor);
    return this;
}


// throws Exception
Animation* LineAnimationFactory_getInstance(LineAnimationFactory* this, int32_t instanceId) {
        return LineAnimation_new(this->basicColor);
}


void LineAnimationFactory_setInitialScale(LineAnimationFactory* this, ScaleProperties* scaleProperties) {
}

