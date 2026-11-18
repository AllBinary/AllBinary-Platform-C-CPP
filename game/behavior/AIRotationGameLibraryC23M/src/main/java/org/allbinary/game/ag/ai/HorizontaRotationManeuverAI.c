// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/HorizontaRotationManeuverAI.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/ai/ArtificialIntelligence.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/RotationAnimationInterface.h"
#include "org/allbinary/animation/RotationAnimationInterfaceCompositeInterface.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#include "org/allbinary/game/physics/velocity/VelocityInterface.h"
#include "org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/math/AngleIncrementInfo.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#if __has_include("org/allbinary/game/ag/ai/AngleInfo.h")
#include "org/allbinary/game/ag/ai/AngleInfo.h"
#endif
#if __has_include("javax/microedition/lcdui/AngleInfo.h")
#include "javax/microedition/lcdui/AngleInfo.h"
#endif
#if __has_include("org/allbinary/ai/AngleInfo.h")
#include "org/allbinary/ai/AngleInfo.h"
#endif
#if __has_include("org/allbinary/ai/AngleInfo.h")
#include "org/allbinary/ai/AngleInfo.h"
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
#if __has_include("org/allbinary/game/ai/AngleInfo.h")
#include "org/allbinary/game/ai/AngleInfo.h"
#endif
#if __has_include("org/allbinary/game/input/AngleInfo.h")
#include "org/allbinary/game/input/AngleInfo.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/AngleInfo.h")
#include "org/allbinary/game/physics/velocity/AngleInfo.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/AngleInfo.h")
#include "org/allbinary/game/physics/velocity/AngleInfo.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/AngleInfo.h")
#include "org/allbinary/game/physics/velocity/AngleInfo.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/AngleInfo.h")
#include "org/allbinary/graphics/displayable/AngleInfo.h"
#endif
#if __has_include("org/allbinary/layer/AngleInfo.h")
#include "org/allbinary/layer/AngleInfo.h"
#endif
#if __has_include("org/allbinary/layer/AngleInfo.h")
#include "org/allbinary/layer/AngleInfo.h"
#endif
#if __has_include("org/allbinary/math/AngleInfo.h")
#include "org/allbinary/math/AngleInfo.h"
#endif
#if __has_include("org/allbinary/util/AngleInfo.h")
#include "org/allbinary/util/AngleInfo.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/AngleInfo.h")
#include "org/allbinary/game/ag/ai/AngleInfo.h"
#endif
#if __has_include("javax/microedition/lcdui/AngleInfo.h")
#include "javax/microedition/lcdui/AngleInfo.h"
#endif
#if __has_include("org/allbinary/ai/AngleInfo.h")
#include "org/allbinary/ai/AngleInfo.h"
#endif
#if __has_include("org/allbinary/ai/AngleInfo.h")
#include "org/allbinary/ai/AngleInfo.h"
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
#if __has_include("org/allbinary/game/ai/AngleInfo.h")
#include "org/allbinary/game/ai/AngleInfo.h"
#endif
#if __has_include("org/allbinary/game/input/AngleInfo.h")
#include "org/allbinary/game/input/AngleInfo.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/AngleInfo.h")
#include "org/allbinary/game/physics/velocity/AngleInfo.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/AngleInfo.h")
#include "org/allbinary/game/physics/velocity/AngleInfo.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/AngleInfo.h")
#include "org/allbinary/game/physics/velocity/AngleInfo.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/AngleInfo.h")
#include "org/allbinary/graphics/displayable/AngleInfo.h"
#endif
#if __has_include("org/allbinary/layer/AngleInfo.h")
#include "org/allbinary/layer/AngleInfo.h"
#endif
#if __has_include("org/allbinary/layer/AngleInfo.h")
#include "org/allbinary/layer/AngleInfo.h"
#endif
#if __has_include("org/allbinary/math/AngleInfo.h")
#include "org/allbinary/math/AngleInfo.h"
#endif
#if __has_include("org/allbinary/util/AngleInfo.h")
#include "org/allbinary/util/AngleInfo.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/AngleInfo.h")
#include "org/allbinary/game/ag/ai/AngleInfo.h"
#endif
#if __has_include("javax/microedition/lcdui/AngleInfo.h")
#include "javax/microedition/lcdui/AngleInfo.h"
#endif
#if __has_include("org/allbinary/ai/AngleInfo.h")
#include "org/allbinary/ai/AngleInfo.h"
#endif
#if __has_include("org/allbinary/ai/AngleInfo.h")
#include "org/allbinary/ai/AngleInfo.h"
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
#if __has_include("org/allbinary/game/ai/AngleInfo.h")
#include "org/allbinary/game/ai/AngleInfo.h"
#endif
#if __has_include("org/allbinary/game/input/AngleInfo.h")
#include "org/allbinary/game/input/AngleInfo.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/AngleInfo.h")
#include "org/allbinary/game/physics/velocity/AngleInfo.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/AngleInfo.h")
#include "org/allbinary/game/physics/velocity/AngleInfo.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/AngleInfo.h")
#include "org/allbinary/game/physics/velocity/AngleInfo.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/AngleInfo.h")
#include "org/allbinary/graphics/displayable/AngleInfo.h"
#endif
#if __has_include("org/allbinary/layer/AngleInfo.h")
#include "org/allbinary/layer/AngleInfo.h"
#endif
#if __has_include("org/allbinary/layer/AngleInfo.h")
#include "org/allbinary/layer/AngleInfo.h"
#endif
#if __has_include("org/allbinary/math/AngleInfo.h")
#include "org/allbinary/math/AngleInfo.h"
#endif
#if __has_include("org/allbinary/util/AngleInfo.h")
#include "org/allbinary/util/AngleInfo.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/AngleInfo.h")
#include "org/allbinary/game/ag/ai/AngleInfo.h"
#endif
#if __has_include("javax/microedition/lcdui/AngleInfo.h")
#include "javax/microedition/lcdui/AngleInfo.h"
#endif
#if __has_include("org/allbinary/ai/AngleInfo.h")
#include "org/allbinary/ai/AngleInfo.h"
#endif
#if __has_include("org/allbinary/ai/AngleInfo.h")
#include "org/allbinary/ai/AngleInfo.h"
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
#if __has_include("org/allbinary/game/ai/AngleInfo.h")
#include "org/allbinary/game/ai/AngleInfo.h"
#endif
#if __has_include("org/allbinary/game/input/AngleInfo.h")
#include "org/allbinary/game/input/AngleInfo.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/AngleInfo.h")
#include "org/allbinary/game/physics/velocity/AngleInfo.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/AngleInfo.h")
#include "org/allbinary/game/physics/velocity/AngleInfo.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/AngleInfo.h")
#include "org/allbinary/game/physics/velocity/AngleInfo.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/AngleInfo.h")
#include "org/allbinary/graphics/displayable/AngleInfo.h"
#endif
#if __has_include("org/allbinary/layer/AngleInfo.h")
#include "org/allbinary/layer/AngleInfo.h"
#endif
#if __has_include("org/allbinary/layer/AngleInfo.h")
#include "org/allbinary/layer/AngleInfo.h"
#endif
#if __has_include("org/allbinary/math/AngleInfo.h")
#include "org/allbinary/math/AngleInfo.h"
#endif
#if __has_include("org/allbinary/util/AngleInfo.h")
#include "org/allbinary/util/AngleInfo.h"
#endif







