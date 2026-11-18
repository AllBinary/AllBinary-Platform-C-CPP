// Generated Code Do Not Modify
#include "org/allbinary/animation/IndependentVectorExplosionRotationAnimationFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/vector/VectorInfo.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/VectorAnimationFactoryInterface.h"
#include "org/allbinary/animation/VectorRotationGenerator.h"
#include "org/allbinary/animation/VectorExplosionGenerator.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/Animation.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif






void IndependentVectorExplosionRotationAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void IndependentVectorExplosionRotationAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("IndependentVectorExplosionRotationAnimationFactory", nullptr);
    java_register_method("IndependentVectorExplosionRotationAnimationFactory", "init", (void*) IndependentVectorExplosionRotationAnimationFactory_initMethod);
    java_register_method("IndependentVectorExplosionRotationAnimationFactory", "getInstanceAnimation", (void*) IndependentVectorExplosionRotationAnimationFactory_getInstanceAnimation);
}

static void IndependentVectorExplosionRotationAnimationFactory_initFields(IndependentVectorExplosionRotationAnimationFactory* this) {
    this->framePoints = NullUtil_getInstance()->NULL_INT_ARRAY_ARRAY_ARRAY;
    
    
    
    this->vectorExplosionGenerator = VectorExplosionGenerator_getInstance();
}


void IndependentVectorExplosionRotationAnimationFactory_init(IndependentVectorExplosionRotationAnimationFactory* this, VectorInfo* vectorInfo, BasicColor* basicColor, VectorAnimationFactoryInterface* vectorAnimationFactoryInterface) {
    IndependentVectorExplosionRotationAnimationFactory_register();
    IndependentVectorExplosionRotationAnimationFactory_initFields(this);
        this->vectorInfo = vectorInfo;
        this->basicColor = basicColor;
        this->vectorAnimationFactoryInterface = vectorAnimationFactoryInterface;
        IndependentVectorExplosionRotationAnimationFactory_initMethod(this);
}

IndependentVectorExplosionRotationAnimationFactory* IndependentVectorExplosionRotationAnimationFactory_new(VectorInfo* vectorInfo, BasicColor* basicColor, VectorAnimationFactoryInterface* vectorAnimationFactoryInterface) {
    IndependentVectorExplosionRotationAnimationFactory* this = java_object_alloc(sizeof(IndependentVectorExplosionRotationAnimationFactory), "IndependentVectorExplosionRotationAnimationFactory");
    IndependentVectorExplosionRotationAnimationFactory_init(this, vectorInfo, basicColor, vectorAnimationFactoryInterface);
    return this;
}


// throws Exception
void IndependentVectorExplosionRotationAnimationFactory_initMethod(IndependentVectorExplosionRotationAnimationFactory* this) {
        this->framePoints = VectorRotationGenerator_getInstance(VectorRotationGenerator_getInstance(), this->vectorInfo);
}


// throws Exception
Animation* IndependentVectorExplosionRotationAnimationFactory_getInstanceAnimation(IndependentVectorExplosionRotationAnimationFactory* this, Animation* animationInterface) {
        int32_t frame = 0;
        if (animationInterface != nullptr) {
            IndexedAnimation* rotationAnimationInterface = ((IndexedAnimation*) animationInterface);
            frame = IndexedAnimation_getFrame(rotationAnimationInterface);
        }
        int32_t*** points = VectorExplosionGenerator_getInstance(this->vectorExplosionGenerator, this->framePoints[frame], 6, this->vectorExplosionGenerator->ROTATION);
        return VectorAnimationFactoryInterface_getInstance(this->vectorAnimationFactoryInterface, points, this->basicColor);
}

