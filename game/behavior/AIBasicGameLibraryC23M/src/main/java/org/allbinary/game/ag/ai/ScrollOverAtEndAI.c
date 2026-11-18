// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/ScrollOverAtEndAI.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"





void ScrollOverAtEndAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ScrollOverAtEndAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScrollOverAtEndAI", "BasicAI");
    java_register_method("ScrollOverAtEndAI", "processAI", (void*) ScrollOverAtEndAI_processAI);
}


void ScrollOverAtEndAI_init(ScrollOverAtEndAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    ScrollOverAtEndAI_register();
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
}

ScrollOverAtEndAI* ScrollOverAtEndAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    ScrollOverAtEndAI* this = java_object_alloc(sizeof(ScrollOverAtEndAI), "ScrollOverAtEndAI");
    ScrollOverAtEndAI_init(this, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void ScrollOverAtEndAI_processAI(ScrollOverAtEndAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        AllBinaryLayer* ownerLayerInterface = BasicAI_getOwnerLayerInterface(this);
        int32_t x = AllBinaryLayer_getXP(ownerLayerInterface);
        int32_t y = AllBinaryLayer_getYP(ownerLayerInterface);
        int32_t width = AllBinaryLayer_getWidth(ownerLayerInterface);
        int32_t height = AllBinaryLayer_getHeight(ownerLayerInterface);
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        if (x > DisplayInfoSingleton_getLastWidth(displayInfo)) {
            AllBinaryLayer_setPosition(ownerLayerInterface, 0, y, AllBinaryLayer_getZP(ownerLayerInterface));
        }
        if (y > DisplayInfoSingleton_getLastHeight(displayInfo)) {
            AllBinaryLayer_setPosition(ownerLayerInterface, x, 0, AllBinaryLayer_getZP(ownerLayerInterface));
        }
        if (x < -width) {
            AllBinaryLayer_setPosition(ownerLayerInterface, DisplayInfoSingleton_getLastWidth(displayInfo) - width, y, AllBinaryLayer_getZP(ownerLayerInterface));
        }
        if (y < -height) {
            AllBinaryLayer_setPosition(ownerLayerInterface, x, DisplayInfoSingleton_getLastHeight(displayInfo) - height, AllBinaryLayer_getZP(ownerLayerInterface));
        }
}

