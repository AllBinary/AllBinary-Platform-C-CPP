
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

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <javax/servlet/RequestDispatcher.h>

      
#include <javax/servlet/ServletException.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/http/HttpServletResponse.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbResponseHandler
            : public Object
         {

                //@Throws(JspTagException.constructor)
            
    public: static void sendJspTagRedirect(PageContext pageContext, Exception e);

                //@Throws(ServletException.constructor)
            
    public: static void sendServletRedirect(PageContext pageContext, Exception e);

                //@Throws(JspTagException.constructor)
            
    public: static void sendJspTagLicensingRedirect(PageContext pageContext, Exception e);

                //@Throws(ServletException.constructor)
            
    public: static void sendServletLicensingRedirect(PageContext pageContext, Exception e);

                //@Throws(Exception.constructor)
            
    public: static void sendRedirect(PageContext pageContext, std::string page);

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: AbResponseHandler();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABRESPONSEHANDLER_H
