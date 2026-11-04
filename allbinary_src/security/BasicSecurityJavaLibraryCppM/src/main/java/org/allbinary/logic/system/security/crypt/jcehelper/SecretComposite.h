
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_SECRETCOMPOSITE_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_SECRETCOMPOSITE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/crypto/Cipher.h>
#include <javax/crypto/SecretKey.h>
class ByteUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/crypt/jcehelper/BaseSecretComposite.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SecretComposite: public BaseSecretComposite {

    private: ByteUtil* byteUtil;

    private: Cipher* cipher;

    private: SecretKey* secretKey;

    private: std::vector<int8_t> key;

public: SecretComposite(SecretKey* secretKey, Cipher* cipher, std::vector<int8_t> key);

                //@Throws(Exception.constructor)
            
    public: std::vector<int8_t> encrypt(std::vector<int8_t> array);

                //@Throws(Exception.constructor)
            
    public: std::vector<int8_t> decrypt(std::vector<int8_t> array);

    private: std::vector<int8_t> mutilate(std::vector<int8_t> array);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_SECRETCOMPOSITE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_SECRETCOMPOSITE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_SECRETCOMPOSITE_H_COMPLETE
        #if __has_include(<javax/crypto/Cipher.h>)
#include <javax/crypto/Cipher.h>
#endif
#if __has_include(<javax/crypto/SecretKey.h>)
#include <javax/crypto/SecretKey.h>
#endif
#if __has_include(<org/allbinary/logic/java/byteutil/ByteUtil.h>)
#include <org/allbinary/logic/java/byteutil/ByteUtil.h>
#endif
#if __has_include("org/allbinary/logic/system/security/crypt/jcehelper/BaseSecretComposite.h")
#include "org/allbinary/logic/system/security/crypt/jcehelper/BaseSecretComposite.h"
#endif

        #endif
    
