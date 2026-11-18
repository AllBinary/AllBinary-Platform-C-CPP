// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/ScrollOverAtHalfAI.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"





void ScrollOverAtHalfAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ScrollOverAtHalfAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScrollOverAtHalfAI", "BasicAI");
    java_register_method("ScrollOverAtHalfAI", "processAI", (void*) ScrollOverAtHalfAI_processAI);
}


void ScrollOverAtHalfAI_init(ScrollOverAtHalfAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    ScrollOverAtHalfAI_register();
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
}

ScrollOverAtHalfAI* ScrollOverAtHalfAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    ScrollOverAtHalfAI* this = java_object_alloc(sizeof(ScrollOverAtHalfAI), "ScrollOverAtHalfAI");
    ScrollOverAtHalfAI_init(this, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void ScrollOverAtHalfAI_processAI(ScrollOverAtHalfAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        AllBinaryLayer* ownerLayerInterface = BasicAI_getOwnerLayerInterface(this);
        int32_t x = AllBinaryLayer_getXP(ownerLayerInterface);
        int32_t y = AllBinaryLayer_getYP(ownerLayerInterface);
        int32_t halfWidth = AllBinaryLayer_getHalfWidth(ownerLayerInterface);
        int32_t halfHeight = AllBinaryLayer_getHalfHeight(ownerLayerInterface);
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        if (x > DisplayInfoSingleton_getLastWidth(displayInfo) - halfWidth) {
            AllBinaryLayer_setPosition(ownerLayerInterface, halfWidth + 1, y, AllBinaryLayer_getZP(ownerLayerInterface));
        }
        if (y > DisplayInfoSingleton_getLastHeight(displayInfo) - halfHeight) {
            AllBinaryLayer_setPosition(ownerLayerInterface, x, halfHeight + 1, AllBinaryLayer_getZP(ownerLayerInterface));
        }
        if (x < -halfWidth) {
            AllBinaryLayer_setPosition(ownerLayerInterface, DisplayInfoSingleton_getLastWidth(displayInfo) - halfWidth, y, AllBinaryLayer_getZP(ownerLayerInterface));
        }
        if (y < -halfHeight) {
            AllBinaryLayer_setPosition(ownerLayerInterface, x, DisplayInfoSingleton_getLastHeight(displayInfo) - halfHeight, AllBinaryLayer_getZP(ownerLayerInterface));
        }
}

