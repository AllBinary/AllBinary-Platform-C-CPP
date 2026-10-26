
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/security/Provider.h>

      
#include <java/security/Security.h>

      
#include <java/security/spec/KeySpec.h>

      
#include <javax/crypto/Cipher.h>

      
#include <javax/crypto/SecretKey.h>

      
#include <javax/crypto/SecretKeyFactory.h>

      
#include <org/allbinary/init/crypt/jcehelper/CryptInterface.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SunJCE.h"
#include "KeySpecFactory.h"

class AbBasicCrypt
            : public Object
        : public CryptInterface {

    private: Cipher cipher;

    private: SecretKey secretKey;

    private: std::string algorithm;

    private: std::vector<int8_t> key;

public: AbBasicCrypt(std::string algorithm, std::string key){

        try {
            this->algorithm= algorithm;
    
this->key= key.getBytes();
    
this->init();
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::putOE(commonStrings.EXCEPTION, this, "AbCrypt(alg,key)", e);
    
}

}


    private: void init(){

        try {
            
    Provider sunJce = com::sun::crypto::provider::SunJCE();;
    
Security::addProvider(sunJce);
    

    KeySpec keySpec = KeySpecFactory::getInstance().getInstance(this->algorithm, this->key);;
    

    SecretKeyFactory keyFactory = SecretKeyFactory::getInstance(this->algorithm);;
    
this->secretKey= keyFactory.generateSecret(keySpec);
    
this->cipher= Cipher::getInstance(this->algorithm);
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::putOE("init Failed", this, commonStrings.INIT, e);
    
}

}


    public: std::vector<int8_t> encrypt(std::vector<int8_t> array){

        try {
            this->cipher.init(Cipher::ENCRYPT_MODE, secretKey);
    

    std::vector<int8_t> ivArray = this->secretKey.getEncoded();;
    

    std::vector<int8_t> encrypted = this->cipher.doFinal(array);;
    

    std::vector<int8_t> result = std::vector<int8_t>(ivArray.size() +encrypted.size());;
    
PreLogUtil::put("ivArray Length: " +ivArray.size(), this, "encrypt");
    




                        for (
    int32_t index = 0;index < ivArray.size(); index++)
        {
result[index]= ivArray[index];
    
}





                        for (
    int32_t index = 0;index < encrypted.size(); index++)
        {
result[index +ivArray.size()]= encrypted[index];
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {
PreLogUtil::putOE("Encrypt Failed", this, "encrypt", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: std::vector<int8_t> decrypt(std::vector<int8_t> array){

        try {
            this->cipher.init(Cipher::DECRYPT_MODE, secretKey);
    

    std::vector<int8_t> ivArray = std::vector<int8_t>(8);;
    




                        for (
    int32_t index = 0;index < 8; index++)
        {
ivArray[index]= array[index];
    
}

PreLogUtil::put("ivArray Length: " +ivArray.size(), this, "encrypt");
    

    std::vector<int8_t> result = std::vector<int8_t>(array.size() -ivArray.size());;
    




                        for (
    int32_t index = ivArray.size();index < array.size(); index++)
        {
result[index -ivArray.size()]= array[index];
    
}


    std::vector<int8_t> decrypted = this->cipher.doFinal(result);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {
PreLogUtil::putOE("decrypt Failed", this, "decrypt", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


};

            

