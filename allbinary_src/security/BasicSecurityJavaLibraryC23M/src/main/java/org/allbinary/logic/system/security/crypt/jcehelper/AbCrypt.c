// Generated Code Do Not Modify
#include "org/allbinary/logic/system/security/crypt/jcehelper/AbCrypt.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/bouncycastle/jce/provider/BouncyCastleProvider.h"
#include "org/allbinary/logic/system/security/crypt/jcehelper/BaseSecretComposite.h"
#include "org/allbinary/logic/system/security/crypt/jcehelper/KeySpecFactory.h"
#include "org/allbinary/logic/system/security/crypt/jcehelper/SecretComposite.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif







void AbCrypt_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AbCrypt_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AbCrypt", nullptr);
    java_register_method("AbCrypt", "init", (void*) AbCrypt_initMethod);
    java_register_method("AbCrypt", "encrypt", (void*) AbCrypt_encrypt);
    java_register_method("AbCrypt", "decrypt", (void*) AbCrypt_decrypt);
}

static void AbCrypt_initFields(AbCrypt* this) {
    this->tsUtil = TsUtil_getInstance();
    this->secretComposite = (BaseSecretComposite_staticInit(), BaseSecretComposite_NULL_SECRET_COMPOSITE);
    
}


void AbCrypt_init(AbCrypt* this, const char* algorithm) {
    AbCrypt_register();
    AbCrypt_initFields(this);
        this->algorithm = algorithm;
}

AbCrypt* AbCrypt_new(const char* algorithm) {
    AbCrypt* this = java_object_alloc(sizeof(AbCrypt), "AbCrypt");
    AbCrypt_init(this, algorithm);
    return this;
}


void AbCrypt_initMethod(AbCrypt* this, const char* keyAsString) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        JAVA_TRY {
            JAVA_TRY {
                Security_addProvider(BouncyCastleProvider_new());
            } JAVA_CATCH(Exception, e) {
                PreLogUtil_putOE(commonStrings->EXCEPTION, this, commonStrings->INIT, e);
            } JAVA_END_TRY;
            int8_t* key = TsUtil_getByteArray(this->tsUtil, keyAsString);
            KeySpec* keySpec = KeySpecFactory_getInstance(KeySpecFactory_getInstance(), this->algorithm, key);
            SecretKeyFactory* keyFactory = SecretKeyFactory_getInstance(this->algorithm);
            SecretKey* secretKey = SecretKeyFactory_generateSecret(keyFactory, keySpec);
            Cipher* cipher = Cipher_getInstance(this->algorithm);
            this->secretComposite = SecretComposite_new(secretKey, cipher, key);
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE("init Failed", this, commonStrings->INIT, e);
        } JAVA_END_TRY;
}


int8_t* AbCrypt_encrypt(AbCrypt* this, int8_t* array) {
        JAVA_TRY {
            return BaseSecretComposite_encrypt(this->secretComposite, array);
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE("Encrypt Failed", this, "encrypt", e);
            return NullUtil_getInstance()->NULL_BYTE_ARRAY;
        } JAVA_END_TRY;
}


int8_t* AbCrypt_decrypt(AbCrypt* this, int8_t* array) {
        JAVA_TRY {
            return BaseSecretComposite_decrypt(this->secretComposite, array);
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE("decrypt Failed", this, "decrypt", e);
            return NullUtil_getInstance()->NULL_BYTE_ARRAY;
        } JAVA_END_TRY;
}

