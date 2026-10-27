
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABRESPONSEHANDLER_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABRESPONSEHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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
        

AbResponseHandler::AbResponseHandler() : logUtil(LogUtil::getInstance()){
}


                //@Throws(JspTagException.constructor)
            
    auto AbResponseHandler::sendJspTagRedirect(PageContext* pageContext, Exception* e) -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->JSPTAGERROR))
                        
                                    {
                                    logUtil->put("Jsp Tag Exception", "AbResponseHandler", "sendJspRedirect()", e);
    

                                    }
                                
AbResponseHandler::sendRedirect(pageContext, FREEBLISKET_PATH_GLOBALS::getInstance()->ERRORPAGE);
    

                //: 
} catch(Exception& e2) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->LICENSINGERROR))
                        
                                    {
                                    logUtil->put("Exception in Redirect Handling", "AbResponseHandler", "sendJspRedirect", e);
    

                                    }
                                



                            throw JspTagException();
                    
}

}


                //@Throws(ServletException.constructor)
            
    auto AbResponseHandler::sendServletRedirect(PageContext* pageContext, Exception* e) -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->JSPTAGERROR))
                        
                                    {
                                    logUtil->put("Jsp Tag Exception", "AbResponseHandler", "sendJspRedirect()", e);
    

                                    }
                                
AbResponseHandler::sendRedirect(pageContext, FREEBLISKET_PATH_GLOBALS::getInstance()->ERRORPAGE);
    

                //: 
} catch(Exception& e2) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->LICENSINGERROR))
                        
                                    {
                                    logUtil->put("Exception in Redirect Handling", "AbResponseHandler", "sendJspRedirect", e);
    

                                    }
                                



                            throw ServletException();
                    
}

}


                //@Throws(JspTagException.constructor)
            
    auto AbResponseHandler::sendJspTagLicensingRedirect(PageContext* pageContext, Exception* e) -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->JSPTAGERROR))
                        
                                    {
                                    logUtil->put("Licensing Exception", "AbResponseHandler", "sendJspTagLicensingRedirect()", e);
    

                                    }
                                
AbResponseHandler::sendRedirect(pageContext, FREEBLISKET_PATH_GLOBALS::getInstance()->LICENSEERRORPAGE);
    

                //: 
} catch(Exception& e2) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->LICENSINGERROR))
                        
                                    {
                                    logUtil->put("Exception in Redirect Handling", "AbResponseHandler", "sendJspTagLicensingRedirect", e);
    

                                    }
                                



                            throw JspTagException();
                    
}

}


                //@Throws(ServletException.constructor)
            
    auto AbResponseHandler::sendServletLicensingRedirect(PageContext* pageContext, Exception* e) -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->JSPTAGERROR))
                        
                                    {
                                    logUtil->put("Licensing Exception", "AbResponseHandler", "sendServletLicensingRedirect()", e);
    

                                    }
                                
AbResponseHandler::sendRedirect(pageContext, FREEBLISKET_PATH_GLOBALS::getInstance()->LICENSEERRORPAGE);
    

                //: 
} catch(Exception& e2) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->LICENSINGERROR))
                        
                                    {
                                    logUtil->put("Exception in Redirect Handling", "AbResponseHandler", "sendServletLicensingRedirect", e);
    

                                    }
                                



                            throw ServletException();
                    
}

}


                //@Throws(Exception.constructor)
            
    auto AbResponseHandler::sendRedirect(PageContext* pageContext, std::string page) -> void{

    HttpServletRequest* request = dynamic_cast<HttpServletRequest*>(pageContext->getRequest());;
    

    HttpServletResponse* response = dynamic_cast<HttpServletResponse*>(pageContext->getResponse());;
    

    RequestDispatcher* requestDispatcher = request->getRequestDispatcher(page);;
    

                        if(response->isCommitted())
                        
                                    {
                                    response->sendRedirect(page);
    

                                    }
                                
                        else {
                            
        try {
            requestDispatcher->forward(request, response);
    

                //: 
} catch(Exception& e) 
            {
pageContext->getOut()->print(JavaString::valueOf("Error: ") +JavaString::valueOf(page));
    
}


                        }
                            
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABRESPONSEHANDLER_CPP
