
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_STOREWORKFLOWWRAPPER_CPP
        #define ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_STOREWORKFLOWWRAPPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/control/workflow/StoreWorkFlowWrapper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/control/workflow/WorkFlowWrapper.h"


StoreWorkFlowWrapper::StoreWorkFlowWrapper(Object* anyType) : WorkFlowWrapper(anyType), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto StoreWorkFlowWrapper::getStoreName() -> std::string{

        try {
            
    Class* helperClass = this->getWorkFlowObject()->getClass();;
    

    Method* method = helperClass->getMethod("getStoreName", 
                            nullptr);;
    

    std::string result = method->invoke(this->getWorkFlowObject(), 
                            nullptr);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Reflection Exception";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "getStoreName()", &e);
    

                                    }
                                



                            throw Exception(error);
                    
}

}




        #endif //ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_STOREWORKFLOWWRAPPER_CPP
