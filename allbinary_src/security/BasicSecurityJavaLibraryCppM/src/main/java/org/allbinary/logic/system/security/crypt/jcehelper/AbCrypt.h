
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_ABCRYPT_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_ABCRYPT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/security/Security.h>
#include <java/security/spec/KeySpec.h>
class Cipher;
class SecretKey;
class SecretKeyFactory;
class TsUtil;
#include <org/allbinary/init/crypt/jcehelper/CryptInterface.h>
class NullUtil;
class PreLogUtil;
class CommonStrings;
class BouncyCastleProvider;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BaseSecretComposite;
class KeySpecFactory;
class SecretComposite;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbCrypt
            : public virtual Object
        , public virtual CryptInterface {

    private: TsUtil* tsUtil;

    private: BaseSecretComposite* secretComposite;

    private: std::string algorithm;

public: AbCrypt(std::string algorithm);

    public: void init(std::string keyAsString);

    public: std::vector<int8_t> encrypt(std::vector<int8_t> array);

    public: std::vector<int8_t> decrypt(std::vector<int8_t> array);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_ABCRYPT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_ABCRYPT_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_ABCRYPT_H_COMPLETE
        #if __has_include(<java/security/Security.h>)
#include <java/security/Security.h>
#endif
#if __has_include(<java/security/spec/KeySpec.h>)
#include <java/security/spec/KeySpec.h>
#endif
#if __has_include(<javax/crypto/Cipher.h>)
#include <javax/crypto/Cipher.h>
#endif
#if __has_include(<javax/crypto/SecretKey.h>)
#include <javax/crypto/SecretKey.h>
#endif
#if __has_include(<javax/crypto/SecretKeyFactory.h>)
#include <javax/crypto/SecretKeyFactory.h>
#endif
#if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include(<org/allbinary/init/crypt/jcehelper/CryptInterface.h>)
#include <org/allbinary/init/crypt/jcehelper/CryptInterface.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/bouncycastle/jce/provider/BouncyCastleProvider.h>)
#include <org/bouncycastle/jce/provider/BouncyCastleProvider.h>
#endif
#if __has_include("org/allbinary/logic/system/security/crypt/jcehelper/BaseSecretComposite.h")
#include "org/allbinary/logic/system/security/crypt/jcehelper/BaseSecretComposite.h"
#endif
#if __has_include("org/allbinary/logic/system/security/crypt/jcehelper/KeySpecFactory.h")
#include "org/allbinary/logic/system/security/crypt/jcehelper/KeySpecFactory.h"
#endif
#if __has_include("org/allbinary/logic/system/security/crypt/jcehelper/SecretComposite.h")
#include "org/allbinary/logic/system/security/crypt/jcehelper/SecretComposite.h"
#endif

        #endif
    
