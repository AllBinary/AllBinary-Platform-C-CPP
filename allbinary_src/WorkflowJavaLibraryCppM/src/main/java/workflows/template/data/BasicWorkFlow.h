
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
        



        #ifndef WORKFLOWS_TEMPLATE_DATA_BASICWORKFLOW_H
        #define WORKFLOWS_TEMPLATE_DATA_BASICWORKFLOW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>
class PageContext;
class TagSupport;
class LogUtil;
class ValidationComponentInterface;
class WorkFlowData;
#include <org/allbinary/logic/control/workflow/WorkFlowInterface.h>
class AbeClientInformationInterface;
class ServiceClientInformationInterfaceFactory;
class TransformFactory;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicWorkFlow
            : public virtual Object
        , public WorkFlowInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: AbeClientInformationInterface* abeClientInformation;

    private: ValidationComponentInterface* validationDomNodeInterface;

    private: HashMap<Object*, Object*>* propertiesHashMap;

    private: PageContext* pageContext;

public: BasicWorkFlow(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext);

                //@Throws(Exception.constructor)
            
    public: std::string getName();

    /*protected*/ public: HashMap<Object*, Object*>* getPropertiesHashMap();

    /*protected*/ public: PageContext* getPageContext();

                //@Throws(Exception.constructor)
            
    public: int32_t process();

};

            


        #endif //WORKFLOWS_TEMPLATE_DATA_BASICWORKFLOW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(WORKFLOWS_TEMPLATE_DATA_BASICWORKFLOW_H_COMPLETE)
        #define WORKFLOWS_TEMPLATE_DATA_BASICWORKFLOW_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<javax/servlet/jsp/tagext/TagSupport.h>)
#include <javax/servlet/jsp/tagext/TagSupport.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/validate/ValidationComponentInterface.h>)
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>
#endif
#if __has_include(<org/allbinary/logic/control/workflow/WorkFlowData.h>)
#include <org/allbinary/logic/control/workflow/WorkFlowData.h>
#endif
#if __has_include(<org/allbinary/logic/control/workflow/WorkFlowInterface.h>)
#include <org/allbinary/logic/control/workflow/WorkFlowInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>)
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/TransformFactory.h>)
#include <org/allbinary/logic/visual/transform/TransformFactory.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
