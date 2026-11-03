
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_SECRETCOMPOSITE_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_SECRETCOMPOSITE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/crypt/jcehelper/SecretComposite.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/crypto/Cipher.h>

      
#include <javax/crypto/SecretKey.h>

      
#include <org/allbinary/logic/java/byteutil/ByteUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/crypt/jcehelper/BaseSecretComposite.h"


SecretComposite::SecretComposite(SecretKey* secretKey, Cipher* cipher, std::vector<int8_t> key) : byteUtil(ByteUtil::getInstance()){
this->secretKey= secretKey;
    
this->cipher= cipher;
    
this->key= key;
    
}


                //@Throws(Exception.constructor)
            
    auto SecretComposite::encrypt(std::vector<int8_t> array) -> std::vector<int8_t>{
array= this->mutilate(array);
    
this->cipher->init(Cipher::ENCRYPT_MODE, this->secretKey);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->cipher->doFinal(array);;
    
}


                //@Throws(Exception.constructor)
            
    auto SecretComposite::decrypt(std::vector<int8_t> array) -> std::vector<int8_t>{
this->cipher->init(Cipher::DECRYPT_MODE, this->secretKey);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->mutilate(this->cipher->doFinal(array));;
    
}


    auto SecretComposite::mutilate(std::vector<int8_t> array) -> std::vector<int8_t>{




                        for (
    int32_t index = 0;index < this->key.size(); index++)
        {

    int8_t value = this->key[index];;
    

                        if(value < 8 && value > 0)
                        
                                    {
                                    array= this->byteUtil->xorByte(array, static_cast<int32_t>(value));
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return array;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_SECRETCOMPOSITE_CPP
