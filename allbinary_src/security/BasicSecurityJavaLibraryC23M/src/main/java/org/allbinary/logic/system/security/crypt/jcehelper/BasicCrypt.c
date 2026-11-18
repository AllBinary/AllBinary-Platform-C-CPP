// Generated Code Do Not Modify
#include "org/allbinary/logic/system/security/crypt/jcehelper/BasicCrypt.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/java/byteutil/ByteUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif







void BasicCrypt_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicCrypt_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicCrypt", nullptr);
    java_register_method("BasicCrypt", "encrypt", (void*) BasicCrypt_encrypt);
    java_register_method("BasicCrypt", "decrypt", (void*) BasicCrypt_decrypt);
    java_register_method("BasicCrypt", "mutilate", (void*) BasicCrypt_mutilate);
}

static void BasicCrypt_initFields(BasicCrypt* this) {
    this->byteUtil = ByteUtil_getInstance();
    
}


void BasicCrypt_init(BasicCrypt* this, const char* keyAsString) {
    BasicCrypt_register();
    BasicCrypt_initFields(this);
        int8_t* key = NullUtil_getInstance()->NULL_BYTE_ARRAY;
        JAVA_TRY {
            key = TsUtil_getByteArray(TsUtil_getInstance(), keyAsString);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            PreLogUtil_putOE(commonStrings->EXCEPTION, this, "AbCrypt(alg,key)", e);
        } JAVA_END_TRY;
        this->key = key;
}

BasicCrypt* BasicCrypt_new(const char* keyAsString) {
    BasicCrypt* this = java_object_alloc(sizeof(BasicCrypt), "BasicCrypt");
    BasicCrypt_init(this, keyAsString);
    return this;
}


int8_t* BasicCrypt_encrypt(BasicCrypt* this, int8_t* array) {
        JAVA_TRY {
            return BasicCrypt_mutilate(this, array);
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE("Encrypt Failed", this, "encrypt", e);
            return NullUtil_getInstance()->NULL_BYTE_ARRAY;
        } JAVA_END_TRY;
}


int8_t* BasicCrypt_decrypt(BasicCrypt* this, int8_t* array) {
        JAVA_TRY {
            return BasicCrypt_mutilate(this, array);
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE("decrypt Failed", this, "decrypt", e);
            return NullUtil_getInstance()->NULL_BYTE_ARRAY;
        } JAVA_END_TRY;
}


int8_t* BasicCrypt_mutilate(BasicCrypt* this, int8_t* array) {
        int8_t value = 0;
        for (int32_t index = 0; index < java_array_length(this->key); index++) {
            value = this->key[index];
            array = ByteUtil_xor(this->byteUtil, array, value);
        }
        return array;
}

