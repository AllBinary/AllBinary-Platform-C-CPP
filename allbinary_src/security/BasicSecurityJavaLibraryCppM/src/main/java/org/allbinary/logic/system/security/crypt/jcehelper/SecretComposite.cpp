
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
        



            #include <vector>
        
            #include "java/lang/Exception.h"
        
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

public: SecretComposite(SecretKey secretKey, Cipher cipher, std::vector<int8_t> key){
this->secretKey= secretKey;
    
this->cipher= cipher;
    
this->key= key;
    
}


                //@Throws(Exception.constructor)
            
    public: std::vector<int8_t> encrypt(std::vector<int8_t> array){
array= this->mutilate(array);
    
this->cipher.init(Cipher::ENCRYPT_MODE, this->secretKey);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cipher.doFinal(array);;
    
}


                //@Throws(Exception.constructor)
            
    public: std::vector<int8_t> decrypt(std::vector<int8_t> array){
this->cipher.init(Cipher::DECRYPT_MODE, this->secretKey);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->mutilate(this->cipher.doFinal(array));;
    
}


    private: std::vector<int8_t> mutilate(std::vector<int8_t> array){




                        for (
    int32_t index = 0;index < this->key.size(); index++)
        {

    int8_t value = this->key[index];;
    

                        if(value < 8 && value > 0)
                        
                                    {
                                    array= this->byteUtil.xorByte(array, static_cast<int32_t>(value));
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return array;
    
}


};

            

