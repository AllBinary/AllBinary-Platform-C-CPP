// Generated Code Do Not Modify
#include "org/allbinary/game/ai/BasicAI.h"
#include "org/allbinary/game/displayable/canvas/CanvasUtil.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif


int32_t BasicAI_AI_VISITOR;
int32_t BasicAI_ID;











void BasicAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BasicAI_AI_VISITOR = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 2);
    BasicAI_ID = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 1);
}

void BasicAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicAI", "ArtificialIntelligence");
    java_register_method("BasicAI", "processAI", (void*) BasicAI_processAI);
    java_register_method("BasicAI", "processKeyAI", (void*) BasicAI_processKeyAI);
    java_register_method("BasicAI", "setLastKey", (void*) BasicAI_setLastKey);
    java_register_method("BasicAI", "getLastKey", (void*) BasicAI_getLastKey);
    java_register_method("BasicAI", "getOwnerLayerInterface", (void*) BasicAI_getOwnerLayerInterface);
    java_register_method("BasicAI", "getGameInput", (void*) BasicAI_getGameInput);
    java_register_method("BasicAI", "getName", (void*) BasicAI_getName);
    java_register_method("BasicAI", "toString", (void*) BasicAI_toString);
    java_register_method("BasicAI", "getSourceId", (void*) BasicAI_getSourceId);
}

static void BasicAI_initFields(BasicAI* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->gameKeyEventFactory = GameKeyEventFactory_getInstance();
    
    
    this->lastKey = -1;
}


void BasicAI_init(BasicAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    BasicAI_register();
    ArtificialIntelligence_init(&this->base);
    BasicAI_initFields(this);
        this->ownerLayerInterface = ownerLayerInterface;
        this->gameInput = gameInput;
}

BasicAI* BasicAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    BasicAI* this = java_object_alloc(sizeof(BasicAI), "BasicAI");
    BasicAI_init(this, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void BasicAI_processAI(BasicAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
void BasicAI_processKeyAI(BasicAI* this, int32_t key) {
        if (key != -1) {
            GameInput_add(this->gameInput, GameKeyEventFactory_getInstanceForKey(this->gameKeyEventFactory, this, key));
        }
}


void BasicAI_setLastKey(BasicAI* this, int32_t lastKey) {
        this->lastKey = lastKey;
}


int32_t BasicAI_getLastKey(BasicAI* this) {
        return this->lastKey;
}


AllBinaryLayer* BasicAI_getOwnerLayerInterface(BasicAI* this) {
        return this->ownerLayerInterface;
}


GameInput* BasicAI_getGameInput(BasicAI* this) {
        return this->gameInput;
}


const char* BasicAI_getName(BasicAI* this) {
        return java_class_of(this);
}


const char* BasicAI_toString(BasicAI* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->NEW_LINE);
        StringMaker_append(stringBuffer, BasicAI_getName(this));
        StringMaker_append(stringBuffer, " LastKey: ");
        StringMaker_append(stringBuffer, CanvasUtil_getKeyName(BasicAI_getLastKey(this)));
        return java_string_of(stringBuffer);
}


int32_t BasicAI_getSourceId(BasicAI* this) {
        return 1;
}

