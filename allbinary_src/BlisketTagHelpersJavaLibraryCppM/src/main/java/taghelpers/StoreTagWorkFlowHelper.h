
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <admin/taghelpers/TagHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/workflow/StoreTagWorkFlowFactory.h>

      
#include <org/allbinary/logic/control/workflow/StoreWorkFlowInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StoreTagWorkFlowHelper: public TagHelper {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: AbeClientInformationInterface* abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();

    private: StoreWorkFlowInterface* storeWorkFlowInterface;

public: StoreTagWorkFlowHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext);

                //@Throws(Exception.constructor)
            
    public: int32_t process();

};

            


        #endif //TAGHELPERS_STORETAGWORKFLOWHELPER_H
