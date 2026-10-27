
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_HTTPREQUESTUTIL_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_HTTPREQUESTUTIL_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/io/path/AbPathData.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HttpRequestUtil
            : public Object
         {

    private: static HttpRequestUtil* instance() { static std::unique_ptr<HttpRequestUtil> value(new HttpRequestUtil()); return value.get(); }

    public: static HttpRequestUtil* getInstance();

private: HttpRequestUtil();

    public: int32_t getLastSeparatorIndex(std::string requestPath);

                //@Throws(Exception.constructor)
            
    public: std::string generateFileName(std::string requestPath);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_HTTPREQUESTUTIL_H
