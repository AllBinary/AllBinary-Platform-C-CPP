
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
        



        #ifndef TAGHELPERS_STORETAGWORKFLOWHELPER_H
        #define TAGHELPERS_STORETAGWORKFLOWHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>
class PageContext;
#include <admin/taghelpers/TagHelper.h>
class LogUtil;
class StoreTagWorkFlowFactory;
class StoreWorkFlowInterface;
class AbeClientInformationInterface;
class ServiceClientInformationInterfaceFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StoreTagWorkFlowHelper: public TagHelper {

    /*protected*/ public: LogUtil* logUtil;

    private: AbeClientInformationInterface* abeClientInformation;

    private: StoreWorkFlowInterface* storeWorkFlowInterface;

public: StoreTagWorkFlowHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext);

                //@Throws(Exception.constructor)
            
    public: int32_t process();

};

            


        #endif //TAGHELPERS_STORETAGWORKFLOWHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(TAGHELPERS_STORETAGWORKFLOWHELPER_H_COMPLETE)
        #define TAGHELPERS_STORETAGWORKFLOWHELPER_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<admin/taghelpers/TagHelper.h>)
#include <admin/taghelpers/TagHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/workflow/StoreTagWorkFlowFactory.h>)
#include <org/allbinary/logic/control/workflow/StoreTagWorkFlowFactory.h>
#endif
#if __has_include(<org/allbinary/logic/control/workflow/StoreWorkFlowInterface.h>)
#include <org/allbinary/logic/control/workflow/StoreWorkFlowInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>)
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>
#endif

        #endif
    
