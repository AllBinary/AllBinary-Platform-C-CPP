// Generated Code Do Not Modify
#include "org/allbinary/game/input/NullPlayerGameInputComposite.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/game/input/PlayerGameInputCompositeInterface.h"
#include "org/allbinary/game/input/NoPlayerGameInput.h"
#include "org/allbinary/game/input/PlayerGameInput.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


NullPlayerGameInputComposite* NullPlayerGameInputComposite_NULL_PLAYER_GAME_INPUT_COMPOSITE;





void NullPlayerGameInputComposite_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullPlayerGameInputComposite_NULL_PLAYER_GAME_INPUT_COMPOSITE = NullPlayerGameInputComposite_new();
}

void NullPlayerGameInputComposite_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullPlayerGameInputComposite", nullptr);
    java_register_method("NullPlayerGameInputComposite", "getName", (void*) NullPlayerGameInputComposite_getName);
    java_register_method("NullPlayerGameInputComposite", "processInput", (void*) NullPlayerGameInputComposite_processInput);
    java_register_method("NullPlayerGameInputComposite", "initInputProcessors", (void*) NullPlayerGameInputComposite_initInputProcessors);
    java_register_method("NullPlayerGameInputComposite", "getPlayerGameInput", (void*) NullPlayerGameInputComposite_getPlayerGameInput);
}

void NullPlayerGameInputComposite_init(NullPlayerGameInputComposite* this) {
    NullPlayerGameInputComposite_register();
}

NullPlayerGameInputComposite* NullPlayerGameInputComposite_new(void) {
    NullPlayerGameInputComposite* this = java_object_alloc(sizeof(NullPlayerGameInputComposite), "NullPlayerGameInputComposite");
    NullPlayerGameInputComposite_init(this);
    return this;
}


const char* NullPlayerGameInputComposite_getName(NullPlayerGameInputComposite* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


// throws Exception
void NullPlayerGameInputComposite_processInput(NullPlayerGameInputComposite* this, AllBinaryLayerManager* layerManager) {
}


void NullPlayerGameInputComposite_initInputProcessors(NullPlayerGameInputComposite* this) {
}


PlayerGameInput* NullPlayerGameInputComposite_getPlayerGameInput(NullPlayerGameInputComposite* this) {
        return NoPlayerGameInput_getInstance();
}

