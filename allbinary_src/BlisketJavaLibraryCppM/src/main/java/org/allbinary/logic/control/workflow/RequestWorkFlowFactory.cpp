
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_REQUESTWORKFLOWFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_REQUESTWORKFLOWFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/control/workflow/RequestWorkFlowFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/ServletConfig.h>

      
#include <javax/servlet/ServletContext.h>

      
#include <javax/servlet/ServletRequest.h>

      
#include <javax/servlet/ServletResponse.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/data/tables/workflow/WorkFlowEntityFactory.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/control/workflow/WorkFlowInterface.h"
#include "org/allbinary/logic/control/workflow/WorkFlowData.h"


RequestWorkFlowFactory::RequestWorkFlowFactory(){
}


                //@Throws(Exception.constructor, LicensingException.constructor)
            
    auto RequestWorkFlowFactory::getInstance(ServletRequest* request, ServletResponse* response, ServletConfig* servletConfig, ServletContext* servletContext) -> WorkFlowInterface*{

    HttpServletRequest* httpRequest = dynamic_cast<HttpServletRequest*>(request);;
    

    std::string requestCommand = httpRequest->getPathInfo();;
    

    int32_t index = JavaString::indexOf(requestCommand, AbPathData::getInstance()->SEPARATOR);;
    

    std::string storeName = JavaString::substring(requestCommand, 0, index);;
    

    std::string requestName = JavaString::substring(requestCommand, index, requestCommand.size());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WorkFlowEntityFactory::getInstance()->create2()->get(requestName, storeName);;
    
}


                //@Throws(Exception.constructor, LicensingException.constructor)
            
    auto RequestWorkFlowFactory::getInstance(HashMap<Object*, Object*>* hashMap, PageContext* pageContext) -> WorkFlowInterface*{

    std::string workFlowName = pageContext->getRequest()->getParameter(WorkFlowData::getInstance()->NAME);;
    

    WeblisketSession* weblisketSession = new WeblisketSession(hashMap, pageContext);;
    

    std::string storeName = weblisketSession->getStoreName();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WorkFlowEntityFactory::getInstance()->create2()->get(workFlowName, storeName);;
    
}




        #endif //ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_REQUESTWORKFLOWFACTORY_CPP
