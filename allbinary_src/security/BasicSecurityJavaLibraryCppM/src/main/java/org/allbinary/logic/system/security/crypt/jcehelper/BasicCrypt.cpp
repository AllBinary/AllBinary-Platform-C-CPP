
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
        
            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/init/crypt/jcehelper/CryptInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/java/byteutil/ByteUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicCrypt
            : public Object
        : public CryptInterface {

    private: const ByteUtil byteUtil = ByteUtil::getInstance();

    private: std::vector<int8_t> key;

public: BasicCrypt(std::string keyAsString){

    std::vector<int8_t> key = NullUtil::getInstance().NULL_BYTE_ARRAY;;
    

        try {
            key= TsUtil::getInstance().getByteArray(keyAsString);
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::putOE(commonStrings.EXCEPTION, this, "AbCrypt(alg,key)", e);
    
}

this->key= key;
    
}


    public: std::vector<int8_t> encrypt(std::vector<int8_t> array){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->mutilate(array);;
    

                //: 
} catch(e) 
            {
PreLogUtil::putOE("Encrypt Failed", this, "encrypt", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil::getInstance().NULL_BYTE_ARRAY;
    
}

}


    public: std::vector<int8_t> decrypt(std::vector<int8_t> array){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->mutilate(array);;
    

                //: 
} catch(e) 
            {
PreLogUtil::putOE("decrypt Failed", this, "decrypt", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil::getInstance().NULL_BYTE_ARRAY;
    
}

}


    public: std::vector<int8_t> mutilate(std::vector<int8_t> array){

    int8_t value;;
    




                        for (
    int32_t index = 0;index < this->key.size(); index++)
        {
value= this->key[index]!;
    
array= this->byteUtil.xor(array, value);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return array;
    
}


};

            

