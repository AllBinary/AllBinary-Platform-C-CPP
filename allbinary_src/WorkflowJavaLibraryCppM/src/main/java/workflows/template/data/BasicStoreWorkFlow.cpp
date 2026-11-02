
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
        



        #ifndef WORKFLOWS_TEMPLATE_DATA_BASICSTOREWORKFLOW_CPP
        #define WORKFLOWS_TEMPLATE_DATA_BASICSTOREWORKFLOW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "workflows/template/data/BasicStoreWorkFlow.h"
        

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


BasicStoreWorkFlow::BasicStoreWorkFlow(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext) : BasicWorkFlow(propertiesHashMap, pageContext){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto BasicStoreWorkFlow::getStoreName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaBoxes::unbox<std::string>(this->getPropertiesHashMap()->get(StoreFrontData::getInstance()->NAME));
    
}




        #endif //WORKFLOWS_TEMPLATE_DATA_BASICSTOREWORKFLOW_CPP
