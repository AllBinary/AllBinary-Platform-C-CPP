
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_HTTPREQUESTUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_HTTPREQUESTUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/http/request/HttpRequestUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/io/path/AbPathData.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto HttpRequestUtil::instance_owner() -> HttpRequestUtil* { static std::unique_ptr<HttpRequestUtil> value(new HttpRequestUtil()); return value.get(); }
HttpRequestUtil* HttpRequestUtil::instance = HttpRequestUtil::instance_owner();

    auto HttpRequestUtil::getInstance() -> HttpRequestUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return HttpRequestUtil::instance;
    
}


HttpRequestUtil::HttpRequestUtil(){
}


    auto HttpRequestUtil::getLastSeparatorIndex(std::string requestPath) -> int32_t{

    int32_t beginIndex = JavaString::lastIndexOf(requestPath, AbPathData::getInstance()->SEPARATOR);;
    

                        if(beginIndex < 0)
                        
                                    {
                                    beginIndex= JavaString::lastIndexOf(requestPath, "\\");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return beginIndex;
    
}


                //@Throws(Exception.constructor)
            
    auto HttpRequestUtil::generateFileName(std::string requestPath) -> std::string{

    int32_t beginIndex = this->getLastSeparatorIndex(requestPath);;
    

                        if(beginIndex < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return requestPath;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::substring(requestPath, beginIndex +1);;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_HTTPREQUESTUTIL_CPP
