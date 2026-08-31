
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
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
        

    private: cipher: Cipher;

    private: secretKey: SecretKey;

    private: algorithm: string;

    private: key: std::vector<int8_t>;

public constructor (string algorithm, string key){

            super();
        
        try {
            this.algorithm= algorithm;
    
this.key= key.getBytes();
    
this.init();
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
PreLogUtil.putOE(commonStrings!.EXCEPTION, this, "AbCrypt(alg,key)", e);
    
}

}


    init(){

        try {
            
    sunJce: Provider = new com.sun.crypto.provider.SunJCE();;
    
Security.addProvider(sunJce);
    

    keySpec: KeySpec = KeySpecFactory.getInstance()!.getInstance(this.algorithm, this.key)!;;
    

    keyFactory: SecretKeyFactory = SecretKeyFactory.getInstance(this.algorithm)!;;
    
this.secretKey= keyFactory!.generateSecret(keySpec);
    
this.cipher= Cipher.getInstance(this.algorithm);
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
PreLogUtil.putOE("init Failed", this, commonStrings!.INIT, e);
    
}

}


    public std::vector<int8_t> encrypt(std::vector<int8_t> array){

        try {
            this.cipher.init(Cipher.ENCRYPT_MODE, secretKey);
    

    ivArray: std::vector<int8_t> = this.secretKey!.getEncoded()!;;
    

    encrypted: std::vector<int8_t> = this.cipher.doFinal(array)!;;
    

    result: std::vector<int8_t> = new Array(ivArray!.length +encrypted.length);;
    
PreLogUtil.put("ivArray Length: " +ivArray!.length, this, "encrypt");
    




                        for (
    index: int32_t = 0;index < ivArray!.length; index++)
        {
result[index]= ivArray[index]!;
    
}





                        for (
    index: int32_t = 0;index < encrypted.length; index++)
        {
result[index +ivArray!.length]= encrypted[index]!;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {
PreLogUtil.putOE("Encrypt Failed", this, "encrypt", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public std::vector<int8_t> decrypt(std::vector<int8_t> array){

        try {
            this.cipher.init(Cipher.DECRYPT_MODE, secretKey);
    

    ivArray: std::vector<int8_t> = new Array(8);;
    




                        for (
    index: int32_t = 0;index < 8; index++)
        {
ivArray[index]= array[index]!;
    
}

PreLogUtil.put("ivArray Length: " +ivArray!.length, this, "encrypt");
    

    result: std::vector<int8_t> = new Array(array.length -ivArray!.length);;
    




                        for (
    index: int32_t = ivArray!.length
                ;index < array.length; index++)
        {
result[index -ivArray!.length]= array[index]!;
    
}


    decrypted: std::vector<int8_t> = this.cipher.doFinal(result)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {
PreLogUtil.putOE("decrypt Failed", this, "decrypt", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


};

            

