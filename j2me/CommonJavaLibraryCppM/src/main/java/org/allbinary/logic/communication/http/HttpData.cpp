
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_HTTPDATA_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_HTTPDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/http/HttpData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto HttpData::instance_owner() -> HttpData* { static std::unique_ptr<HttpData> value(new HttpData()); return value.get(); }
HttpData* HttpData::instance = HttpData::instance_owner();

    auto HttpData::getInstance() -> HttpData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HttpData::instance;
    
}


HttpData::HttpData(){

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    
this->EQUALS= commonSeps->EQUALS;
    
this->PARAM_SEP= commonSeps->AMPERSAND;
    
this->URL_PARAM_SEP= commonSeps->QUESTION;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_HTTPDATA_CPP
