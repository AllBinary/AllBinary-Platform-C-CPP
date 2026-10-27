
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABEHTTPREQUESTINFO_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABEHTTPREQUESTINFO_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/Enumeration.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/http/request/AbeHttpRequestInfoData.h"

class AbeHttpRequestInfo
            : public Object
         {

    private: const std::string NAME = "AbeHttpRequestInfo";

    private: AbeHttpRequestInfoData* abeHttpRequestInfoData = AbeHttpRequestInfoData::getInstance();

    private: CommonSeps* commonSeps = CommonSeps::getInstance();

    private: std::string httpUserAgent;

    private: std::string remoteAddress;

    private: std::string remoteHost;

    private: std::string remoteHostByAddr;

    private: std::string remotePort;

    private: std::string requestedFilePath;

public: AbeHttpRequestInfo(HashMap<Object*, Object*>* hashMap);

public: AbeHttpRequestInfo(HttpServletRequest* httpServletRequest);

    public: HashMap<Object*, Object*>* toHashMap();

    public: BasicArrayList* toVector();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABEHTTPREQUESTINFO_H
