// Generated Code Do Not Modify
#include "org/allbinary/init/crypt/jcehelper/BasicCryptUtil.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/init/crypt/jcehelper/CryptInterface.h"


static BasicCryptUtil* BasicCryptUtil_instance;



void BasicCryptUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BasicCryptUtil_instance = BasicCryptUtil_new();
}

void BasicCryptUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicCryptUtil", nullptr);
    java_register_method("BasicCryptUtil", "getDecryptedInputStream", (void*) BasicCryptUtil_getDecryptedInputStream);
}

static void BasicCryptUtil_initFields(BasicCryptUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->tsUtil = TsUtil_getInstance();
    this->XML_START = "<?xml";
}

void BasicCryptUtil_init(BasicCryptUtil* this) {
    BasicCryptUtil_register();
    BasicCryptUtil_initFields(this);
}

BasicCryptUtil* BasicCryptUtil_new(void) {
    BasicCryptUtil* this = java_object_alloc(sizeof(BasicCryptUtil), "BasicCryptUtil");
    BasicCryptUtil_init(this);
    return this;
}


BasicCryptUtil* BasicCryptUtil_getInstance(void) {
        return (BasicCryptUtil_staticInit(), BasicCryptUtil_instance);
}


// throws Exception
InputStream* BasicCryptUtil_getDecryptedInputStream(BasicCryptUtil* this, InputStream* inputStream, CryptInterface* cryptInterface) {
        ByteArrayOutputStream* buffer = ByteArrayOutputStream_new();
        int32_t ch = 0;
        while (true) {
            ch = InputStream_read(inputStream);
            if (ch == -1) {
                break;
            }
            ByteArrayOutputStream_write(buffer, ch);
        }
        int8_t* decrypted = CryptInterface_decrypt(cryptInterface, ByteArrayOutputStream_toByteArray(buffer));
        const char* decryptedString = java_string_new(decrypted);
        int32_t index = java_string_indexOf(decryptedString, this->XML_START);
        if (index > 0) {
            decryptedString = java_substring(decryptedString, index, (int32_t) strlen(decryptedString));
        }
        return ByteArrayInputStream_new(TsUtil_getByteArray(this->tsUtil, decryptedString));
}

