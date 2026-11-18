// Generated Code Do Not Modify
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/Animation.h"


NullAnimationFactory* NullAnimationFactory_NULL_NOT_FOR_USE_ANIMATION_FACTORY;
static NullAnimationFactory* NullAnimationFactory_NULL_ANIMATION_FACTORY;






void NullAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullAnimationFactory_NULL_NOT_FOR_USE_ANIMATION_FACTORY = NullAnimationFactory_new();
    NullAnimationFactory_NULL_ANIMATION_FACTORY = NullAnimationFactory_new();
}

void NullAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullAnimationFactory", nullptr);
    java_register_method("NullAnimationFactory", "getInstance", (void*) NullAnimationFactory_getInstance);
    java_register_method("NullAnimationFactory", "getInstanceAnimation", (void*) NullAnimationFactory_getInstanceAnimation);
    java_register_method("NullAnimationFactory", "setInitialScale", (void*) NullAnimationFactory_setInitialScale);
}

static void NullAnimationFactory_initFields(NullAnimationFactory* this) {
    this->NULL_ANIMATION = Animation_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
        

    void NullAnimationFactory_paintXY(NullAnimationFactory* this, Graphics* graphics, int32_t x, int32_t y) {
    }
#endif
;
    this->EMPTY_ARRAY = ((Animation**) java_array_new(sizeof(Animation*), 0));
}


void NullAnimationFactory_init(NullAnimationFactory* this) {
    NullAnimationFactory_register();
    NullAnimationFactory_initFields(this);
}

NullAnimationFactory* NullAnimationFactory_new(void) {
    NullAnimationFactory* this = java_object_alloc(sizeof(NullAnimationFactory), "NullAnimationFactory");
    NullAnimationFactory_init(this);
    return this;
}


NullAnimationFactory* NullAnimationFactory_getFactoryInstance(void) {
        return (NullAnimationFactory_staticInit(), NullAnimationFactory_NULL_ANIMATION_FACTORY);
}


Animation* NullAnimationFactory_getInstance(NullAnimationFactory* this, int32_t instanceId) {
        return this->NULL_ANIMATION;
}


// throws Exception
Animation* NullAnimationFactory_getInstanceAnimation(NullAnimationFactory* this, Animation* animationInterface) {
        return this->NULL_ANIMATION;
}


void NullAnimationFactory_setInitialScale(NullAnimationFactory* this, ScaleProperties* scaleProperties) {
}

