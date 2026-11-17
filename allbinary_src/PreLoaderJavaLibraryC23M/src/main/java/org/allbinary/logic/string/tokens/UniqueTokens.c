/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.logic.string.tokens

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashSet.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/regex/replace/Replace.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct UniqueTokens UniqueTokens;
struct UniqueTokens {
    BasicArrayList* specialCharacters;
};


UniqueTokens* UniqueTokens_new(void);

void UniqueTokens_init(UniqueTokens* this);
HashSet* UniqueTokens_getWhithoutDashesAndSkipNumberOnlyTokens(UniqueTokens* this, BasicArrayList* stringVector);
static bool UniqueTokens_numberOnly(UniqueTokens* this, const char* subCleaningString);
static bool UniqueTokens_isSpecialCharacter(UniqueTokens* this, const char* subCleaningString);

static void UniqueTokens_initFields(UniqueTokens* this) {
    this->specialCharacters = BasicArrayListD_new();
}


void UniqueTokens_init(UniqueTokens* this) {
    UniqueTokens_initFields(this);
        BasicArrayList_add(this->specialCharacters, "!");
        BasicArrayList_add(this->specialCharacters, "@");
        BasicArrayList_add(this->specialCharacters, CommonPhoneStrings_getInstance()->POUND);
        BasicArrayList_add(this->specialCharacters, "$");
        BasicArrayList_add(this->specialCharacters, "%");
        BasicArrayList_add(this->specialCharacters, "^");
        BasicArrayList_add(this->specialCharacters, CommonSeps_getInstance()->AMPERSAND);
        BasicArrayList_add(this->specialCharacters, CommonPhoneStrings_getInstance()->STAR);
        BasicArrayList_add(this->specialCharacters, "(");
        BasicArrayList_add(this->specialCharacters, ")");
        BasicArrayList_add(this->specialCharacters, "-");
        BasicArrayList_add(this->specialCharacters, "_");
        BasicArrayList_add(this->specialCharacters, "+");
        BasicArrayList_add(this->specialCharacters, "=");
        BasicArrayList_add(this->specialCharacters, "\\");
        BasicArrayList_add(this->specialCharacters, "|");
        BasicArrayList_add(this->specialCharacters, AbPathData_getInstance()->EXTENSION_SEP);
        BasicArrayList_add(this->specialCharacters, ",");
        BasicArrayList_add(this->specialCharacters, "<");
        BasicArrayList_add(this->specialCharacters, ">");
        BasicArrayList_add(this->specialCharacters, "?");
        BasicArrayList_add(this->specialCharacters, "/");
        BasicArrayList_add(this->specialCharacters, "~");
        BasicArrayList_add(this->specialCharacters, "`");
}

UniqueTokens* UniqueTokens_new(void) {
    UniqueTokens* this = calloc(1, sizeof(UniqueTokens));
    UniqueTokens_init(this);
    return this;
}


// throws Exception
HashSet* UniqueTokens_getWhithoutDashesAndSkipNumberOnlyTokens(UniqueTokens* this, BasicArrayList* stringVector) {
        JAVA_TRY {
            HashSet* hashSet = HashSet_new();
            int32_t index = 0;
            CommonSeps* commonSeps = CommonSeps_getInstance();
            while (index < BasicArrayList_size(stringVector)) {
                const char* keywords = ((const char*) BasicArrayList_get(stringVector, index));
                Tokenizer* tokenizer = Tokenizer_new(commonSeps->COMMA);
                BasicArrayList* keywordVector = Tokenizer_getTokensFromString(tokenizer, keywords, BasicArrayListD_new());
                for (int32_t forIndex = 0; forIndex < BasicArrayList_size(keywordVector); forIndex++) {
                    const char* cleanString = ((const char*) BasicArrayList_get(keywordVector, forIndex));
                    cleanString = java_string_trim(cleanString);
                    if (java_string_indexOf(cleanString, u'-') != -1) {
                        cleanString = Replace_all(Replace_new("-", commonSeps->SPACE), cleanString);
                    }
                    HashSet_add(hashSet, cleanString);
                    if (java_string_indexOf(cleanString, u' ') != -1) {
                        Tokenizer* spaceTokenizer = Tokenizer_new(commonSeps->SPACE);
                        BasicArrayList* subKeywordVector = Tokenizer_getTokensFromString(spaceTokenizer, cleanString, BasicArrayListD_new());
                        for (int32_t spaceIndex = 0; spaceIndex < BasicArrayList_size(subKeywordVector); spaceIndex++) {
                            const char* subCleanString = ((const char*) BasicArrayList_get(subKeywordVector, spaceIndex));
                            if (!UniqueTokens_isSpecialCharacter(this, subCleanString) && !UniqueTokens_numberOnly(this, subCleanString)) {
                                HashSet_add(hashSet, subCleanString);
                            }
                        }
                    }
                }
                index++;
            }
            return hashSet;
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}


static bool UniqueTokens_numberOnly(UniqueTokens* this, const char* subCleaningString) {
        JAVA_TRY {
            ((int32_t) strtol(subCleaningString, nullptr, 10));
            return true;
        } JAVA_CATCH(NumberFormatException, e) {
            return false;
        } JAVA_END_TRY;
}


static bool UniqueTokens_isSpecialCharacter(UniqueTokens* this, const char* subCleaningString) {
        for (int32_t index = 0; index < BasicArrayList_size(this->specialCharacters); index++) {
            if (strcmp(subCleaningString, ((const char*) BasicArrayList_get(this->specialCharacters, index))) == 0) {
                return true;
            }
        }
        return false;
}

