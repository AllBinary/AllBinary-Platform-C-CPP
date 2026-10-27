
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbeHttpRequestInfoData
            : public Object
         {

    private: static AbeHttpRequestInfoData* instance() { static std::unique_ptr<AbeHttpRequestInfoData> value(new AbeHttpRequestInfoData()); return value.get(); }

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
