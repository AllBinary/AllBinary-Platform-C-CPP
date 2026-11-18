// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/KeyPressesAI.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/util/HashtableUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#if __has_include("org/allbinary/util/HashtableUtil.h")
#include "org/allbinary/util/HashtableUtil.h"
#endif








static void KeyPressesAI_setOn(KeyPressesAI* this, bool on);


void KeyPressesAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void KeyPressesAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("KeyPressesAI", "BasicAI");
    java_register_method("KeyPressesAI", "processAI", (void*) KeyPressesAI_processAI);
    java_register_method("KeyPressesAI", "toggle", (void*) KeyPressesAI_toggle);
    java_register_method("KeyPressesAI", "disable", (void*) KeyPressesAI_disable);
    java_register_method("KeyPressesAI", "enable", (void*) KeyPressesAI_enable);
    java_register_method("KeyPressesAI", "setOn", (void*) KeyPressesAI_setOn);
    java_register_method("KeyPressesAI", "isOn", (void*) KeyPressesAI_isOn);
}

static void KeyPressesAI_initFields(KeyPressesAI* this) {
    this->on = true;
    
}


void KeyPressesAI_init(KeyPressesAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    KeyPressesAI_register();
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        KeyPressesAI_initFields(this);
        this->keys = ((int32_t*) java_array_new(sizeof(int32_t), Hashtable_size(hashtable)));
        void** objectArray = HashtableUtil_getKeysAsArray(HashtableUtil_getInstance(), hashtable);
        int32_t size = java_array_length(objectArray);
        for (int32_t index = 0; index < size; index++) {
            this->keys[index] = ((int32_t) Hashtable_get(hashtable, ((void*) objectArray[index])));
        }
}

KeyPressesAI* KeyPressesAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    KeyPressesAI* this = java_object_alloc(sizeof(KeyPressesAI), "KeyPressesAI");
    KeyPressesAI_init(this, hashtable, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void KeyPressesAI_processAI(KeyPressesAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        if (this->on) {
            for (int32_t index = 0; index < java_array_length(this->keys); index++) {
                BasicAI_processKeyAI((&this->base), Integer_intValue(this->keys[index]));
            }
        }
}


// throws Exception
void KeyPressesAI_toggle(KeyPressesAI* this) {
        if (KeyPressesAI_isOn(this)) {
            KeyPressesAI_setOn(this, false);
        } else {
            KeyPressesAI_setOn(this, true);
        }
}


// throws Exception
void KeyPressesAI_disable(KeyPressesAI* this) {
        KeyPressesAI_setOn(this, false);
}


// throws Exception
void KeyPressesAI_enable(KeyPressesAI* this) {
        KeyPressesAI_setOn(this, true);
}


static void KeyPressesAI_setOn(KeyPressesAI* this, bool on) {
        this->on = on;
}


bool KeyPressesAI_isOn(KeyPressesAI* this) {
        return this->on;
}

