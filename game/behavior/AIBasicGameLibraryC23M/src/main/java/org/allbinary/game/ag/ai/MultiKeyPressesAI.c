// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/MultiKeyPressesAI.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/ag/ai/KeyPressesAI.h"





static void MultiKeyPressesAI_update(MultiKeyPressesAI* this);




void MultiKeyPressesAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MultiKeyPressesAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MultiKeyPressesAI", "KeyPressesAI");
    java_register_method("MultiKeyPressesAI", "processAI", (void*) MultiKeyPressesAI_processAI);
    java_register_method("MultiKeyPressesAI", "update", (void*) MultiKeyPressesAI_update);
    java_register_method("MultiKeyPressesAI", "toggle", (void*) MultiKeyPressesAI_toggle);
    java_register_method("MultiKeyPressesAI", "disable", (void*) MultiKeyPressesAI_disable);
    java_register_method("MultiKeyPressesAI", "enable", (void*) MultiKeyPressesAI_enable);
}

static void MultiKeyPressesAI_initFields(MultiKeyPressesAI* this) {
    this->toggleTimeHelper = TimeDelayHelper_new(600);
    this->gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory_getInstance();
}


void MultiKeyPressesAI_init(MultiKeyPressesAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    MultiKeyPressesAI_register();
        KeyPressesAI_init(&this->base, hashtable, ownerLayerInterface, gameInput);
        MultiKeyPressesAI_initFields(this);
        MultiKeyPressesAI_update(this);
}

MultiKeyPressesAI* MultiKeyPressesAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    MultiKeyPressesAI* this = java_object_alloc(sizeof(MultiKeyPressesAI), "MultiKeyPressesAI");
    MultiKeyPressesAI_init(this, hashtable, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void MultiKeyPressesAI_processAI(MultiKeyPressesAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
}


// throws Exception
static void MultiKeyPressesAI_update(MultiKeyPressesAI* this) {
        GameInput* gameInput = BasicAI_getGameInput(this);
        int32_t* keys = this->base.keys;
        int32_t size = java_array_length(keys);
        if (KeyPressesAI_isOn(this)) {
            for (int32_t index = 0; index < size; index++) {
                int32_t key = Integer_intValue(keys[index]);
                if (key != -1) {
                    GameInput_add(gameInput, GameKeyEventFactory_getInstanceForKey(this->base.base.gameKeyEventFactory, this, key));
                }
            }
        } else {
            for (int32_t index = 0; index < size; index++) {
                int32_t key = Integer_intValue(keys[index]);
                if (key != -1) {
                    GameInput_addForRemoval(gameInput, GameKeyEventFactory_getInstanceForKey(this->base.base.gameKeyEventFactory, this, key));
                }
            }
        }
}


// throws Exception
void MultiKeyPressesAI_toggle(MultiKeyPressesAI* this) {
        if (TimeDelayHelper_isTime(this->toggleTimeHelper, this->gameTickTimeDelayHelper->startTime)) {
            KeyPressesAI_toggle((&this->base));
            MultiKeyPressesAI_update(this);
        }
}


// throws Exception
void MultiKeyPressesAI_disable(MultiKeyPressesAI* this) {
        if (TimeDelayHelper_isTime(this->toggleTimeHelper, this->gameTickTimeDelayHelper->startTime)) {
            KeyPressesAI_disable((&this->base));
            MultiKeyPressesAI_update(this);
        }
}


// throws Exception
void MultiKeyPressesAI_enable(MultiKeyPressesAI* this) {
        if (TimeDelayHelper_isTime(this->toggleTimeHelper, this->gameTickTimeDelayHelper->startTime)) {
            KeyPressesAI_enable((&this->base));
            MultiKeyPressesAI_update(this);
        }
}

