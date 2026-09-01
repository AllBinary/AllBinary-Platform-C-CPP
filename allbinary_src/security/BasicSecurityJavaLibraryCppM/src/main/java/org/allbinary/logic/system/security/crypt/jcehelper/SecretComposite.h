
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

            #include <vector>
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <javax/crypto/Cipher.h>

      
#include <javax/crypto/SecretKey.h>

      
#include <org/allbinary/logic/java/byteutil/ByteUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseSecretComposite.h"

class SecretComposite: public BaseSecretComposite {

    private: const ByteUtil byteUtil = ByteUtil::getInstance();

    private: Cipher cipher;

    private: SecretKey secretKey;

    private: std::vector<int8_t> key;

public: SecretComposite(SecretKey secretKey, Cipher cipher, std::vector<int8_t> key);

                //@Throws(Exception.constructor)
            
    public: std::vector<int8_t> encrypt(std::vector<int8_t> array);

                //@Throws(Exception.constructor)
            
    public: std::vector<int8_t> decrypt(std::vector<int8_t> array);

    private: std::vector<int8_t> mutilate(std::vector<int8_t> array);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_SECRETCOMPOSITE_H
