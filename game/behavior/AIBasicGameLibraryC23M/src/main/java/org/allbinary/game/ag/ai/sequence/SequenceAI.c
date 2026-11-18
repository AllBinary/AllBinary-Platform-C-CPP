// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/sequence/SequenceAI.h"
#include "org/allbinary/ai/ArtificialIntelligence.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/ai/ArtificialIntelligenceTransitionInterface.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static const char* SequenceAI_SEQUENCE_AI = "Sequence AI";









void SequenceAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SequenceAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SequenceAI", "ArrayAI");
    java_register_method("SequenceAI", "processAI", (void*) SequenceAI_processAI);
    java_register_method("SequenceAI", "next", (void*) SequenceAI_next);
    java_register_method("SequenceAI", "getIndex", (void*) SequenceAI_getIndex);
    java_register_method("SequenceAI", "setIndex", (void*) SequenceAI_setIndex);
    java_register_method("SequenceAI", "getSelectedArtificialIntelligenceInterface", (void*) SequenceAI_getSelectedArtificialIntelligenceInterface);
    java_register_method("SequenceAI", "getName", (void*) SequenceAI_getName);
    java_register_method("SequenceAI", "toString", (void*) SequenceAI_toString);
}

static void SequenceAI_initFields(SequenceAI* this) {
    this->index = 0;
}


void SequenceAI_init(SequenceAI* this, ArtificialIntelligenceInterface** artificialIntelligenceInterfaceArray, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    SequenceAI_register();
        ArrayAI_init(&this->base, artificialIntelligenceInterfaceArray, ownerLayerInterface, gameInput);
        SequenceAI_initFields(this);
}

SequenceAI* SequenceAI_new(ArtificialIntelligenceInterface** artificialIntelligenceInterfaceArray, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    SequenceAI* this = java_object_alloc(sizeof(SequenceAI), "SequenceAI");
    SequenceAI_init(this, artificialIntelligenceInterfaceArray, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void SequenceAI_processAI(SequenceAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        JAVA_CALL(ArrayAI_getArtificialIntelligenceInterface(this)[this->index], processAI, allBinaryLayerManager);
}


void SequenceAI_next(SequenceAI* this) {
        this->index++;
        ArtificialIntelligenceInterface* artificialIntelligenceInterface = SequenceAI_getSelectedArtificialIntelligenceInterface(this);
        if (IdentifierInterface_getId(artificialIntelligenceInterface) == (ArtificialIntelligence_staticInit(), ArtificialIntelligence_AI_ID)) {
            ArtificialIntelligenceTransitionInterface* artificialIntelligenceTransitionInterface = ((ArtificialIntelligenceTransitionInterface*) artificialIntelligenceInterface);
            ArtificialIntelligenceTransitionInterface_transition(artificialIntelligenceTransitionInterface);
        }
}


int32_t SequenceAI_getIndex(SequenceAI* this) {
        return this->index;
}


void SequenceAI_setIndex(SequenceAI* this, int32_t index) {
        this->index = index;
}


ArtificialIntelligenceInterface* SequenceAI_getSelectedArtificialIntelligenceInterface(SequenceAI* this) {
        return ArrayAI_getArtificialIntelligenceInterface(this)[this->index];
}


const char* SequenceAI_getName(SequenceAI* this) {
        return SequenceAI_SEQUENCE_AI;
}


const char* SequenceAI_toString(SequenceAI* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, BasicAI_toString((&this->base)));
        StringMaker_append(stringBuffer, " Selected AI: ");
        StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), SequenceAI_getSelectedArtificialIntelligenceInterface(this)));
        return java_string_of(stringBuffer);
}

