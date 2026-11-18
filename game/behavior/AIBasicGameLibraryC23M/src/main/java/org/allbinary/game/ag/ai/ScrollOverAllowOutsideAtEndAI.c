// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/ScrollOverAllowOutsideAtEndAI.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"





void ScrollOverAllowOutsideAtEndAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ScrollOverAllowOutsideAtEndAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScrollOverAllowOutsideAtEndAI", "BasicAI");
    java_register_method("ScrollOverAllowOutsideAtEndAI", "processAI", (void*) ScrollOverAllowOutsideAtEndAI_processAI);
}


void ScrollOverAllowOutsideAtEndAI_init(ScrollOverAllowOutsideAtEndAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    ScrollOverAllowOutsideAtEndAI_register();
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
}

ScrollOverAllowOutsideAtEndAI* ScrollOverAllowOutsideAtEndAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    ScrollOverAllowOutsideAtEndAI* this = java_object_alloc(sizeof(ScrollOverAllowOutsideAtEndAI), "ScrollOverAllowOutsideAtEndAI");
    ScrollOverAllowOutsideAtEndAI_init(this, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void ScrollOverAllowOutsideAtEndAI_processAI(ScrollOverAllowOutsideAtEndAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        AllBinaryLayer* ownerLayerInterface = BasicAI_getOwnerLayerInterface(this);
        int32_t x = AllBinaryLayer_getXP(ownerLayerInterface);
        int32_t y = AllBinaryLayer_getYP(ownerLayerInterface);
        int32_t width = AllBinaryLayer_getWidth(ownerLayerInterface);
        int32_t height = AllBinaryLayer_getHeight(ownerLayerInterface);
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        if (x > DisplayInfoSingleton_getLastWidth(displayInfo)) {
            AllBinaryLayer_setPosition(ownerLayerInterface, -width, y, AllBinaryLayer_getZP(ownerLayerInterface));
        }
        if (y > DisplayInfoSingleton_getLastHeight(displayInfo)) {
            AllBinaryLayer_setPosition(ownerLayerInterface, x, -height, AllBinaryLayer_getZP(ownerLayerInterface));
        }
        if (x < -width) {
            AllBinaryLayer_setPosition(ownerLayerInterface, DisplayInfoSingleton_getLastWidth(displayInfo) + width, y, AllBinaryLayer_getZP(ownerLayerInterface));
        }
        if (y < -height) {
            AllBinaryLayer_setPosition(ownerLayerInterface, x, DisplayInfoSingleton_getLastHeight(displayInfo) + height, AllBinaryLayer_getZP(ownerLayerInterface));
        }
}

