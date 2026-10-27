
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_HTTPFILEUPLOADUTIL_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_HTTPFILEUPLOADUTIL_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/anyType/clazz/ClassUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/apache/commons/fileupload/FileItem.h>

      
#include <org/apache/commons/fileupload/FileItemStream.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HttpFileUploadUtil
            : public Object
         {

    private: static HttpFileUploadUtil* instance() { static std::unique_ptr<HttpFileUploadUtil> value(new HttpFileUploadUtil()); return value.get(); }

    public: static HttpFileUploadUtil* getInstance();

                //@Throws(Exception.constructor)
            
    public: static void log(FileItemStream* fileItem);

    public: static void log(FileItem* fileItem);

    protected: LogUtil* logUtil = LogUtil::getInstance();

private: HttpFileUploadUtil();

                //@Throws(Exception.constructor)
            
    public: bool isValid(Object* anyType);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_HTTPFILEUPLOADUTIL_H
