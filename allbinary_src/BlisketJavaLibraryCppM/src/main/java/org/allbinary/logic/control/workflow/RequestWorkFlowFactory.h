
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_REQUESTWORKFLOWFACTORY_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_REQUESTWORKFLOWFACTORY_H

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
        #include "WorkFlowInterface.h"
#include "WorkFlowData.h"

class RequestWorkFlowFactory
            : public Object
         {

                //@Throws(Exception.constructor, LicensingException.constructor)
            
    public: static WorkFlowInterface getInstance(ServletRequest request, ServletResponse response, ServletConfig servletConfig, ServletContext servletContext);

                //@Throws(Exception.constructor, LicensingException.constructor)
            
    public: static WorkFlowInterface getInstance(HashMap<Object*, Object*> hashMap, PageContext pageContext);

private: RequestWorkFlowFactory();

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_REQUESTWORKFLOWFACTORY_H
