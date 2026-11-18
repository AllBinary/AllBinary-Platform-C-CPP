// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/validation/TextFieldItemValidator.h"
#include "org/allbinary/graphics/form/item/ABTextFieldItem.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
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






void TextFieldItemValidator_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TextFieldItemValidator_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TextFieldItemValidator", "ValidatorBase");
    java_register_method("TextFieldItemValidator", "isValid", (void*) TextFieldItemValidator_isValid);
    java_register_method("TextFieldItemValidator", "toList", (void*) TextFieldItemValidator_toList);
}

static void TextFieldItemValidator_initFields(TextFieldItemValidator* this) {
    
    
    
    
}


void TextFieldItemValidator_init(TextFieldItemValidator* this, ABTextFieldItem* textFieldItem, int32_t min, int32_t max, bool allowOnEmpty) {
    TextFieldItemValidator_register();
    ValidatorBase_init(&this->base);
    TextFieldItemValidator_initFields(this);
        this->textFieldItem = textFieldItem;
        this->min = min;
        this->max = max;
        this->allowOnEmpty = allowOnEmpty;
}

TextFieldItemValidator* TextFieldItemValidator_new(ABTextFieldItem* textFieldItem, int32_t min, int32_t max, bool allowOnEmpty) {
    TextFieldItemValidator* this = java_object_alloc(sizeof(TextFieldItemValidator), "TextFieldItemValidator");
    TextFieldItemValidator_init(this, textFieldItem, min, max, allowOnEmpty);
    return this;
}


bool TextFieldItemValidator_isValid(TextFieldItemValidator* this) {
        BooleanFactory* booleanFactory = BooleanFactory_getInstance();
        bool result = booleanFactory->TRUE;
        const char* string = ABTextFieldItem_getString(this->textFieldItem);
        int32_t textLength = ((int32_t) strlen(string));
        if ((textLength == 0 && this->allowOnEmpty) || textLength > this->min && textLength < this->max) {
        } else {
            if (textLength < this->min) {
                result = booleanFactory->FALSE;
            } else if (textLength > this->max) {
                result = booleanFactory->FALSE;
            }
        }
        return result;
}


BasicArrayList* TextFieldItemValidator_toList(TextFieldItemValidator* this) {
        BasicArrayList* list = BasicArrayListD_new();
        const char* string = ABTextFieldItem_getString(this->textFieldItem);
        int32_t textLength = ((int32_t) strlen(string));
        if (textLength > this->min && textLength < this->max) {
        } else {
            const char* label = ABTextFieldItem_getLabel(this->textFieldItem);
            const char* name = java_substring(label, 0, ((int32_t) strlen(label)) - 2);
            if (textLength < this->min) {
                BasicArrayList_add(list, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), name), " is to short")));
            } else if (textLength > this->max) {
                BasicArrayList_add(list, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), name), " is to long")));
            }
        }
        return list;
}

