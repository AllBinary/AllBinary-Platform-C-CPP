// Generated Code Do Not Modify
#include "org/allbinary/game/input/J2MEGameInputMapping.h"
#include "org/allbinary/game/configuration/persistance/GamePersistanceStrings.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/game/input/J2MEKeyFactory.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#include "org/allbinary/game/input/Input.h"
#if __has_include("org/allbinary/game/configuration/persistance/GamePersistanceStrings.h")
#include "org/allbinary/game/configuration/persistance/GamePersistanceStrings.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/configuration/persistance/InputToGameKeyMapping.h")
#include "org/allbinary/game/configuration/persistance/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/InputToGameKeyMapping.h")
#include "org/allbinary/logic/system/security/licensing/InputToGameKeyMapping.h"
#endif







void J2MEGameInputMapping_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void J2MEGameInputMapping_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("J2MEGameInputMapping", "PersistentInputMapping");
    java_register_method("J2MEGameInputMapping", "init", (void*) J2MEGameInputMapping_initMethod);
    java_register_method("J2MEGameInputMapping", "isDelete", (void*) J2MEGameInputMapping_isDelete);
    java_register_method("J2MEGameInputMapping", "isSystemInput", (void*) J2MEGameInputMapping_isSystemInput);
}


void J2MEGameInputMapping_init(J2MEGameInputMapping* this) {
    J2MEGameInputMapping_register();
        PersistentInputMapping_init(&this->base, GamePersistanceStrings_getInstance()->SAVED_INPUT_CONFIGURATION_RECORD_ID);
}

J2MEGameInputMapping* J2MEGameInputMapping_new(void) {
    J2MEGameInputMapping* this = java_object_alloc(sizeof(J2MEGameInputMapping), "J2MEGameInputMapping");
    J2MEGameInputMapping_init(this);
    return this;
}


// throws Exception
void J2MEGameInputMapping_initMethod(J2MEGameInputMapping* this, AbeClientInformationInterface* abeClientInformation) {
        LogUtil_putF(this->base.logUtil, this->base.commonStrings->START, this, this->base.commonStrings->INIT);
        J2MEKeyFactory_initMethod(J2MEKeyFactory_getInstance());
        PersistentInputMapping_initMethod((&this->base), abeClientInformation);
        if (PersistentInputMapping_getTotalMapped(this) == 0 || PersistentInputMapping_isDefaultNew(this)) {
            InputToGameKeyMapping_addMapping(PersistentInputMapping_getInputMapping(this), PersistentInputMapping_getDefault(this));
            PersistentInputMapping_save(this, abeClientInformation);
        }
}


bool J2MEGameInputMapping_isDelete(J2MEGameInputMapping* this, Input* input) {
        if (input == GameKeyFactory_getInstance()->GAME_D) {
            return true;
        } else {
            return false;
        }
}


bool J2MEGameInputMapping_isSystemInput(J2MEGameInputMapping* this, Input* input) {
        return false;
}

