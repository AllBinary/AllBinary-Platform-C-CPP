
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_NUMBER_LONGUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_JAVA_NUMBER_LONGUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/java/number/LongUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/java/number/LongData.h"


LongUtil::LongUtil(){
}


    auto LongUtil::fillIn(std::string end) -> std::string{

    StringMaker* frameStringBuffer = new StringMaker();;
    

                        if(frameStringBuffer->length() < LongData::MAX_LONG_LENGTH)
                        
                                    {
                                    
    CommonPhoneStrings* commonPhoneStrings = CommonPhoneStrings::getInstance();;
    

    int32_t size = LongData::MAX_LONG_LENGTH -frameStringBuffer->length();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
frameStringBuffer->append(commonPhoneStrings->ZERO);
    
}


                                    }
                                
frameStringBuffer->append(end);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return frameStringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_LOGIC_JAVA_NUMBER_LONGUTIL_CPP