static void HorizontaRotationManeuverAI_accelerate(HorizontaRotationManeuverAI* this);

static void HorizontaRotationManeuverAI_drop(HorizontaRotationManeuverAI* this);


void HorizontaRotationManeuverAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HorizontaRotationManeuverAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HorizontaRotationManeuverAI", "BasicAI");
    java_register_method("HorizontaRotationManeuverAI", "transition", (void*) HorizontaRotationManeuverAI_transition);
    java_register_method("HorizontaRotationManeuverAI", "processAI", (void*) HorizontaRotationManeuverAI_processAI);
    java_register_method("HorizontaRotationManeuverAI", "reverse", (void*) HorizontaRotationManeuverAI_reverse);
    java_register_method("HorizontaRotationManeuverAI", "accelerate", (void*) HorizontaRotationManeuverAI_accelerate);
    java_register_method("HorizontaRotationManeuverAI", "drop", (void*) HorizontaRotationManeuverAI_drop);
    java_register_method("HorizontaRotationManeuverAI", "getId", (void*) HorizontaRotationManeuverAI_getId);
}

static void HorizontaRotationManeuverAI_initFields(HorizontaRotationManeuverAI* this) {
    this->circularIndexUtil = CircularIndexUtil_createInstanceAt(10, (Integer_staticInit(), Integer_MAX_VALUE));
    this->currentSpeedDivisor = 5;
    
    
    
}


