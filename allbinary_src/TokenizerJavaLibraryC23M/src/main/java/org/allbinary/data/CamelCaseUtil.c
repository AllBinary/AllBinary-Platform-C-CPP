// Generated Code Do Not Modify
#include "org/allbinary/data/CamelCaseUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/string/tokens/Tokenizer.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif


static CamelCaseUtil* CamelCaseUtil_instance;



void CamelCaseUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CamelCaseUtil_instance = CamelCaseUtil_new();
}

void CamelCaseUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CamelCaseUtil", nullptr);
    java_register_method("CamelCaseUtil", "getAsCamelCase", (void*) CamelCaseUtil_getAsCamelCase);
}

static void CamelCaseUtil_initFields(CamelCaseUtil* this) {
    this->commonSeps = CommonSeps_getInstance();
}

void CamelCaseUtil_init(CamelCaseUtil* this) {
    CamelCaseUtil_register();
    CamelCaseUtil_initFields(this);
}

CamelCaseUtil* CamelCaseUtil_new(void) {
    CamelCaseUtil* this = java_object_alloc(sizeof(CamelCaseUtil), "CamelCaseUtil");
    CamelCaseUtil_init(this);
    return this;
}


CamelCaseUtil* CamelCaseUtil_getInstance(void) {
        return (CamelCaseUtil_staticInit(), CamelCaseUtil_instance);
}


// throws Exception
const char* CamelCaseUtil_getAsCamelCase(CamelCaseUtil* this, const char* string, StringMaker* stringBuilder) {
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        StringMaker_delete(stringBuilder, 0, StringMaker_length(stringBuilder));
        BasicArrayList* list = BasicArrayListD_new();
        Tokenizer* tokenizer = Tokenizer_new(this->commonSeps->UNDERSCORE);
        Tokenizer_getTokensFromString(tokenizer, string, list);
        int32_t size = BasicArrayList_size(list);
        const char* word = nullptr;
        for (int32_t i = 0; i < size; i++) {
            word = ((const char*) BasicArrayList_get(list, i));
            word = (StringValidationUtil_isEmpty(stringValidationUtil, word) ? word : java_string_of(StringMaker_append(StringMaker_appendchar(StringMaker_new(), ((uint16_t) toupper(((uint16_t) word[0])))), java_string_toLowerCase(java_substring(word, 1, (int32_t) strlen(word))))));
            StringMaker_append(stringBuilder, word);
        }
        return java_string_of(stringBuilder);
}

