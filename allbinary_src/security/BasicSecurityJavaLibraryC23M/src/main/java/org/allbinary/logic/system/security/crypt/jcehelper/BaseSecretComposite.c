// Generated Code Do Not Modify
#include "org/allbinary/logic/system/security/crypt/jcehelper/BaseSecretComposite.h"
#include "org/allbinary/logic/NullUtil.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif


BaseSecretComposite* BaseSecretComposite_NULL_SECRET_COMPOSITE;



void BaseSecretComposite_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BaseSecretComposite_NULL_SECRET_COMPOSITE = BaseSecretComposite_new();
}

void BaseSecretComposite_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BaseSecretComposite", nullptr);
    java_register_method("BaseSecretComposite", "encrypt", (void*) BaseSecretComposite_encrypt);
    java_register_method("BaseSecretComposite", "decrypt", (void*) BaseSecretComposite_decrypt);
}

void BaseSecretComposite_init(BaseSecretComposite* this) {
    BaseSecretComposite_register();
}

BaseSecretComposite* BaseSecretComposite_new(void) {
    BaseSecretComposite* this = java_object_alloc(sizeof(BaseSecretComposite), "BaseSecretComposite");
    BaseSecretComposite_init(this);
    return this;
}


// throws Exception
int8_t* BaseSecretComposite_encrypt(BaseSecretComposite* this, int8_t* array) {
        return NullUtil_getInstance()->NULL_BYTE_ARRAY;
}


// throws Exception
int8_t* BaseSecretComposite_decrypt(BaseSecretComposite* this, int8_t* array) {
        return NullUtil_getInstance()->NULL_BYTE_ARRAY;
}

