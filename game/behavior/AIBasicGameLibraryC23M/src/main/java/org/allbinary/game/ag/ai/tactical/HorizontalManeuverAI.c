// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/tactical/HorizontalManeuverAI.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif






static void HorizontalManeuverAI_accelerate(HorizontalManeuverAI* this);

static void HorizontalManeuverAI_drop(HorizontalManeuverAI* this);

void HorizontalManeuverAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HorizontalManeuverAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HorizontalManeuverAI", "BasicAI");
    java_register_method("HorizontalManeuverAI", "processAI", (void*) HorizontalManeuverAI_processAI);
    java_register_method("HorizontalManeuverAI", "reverse", (void*) HorizontalManeuverAI_reverse);
    java_register_method("HorizontalManeuverAI", "accelerate", (void*) HorizontalManeuverAI_accelerate);
    java_register_method("HorizontalManeuverAI", "drop", (void*) HorizontalManeuverAI_drop);
}

static void HorizontalManeuverAI_initFields(HorizontalManeuverAI* this) {
    this->currentRelativeAngle = 0;
    
}


void HorizontalManeuverAI_init(HorizontalManeuverAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    HorizontalManeuverAI_register();
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        HorizontalManeuverAI_initFields(this);
        this->currentSpeed = 5;
}

HorizontalManeuverAI* HorizontalManeuverAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    HorizontalManeuverAI* this = java_object_alloc(sizeof(HorizontalManeuverAI), "HorizontalManeuverAI");
    HorizontalManeuverAI_init(this, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void HorizontalManeuverAI_processAI(HorizontalManeuverAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        AllBinaryLayer* ownerLayerInterface = BasicAI_getOwnerLayerInterface(this);
        int32_t x = AllBinaryLayer_getXP(ownerLayerInterface);
        if (AllBinaryLayer_getXP(ownerLayerInterface) - this->currentSpeed <= 0) {
            HorizontalManeuverAI_reverse(this);
            HorizontalManeuverAI_drop(this);
        }
        if (AllBinaryLayer_getX2(ownerLayerInterface) + this->currentSpeed > DisplayInfoSingleton_getLastWidth(DisplayInfoSingleton_getInstance())) {
            HorizontalManeuverAI_reverse(this);
            HorizontalManeuverAI_accelerate(this);
            HorizontalManeuverAI_drop(this);
        }
        if (this->currentRelativeAngle == 0) {
            x += this->currentSpeed;
        } else if (this->currentRelativeAngle == 180) {
            x -= this->currentSpeed;
        }
        AllBinaryLayer_setPosition(ownerLayerInterface, x, AllBinaryLayer_getYP(ownerLayerInterface), AllBinaryLayer_getZP(ownerLayerInterface));
        if (this->currentRelativeAngle == 0) {
            BasicAI_processKeyAI((&this->base), (Canvas_staticInit(), Canvas_KEY_NUM0));
        } else if (this->currentRelativeAngle == 180) {
            BasicAI_processKeyAI((&this->base), (Canvas_staticInit(), Canvas_KEY_POUND));
        }
}


void HorizontalManeuverAI_reverse(HorizontalManeuverAI* this) {
        if (this->currentRelativeAngle == 180) {
            this->currentRelativeAngle = 0;
        } else if (this->currentRelativeAngle == 0) {
            this->currentRelativeAngle = 180;
        }
}


static void HorizontalManeuverAI_accelerate(HorizontalManeuverAI* this) {
        if (this->currentSpeed < 20) {
            this->currentSpeed++;
        }
}


static void HorizontalManeuverAI_drop(HorizontalManeuverAI* this) {
        AllBinaryLayer* ownerLayerInterface = BasicAI_getOwnerLayerInterface(this);
        int32_t y = AllBinaryLayer_getYP(ownerLayerInterface);
        if (AllBinaryLayer_getY2(ownerLayerInterface) + AllBinaryLayer_getHeight(ownerLayerInterface) > DisplayInfoSingleton_getLastHeight(DisplayInfoSingleton_getInstance())) {
            y = 0;
        } else {
            y += AllBinaryLayer_getHeight(ownerLayerInterface) + 1;
        }
        AllBinaryLayer_setPosition(ownerLayerInterface, AllBinaryLayer_getXP(ownerLayerInterface), y, AllBinaryLayer_getZP(ownerLayerInterface));
}

