
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
        #include "BaseSecretComposite.h"
#include "KeySpecFactory.h"
#include "SecretComposite.h"

class AbCrypt
            : public Object
        : public CryptInterface {
        

    private: const tsUtil: TsUtil = TsUtil.getInstance()!;

    private: secretComposite: BaseSecretComposite = BaseSecretComposite.NULL_SECRET_COMPOSITE;

    private: algorithm: string;

public constructor (string algorithm){

            super();
        this.algorithm= algorithm;
    
}


    public init(string keyAsString){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

        try {
            
        try {
            Security.addProvider(new BouncyCastleProvider());
    

                //: 
} catch(e) 
            {
PreLogUtil.putOE(commonStrings!.EXCEPTION, this, commonStrings!.INIT, e);
    
}


    key: std::vector<int8_t> = this.tsUtil!.getByteArray(keyAsString)!;;
    

    keySpec: KeySpec = KeySpecFactory.getInstance()!.getInstance(this.algorithm, key)!;;
    

    keyFactory: SecretKeyFactory = SecretKeyFactory.getInstance(this.algorithm)!;;
    

    secretKey: SecretKey = keyFactory!.generateSecret(keySpec)!;;
    

    cipher: Cipher = Cipher.getInstance(this.algorithm)!;;
    
this.secretComposite= new SecretComposite(secretKey, cipher, key);
    

                //: 
} catch(e) 
            {
PreLogUtil.putOE("init Failed", this, commonStrings!.INIT, e);
    
}

}


    public std::vector<int8_t> encrypt(std::vector<int8_t> array){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.secretComposite!.encrypt(array);;
    

                //: 
} catch(e) 
            {
PreLogUtil.putOE("Encrypt Failed", this, "encrypt", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil.getInstance()!.NULL_BYTE_ARRAY;
    
}

}


    public std::vector<int8_t> decrypt(std::vector<int8_t> array){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.secretComposite!.decrypt(array);;
    

                //: 
} catch(e) 
            {
PreLogUtil.putOE("decrypt Failed", this, "decrypt", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil.getInstance()!.NULL_BYTE_ARRAY;
    
}

}


};

            

