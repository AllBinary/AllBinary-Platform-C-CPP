// Generated Code Do Not Modify
#include "org/allbinary/logic/java/bool/BooleanUtil.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"


static BooleanUtil* BooleanUtil_instance;






void BooleanUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BooleanUtil_instance = BooleanUtil_new();
}

void BooleanUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BooleanUtil", nullptr);
    java_register_method("BooleanUtil", "getFromString", (void*) BooleanUtil_getFromString);
    java_register_method("BooleanUtil", "isStringBoolean", (void*) BooleanUtil_isStringBoolean);
    java_register_method("BooleanUtil", "toStringFromBooleanArray", (void*) BooleanUtil_toStringFromBooleanArray);
}

static void BooleanUtil_initFields(BooleanUtil* this) {
    this->tsUtil = TsUtil_getInstance();
}


BooleanUtil* BooleanUtil_getInstance(void) {
        return (BooleanUtil_staticInit(), BooleanUtil_instance);
}


void BooleanUtil_init(BooleanUtil* this) {
    BooleanUtil_register();
    BooleanUtil_initFields(this);
}

BooleanUtil* BooleanUtil_new(void) {
    BooleanUtil* this = java_object_alloc(sizeof(BooleanUtil), "BooleanUtil");
    BooleanUtil_init(this);
    return this;
}


// throws Exception
bool BooleanUtil_getFromString(BooleanUtil* this, const char* booleanString) {
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        BooleanFactory* booleanFactory = BooleanFactory_getInstance();
        if (StringValidationUtil_isEmpty(stringValidationUtil, booleanString)) {
            return false;
        }
        const char* booleanStringLowerCase = java_string_toLowerCase(booleanString);
        if (TsUtil_compareTo(this->tsUtil, booleanStringLowerCase, booleanFactory->TRUE_STRING) == 0) {
            return true;
        } else if (TsUtil_compareTo(this->tsUtil, booleanStringLowerCase, booleanFactory->FALSE_STRING) == 0) {
            return false;
        } else {
            java_throw(java_exception_new("Exception", "Invalid booleanString - Must be true or false"));
        }
}


// throws Exception
bool BooleanUtil_isStringBoolean(BooleanUtil* this, const char* booleanString) {
        BooleanFactory* booleanFactory = BooleanFactory_getInstance();
        const char* booleanStringLowerCase = java_string_toLowerCase(booleanString);
        if (strcmp(booleanStringLowerCase, booleanFactory->TRUE_STRING) == 0 || strcmp(booleanStringLowerCase, booleanFactory->FALSE_STRING) == 0) {
            return true;
        }
        return false;
}


const char* BooleanUtil_toStringFromBooleanArray(BooleanUtil* this, bool* booleanArray) {
        StringMaker* stringMaker = StringMaker_new();
        int32_t size = java_array_length(booleanArray);
        for (int32_t index = 0; index < size; index++) {
            StringMaker_appendboolean(stringMaker, booleanArray[index]);
        }
        return java_string_of(stringMaker);
}

