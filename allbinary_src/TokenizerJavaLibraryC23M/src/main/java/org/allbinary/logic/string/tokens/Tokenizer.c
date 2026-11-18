// Generated Code Do Not Modify
#include "org/allbinary/logic/string/tokens/Tokenizer.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif









void Tokenizer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Tokenizer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Tokenizer", nullptr);
    java_register_method("Tokenizer", "setSep", (void*) Tokenizer_setSep);
    java_register_method("Tokenizer", "setEndSep", (void*) Tokenizer_setEndSep);
    java_register_method("Tokenizer", "getInsideSep", (void*) Tokenizer_getInsideSep);
    java_register_method("Tokenizer", "getTokensFromString", (void*) Tokenizer_getTokensFromString);
    java_register_method("Tokenizer", "getTokens", (void*) Tokenizer_getTokens);
}

static void Tokenizer_initFields(Tokenizer* this) {
    
    this->endSep = StringUtil_getInstance()->EMPTY_STRING;
}


void Tokenizer_init(Tokenizer* this, const char* sep) {
    Tokenizer_register();
    Tokenizer_initFields(this);
        if (TsUtil_compareTo(TsUtil_getInstance(), sep, StringUtil_getInstance()->EMPTY_STRING) == 0) {
            java_throw(java_exception_new("Exception", "Sep provided is not valid"));
        }
        this->sep = sep;
}

Tokenizer* Tokenizer_new(const char* sep) {
    Tokenizer* this = java_object_alloc(sizeof(Tokenizer), "Tokenizer");
    Tokenizer_init(this, sep);
    return this;
}


void Tokenizer_setSep(Tokenizer* this, const char* sep) {
        this->sep = sep;
}


void Tokenizer_setEndSep(Tokenizer* this, const char* endSep) {
        this->endSep = endSep;
}


BasicArrayList* Tokenizer_getInsideSep(Tokenizer* this, const char* string) {
        BasicArrayList* tokenList = BasicArrayListD_new();
        int32_t index = 0;
        int32_t size = ((int32_t) strlen(string));
        while (index < size) {
            index = java_string_indexOf(string, this->sep, index);
            if (index != -1) {
                int32_t end = java_string_indexOf(string, this->endSep, index + ((int32_t) strlen(this->sep)));
                if (end != -1) {
                    BasicArrayList_add(tokenList, java_substring(string, index + ((int32_t) strlen(this->sep)), end - (((int32_t) strlen(this->endSep)) - 1)));
                    index = end + ((int32_t) strlen(this->endSep));
                } else {
                }
            } else {
                break;
            }
        }
        return tokenList;
}


BasicArrayList* Tokenizer_getTokensFromString(Tokenizer* this, const char* string, BasicArrayList* tokenVector) {
        int32_t index = 0;
        int32_t end = 0;
        while (index < ((int32_t) strlen(string))) {
            end = java_string_indexOf(string, this->sep, index);
            if (end != -1) {
                BasicArrayList_add(tokenVector, java_substring(string, index, end));
                index = end + ((int32_t) strlen(this->sep));
            } else {
                BasicArrayList_add(tokenVector, java_substring(string, index, ((int32_t) strlen(string))));
                break;
            }
        }
        return tokenVector;
}


ABHashtable* Tokenizer_getTokens(Tokenizer* this, BasicArrayList* stringVector) {
        ABHashtable* tokenHashtable = StdUtil_createHashtable(StdUtil_getInstance());
        const char* string = StringUtil_getInstance()->EMPTY_STRING;
        int32_t end = 0;
        int32_t size = BasicArrayList_size(stringVector);
        for (int32_t index = 0; index < size; index++) {
            string = ((const char*) stringVector->objectArray[index]);
            end = java_string_indexOf(string, this->sep);
            if (end >= 0) {
                Hashtable_put(tokenHashtable, java_substring(string, 0, end), java_substring(string, end + 1, ((int32_t) strlen(string))));
            }
        }
        return tokenHashtable;
}

