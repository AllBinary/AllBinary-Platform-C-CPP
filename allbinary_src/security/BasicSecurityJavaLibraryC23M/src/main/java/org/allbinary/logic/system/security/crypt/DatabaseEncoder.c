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
// package org.allbinary.logic.system.security.crypt

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/tokens/Tokenizer.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct DatabaseEncoder DatabaseEncoder;
struct DatabaseEncoder {
    char unused;
};


DatabaseEncoder* DatabaseEncoder_new(void);

void DatabaseEncoder_init(DatabaseEncoder* this);
const char* DatabaseEncoder_encode(int8_t* value);
int8_t* DatabaseEncoder_decode(const char* value);


void DatabaseEncoder_init(DatabaseEncoder* this) {
}

DatabaseEncoder* DatabaseEncoder_new(void) {
    DatabaseEncoder* this = calloc(1, sizeof(DatabaseEncoder));
    DatabaseEncoder_init(this);
    return this;
}


const char* DatabaseEncoder_encode(int8_t* value) {
        JAVA_TRY {
            int8_t* array = value;
            StringMaker* stringBuffer = StringMaker_new();
            for (int32_t index = 0; index < java_array_length(array); index++) {
                StringMaker_append(stringBuffer, Byte_toString(array[index]));
                if (index < java_array_length(array) - 1) {
                    StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
                }
            }
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            PreLogUtil_putOE(commonStrings->EXCEPTION, "DatabaseEncoder", "decode", e);
            return StringUtil_getInstance()->EMPTY_STRING;
        } JAVA_END_TRY;
}


int8_t* DatabaseEncoder_decode(const char* value) {
        JAVA_TRY {
            Tokenizer* tokenizer = Tokenizer_new(CommonSeps_getInstance()->SPACE);
            BasicArrayList* vector = Tokenizer_getTokensFromString(tokenizer, value, BasicArrayListD_new());
            int32_t size = BasicArrayList_size(vector);
            int8_t* decode = ((int8_t*) java_array_new(sizeof(int8_t), size));
            const char* byteOfData = nullptr;
            for (int32_t index = 0; index < size; index++) {
                byteOfData = ((const char*) vector->objectArray[index]);
                decode[index] = Byte_parseByte(byteOfData);
            }
            return decode;
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            PreLogUtil_putSE(commonStrings->EXCEPTION, "DatabaseEncoder", "decode", e);
            return NullUtil_getInstance()->NULL_BYTE_ARRAY;
        } JAVA_END_TRY;
}

