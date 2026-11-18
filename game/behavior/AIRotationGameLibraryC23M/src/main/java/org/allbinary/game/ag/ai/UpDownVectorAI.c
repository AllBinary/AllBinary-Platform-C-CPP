// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/UpDownVectorAI.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#include "org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif





void UpDownVectorAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void UpDownVectorAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("UpDownVectorAI", "BasicAI");
    java_register_method("UpDownVectorAI", "processAI", (void*) UpDownVectorAI_processAI);
}

static void UpDownVectorAI_initFields(UpDownVectorAI* this) {
    
    this->index = 0;
}


void UpDownVectorAI_init(UpDownVectorAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    UpDownVectorAI_register();
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        UpDownVectorAI_initFields(this);
        VelocityInterfaceCompositeInterface* velocityInterfaceCompositeInterface = ((VelocityInterfaceCompositeInterface*) BasicAI_getOwnerLayerInterface(this));
        this->velocityInterface = VelocityInterfaceCompositeInterface_getVelocityProperties(velocityInterfaceCompositeInterface);
        BasicDecimal_setint(BasicVelocityProperties_getVelocityYBasicDecimalP(this->velocityInterface), 0);
}

UpDownVectorAI* UpDownVectorAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    UpDownVectorAI* this = java_object_alloc(sizeof(UpDownVectorAI), "UpDownVectorAI");
    UpDownVectorAI_init(this, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void UpDownVectorAI_processAI(UpDownVectorAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        int32_t y = AllBinaryLayer_getHeight(BasicAI_getOwnerLayerInterface(this)) * 270;
        if (this->index < 5) {
            BasicDecimal* basicDecimal = BasicVelocityProperties_getVelocityYBasicDecimalP(this->velocityInterface);
            BasicDecimal_setint(basicDecimal, 0);
            BasicDecimal_addint(basicDecimal, y);
            this->index++;
        } else if (this->index < 10) {
            BasicDecimal* basicDecimal = BasicVelocityProperties_getVelocityYBasicDecimalP(this->velocityInterface);
            BasicDecimal_setint(basicDecimal, 0);
            BasicDecimal_subtractint(basicDecimal, y);
            this->index++;
        } else {
            this->index = 0;
            UpDownVectorAI_processAI(this, allBinaryLayerManager);
        }
}

