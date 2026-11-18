// Generated Code Do Not Modify
#include "org/allbinary/game/input/PCGameInputMapping.h"
#include "org/allbinary/game/configuration/persistance/GamePersistanceStrings.h"
#include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/input/motion/gesture/TrackballMotionGestureFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/game/input/PCKeyFactory.h"
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
#if __has_include("org/allbinary/input/motion/button/InputToGameKeyMapping.h")
#include "org/allbinary/input/motion/button/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/InputToGameKeyMapping.h")
#include "org/allbinary/input/motion/gesture/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/InputToGameKeyMapping.h")
#include "org/allbinary/input/motion/gesture/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/InputToGameKeyMapping.h")
#include "org/allbinary/logic/system/security/licensing/InputToGameKeyMapping.h"
#endif







void PCGameInputMapping_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PCGameInputMapping_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PCGameInputMapping", "PersistentInputMapping");
    java_register_method("PCGameInputMapping", "init", (void*) PCGameInputMapping_initMethod);
    java_register_method("PCGameInputMapping", "isDelete", (void*) PCGameInputMapping_isDelete);
    java_register_method("PCGameInputMapping", "isSystemInput", (void*) PCGameInputMapping_isSystemInput);
}


void PCGameInputMapping_init(PCGameInputMapping* this) {
    PCGameInputMapping_register();
        PersistentInputMapping_init(&this->base, GamePersistanceStrings_getInstance()->SAVED_INPUT_CONFIGURATION_RECORD_ID);
}

PCGameInputMapping* PCGameInputMapping_new(void) {
    PCGameInputMapping* this = java_object_alloc(sizeof(PCGameInputMapping), "PCGameInputMapping");
    PCGameInputMapping_init(this);
    return this;
}


// throws Exception
void PCGameInputMapping_initMethod(PCGameInputMapping* this, AbeClientInformationInterface* abeClientInformation) {
        LogUtil_putF(this->base.logUtil, this->base.commonStrings->START, this, this->base.commonStrings->INIT);
        PCKeyFactory_getInstance();
        TouchMotionGestureFactory_getInstance();
        TrackballMotionGestureFactory_getInstance();
        BasicTouchInputFactory_getInstance();
        PersistentInputMapping_initMethod((&this->base), abeClientInformation);
        if (PersistentInputMapping_getTotalMapped(this) == 0 || PersistentInputMapping_isDefaultNew(this)) {
            InputToGameKeyMapping_addMapping(PersistentInputMapping_getInputMapping(this), PersistentInputMapping_getDefault(this));
            PersistentInputMapping_save(this, abeClientInformation);
        }
}


bool PCGameInputMapping_isDelete(PCGameInputMapping* this, Input* input) {
        if (input == PCKeyFactory_getInstance()->DEL) {
            return true;
        } else {
            return false;
        }
}


bool PCGameInputMapping_isSystemInput(PCGameInputMapping* this, Input* input) {
        return false;
}

