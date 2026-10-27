
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
        



        #ifndef ORG_ALLBINARY_SERVLET_FILE_DOWNLOADFILESERVLET_H
        #define ORG_ALLBINARY_SERVLET_FILE_DOWNLOADFILESERVLET_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

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
class LogUtil;
class CloudStreamUtil;
class StreamUtil;
class AbFile;
class StringMaker;
class StringUtil;
class BlisketServletUtil;
class CommonSeps;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DownloadFileServlet: public HttpServlet {


            
    public: DownloadFileServlet();
        
    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: const std::string DOWNLOAD = "download";

    private: const int32_t DEFAULT_BUFFER_SIZE = 16384;

                //@Throws(ServletException.constructor, IOException.constructor)
            
    /*protected*/ public: void processRequest(HttpServletRequest* request, HttpServletResponse* response);

                //@Throws(ServletException.constructor, IOException.constructor)
            
    /*protected*/ public: void doGet(HttpServletRequest* request, HttpServletResponse* response);

                //@Throws(ServletException.constructor, IOException.constructor)
            
    /*protected*/ public: void doPost(HttpServletRequest* request, HttpServletResponse* response);

    public: std::string getServletInfo();

};

            


        #endif //ORG_ALLBINARY_SERVLET_FILE_DOWNLOADFILESERVLET_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_SERVLET_FILE_DOWNLOADFILESERVLET_H_COMPLETE)
        #define ORG_ALLBINARY_SERVLET_FILE_DOWNLOADFILESERVLET_H_COMPLETE
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
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/CloudStreamUtil.h>)
#include <org/allbinary/logic/io/CloudStreamUtil.h>
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
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/servlet/BlisketServletUtil.h>)
#include <org/allbinary/servlet/BlisketServletUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
