
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_MULTIPARTREQUESTPARAMS_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_MULTIPARTREQUESTPARAMS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
#include <java/util/List.h>
class HttpServletRequest;
class PageContext;
class StdUtil;
class AbFileUploadFactory;
class LogUtil;
class StringValidationUtil;
class FileItem;
class InvalidContentTypeException;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/http/request/RequestParams.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MultipartRequestParams: public RequestParams {

    /*protected*/ public: LogUtil* logUtil;

    private: bool special = false;

public: MultipartRequestParams(HttpServletRequest* request);

public: MultipartRequestParams(PageContext* pageContext);

    /*protected*/ public: void setSpecial();

    private: void processMultipartRequest(HttpServletRequest* request);

                //@Throws(Exception.constructor)
            
    public: HashMap<Object*, Object*>* toHashMap();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_MULTIPARTREQUESTPARAMS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_MULTIPARTREQUESTPARAMS_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_MULTIPARTREQUESTPARAMS_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/List.h>)
#include <java/util/List.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/file/upload/AbFileUploadFactory.h>)
#include <org/allbinary/logic/communication/http/file/upload/AbFileUploadFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/apache/commons/fileupload/FileItem.h>)
#include <org/apache/commons/fileupload/FileItem.h>
#endif
#if __has_include(<org/apache/commons/fileupload/FileUploadBase/InvalidContentTypeException.h>)
#include <org/apache/commons/fileupload/FileUploadBase/InvalidContentTypeException.h>
#endif
#if __has_include("org/allbinary/logic/communication/http/request/RequestParams.h")
#include "org/allbinary/logic/communication/http/request/RequestParams.h"
#endif

        #endif
    
