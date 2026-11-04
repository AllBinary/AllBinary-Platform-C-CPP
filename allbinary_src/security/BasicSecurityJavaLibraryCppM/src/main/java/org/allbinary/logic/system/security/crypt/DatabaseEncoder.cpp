
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_DATABASEENCODER_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_DATABASEENCODER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/crypt/DatabaseEncoder.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/tokens/Tokenizer.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

DatabaseEncoder::DatabaseEncoder(){
}


    auto DatabaseEncoder::encode(std::vector<int8_t> value) -> std::string{

        try {
            
    std::vector<int8_t> array = value;;
    

    StringMaker* stringBuffer = new StringMaker();;
    




                        for (
    int32_t index = 0;index < array.size(); index++)
        {
stringBuffer->append(JavaString::valueOf((static_cast<int8_t>(array[index]))));
    

                        if(index < array.size() -1)
                        
                                    {
                                    stringBuffer->append(CommonSeps::getInstance()->SPACE);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::putOE(commonStrings->EXCEPTION, "DatabaseEncoder", "decode", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}

}


    auto DatabaseEncoder::decode(std::string value) -> std::vector<int8_t>{

        try {
            
    Tokenizer* tokenizer = new Tokenizer(CommonSeps::getInstance()->SPACE);;
    

    BasicArrayList* vector = tokenizer->getTokensFromString(value, new BasicArrayListD());;
    

    BasicArrayList* byteVector = new BasicArrayListD();;
    

    int32_t size = vector->size();;
    

    std::string byteOfData;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
byteOfData= JavaBoxes::unbox<std::string>(vector->objectArray[index]);
    
byteVector->add(static_cast<int8_t>(std::stoi(byteOfData)));
    
}


    std::vector<int8_t> decode = std::vector<int8_t>(byteVector->size());;
    

    int32_t decodeIndex = 0;;
    

    int8_t aByte;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
aByte= JavaBoxes::unbox<int8_t>(byteVector->objectArray[index]);
    
decode[decodeIndex]= aByte;
    
decodeIndex++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return decode;
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::putSE(commonStrings->EXCEPTION, "DatabaseEncoder", "decode", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NullUtil::getInstance()->NULL_BYTE_ARRAY;
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_DATABASEENCODER_CPP
