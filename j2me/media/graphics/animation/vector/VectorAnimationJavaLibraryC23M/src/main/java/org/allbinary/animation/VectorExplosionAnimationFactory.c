// Generated Code Do Not Modify
#include "org/allbinary/animation/VectorExplosionAnimationFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/VectorExplosionGenerator.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/VectorAnimationInterface.h"
#include "org/allbinary/animation/VectorRotationAnimation.h"
#include "org/allbinary/animation/Animation.h"
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif





static void VectorExplosionAnimationFactory_setBasicColorP(VectorExplosionAnimationFactory* this, BasicColor* basicColor);

static BasicColor* VectorExplosionAnimationFactory_getBasicColorP(VectorExplosionAnimationFactory* this);

void VectorExplosionAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void VectorExplosionAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("VectorExplosionAnimationFactory", nullptr);
    java_register_method("VectorExplosionAnimationFactory", "getInstanceAnimation", (void*) VectorExplosionAnimationFactory_getInstanceAnimation);
    java_register_method("VectorExplosionAnimationFactory", "setBasicColorP", (void*) VectorExplosionAnimationFactory_setBasicColorP);
    java_register_method("VectorExplosionAnimationFactory", "getBasicColorP", (void*) VectorExplosionAnimationFactory_getBasicColorP);
}

static void VectorExplosionAnimationFactory_initFields(VectorExplosionAnimationFactory* this) {
    this->vectorExplosionGenerator = VectorExplosionGenerator_getInstance();
    this->basicColor = BasicColorFactory_getInstance()->WHITE;
    
}


void VectorExplosionAnimationFactory_init(VectorExplosionAnimationFactory* this, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory) {
    VectorExplosionAnimationFactory_register();
    VectorExplosionAnimationFactory_initFields(this);
        this->animationBehaviorFactory = animationBehaviorFactory;
        VectorExplosionAnimationFactory_setBasicColorP(this, basicColor);
}

VectorExplosionAnimationFactory* VectorExplosionAnimationFactory_new(BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory) {
    VectorExplosionAnimationFactory* this = java_object_alloc(sizeof(VectorExplosionAnimationFactory), "VectorExplosionAnimationFactory");
    VectorExplosionAnimationFactory_init(this, basicColor, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* VectorExplosionAnimationFactory_getInstanceAnimation(VectorExplosionAnimationFactory* this, Animation* animationInterface) {
        VectorAnimationInterface* vectorRotationAnimationInterface = ((VectorAnimationInterface*) animationInterface);
        int32_t frame = IndexedAnimationInterface_getFrame(vectorRotationAnimationInterface);
        int32_t** framePoints = VectorAnimationInterface_getPoints(vectorRotationAnimationInterface, frame);
        int32_t*** points = VectorExplosionGenerator_getInstance(this->vectorExplosionGenerator, framePoints, 6, this->vectorExplosionGenerator->ROTATION);
        return VectorRotationAnimation_new(points, VectorExplosionAnimationFactory_getBasicColorP(this), AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
}


static void VectorExplosionAnimationFactory_setBasicColorP(VectorExplosionAnimationFactory* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
}


static BasicColor* VectorExplosionAnimationFactory_getBasicColorP(VectorExplosionAnimationFactory* this) {
        return this->basicColor;
}

