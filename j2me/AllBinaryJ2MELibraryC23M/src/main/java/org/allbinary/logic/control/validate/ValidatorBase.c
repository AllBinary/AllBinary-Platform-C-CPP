// Generated Code Do Not Modify
#include "org/allbinary/logic/control/validate/ValidatorBase.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/logic/control/validate/ValidatorBaseInterface.h"
#if __has_include("org/allbinary/logic/java/bool/BooleanFactory.h")
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif


static ValidatorBase* ValidatorBase_instance;







void ValidatorBase_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ValidatorBase_instance = ValidatorBase_new();
}

void ValidatorBase_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ValidatorBase", nullptr);
    java_register_method("ValidatorBase", "isValid", (void*) ValidatorBase_isValid);
    java_register_method("ValidatorBase", "validationInfo", (void*) ValidatorBase_validationInfo);
    java_register_method("ValidatorBase", "toHashtable", (void*) ValidatorBase_toHashtable);
    java_register_method("ValidatorBase", "toList", (void*) ValidatorBase_toList);
}


ValidatorBase* ValidatorBase_getInstance(void) {
        return (ValidatorBase_staticInit(), ValidatorBase_instance);
}


void ValidatorBase_init(ValidatorBase* this) {
    ValidatorBase_register();
}

ValidatorBase* ValidatorBase_new(void) {
    ValidatorBase* this = java_object_alloc(sizeof(ValidatorBase), "ValidatorBase");
    ValidatorBase_init(this);
    return this;
}


bool ValidatorBase_isValid(ValidatorBase* this) {
        return BooleanFactory_getInstance()->TRUE;
}


const char* ValidatorBase_validationInfo(ValidatorBase* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


ABHashtable* ValidatorBase_toHashtable(ValidatorBase* this) {
        return StdUtil_getInstance()->NULL_TABLE;
}


BasicArrayList* ValidatorBase_toList(ValidatorBase* this) {
        return BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
}

