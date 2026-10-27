
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABRESPONSEHANDLER_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABRESPONSEHANDLER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class RequestDispatcher;
class ServletException;
class HttpServletRequest;
class HttpServletResponse;
class JspTagException;
class PageContext;
class FREEBLISKET_PATH_GLOBALS;
class LogUtil;
class LogConfigTypeFactory;
class LogConfigTypes;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbResponseHandler
            : public virtual Object
         {

                //@Throws(JspTagException.constructor)
            
    public: static void sendJspTagRedirect(PageContext* pageContext, Exception* e);

                //@Throws(ServletException.constructor)
            
    public: static void sendServletRedirect(PageContext* pageContext, Exception* e);

                //@Throws(JspTagException.constructor)
            
    public: static void sendJspTagLicensingRedirect(PageContext* pageContext, Exception* e);

                //@Throws(ServletException.constructor)
            
    public: static void sendServletLicensingRedirect(PageContext* pageContext, Exception* e);

                //@Throws(Exception.constructor)
            
    public: static void sendRedirect(PageContext* pageContext, std::string page);

    /*protected*/ public: LogUtil* logUtil;

private: AbResponseHandler();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABRESPONSEHANDLER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABRESPONSEHANDLER_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABRESPONSEHANDLER_H_COMPLETE
        #if __has_include(<javax/servlet/RequestDispatcher.h>)
#include <javax/servlet/RequestDispatcher.h>
#endif
#if __has_include(<javax/servlet/ServletException.h>)
#include <javax/servlet/ServletException.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletResponse.h>)
#include <javax/servlet/http/HttpServletResponse.h>
#endif
#if __has_include(<javax/servlet/jsp/JspTagException.h>)
#include <javax/servlet/jsp/JspTagException.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>)
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>)
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>)
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>
#endif

        #endif
    
