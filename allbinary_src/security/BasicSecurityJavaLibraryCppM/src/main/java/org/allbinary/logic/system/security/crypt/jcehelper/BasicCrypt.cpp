
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_BASICCRYPT_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_BASICCRYPT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/crypt/jcehelper/BasicCrypt.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/init/crypt/jcehelper/CryptInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/java/byteutil/ByteUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

BasicCrypt::BasicCrypt(std::string keyAsString) : byteUtil(ByteUtil::getInstance()){

    std::vector<int8_t> key = NullUtil::getInstance()->NULL_BYTE_ARRAY;;
    

        try {
            key= TsUtil::getInstance()->getByteArray(keyAsString);
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::putOE(commonStrings->EXCEPTION, this, "AbCrypt(alg,key)", &e);
    
}

this->key= key;
    
}


    auto BasicCrypt::encrypt(std::vector<int8_t> array) -> std::vector<int8_t>{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->mutilate(array);;
    

                //: 
} catch(Exception& e) 
            {
PreLogUtil::putOE("Encrypt Failed", this, "encrypt", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NullUtil::getInstance()->NULL_BYTE_ARRAY;
    
}

}


    auto BasicCrypt::decrypt(std::vector<int8_t> array) -> std::vector<int8_t>{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->mutilate(array);;
    

                //: 
} catch(Exception& e) 
            {
PreLogUtil::putOE("decrypt Failed", this, "decrypt", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NullUtil::getInstance()->NULL_BYTE_ARRAY;
    
}

}


    auto BasicCrypt::mutilate(std::vector<int8_t> array) -> std::vector<int8_t>{

    int8_t value;;
    




                        for (
    int32_t index = 0;index < this->key.size(); index++)
        {
value= this->key[index];
    
array= this->byteUtil->xor_(array, value);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return array;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_BASICCRYPT_CPP
