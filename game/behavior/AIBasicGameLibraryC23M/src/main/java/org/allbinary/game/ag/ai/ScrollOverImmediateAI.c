// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/ScrollOverImmediateAI.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"





void ScrollOverImmediateAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ScrollOverImmediateAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScrollOverImmediateAI", "BasicAI");
    java_register_method("ScrollOverImmediateAI", "processAI", (void*) ScrollOverImmediateAI_processAI);
}


void ScrollOverImmediateAI_init(ScrollOverImmediateAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    ScrollOverImmediateAI_register();
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
}

ScrollOverImmediateAI* ScrollOverImmediateAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    ScrollOverImmediateAI* this = java_object_alloc(sizeof(ScrollOverImmediateAI), "ScrollOverImmediateAI");
    ScrollOverImmediateAI_init(this, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void ScrollOverImmediateAI_processAI(ScrollOverImmediateAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        AllBinaryLayer* ownerLayerInterface = BasicAI_getOwnerLayerInterface(this);
        int32_t x = AllBinaryLayer_getXP(ownerLayerInterface);
        int32_t y = AllBinaryLayer_getYP(ownerLayerInterface);
        int32_t x2 = AllBinaryLayer_getX2(ownerLayerInterface);
        int32_t y2 = AllBinaryLayer_getY2(ownerLayerInterface);
        int32_t width = AllBinaryLayer_getWidth(ownerLayerInterface);
        int32_t height = AllBinaryLayer_getHeight(ownerLayerInterface);
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        if (x2 > DisplayInfoSingleton_getLastWidth(displayInfo)) {
            AllBinaryLayer_setPosition(ownerLayerInterface, 0, y, AllBinaryLayer_getZP(ownerLayerInterface));
        }
        if (y2 > DisplayInfoSingleton_getLastHeight(displayInfo)) {
            AllBinaryLayer_setPosition(ownerLayerInterface, x, 0, AllBinaryLayer_getZP(ownerLayerInterface));
        }
        if (x < 0) {
            AllBinaryLayer_setPosition(ownerLayerInterface, DisplayInfoSingleton_getLastWidth(displayInfo) - width, y, AllBinaryLayer_getZP(ownerLayerInterface));
        }
        if (y < 0) {
            AllBinaryLayer_setPosition(ownerLayerInterface, x, DisplayInfoSingleton_getLastHeight(displayInfo) - height, AllBinaryLayer_getZP(ownerLayerInterface));
        }
}

