// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/ArrayAI.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#if __has_include("org/allbinary/ai/ArtificialIntelligenceInterface.h")
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#endif






void ArrayAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ArrayAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ArrayAI", "BasicAI");
    java_register_method("ArrayAI", "processAI", (void*) ArrayAI_processAI);
    java_register_method("ArrayAI", "getArtificialIntelligenceInterface", (void*) ArrayAI_getArtificialIntelligenceInterface);
}

static void ArrayAI_initFields(ArrayAI* this) {
    
}


void ArrayAI_init(ArrayAI* this, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    ArrayAI_register();
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        ArrayAI_initFields(this);
        this->artificialIntelligenceInterfaceArray = artificialIntelligenceInterface;
}

ArrayAI* ArrayAI_new(ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    ArrayAI* this = java_object_alloc(sizeof(ArrayAI), "ArrayAI");
    ArrayAI_init(this, artificialIntelligenceInterface, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void ArrayAI_processAI(ArrayAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        int32_t size = java_array_length(this->artificialIntelligenceInterfaceArray);
        for (int32_t index = 0; index < size; index++) {
            ArtificialIntelligenceInterface_processAI(this->artificialIntelligenceInterfaceArray[index], allBinaryLayerManager);
        }
}


ArtificialIntelligenceInterface** ArrayAI_getArtificialIntelligenceInterface(ArrayAI* this) {
        return this->artificialIntelligenceInterfaceArray;
}

