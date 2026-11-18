// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/StopAtEdgeAI.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#include "org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#if __has_include("org/allbinary/game/ag/ai/BasicDecimal.h")
#include "org/allbinary/game/ag/ai/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/ai/BasicDecimal.h")
#include "org/allbinary/game/ai/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/input/BasicDecimal.h")
#include "org/allbinary/game/input/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/BasicDecimal.h")
#include "org/allbinary/game/physics/velocity/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/BasicDecimal.h")
#include "org/allbinary/game/physics/velocity/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/BasicDecimal.h")
#include "org/allbinary/graphics/displayable/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/layer/BasicDecimal.h")
#include "org/allbinary/layer/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/layer/BasicDecimal.h")
#include "org/allbinary/layer/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/BasicDecimal.h")
#include "org/allbinary/game/ag/ai/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/ai/BasicDecimal.h")
#include "org/allbinary/game/ai/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/input/BasicDecimal.h")
#include "org/allbinary/game/input/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/BasicDecimal.h")
#include "org/allbinary/game/physics/velocity/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/BasicDecimal.h")
#include "org/allbinary/game/physics/velocity/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/BasicDecimal.h")
#include "org/allbinary/graphics/displayable/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/layer/BasicDecimal.h")
#include "org/allbinary/layer/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/layer/BasicDecimal.h")
#include "org/allbinary/layer/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/BasicDecimal.h")
#include "org/allbinary/game/ag/ai/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/ai/BasicDecimal.h")
#include "org/allbinary/game/ai/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/input/BasicDecimal.h")
#include "org/allbinary/game/input/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/BasicDecimal.h")
#include "org/allbinary/game/physics/velocity/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/BasicDecimal.h")
#include "org/allbinary/game/physics/velocity/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/BasicDecimal.h")
#include "org/allbinary/graphics/displayable/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/layer/BasicDecimal.h")
#include "org/allbinary/layer/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/layer/BasicDecimal.h")
#include "org/allbinary/layer/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/BasicDecimal.h")
#include "org/allbinary/game/ag/ai/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/ai/BasicDecimal.h")
#include "org/allbinary/game/ai/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/input/BasicDecimal.h")
#include "org/allbinary/game/input/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/BasicDecimal.h")
#include "org/allbinary/game/physics/velocity/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/BasicDecimal.h")
#include "org/allbinary/game/physics/velocity/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/BasicDecimal.h")
#include "org/allbinary/graphics/displayable/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/layer/BasicDecimal.h")
#include "org/allbinary/layer/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/layer/BasicDecimal.h")
#include "org/allbinary/layer/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/BasicDecimal.h")
#include "org/allbinary/game/ag/ai/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/ai/BasicDecimal.h")
#include "org/allbinary/game/ai/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/input/BasicDecimal.h")
#include "org/allbinary/game/input/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/BasicDecimal.h")
#include "org/allbinary/game/physics/velocity/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/BasicDecimal.h")
#include "org/allbinary/game/physics/velocity/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/BasicDecimal.h")
#include "org/allbinary/graphics/displayable/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/layer/BasicDecimal.h")
#include "org/allbinary/layer/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/layer/BasicDecimal.h")
#include "org/allbinary/layer/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/BasicDecimal.h")
#include "org/allbinary/game/ag/ai/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/ai/BasicDecimal.h")
#include "org/allbinary/game/ai/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/input/BasicDecimal.h")
#include "org/allbinary/game/input/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/BasicDecimal.h")
#include "org/allbinary/game/physics/velocity/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/BasicDecimal.h")
#include "org/allbinary/game/physics/velocity/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/BasicDecimal.h")
#include "org/allbinary/graphics/displayable/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/layer/BasicDecimal.h")
#include "org/allbinary/layer/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/layer/BasicDecimal.h")
#include "org/allbinary/layer/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/BasicDecimal.h")
#include "org/allbinary/game/ag/ai/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/ai/BasicDecimal.h")
#include "org/allbinary/game/ai/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/input/BasicDecimal.h")
#include "org/allbinary/game/input/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/BasicDecimal.h")
#include "org/allbinary/game/physics/velocity/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/BasicDecimal.h")
#include "org/allbinary/game/physics/velocity/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/BasicDecimal.h")
#include "org/allbinary/graphics/displayable/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/layer/BasicDecimal.h")
#include "org/allbinary/layer/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/layer/BasicDecimal.h")
#include "org/allbinary/layer/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/BasicDecimal.h")
#include "org/allbinary/game/ag/ai/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/ai/BasicDecimal.h")
#include "org/allbinary/game/ai/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/input/BasicDecimal.h")
#include "org/allbinary/game/input/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/BasicDecimal.h")
#include "org/allbinary/game/physics/velocity/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/BasicDecimal.h")
#include "org/allbinary/game/physics/velocity/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/BasicDecimal.h")
#include "org/allbinary/graphics/displayable/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/layer/BasicDecimal.h")
#include "org/allbinary/layer/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/layer/BasicDecimal.h")
#include "org/allbinary/layer/BasicDecimal.h"
#endif





void StopAtEdgeAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void StopAtEdgeAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("StopAtEdgeAI", "BasicAI");
    java_register_method("StopAtEdgeAI", "processAI", (void*) StopAtEdgeAI_processAI);
}


void StopAtEdgeAI_init(StopAtEdgeAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    StopAtEdgeAI_register();
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
}

StopAtEdgeAI* StopAtEdgeAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    StopAtEdgeAI* this = java_object_alloc(sizeof(StopAtEdgeAI), "StopAtEdgeAI");
    StopAtEdgeAI_init(this, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void StopAtEdgeAI_processAI(StopAtEdgeAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        AllBinaryLayer* ownerLayerInterface = BasicAI_getOwnerLayerInterface(this);
        VelocityInterfaceCompositeInterface* velocityInterfaceCompositeInterface = (((VelocityInterfaceCompositeInterface*) ownerLayerInterface));
        BasicVelocityProperties* velocityProperties = VelocityInterfaceCompositeInterface_getVelocityProperties(velocityInterfaceCompositeInterface);
        int32_t x = AllBinaryLayer_getXP(ownerLayerInterface);
        int32_t y = AllBinaryLayer_getYP(ownerLayerInterface);
        int32_t x2 = AllBinaryLayer_getX2(ownerLayerInterface);
        int32_t y2 = AllBinaryLayer_getY2(ownerLayerInterface);
        int32_t width = AllBinaryLayer_getWidth(ownerLayerInterface);
        int32_t height = AllBinaryLayer_getHeight(ownerLayerInterface);
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        if (x2 + BasicDecimal_getScaled(BasicVelocityProperties_getVelocityXBasicDecimalP(velocityProperties)) > DisplayInfoSingleton_getLastWidth(displayInfo)) {
            AllBinaryLayer_setPosition(ownerLayerInterface, DisplayInfoSingleton_getLastWidth(displayInfo) - width, y, AllBinaryLayer_getZP(ownerLayerInterface));
            BasicDecimal_setint(BasicVelocityProperties_getVelocityYBasicDecimalP(velocityProperties), 0);
        }
        if (y2 + BasicDecimal_getScaled(BasicVelocityProperties_getVelocityYBasicDecimalP(velocityProperties)) > DisplayInfoSingleton_getLastHeight(displayInfo)) {
            AllBinaryLayer_setPosition(ownerLayerInterface, x, DisplayInfoSingleton_getLastHeight(displayInfo) - height, AllBinaryLayer_getZP(ownerLayerInterface));
            BasicDecimal_setint(BasicVelocityProperties_getVelocityXBasicDecimalP(velocityProperties), 0);
        }
        if (x + BasicDecimal_getScaled(BasicVelocityProperties_getVelocityXBasicDecimalP(velocityProperties)) < 0) {
            AllBinaryLayer_setPosition(ownerLayerInterface, 0, y, AllBinaryLayer_getZP(ownerLayerInterface));
            BasicDecimal_setint(BasicVelocityProperties_getVelocityYBasicDecimalP(velocityProperties), 0);
        }
        if (y + BasicDecimal_getScaled(BasicVelocityProperties_getVelocityYBasicDecimalP(velocityProperties)) < 0) {
            AllBinaryLayer_setPosition(ownerLayerInterface, x, 0, AllBinaryLayer_getZP(ownerLayerInterface));
            BasicDecimal_setint(BasicVelocityProperties_getVelocityXBasicDecimalP(velocityProperties), 0);
        }
}

