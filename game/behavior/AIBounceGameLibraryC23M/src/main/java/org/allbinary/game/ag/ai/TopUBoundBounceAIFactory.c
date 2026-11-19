// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/TopUBoundBounceAIFactory.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/bounds/TopULayerBounds.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/physics/velocity/VelocityInterface.h"
#include "org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/ag/ai/BoundBounceAI.h"
#include "org/allbinary/game/ag/ai/ReverseVelocityBoundsVisitor.h"
#if __has_include("org/allbinary/game/ag/ai/BasicDecimal.h")
#include "org/allbinary/game/ag/ai/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/ai/BasicDecimal.h")
#include "org/allbinary/ai/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/bounds/BasicDecimal.h")
#include "org/allbinary/bounds/BasicDecimal.h"
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
#if __has_include("org/allbinary/graphics/BasicDecimal.h")
#include "org/allbinary/graphics/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/graphics/BasicDecimal.h")
#include "org/allbinary/graphics/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/graphics/BasicDecimal.h")
#include "org/allbinary/graphics/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/BasicDecimal.h")
#include "org/allbinary/graphics/displayable/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/layer/BasicDecimal.h")
#include "org/allbinary/layer/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/util/BasicDecimal.h")
#include "org/allbinary/util/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/graphics/PointFactory.h")
#include "org/allbinary/graphics/PointFactory.h"
#endif




void TopUBoundBounceAIFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TopUBoundBounceAIFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TopUBoundBounceAIFactory", nullptr);
    java_register_method("TopUBoundBounceAIFactory", "getInstance", (void*) TopUBoundBounceAIFactory_getInstance);
}

void TopUBoundBounceAIFactory_init(TopUBoundBounceAIFactory* this) {
    TopUBoundBounceAIFactory_register();
}

TopUBoundBounceAIFactory* TopUBoundBounceAIFactory_new(void) {
    TopUBoundBounceAIFactory* this = java_object_alloc(sizeof(TopUBoundBounceAIFactory), "TopUBoundBounceAIFactory");
    TopUBoundBounceAIFactory_init(this);
    return this;
}


// throws Exception
ArtificialIntelligenceInterface* TopUBoundBounceAIFactory_getInstance(TopUBoundBounceAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        VelocityInterfaceCompositeInterface* velocityInterfaceCompositeInterface = ((VelocityInterfaceCompositeInterface*) ownerLayerInterface);
        VelocityInterface* velocityInterface = ((VelocityInterface*) VelocityInterfaceCompositeInterface_getVelocityProperties(velocityInterfaceCompositeInterface));
        int32_t maxDistancePerTick = (VelocityInterface_getMaxForwardVelocity(velocityInterface) >> BasicDecimal_getScaledFactor(BasicVelocityInterface_getVelocityXBasicDecimalP(velocityInterface)));
        int32_t halfWidth = AllBinaryLayer_getWidth(ownerLayerInterface) * 2 + maxDistancePerTick + 1;
        int32_t halfHeight = AllBinaryLayer_getHeight(ownerLayerInterface) * 2 + maxDistancePerTick + 1;
        GPoint* point = PointFactory_createXY(PointFactory_getInstance(), halfWidth, halfHeight + 60);
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        Rectangle* rectangle = Rectangle_new(point, (DisplayInfoSingleton_getLastWidth(displayInfo) - halfWidth - GPoint_getX(point)), (DisplayInfoSingleton_getLastHeight(displayInfo) - halfHeight - GPoint_getY(point)));
        return BoundBounceAI_new(ownerLayerInterface, gameInput, TopULayerBounds_new(rectangle), ReverseVelocityBoundsVisitor_new(ownerLayerInterface));
}

