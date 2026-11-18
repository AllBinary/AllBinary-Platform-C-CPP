// Generated Code Do Not Modify
#include "org/allbinary/logic/system/security/crypt/jcehelper/SecretComposite.h"
#include "org/allbinary/logic/java/byteutil/ByteUtil.h"
#include "org/allbinary/logic/system/security/crypt/jcehelper/BaseSecretComposite.h"






static int8_t* SecretComposite_mutilate(SecretComposite* this, int8_t* array);

void SecretComposite_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SecretComposite_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SecretComposite", "BaseSecretComposite");
    java_register_method("SecretComposite", "encrypt", (void*) SecretComposite_encrypt);
    java_register_method("SecretComposite", "decrypt", (void*) SecretComposite_decrypt);
    java_register_method("SecretComposite", "mutilate", (void*) SecretComposite_mutilate);
}

static void SecretComposite_initFields(SecretComposite* this) {
    this->byteUtil = ByteUtil_getInstance();
    
    
    
}


void SecretComposite_init(SecretComposite* this, SecretKey* secretKey, Cipher* cipher, int8_t* key) {
    SecretComposite_register();
    BaseSecretComposite_init(&this->base);
    SecretComposite_initFields(this);
        this->secretKey = secretKey;
        this->cipher = cipher;
        this->key = key;
}

SecretComposite* SecretComposite_new(SecretKey* secretKey, Cipher* cipher, int8_t* key) {
    SecretComposite* this = java_object_alloc(sizeof(SecretComposite), "SecretComposite");
    SecretComposite_init(this, secretKey, cipher, key);
    return this;
}


// throws Exception
int8_t* SecretComposite_encrypt(SecretComposite* this, int8_t* array) {
        array = SecretComposite_mutilate(this, array);
        Cipher_initMethod(this->cipher, (Cipher_staticInit(), Cipher_ENCRYPT_MODE), this->secretKey);
        return Cipher_doFinal(this->cipher, array);
}


// throws Exception
int8_t* SecretComposite_decrypt(SecretComposite* this, int8_t* array) {
        Cipher_initMethod(this->cipher, (Cipher_staticInit(), Cipher_DECRYPT_MODE), this->secretKey);
        return SecretComposite_mutilate(this, Cipher_doFinal(this->cipher, array));
}


static int8_t* SecretComposite_mutilate(SecretComposite* this, int8_t* array) {
        for (int32_t index = 0; index < java_array_length(this->key); index++) {
            int8_t value = this->key[index];
            if (((int32_t) value) < 8 && ((int32_t) value) > 0) {
                array = ByteUtil_xorByte(this->byteUtil, array, ((int32_t) value));
            }
        }
        return array;
}

