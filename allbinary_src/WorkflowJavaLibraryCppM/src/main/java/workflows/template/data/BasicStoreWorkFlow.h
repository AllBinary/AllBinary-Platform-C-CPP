
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
        



        #ifndef WORKFLOWS_TEMPLATE_DATA_BASICSTOREWORKFLOW_H
        #define WORKFLOWS_TEMPLATE_DATA_BASICSTOREWORKFLOW_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/logic/control/workflow/StoreWorkFlowInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "workflows/template/data/BasicWorkFlow.h"

class BasicStoreWorkFlow: public BasicWorkFlow, public StoreWorkFlowInterface {

public: BasicStoreWorkFlow(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext);

                //@Throws(Exception.constructor)
            
    public: std::string getStoreName();

};

            


        #endif //WORKFLOWS_TEMPLATE_DATA_BASICSTOREWORKFLOW_H
