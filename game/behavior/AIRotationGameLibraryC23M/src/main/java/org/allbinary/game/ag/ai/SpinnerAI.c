// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/SpinnerAI.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"





void SpinnerAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpinnerAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpinnerAI", "BasicAI");
    java_register_method("SpinnerAI", "processAI", (void*) SpinnerAI_processAI);
}

static void SpinnerAI_initFields(SpinnerAI* this) {
    this->isEven = false;
    
}


void SpinnerAI_init(SpinnerAI* this, int32_t* direction, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    SpinnerAI_register();
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        SpinnerAI_initFields(this);
        this->direction = direction;
}

SpinnerAI* SpinnerAI_new(int32_t* direction, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    SpinnerAI* this = java_object_alloc(sizeof(SpinnerAI), "SpinnerAI");
    SpinnerAI_init(this, direction, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void SpinnerAI_processAI(SpinnerAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        if (this->isEven) {
            BasicAI_processKeyAI((&this->base), this->direction[0]);
            this->isEven = false;
        } else {
            BasicAI_processKeyAI((&this->base), (Canvas_staticInit(), Canvas_KEY_NUM1));
            this->isEven = true;
        }
}

