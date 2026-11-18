// Generated Code Do Not Modify
#include "org/allbinary/logic/system/security/crypt/jcehelper/KeySpecFactory.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/string/CommonStrings.h"


static KeySpecFactory* KeySpecFactory_instance;




void KeySpecFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    KeySpecFactory_instance = KeySpecFactory_new();
}

void KeySpecFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("KeySpecFactory", nullptr);
    java_register_method("KeySpecFactory", "getInstance@3", (void*) KeySpecFactory_getInstance3);
}

static void KeySpecFactory_initFields(KeySpecFactory* this) {
    this->DES = "DES";
    this->DESEDE = "DESede";
    this->BLOWFISH = "Blowfish";
}


KeySpecFactory* KeySpecFactory_getInstance0(void) {
        return (KeySpecFactory_staticInit(), KeySpecFactory_instance);
}


void KeySpecFactory_init(KeySpecFactory* this) {
    KeySpecFactory_register();
    KeySpecFactory_initFields(this);
}

KeySpecFactory* KeySpecFactory_new(void) {
    KeySpecFactory* this = java_object_alloc(sizeof(KeySpecFactory), "KeySpecFactory");
    KeySpecFactory_init(this);
    return this;
}


// Java overloaded method: C needs a different name
KeySpec* KeySpecFactory_getInstance3(KeySpecFactory* this, const char* algorithm, int8_t* keyData) {
        JAVA_TRY {
            TsUtil* tsUtil = TsUtil_getInstance();
            if (TsUtil_compareTo(tsUtil, algorithm, this->DES) == 0) {
                return DESKeySpec_new(keyData);
            } else if (TsUtil_compareTo(tsUtil, algorithm, this->DESEDE) == 0) {
                return DESedeKeySpec_new(keyData);
            } else {
                java_throw(java_exception_new("RuntimeException", ""));
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            PreLogUtil_putOE(commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            java_throw(java_exception_new("RuntimeException", ""));
        } JAVA_END_TRY;
}

