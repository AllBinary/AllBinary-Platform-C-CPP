
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/Enumeration.h>
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
class HttpServletRequest;
class StdUtil;
class StringMaker;
class StringUtil;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AbeHttpRequestInfoData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbeHttpRequestInfo
            : public virtual Object
         {

    private: const std::string NAME = "AbeHttpRequestInfo";

    private: AbeHttpRequestInfoData* abeHttpRequestInfoData;

    private: CommonSeps* commonSeps;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABEHTTPREQUESTINFO_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABEHTTPREQUESTINFO_H_COMPLETE
        #if __has_include(<java/util/Enumeration.h>)
#include <java/util/Enumeration.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/logic/communication/http/request/AbeHttpRequestInfoData.h")
#include "org/allbinary/logic/communication/http/request/AbeHttpRequestInfoData.h"
#endif

        #endif
    
