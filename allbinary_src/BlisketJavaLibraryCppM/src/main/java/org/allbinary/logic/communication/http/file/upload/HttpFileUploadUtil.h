
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class LogUtil;
class ClassUtil;
class StringMaker;
class CommonSeps;
class FileItem;
class FileItemStream;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HttpFileUploadUtil
            : public virtual Object
         {

    private: static HttpFileUploadUtil* instance_owner();
    private: static HttpFileUploadUtil* instance;

    public: static HttpFileUploadUtil* getInstance();

                //@Throws(Exception.constructor)
            
    public: static void log(FileItemStream* fileItem);

    public: static void log(FileItem* fileItem);

    /*protected*/ public: LogUtil* logUtil;

private: HttpFileUploadUtil();

                //@Throws(Exception.constructor)
            
    public: bool isValid(Object* anyType);
    public: bool isValid(const std::string& anyType) { return isValid(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> bool isValid(BoxValue anyType) { return isValid(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> bool isValid(const std::vector<BoxElement>& anyType) { return isValid(JavaBoxes::toObject(anyType)); }

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_HTTPFILEUPLOADUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_HTTPFILEUPLOADUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_HTTPFILEUPLOADUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/java/anyType/clazz/ClassUtil.h>)
#include <org/allbinary/logic/java/anyType/clazz/ClassUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/apache/commons/fileupload/FileItem.h>)
#include <org/apache/commons/fileupload/FileItem.h>
#endif
#if __has_include(<org/apache/commons/fileupload/FileItemStream.h>)
#include <org/apache/commons/fileupload/FileItemStream.h>
#endif

        #endif
    
