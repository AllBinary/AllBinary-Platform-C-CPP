// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/validation/NumberTextFieldItemValidator.h"
#include "org/allbinary/graphics/form/item/ABTextFieldItem.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#if __has_include("org/allbinary/logic/java/bool/BooleanFactory.h")
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#endif
#if __has_include("org/allbinary/logic/java/bool/BooleanFactory.h")
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#endif
#if __has_include("org/allbinary/logic/java/bool/BooleanFactory.h")
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#endif
#if __has_include("org/allbinary/logic/java/bool/BooleanFactory.h")
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#endif
#if __has_include("org/allbinary/logic/java/bool/BooleanFactory.h")
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif








void NumberTextFieldItemValidator_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NumberTextFieldItemValidator_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NumberTextFieldItemValidator", "ValidatorBase");
    java_register_method("NumberTextFieldItemValidator", "isNumberValid", (void*) NumberTextFieldItemValidator_isNumberValid);
    java_register_method("NumberTextFieldItemValidator", "toNumberVector", (void*) NumberTextFieldItemValidator_toNumberVector);
    java_register_method("NumberTextFieldItemValidator", "isValid", (void*) NumberTextFieldItemValidator_isValid);
    java_register_method("NumberTextFieldItemValidator", "toList", (void*) NumberTextFieldItemValidator_toList);
}

static void NumberTextFieldItemValidator_initFields(NumberTextFieldItemValidator* this) {
    
    
    
    
}


void NumberTextFieldItemValidator_init(NumberTextFieldItemValidator* this, ABTextFieldItem* textFieldItem, int32_t maxChars, int32_t min, int32_t max) {
    NumberTextFieldItemValidator_register();
    ValidatorBase_init(&this->base);
    NumberTextFieldItemValidator_initFields(this);
        this->textFieldItem = textFieldItem;
        this->min = min;
        this->max = max;
        this->maxChars = maxChars;
}

NumberTextFieldItemValidator* NumberTextFieldItemValidator_new(ABTextFieldItem* textFieldItem, int32_t maxChars, int32_t min, int32_t max) {
    NumberTextFieldItemValidator* this = java_object_alloc(sizeof(NumberTextFieldItemValidator), "NumberTextFieldItemValidator");
    NumberTextFieldItemValidator_init(this, textFieldItem, maxChars, min, max);
    return this;
}


bool NumberTextFieldItemValidator_isNumberValid(NumberTextFieldItemValidator* this, int32_t value) {
        return BooleanFactory_getInstance()->TRUE;
}


BasicArrayList* NumberTextFieldItemValidator_toNumberVector(NumberTextFieldItemValidator* this, int32_t value) {
        return BasicArrayListD_new();
}


bool NumberTextFieldItemValidator_isValid(NumberTextFieldItemValidator* this) {
        bool result = BooleanFactory_getInstance()->TRUE;
        const char* string = ABTextFieldItem_getString(this->textFieldItem);
        int32_t textLength = ((int32_t) strlen(string));
        if (textLength > 0 && textLength < this->maxChars) {
            JAVA_TRY {
                ((int32_t) strtol(ABTextFieldItem_getString(this->textFieldItem), nullptr, 10));
            } JAVA_CATCH(NumberFormatException, e) {
                result = BooleanFactory_getInstance()->FALSE;
            } JAVA_END_TRY;
        } else {
            if (textLength < 1) {
                result = BooleanFactory_getInstance()->FALSE;
            } else if (textLength > this->maxChars) {
                result = BooleanFactory_getInstance()->FALSE;
            }
        }
        return result;
}


BasicArrayList* NumberTextFieldItemValidator_toList(NumberTextFieldItemValidator* this) {
        BasicArrayList* list = BasicArrayListD_new();
        const char* string = ABTextFieldItem_getString(this->textFieldItem);
        int32_t textLength = ((int32_t) strlen(string));
        const char* label = ABTextFieldItem_getLabel(this->textFieldItem);
        const char* name = java_substring(label, 0, ((int32_t) strlen(label)) - 2);
        SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
        StringMaker* stringMaker = StringMaker_new();
        if (textLength > 0 && textLength < this->maxChars) {
            JAVA_TRY {
                int32_t number = SmallIntegerSingletonFactory_createInstance(smallIntegerSingletonFactory, ((int32_t) strtol(ABTextFieldItem_getString(this->textFieldItem), nullptr, 10)));
                if (Integer_intValue(number) > this->min) {
                    StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                    BasicArrayList_add(list, java_string_of(StringMaker_append(StringMaker_append(stringMaker, name), " is to small")));
                } else if (Integer_intValue(number) > this->max) {
                    StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                    BasicArrayList_add(list, java_string_of(StringMaker_append(StringMaker_append(stringMaker, name), " is to large")));
                }
            } JAVA_CATCH(NumberFormatException, e) {
                StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                BasicArrayList_add(list, java_string_of(StringMaker_append(StringMaker_append(stringMaker, name), " is not a number")));
            } JAVA_END_TRY;
        } else {
            if (textLength < 1) {
                StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                BasicArrayList_add(list, java_string_of(StringMaker_append(StringMaker_append(stringMaker, name), " is to short")));
            } else if (textLength > this->maxChars) {
                StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                BasicArrayList_add(list, java_string_of(StringMaker_append(StringMaker_append(stringMaker, name), " is to long")));
            }
        }
        return list;
}

