// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/LurchRotationAI.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/RotationAnimationInterface.h"
#include "org/allbinary/animation/RotationAnimationInterfaceCompositeInterface.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/math/AngleIncrementInfo.h"
#if __has_include("org/allbinary/game/ag/ai/AngleInfo.h")
#include "org/allbinary/game/ag/ai/AngleInfo.h"
#endif
#if __has_include("org/allbinary/animation/AngleInfo.h")
#include "org/allbinary/animation/AngleInfo.h"
#endif
#if __has_include("org/allbinary/animation/AngleInfo.h")
#include "org/allbinary/animation/AngleInfo.h"
#endif
#if __has_include("org/allbinary/animation/AngleInfo.h")
#include "org/allbinary/animation/AngleInfo.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/tactical/AngleInfo.h")
#include "org/allbinary/game/ag/ai/tactical/AngleInfo.h"
#endif
#if __has_include("org/allbinary/game/input/AngleInfo.h")
#include "org/allbinary/game/input/AngleInfo.h"
#endif
#if __has_include("org/allbinary/layer/AngleInfo.h")
#include "org/allbinary/layer/AngleInfo.h"
#endif
#if __has_include("org/allbinary/math/AngleInfo.h")
#include "org/allbinary/math/AngleInfo.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/AngleInfo.h")
#include "org/allbinary/game/ag/ai/AngleInfo.h"
#endif
#if __has_include("org/allbinary/animation/AngleInfo.h")
#include "org/allbinary/animation/AngleInfo.h"
#endif
#if __has_include("org/allbinary/animation/AngleInfo.h")
#include "org/allbinary/animation/AngleInfo.h"
#endif
#if __has_include("org/allbinary/animation/AngleInfo.h")
#include "org/allbinary/animation/AngleInfo.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/tactical/AngleInfo.h")
#include "org/allbinary/game/ag/ai/tactical/AngleInfo.h"
#endif
#if __has_include("org/allbinary/game/input/AngleInfo.h")
#include "org/allbinary/game/input/AngleInfo.h"
#endif
#if __has_include("org/allbinary/layer/AngleInfo.h")
#include "org/allbinary/layer/AngleInfo.h"
#endif
#if __has_include("org/allbinary/math/AngleInfo.h")
#include "org/allbinary/math/AngleInfo.h"
#endif





static void LurchRotationAI_update(LurchRotationAI* this);

void LurchRotationAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LurchRotationAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LurchRotationAI", "LurchAI");
    java_register_method("LurchRotationAI", "reverse", (void*) LurchRotationAI_reverse);
    java_register_method("LurchRotationAI", "update", (void*) LurchRotationAI_update);
}

static void LurchRotationAI_initFields(LurchRotationAI* this) {
    
}


void LurchRotationAI_init(LurchRotationAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    LurchRotationAI_register();
        LurchAI_init(&this->base, ownerLayerInterface, gameInput);
        LurchRotationAI_initFields(this);
        RotationAnimationInterfaceCompositeInterface* rotationAnimationInterfaceCompositeInterface = ((RotationAnimationInterfaceCompositeInterface*) BasicAI_getOwnerLayerInterface(this));
        this->rotationAnimationInterface = RotationAnimationInterfaceCompositeInterface_getRotationAnimationInterface(rotationAnimationInterfaceCompositeInterface);
        LurchRotationAI_update(this);
}

LurchRotationAI* LurchRotationAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    LurchRotationAI* this = java_object_alloc(sizeof(LurchRotationAI), "LurchRotationAI");
    LurchRotationAI_init(this, ownerLayerInterface, gameInput);
    return this;
}


void LurchRotationAI_reverse(LurchRotationAI* this) {
        LurchAI_reverse((&this->base));
        LurchRotationAI_update(this);
}


static void LurchRotationAI_update(LurchRotationAI* this) {
        if (this->base.currentRelativeAngle == 0) {
            RotationAnimationInterface* rotationAnimationInterface = ((RotationAnimationInterface*) this->rotationAnimationInterface);
            AngleIncrementInfo* angleIncrementInfo = AngleInfo_getAngleIncrementInfo(RotationAnimationInterface_getAngleInfoP(rotationAnimationInterface));
            RotationAnimationInterfaceCompositeInterface* rotationAnimationInterfaceCompositeInterface = ((RotationAnimationInterfaceCompositeInterface*) BasicAI_getOwnerLayerInterface(this));
            RotationAnimationInterfaceCompositeInterface_setFrame(rotationAnimationInterfaceCompositeInterface, Integer_intValue(angleIncrementInfo->RIGHT_FRAME));
        } else if (this->base.currentRelativeAngle == 180) {
            RotationAnimationInterface* rotationAnimationInterface = ((RotationAnimationInterface*) this->rotationAnimationInterface);
            AngleIncrementInfo* angleIncrementInfo = AngleInfo_getAngleIncrementInfo(RotationAnimationInterface_getAngleInfoP(rotationAnimationInterface));
            RotationAnimationInterfaceCompositeInterface* rotationAnimationInterfaceCompositeInterface = ((RotationAnimationInterfaceCompositeInterface*) BasicAI_getOwnerLayerInterface(this));
            RotationAnimationInterfaceCompositeInterface_setFrame(rotationAnimationInterfaceCompositeInterface, Integer_intValue(angleIncrementInfo->LEFT_FRAME));
        }
}

