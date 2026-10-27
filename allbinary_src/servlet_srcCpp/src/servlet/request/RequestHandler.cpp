
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

class RequestHandler: public HttpServlet {

    protected: LogUtil* logUtil = LogUtil::getInstance();

                //@Throws(ServletException.constructor)
            
    public: void init(ServletConfig* config){
super.init(config);
    
}


    public: void destroy(){
}


                //@Throws(ServletException.constructor, IOException.constructor)
            
    protected: void processRequest(HttpServletRequest* request, HttpServletResponse* response){

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

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SERVLETERROR))
                        
                                    {
                                    this->logUtil->put("Servlet LicensingException", this, "processRequest()", &e);
    

                                    }
                                
response->sendRedirect(abcs.globals.URLGLOBALS.LICENSEERRORPAGE);
    
}

                //: 
 catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SERVLETERROR))
                        
                                    {
                                    this->logUtil->put("Servlet Exception", this, "processRequest()", &e);
    

                                    }
                                
response->sendRedirect(abcs.globals.URLGLOBALS.ERRORPAGE);
    
}

}


                //@Throws(ServletException.constructor, IOException.constructor)
            
    protected: void doGet(HttpServletRequest* request, HttpServletResponse* response){
this->processRequest(request, response);
    
}


                //@Throws(ServletException.constructor, IOException.constructor)
            
    protected: void doPost(HttpServletRequest* request, HttpServletResponse* response){
this->processRequest(request, response);
    
}


    public: std::string getServletInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "WorkFlow Request Handler";
    
}


};

            

