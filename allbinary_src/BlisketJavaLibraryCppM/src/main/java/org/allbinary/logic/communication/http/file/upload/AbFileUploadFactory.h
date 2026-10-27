
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEUPLOADFACTORY_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEUPLOADFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/ArrayList.h>
#include <java/util/List.h>
class HttpServletRequest;
class AbFileItemFactory;
class LogUtil;
class CommonStrings;
class FileItemIterator;
class FileItemStream;
class FileItemUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AbFileUpload;
class HttpFileUploadUtil;
class AbFileItem;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbFileUploadFactory
            : public virtual Object
         {

    private: static AbFileUploadFactory* instance_owner();
    private: static AbFileUploadFactory* instance;

    public: static AbFileUploadFactory* getInstance();

    /*protected*/ public: LogUtil* logUtil;

private: AbFileUploadFactory();

                //@Throws(Exception.constructor)
            
    public: List* getFileItemStreamList(HttpServletRequest* httpServletRequest);

                //@Throws(Exception.constructor)
            
    public: List* getFileItemList(HttpServletRequest* httpServletRequest);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEUPLOADFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEUPLOADFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEUPLOADFACTORY_H_COMPLETE
        #if __has_include(<java/util/ArrayList.h>)
#include <java/util/ArrayList.h>
#endif
#if __has_include(<java/util/List.h>)
#include <java/util/List.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/AbFileItemFactory.h>)
#include <org/allbinary/logic/communication/http/AbFileItemFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/apache/commons/fileupload/FileItemIterator.h>)
#include <org/apache/commons/fileupload/FileItemIterator.h>
#endif
#if __has_include(<org/apache/commons/fileupload/FileItemStream.h>)
#include <org/apache/commons/fileupload/FileItemStream.h>
#endif
#if __has_include(<org/apache/commons/fileupload/FileItemUtil.h>)
#include <org/apache/commons/fileupload/FileItemUtil.h>
#endif
#if __has_include("org/allbinary/logic/communication/http/file/upload/AbFileUpload.h")
#include "org/allbinary/logic/communication/http/file/upload/AbFileUpload.h"
#endif
#if __has_include("org/allbinary/logic/communication/http/file/upload/HttpFileUploadUtil.h")
#include "org/allbinary/logic/communication/http/file/upload/HttpFileUploadUtil.h"
#endif
#if __has_include("org/allbinary/logic/communication/http/file/upload/AbFileItem.h")
#include "org/allbinary/logic/communication/http/file/upload/AbFileItem.h"
#endif

        #endif
    
