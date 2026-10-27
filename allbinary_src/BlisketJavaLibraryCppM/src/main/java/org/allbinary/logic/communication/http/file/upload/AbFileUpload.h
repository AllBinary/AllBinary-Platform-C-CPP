
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEUPLOAD_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEUPLOAD_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/io/IOException.h>
class HttpServletRequest;
class FileItemFactory;
class FileItemIterator;
#include <org/apache/commons/fileupload/FileUpload.h>
class FileUploadException;
class ServletRequestContext;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbFileUpload: public FileUpload {

public: AbFileUpload(FileItemFactory* fileItemFactory);

                //@Throws(FileUploadException.constructor, IOException.constructor)
            
    public: FileItemIterator* getItemIterator(HttpServletRequest* request);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEUPLOAD_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEUPLOAD_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEUPLOAD_H_COMPLETE
        #if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<org/apache/commons/fileupload/FileItemFactory.h>)
#include <org/apache/commons/fileupload/FileItemFactory.h>
#endif
#if __has_include(<org/apache/commons/fileupload/FileItemIterator.h>)
#include <org/apache/commons/fileupload/FileItemIterator.h>
#endif
#if __has_include(<org/apache/commons/fileupload/FileUpload.h>)
#include <org/apache/commons/fileupload/FileUpload.h>
#endif
#if __has_include(<org/apache/commons/fileupload/FileUploadException.h>)
#include <org/apache/commons/fileupload/FileUploadException.h>
#endif
#if __has_include(<org/apache/commons/fileupload/servlet/ServletRequestContext.h>)
#include <org/apache/commons/fileupload/servlet/ServletRequestContext.h>
#endif

        #endif
    