void HorizontaRotationManeuverAI_init(HorizontaRotationManeuverAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    HorizontaRotationManeuverAI_register();
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        HorizontaRotationManeuverAI_initFields(this);
        RotationAnimationInterfaceCompositeInterface* rotationAnimationInterfaceCompositeInterface = ((RotationAnimationInterfaceCompositeInterface*) BasicAI_getOwnerLayerInterface(this));
        this->rotationAnimationInterface = RotationAnimationInterfaceCompositeInterface_getRotationAnimationInterface(rotationAnimationInterfaceCompositeInterface);
        VelocityInterfaceCompositeInterface* velocityInterfaceCompositeInterface = ((VelocityInterfaceCompositeInterface*) BasicAI_getOwnerLayerInterface(this));
        this->baseVelocityInterface = VelocityInterfaceCompositeInterface_getVelocityProperties(velocityInterfaceCompositeInterface);
        this->velocityInterface = ((VelocityInterface*) this->baseVelocityInterface);
        RotationAnimationInterface* rotationAnimationInterface = ((RotationAnimationInterface*) this->rotationAnimationInterface);
        AngleIncrementInfo* angleIncrementInfo = AngleInfo_getAngleIncrementInfo(RotationAnimationInterface_getAngleInfoP(rotationAnimationInterface));
        RotationAnimationInterfaceCompositeInterface_setFrame(rotationAnimationInterfaceCompositeInterface, Integer_intValue(angleIncrementInfo->RIGHT_FRAME));
}

HorizontaRotationManeuverAI* HorizontaRotationManeuverAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    HorizontaRotationManeuverAI* this = java_object_alloc(sizeof(HorizontaRotationManeuverAI), "HorizontaRotationManeuverAI");
    HorizontaRotationManeuverAI_init(this, ownerLayerInterface, gameInput);
    return this;
}


void HorizontaRotationManeuverAI_transition(HorizontaRotationManeuverAI* this) {
        RotationAnimationInterface* rotationAnimationInterface = ((RotationAnimationInterface*) this->rotationAnimationInterface);
        AngleIncrementInfo* angleIncrementInfo = AngleInfo_getAngleIncrementInfo(RotationAnimationInterface_getAngleInfoP(rotationAnimationInterface));
        RotationAnimationInterfaceCompositeInterface* rotationAnimationInterfaceCompositeInterface = ((RotationAnimationInterfaceCompositeInterface*) BasicAI_getOwnerLayerInterface(this));
        RotationAnimationInterfaceCompositeInterface_setFrame(rotationAnimationInterfaceCompositeInterface, Integer_intValue(angleIncrementInfo->RIGHT_FRAME));
        AllBinaryLayer* allbinaryLayer = BasicAI_getOwnerLayerInterface(this);
        AllBinaryLayer_setPosition(allbinaryLayer, AllBinaryLayer_getXP(allbinaryLayer), 1, AllBinaryLayer_getZP(allbinaryLayer));
}


