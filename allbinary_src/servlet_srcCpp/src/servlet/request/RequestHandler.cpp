
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
        



        #ifndef SERVLET_REQUEST_REQUESTHANDLER_CPP
        #define SERVLET_REQUEST_REQUESTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "servlet/request/RequestHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/io.h>

      
#include <java/net.h>

      
#include <javax/servlet.h>

      
#include <javax/servlet/http.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/workflow/WorkFlowInterface.h>

      
#include <org/allbinary/logic/control/workflow/RequestWorkFlowFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "servlet/request/HttpServlet.h"
#include "servlet/request/ServletConfig.h"
#include "servlet/request/PrintWriter.h"
#include "servlet/request/ServletRequest.h"
#include "servlet/request/ServletResponse.h"
#include "servlet/request/HttpServletRequest.h"
#include "servlet/request/HttpServletResponse.h"


RequestHandler::RequestHandler() : logUtil(LogUtil::getInstance()) {
        }
        
                //@Throws(ServletException.constructor)
            
    auto RequestHandler::init(ServletConfig* config) -> void{
HttpServlet::init(config);
    
}


    auto RequestHandler::destroy() -> void{
}


                //@Throws(ServletException.constructor, IOException.constructor)
            
    auto RequestHandler::processRequest(HttpServletRequest* request, HttpServletResponse* response) -> void{

        try {
            response->setContentType("text/html");
    

    PrintWriter* out = response->getWriter();;
    

    WorkFlowInterface* workflowInterface = RequestWorkFlowFactory::getInstance(dynamic_cast<ServletRequest*>(request), dynamic_cast<ServletResponse*>(response), this->getServletConfig(), this->getServletContext());;
    

                        if(workflowInterface != 
                                    nullptr
                                )
                        
                                    {
                                    out->print(workflowInterface->process());
    

                                    }
                                
out->flush();
    
out->close();
    

                //: 
} catch(LicensingException& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SERVLETERROR))
                        
                                    {
                                    this->logUtil->put("Servlet LicensingException", this, "processRequest()", &e);
    

                                    }
                                
response->sendRedirect(abcs.globals->URLGLOBALS->LICENSEERRORPAGE);
    
}

                //: 
 catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SERVLETERROR))
                        
                                    {
                                    this->logUtil->put("Servlet Exception", this, "processRequest()", &e);
    

                                    }
                                
response->sendRedirect(abcs.globals->URLGLOBALS->ERRORPAGE);
    
}

}


                //@Throws(ServletException.constructor, IOException.constructor)
            
    auto RequestHandler::doGet(HttpServletRequest* request, HttpServletResponse* response) -> void{
this->processRequest(request, response);
    
}


                //@Throws(ServletException.constructor, IOException.constructor)
            
    auto RequestHandler::doPost(HttpServletRequest* request, HttpServletResponse* response) -> void{
this->processRequest(request, response);
    
}


    auto RequestHandler::getServletInfo() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "WorkFlow Request Handler";
    
}




        #endif //SERVLET_REQUEST_REQUESTHANDLER_CPP
