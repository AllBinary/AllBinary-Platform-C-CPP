
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
        



        #ifndef SERVLET_REQUEST_REQUESTHANDLER_H
        #define SERVLET_REQUEST_REQUESTHANDLER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/io.h>
#include <java/net.h>
#include <javax/servlet.h>
#include <javax/servlet/http.h>
class LicensingException;
class LogUtil;
class WorkFlowInterface;
class RequestWorkFlowFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "servlet/request/HttpServlet.h"
class ServletConfig;
class PrintWriter;
class ServletRequest;
class ServletResponse;
class HttpServletRequest;
class HttpServletResponse;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RequestHandler: public HttpServlet {


            
    public: RequestHandler();
        
    /*protected*/ public: LogUtil* logUtil;

                //@Throws(ServletException.constructor)
            
    public: void init(ServletConfig* config);

    public: void destroy();

                //@Throws(ServletException.constructor, IOException.constructor)
            
    /*protected*/ public: void processRequest(HttpServletRequest* request, HttpServletResponse* response);

                //@Throws(ServletException.constructor, IOException.constructor)
            
    /*protected*/ public: void doGet(HttpServletRequest* request, HttpServletResponse* response);

                //@Throws(ServletException.constructor, IOException.constructor)
            
    /*protected*/ public: void doPost(HttpServletRequest* request, HttpServletResponse* response);

    public: std::string getServletInfo();

};

            


        #endif //SERVLET_REQUEST_REQUESTHANDLER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(SERVLET_REQUEST_REQUESTHANDLER_H_COMPLETE)
        #define SERVLET_REQUEST_REQUESTHANDLER_H_COMPLETE
        #if __has_include(<java/io.h>)
#include <java/io.h>
#endif
#if __has_include(<java/net.h>)
#include <java/net.h>
#endif
#if __has_include(<javax/servlet.h>)
#include <javax/servlet.h>
#endif
#if __has_include(<javax/servlet/http.h>)
#include <javax/servlet/http.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LicensingException.h>)
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/workflow/WorkFlowInterface.h>)
#include <org/allbinary/logic/control/workflow/WorkFlowInterface.h>
#endif
#if __has_include(<org/allbinary/logic/control/workflow/RequestWorkFlowFactory.h>)
#include <org/allbinary/logic/control/workflow/RequestWorkFlowFactory.h>
#endif
#if __has_include("servlet/request/HttpServlet.h")
#include "servlet/request/HttpServlet.h"
#endif
#if __has_include("servlet/request/ServletConfig.h")
#include "servlet/request/ServletConfig.h"
#endif
#if __has_include("servlet/request/PrintWriter.h")
#include "servlet/request/PrintWriter.h"
#endif
#if __has_include("servlet/request/ServletRequest.h")
#include "servlet/request/ServletRequest.h"
#endif
#if __has_include("servlet/request/ServletResponse.h")
#include "servlet/request/ServletResponse.h"
#endif
#if __has_include("servlet/request/HttpServletRequest.h")
#include "servlet/request/HttpServletRequest.h"
#endif
#if __has_include("servlet/request/HttpServletResponse.h")
#include "servlet/request/HttpServletResponse.h"
#endif

        #endif
    
