// Generated Code Do Not Modify
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"


static StringValidationUtil* StringValidationUtil_instance;











void StringValidationUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    StringValidationUtil_instance = StringValidationUtil_new();
}

void StringValidationUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("StringValidationUtil", nullptr);
    java_register_method("StringValidationUtil", "containsSpaces", (void*) StringValidationUtil_containsSpaces);
    java_register_method("StringValidationUtil", "isNumber", (void*) StringValidationUtil_isNumber);
    java_register_method("StringValidationUtil", "isNumberFromChar", (void*) StringValidationUtil_isNumberFromChar);
    java_register_method("StringValidationUtil", "isValidRequired", (void*) StringValidationUtil_isValidRequired);
    java_register_method("StringValidationUtil", "isValidRequiredNumber", (void*) StringValidationUtil_isValidRequiredNumber);
    java_register_method("StringValidationUtil", "isValidNotRequired", (void*) StringValidationUtil_isValidNotRequired);
    java_register_method("StringValidationUtil", "isValidNotRequiredNumber", (void*) StringValidationUtil_isValidNotRequiredNumber);
    java_register_method("StringValidationUtil", "isEmpty", (void*) StringValidationUtil_isEmpty);
}

static void StringValidationUtil_initFields(StringValidationUtil* this) {
    this->stringUtil = StringUtil_getInstance();
    this->tsUtil = TsUtil_getInstance();
}


StringValidationUtil* StringValidationUtil_getInstance(void) {
        return (StringValidationUtil_staticInit(), StringValidationUtil_instance);
}


void StringValidationUtil_init(StringValidationUtil* this) {
    StringValidationUtil_register();
    StringValidationUtil_initFields(this);
}

StringValidationUtil* StringValidationUtil_new(void) {
    StringValidationUtil* this = java_object_alloc(sizeof(StringValidationUtil), "StringValidationUtil");
    StringValidationUtil_init(this);
    return this;
}


bool StringValidationUtil_containsSpaces(StringValidationUtil* this, const char* value) {
        if (java_string_indexOf(value, u' ') >= 0) {
            return true;
        }
        return false;
}


bool StringValidationUtil_isNumber(StringValidationUtil* this, const char* value) {
        int32_t numberOfDecimalPoints = 0;
        for (int32_t index = 0; index < ((int32_t) strlen(value)); index++) {
            uint16_t digit = ((uint16_t) value[index]);
            if (!StringValidationUtil_isNumberFromChar(this, digit) && digit != u'.') {
                return false;
            }
            if (digit == u'.') {
                numberOfDecimalPoints++;
                if (numberOfDecimalPoints > 1) {
                    return false;
                }
            }
        }
        return true;
}


bool StringValidationUtil_isNumberFromChar(StringValidationUtil* this, uint16_t digit) {
        if (digit != u'0' && digit != u'1' && digit != u'2' && digit != u'3' && digit != u'4' && digit != u'5' && digit != u'6' && digit != u'7' && digit != u'8' && digit != u'9') {
            return false;
        }
        return true;
}


bool StringValidationUtil_isValidRequired(StringValidationUtil* this, const char* value, int32_t min, int32_t max) {
        if (((int32_t) strlen(value)) < min || ((int32_t) strlen(value)) > max) {
            return false;
        }
        return true;
}


bool StringValidationUtil_isValidRequiredNumber(StringValidationUtil* this, const char* value, int32_t min, int32_t max) {
        if (StringValidationUtil_isEmpty(this, value) || ((int32_t) strlen(value)) < min || ((int32_t) strlen(value)) > max) {
            return false;
        }
        if (!StringValidationUtil_isNumber(this, value)) {
            return false;
        }
        return true;
}


bool StringValidationUtil_isValidNotRequired(StringValidationUtil* this, const char* value, int32_t min, int32_t max) {
        if (((int32_t) strlen(value)) > 0) {
            if (((int32_t) strlen(value)) < min || ((int32_t) strlen(value)) > max) {
                return false;
            }
        }
        return true;
}


bool StringValidationUtil_isValidNotRequiredNumber(StringValidationUtil* this, const char* value, int32_t min, int32_t max) {
        if (((int32_t) strlen(value)) > 0) {
            if (TsUtil_compareTo(this->tsUtil, value, this->stringUtil->NULL_STRING) == 0 || ((int32_t) strlen(value)) < min || ((int32_t) strlen(value)) > max) {
                return false;
            }
            if (!StringValidationUtil_isNumber(this, value)) {
                return false;
            }
        }
        return true;
}


bool StringValidationUtil_isEmpty(StringValidationUtil* this, const char* string) {
        if (TsUtil_compareTo(this->tsUtil, string, this->stringUtil->NULL_STRING) != 0 && TsUtil_compareTo(this->tsUtil, string, this->stringUtil->EMPTY_STRING) != 0) {
            return false;
        } else {
            return true;
        }
}

