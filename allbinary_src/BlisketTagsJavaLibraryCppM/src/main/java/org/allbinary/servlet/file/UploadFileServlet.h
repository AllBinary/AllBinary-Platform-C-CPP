
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
        



        #ifndef ORG_ALLBINARY_SERVLET_FILE_UPLOADFILESERVLET_H
        #define ORG_ALLBINARY_SERVLET_FILE_UPLOADFILESERVLET_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/util/HashMap.h>
class ServletException;
#include <javax/servlet/http/HttpServlet.h>
class HttpServletRequest;
class HttpServletResponse;
class AuthenticationHelper;
class AuthenticationHelperFactory;
class AuthenticationHelperUtil;
class URLGLOBALS;
class StdUtil;
class FileUploadData;
class HttpFileUploadUtil;
class HttpRequestUtil;
class MultipartRequestParams;
class LogUtil;
class AbFileOutputStream;
class StreamUtil;
class AbFile;
class StringMaker;
class BlisketServletUtil;
class CommonStrings;
class FileItem;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UploadFileServlet: public HttpServlet {


            
    public: UploadFileServlet();
        
    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: HashMap<Object*, Object*>* requestHashMap;

    private: std::string fileName;

                //@Throws(ServletException.constructor, IOException.constructor)
            
    /*protected*/ public: void processRequest(HttpServletRequest* request, HttpServletResponse* response);

                //@Throws(Exception.constructor)
            
    private: void saveFile(std::string filePath);

                //@Throws(ServletException.constructor, IOException.constructor)
            
    /*protected*/ public: void doGet(HttpServletRequest* request, HttpServletResponse* response);

                //@Throws(ServletException.constructor, IOException.constructor)
            
    /*protected*/ public: void doPost(HttpServletRequest* request, HttpServletResponse* response);

    public: std::string getServletInfo();

};

            


        #endif //ORG_ALLBINARY_SERVLET_FILE_UPLOADFILESERVLET_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_SERVLET_FILE_UPLOADFILESERVLET_H_COMPLETE)
        #define ORG_ALLBINARY_SERVLET_FILE_UPLOADFILESERVLET_H_COMPLETE
        #if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif
#if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/ServletException.h>)
#include <javax/servlet/ServletException.h>
#endif
#if __has_include(<javax/servlet/http/HttpServlet.h>)
#include <javax/servlet/http/HttpServlet.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletResponse.h>)
#include <javax/servlet/http/HttpServletResponse.h>
#endif
#if __has_include(<admin/taghelpers/AuthenticationHelper.h>)
#include <admin/taghelpers/AuthenticationHelper.h>
#endif
#if __has_include(<admin/taghelpers/AuthenticationHelperFactory.h>)
#include <admin/taghelpers/AuthenticationHelperFactory.h>
#endif
#if __has_include(<admin/taghelpers/AuthenticationHelperUtil.h>)
#include <admin/taghelpers/AuthenticationHelperUtil.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/file/upload/FileUploadData.h>)
#include <org/allbinary/logic/communication/http/file/upload/FileUploadData.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/file/upload/HttpFileUploadUtil.h>)
#include <org/allbinary/logic/communication/http/file/upload/HttpFileUploadUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/HttpRequestUtil.h>)
#include <org/allbinary/logic/communication/http/request/HttpRequestUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/MultipartRequestParams.h>)
#include <org/allbinary/logic/communication/http/request/MultipartRequestParams.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/AbFileOutputStream.h>)
#include <org/allbinary/logic/io/AbFileOutputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/StreamUtil.h>)
#include <org/allbinary/logic/io/StreamUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/servlet/BlisketServletUtil.h>)
#include <org/allbinary/servlet/BlisketServletUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/apache/commons/fileupload/FileItem.h>)
#include <org/apache/commons/fileupload/FileItem.h>
#endif

        #endif
    
