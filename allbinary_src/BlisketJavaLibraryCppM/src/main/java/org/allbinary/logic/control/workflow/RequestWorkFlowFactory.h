
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class ServletConfig;
class ServletContext;
class ServletRequest;
class ServletResponse;
class HttpServletRequest;
class PageContext;
class WorkFlowEntityFactory;
class WeblisketSession;
class AbPathData;
class LicensingException;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class WorkFlowInterface;
class WorkFlowData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RequestWorkFlowFactory
            : public virtual Object
         {

                //@Throws(Exception.constructor, LicensingException.constructor)
            
    public: static WorkFlowInterface* getInstance(ServletRequest* request, ServletResponse* response, ServletConfig* servletConfig, ServletContext* servletContext);

                //@Throws(Exception.constructor, LicensingException.constructor)
            
    public: static WorkFlowInterface* getInstance(HashMap<Object*, Object*>* hashMap, PageContext* pageContext);

private: RequestWorkFlowFactory();

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_REQUESTWORKFLOWFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_REQUESTWORKFLOWFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_REQUESTWORKFLOWFACTORY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/ServletConfig.h>)
#include <javax/servlet/ServletConfig.h>
#endif
#if __has_include(<javax/servlet/ServletContext.h>)
#include <javax/servlet/ServletContext.h>
#endif
#if __has_include(<javax/servlet/ServletRequest.h>)
#include <javax/servlet/ServletRequest.h>
#endif
#if __has_include(<javax/servlet/ServletResponse.h>)
#include <javax/servlet/ServletResponse.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/data/tables/workflow/WorkFlowEntityFactory.h>)
#include <org/allbinary/data/tables/workflow/WorkFlowEntityFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/session/WeblisketSession.h>)
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LicensingException.h>)
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>
#endif
#if __has_include("org/allbinary/logic/control/workflow/WorkFlowInterface.h")
#include "org/allbinary/logic/control/workflow/WorkFlowInterface.h"
#endif
#if __has_include("org/allbinary/logic/control/workflow/WorkFlowData.h")
#include "org/allbinary/logic/control/workflow/WorkFlowData.h"
#endif

        #endif
    
