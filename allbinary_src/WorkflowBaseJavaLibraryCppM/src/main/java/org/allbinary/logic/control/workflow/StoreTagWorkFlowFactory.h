
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_STORETAGWORKFLOWFACTORY_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_STORETAGWORKFLOWFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class PageContext;
class DynamicObjectData;
class LogUtil;
class StringMaker;
class AbeFactory;
class AbeClientInformationInterface;
class LicensingException;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class StoreWorkFlowInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StoreTagWorkFlowFactory
            : public virtual Object
         {

    private: static StoreTagWorkFlowFactory* instance_owner();
    private: static StoreTagWorkFlowFactory* instance;

    public: static StoreTagWorkFlowFactory* getInstance();

    /*protected*/ public: LogUtil* logUtil;

private: StoreTagWorkFlowFactory();

                //@Throws(Exception.constructor, LicensingException.constructor)
            
    public: StoreWorkFlowInterface* getInstance(AbeClientInformationInterface* abeClientInformation, HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext);

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_STORETAGWORKFLOWFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_STORETAGWORKFLOWFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_STORETAGWORKFLOWFACTORY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/business/DynamicObjectData.h>)
#include <org/allbinary/business/DynamicObjectData.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/system/loader/AbeFactory.h>)
#include <org/allbinary/logic/system/loader/AbeFactory.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LicensingException.h>)
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/control/workflow/StoreWorkFlowInterface.h")
#include "org/allbinary/logic/control/workflow/StoreWorkFlowInterface.h"
#endif

        #endif
    
