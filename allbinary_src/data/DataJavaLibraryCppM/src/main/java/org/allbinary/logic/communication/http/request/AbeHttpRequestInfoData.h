
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABEHTTPREQUESTINFODATA_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABEHTTPREQUESTINFODATA_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbeHttpRequestInfoData
            : public virtual Object
         {

    private: static AbeHttpRequestInfoData* instance_owner();
    private: static AbeHttpRequestInfoData* instance;

    public: static AbeHttpRequestInfoData* getInstance();

private: AbeHttpRequestInfoData();

    public: const std::string HTTP_USER_AGENT = "HTTP_USER_AGENT";

    public: const std::string REMOTE_ADDRESS = "REMOTE_ADDRESS";

    public: const std::string REMOTE_HOST = "REMOTE_HOST";

    public: const std::string REMOTE_HOST_BY_ADDRESS = "REMOTE_HOST_BY_ADDRESS";

    public: const std::string REMOTE_PORT = "REMOTE_PORT";

    public: const std::string REQUEST_FILE_PATH = "REQUEST_FILE_PATH";

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABEHTTPREQUESTINFODATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABEHTTPREQUESTINFODATA_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABEHTTPREQUESTINFODATA_H_COMPLETE
        
        #endif
    