// throws Exception
void HorizontaRotationManeuverAI_processAI(HorizontaRotationManeuverAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        RotationAnimationInterface* rotationAnimationInterface = (((RotationAnimationInterface*) this->rotationAnimationInterface));
        AngleIncrementInfo* angleIncrementInfo = AngleInfo_getAngleIncrementInfo(RotationAnimationInterface_getAngleInfoP(rotationAnimationInterface));
        int32_t frame = IndexedAnimation_getFrame(this->rotationAnimationInterface);
        AllBinaryLayer* ownerLayerInterface = BasicAI_getOwnerLayerInterface(this);
        if (AllBinaryLayer_getXP(ownerLayerInterface) - AllBinaryLayer_getWidth(ownerLayerInterface) <= 0 && frame == Integer_intValue(angleIncrementInfo->LEFT_FRAME)) {
            HorizontaRotationManeuverAI_reverse(this);
            HorizontaRotationManeuverAI_drop(this);
        }
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        if (AllBinaryLayer_getX2(ownerLayerInterface) + AllBinaryLayer_getWidth(ownerLayerInterface) > DisplayInfoSingleton_getLastWidth(displayInfo) && frame == Integer_intValue(angleIncrementInfo->RIGHT_FRAME)) {
            HorizontaRotationManeuverAI_reverse(this);
            HorizontaRotationManeuverAI_accelerate(this);
            HorizontaRotationManeuverAI_drop(this);
        }
        int32_t index = CircularIndexUtil_getIndex(this->circularIndexUtil);
        if (index % this->currentSpeedDivisor == 0 && index % 2 == 0) {
            BasicAI_processKeyAI((&this->base), (Canvas_staticInit(), Canvas_UP));
            VelocityInterface_limitMaxXYVelocity(this->velocityInterface, VelocityInterface_getMaxForwardVelocity(this->velocityInterface) / this->currentSpeedDivisor);
        }
        CircularIndexUtil_next(this->circularIndexUtil);
        if (frame == Integer_intValue(angleIncrementInfo->LEFT_FRAME)) {
            BasicAI_processKeyAI((&this->base), (Canvas_staticInit(), Canvas_KEY_NUM0));
        } else if (frame == Integer_intValue(angleIncrementInfo->RIGHT_FRAME)) {
            BasicAI_processKeyAI((&this->base), (Canvas_staticInit(), Canvas_KEY_POUND));
        }
}


void HorizontaRotationManeuverAI_reverse(HorizontaRotationManeuverAI* this) {
        RotationAnimationInterface* rotationAnimationInterface = ((RotationAnimationInterface*) this->rotationAnimationInterface);
        AngleIncrementInfo* angleIncrementInfo = AngleInfo_getAngleIncrementInfo(RotationAnimationInterface_getAngleInfoP(rotationAnimationInterface));
        int32_t frame = IndexedAnimation_getFrame(this->rotationAnimationInterface);
        if (frame == Integer_intValue(angleIncrementInfo->LEFT_FRAME)) {
            RotationAnimationInterfaceCompositeInterface* rotationAnimationInterfaceCompositeInterface = ((RotationAnimationInterfaceCompositeInterface*) BasicAI_getOwnerLayerInterface(this));
            RotationAnimationInterfaceCompositeInterface_setFrame(rotationAnimationInterfaceCompositeInterface, Integer_intValue(angleIncrementInfo->RIGHT_FRAME));
            BasicVelocityProperties_zero(this->baseVelocityInterface);
        } else if (frame == Integer_intValue(angleIncrementInfo->RIGHT_FRAME)) {
            RotationAnimationInterfaceCompositeInterface* rotationAnimationInterfaceCompositeInterface = ((RotationAnimationInterfaceCompositeInterface*) BasicAI_getOwnerLayerInterface(this));
            RotationAnimationInterfaceCompositeInterface_setFrame(rotationAnimationInterfaceCompositeInterface, Integer_intValue(angleIncrementInfo->LEFT_FRAME));
            BasicVelocityProperties_zero(this->baseVelocityInterface);
        }
}


static void HorizontaRotationManeuverAI_accelerate(HorizontaRotationManeuverAI* this) {
        if (this->currentSpeedDivisor > 1) {
            this->currentSpeedDivisor--;
        }
}


static void HorizontaRotationManeuverAI_drop(HorizontaRotationManeuverAI* this) {
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        AllBinaryLayer* ownerLayerInterface = BasicAI_getOwnerLayerInterface(this);
        int32_t y = AllBinaryLayer_getYP(ownerLayerInterface);
        if (AllBinaryLayer_getY2(ownerLayerInterface) + AllBinaryLayer_getHeight(ownerLayerInterface) > DisplayInfoSingleton_getLastHeight(displayInfo)) {
            y = 0;
        } else {
            y += AllBinaryLayer_getHeight(ownerLayerInterface) + 1;
        }
        AllBinaryLayer_setPosition(ownerLayerInterface, AllBinaryLayer_getXP(ownerLayerInterface), y, AllBinaryLayer_getZP(ownerLayerInterface));
}


int32_t HorizontaRotationManeuverAI_getId(HorizontaRotationManeuverAI* this) {
        return (ArtificialIntelligence_staticInit(), ArtificialIntelligence_AI_ID);
}

