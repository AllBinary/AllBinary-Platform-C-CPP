// Generated Code Do Not Modify
#include "org/allbinary/animation/RotationAnimationFactory.h"
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/NullRotationAnimation.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/Animation.h"
#if __has_include("org/allbinary/math/AngleFactory.h")
#include "org/allbinary/math/AngleFactory.h"
#endif
#if __has_include("org/allbinary/game/configuration/GameConfigurationCentral.h")
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#endif








void RotationAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void RotationAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RotationAnimationFactory", nullptr);
    java_register_method("RotationAnimationFactory", "getInstance", (void*) RotationAnimationFactory_getInstance);
    java_register_method("RotationAnimationFactory", "getInstanceAnimation", (void*) RotationAnimationFactory_getInstanceAnimation);
    java_register_method("RotationAnimationFactory", "setInitialScale", (void*) RotationAnimationFactory_setInitialScale);
}

static void RotationAnimationFactory_initFields(RotationAnimationFactory* this) {
    
    
}


RotationAnimationFactory* RotationAnimationFactory_createFactory(void) {
        int16_t totalAngle = AngleFactory_getInstance()->TOTAL_ANGLE;
        return RotationAnimationFactory_new(totalAngle, ((int16_t) (((int32_t) totalAngle) / GameConfigurationCentral_getGameControlFidelity(GameConfigurationCentral_getInstance()))));
}


void RotationAnimationFactory_init(RotationAnimationFactory* this, int16_t totalAngle, int16_t angleIncrement) {
    RotationAnimationFactory_register();
    RotationAnimationFactory_initFields(this);
        this->totalAngle = totalAngle;
        this->angleIncrement = angleIncrement;
}

RotationAnimationFactory* RotationAnimationFactory_new(int16_t totalAngle, int16_t angleIncrement) {
    RotationAnimationFactory* this = java_object_alloc(sizeof(RotationAnimationFactory), "RotationAnimationFactory");
    RotationAnimationFactory_init(this, totalAngle, angleIncrement);
    return this;
}


// throws Exception
Animation* RotationAnimationFactory_getInstance(RotationAnimationFactory* this, int32_t instanceId) {
        return NullRotationAnimation_createTotalAngle(AngleInfo_getInstance(this->angleIncrement), this->totalAngle, AnimationBehavior_getInstance());
}


// throws Exception
Animation* RotationAnimationFactory_getInstanceAnimation(RotationAnimationFactory* this, Animation* animationInterface) {
        return NullRotationAnimation_createTotalAngle(AngleInfo_getInstance(this->angleIncrement), this->totalAngle, AnimationBehavior_getInstance());
}


void RotationAnimationFactory_setInitialScale(RotationAnimationFactory* this, ScaleProperties* scaleProperties) {
}

