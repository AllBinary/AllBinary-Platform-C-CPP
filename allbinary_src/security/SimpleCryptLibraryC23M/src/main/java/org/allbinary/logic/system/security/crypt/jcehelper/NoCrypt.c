// Generated Code Do Not Modify
#include "org/allbinary/logic/system/security/crypt/jcehelper/NoCrypt.h"





void NoCrypt_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NoCrypt_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoCrypt", nullptr);
    java_register_method("NoCrypt", "encrypt", (void*) NoCrypt_encrypt);
    java_register_method("NoCrypt", "decrypt", (void*) NoCrypt_decrypt);
}

void NoCrypt_init(NoCrypt* this) {
    NoCrypt_register();
}

NoCrypt* NoCrypt_new(void) {
    NoCrypt* this = java_object_alloc(sizeof(NoCrypt), "NoCrypt");
    NoCrypt_init(this);
    return this;
}


int8_t* NoCrypt_encrypt(NoCrypt* this, int8_t* array) {
        return array;
}


int8_t* NoCrypt_decrypt(NoCrypt* this, int8_t* array) {
        return array;
}

