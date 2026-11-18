// Generated Code Do Not Modify
#include "org/allbinary/logic/system/security/crypt/DatabaseEncoder.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/tokens/Tokenizer.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif






void DatabaseEncoder_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DatabaseEncoder_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DatabaseEncoder", nullptr);
}


void DatabaseEncoder_init(DatabaseEncoder* this) {
    DatabaseEncoder_register();
}

DatabaseEncoder* DatabaseEncoder_new(void) {
    DatabaseEncoder* this = java_object_alloc(sizeof(DatabaseEncoder), "DatabaseEncoder");
    DatabaseEncoder_init(this);
    return this;
}


const char* DatabaseEncoder_encode(int8_t* value) {
        JAVA_TRY {
            int8_t* array = value;
            StringMaker* stringBuffer = StringMaker_new();
            for (int32_t index = 0; index < java_array_length(array); index++) {
                StringMaker_append(stringBuffer, java_string_of(array[index]));
                if (index < java_array_length(array) - 1) {
                    StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
                }
            }
            return java_string_of(stringBuffer);
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

