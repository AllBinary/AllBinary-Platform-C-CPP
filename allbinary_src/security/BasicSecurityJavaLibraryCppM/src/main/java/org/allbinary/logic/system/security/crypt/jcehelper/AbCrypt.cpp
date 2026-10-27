
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/security/Security.h>

      
#include <java/security/spec/KeySpec.h>

      
#include <javax/crypto/Cipher.h>

      
#include <javax/crypto/SecretKey.h>

      
#include <javax/crypto/SecretKeyFactory.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/init/crypt/jcehelper/CryptInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/bouncycastle/jce/provider/BouncyCastleProvider.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/crypt/jcehelper/BaseSecretComposite.h"
#include "org/allbinary/logic/system/security/crypt/jcehelper/KeySpecFactory.h"
#include "org/allbinary/logic/system/security/crypt/jcehelper/SecretComposite.h"

class AbCrypt
            : public Object
        , public CryptInterface {

    private: TsUtil* tsUtil = TsUtil::getInstance();

    private: BaseSecretComposite* secretComposite = BaseSecretComposite::NULL_SECRET_COMPOSITE;

    private: std::string algorithm;

public: AbCrypt(std::string algorithm){
this->algorithm= algorithm;
    
}


    public: void init(std::string keyAsString){

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

        try {
            
        try {
            Security::addProvider(new BouncyCastleProvider());
    

                //: 
} catch(Exception& e) 
            {
PreLogUtil::putOE(commonStrings->EXCEPTION, this, commonStrings->INIT, &e);
    
}


    std::vector<int8_t> key = this->tsUtil->getByteArray(keyAsString);;
    

    KeySpec* keySpec = KeySpecFactory::getInstance()->getInstance(this->algorithm, key);;
    

    SecretKeyFactory* keyFactory = SecretKeyFactory::getInstance(this->algorithm);;
    

    SecretKey* secretKey = keyFactory->generateSecret(keySpec);;
    

    Cipher* cipher = Cipher::getInstance(this->algorithm);;
    
this->secretComposite= new SecretComposite(secretKey, cipher, key);
    

                //: 
} catch(Exception& e) 
            {
PreLogUtil::putOE("init Failed", this, commonStrings->INIT, &e);
    
}

}


    public: std::vector<int8_t> encrypt(std::vector<int8_t> array){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->secretComposite->encrypt(array);;
    

                //: 
} catch(Exception& e) 
            {
PreLogUtil::putOE("Encrypt Failed", this, "encrypt", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil::getInstance()->NULL_BYTE_ARRAY;
    
}

}


    public: std::vector<int8_t> decrypt(std::vector<int8_t> array){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->secretComposite->decrypt(array);;
    

                //: 
} catch(Exception& e) 
            {
PreLogUtil::putOE("decrypt Failed", this, "decrypt", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil::getInstance()->NULL_BYTE_ARRAY;
    
}

}


};

            

