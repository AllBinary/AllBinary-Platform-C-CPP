
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_ACCEPTABLERESPONSE_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_ACCEPTABLERESPONSE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/http/AcceptableResponse.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/http/AcceptableResponseUtil.h"


AcceptableResponse::AcceptableResponse(std::string candidate, std::string tagName, int32_t index) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->logUtil->putF(tagName, this, this->commonStrings->CONSTRUCTOR);
    

    AcceptableResponseUtil* acceptableResponseUtil = AcceptableResponseUtil::getInstance();;
    
acceptableResponseUtil->candidateVector->addAt(index, candidate);
    
acceptableResponseUtil->tagNameVector->addAt(index, tagName);
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_ACCEPTABLERESPONSE_CPP
