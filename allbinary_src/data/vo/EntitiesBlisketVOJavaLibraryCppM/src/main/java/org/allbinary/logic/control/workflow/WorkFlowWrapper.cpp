
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_WORKFLOWWRAPPER_CPP
        #define ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_WORKFLOWWRAPPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/control/workflow/WorkFlowWrapper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/lang/reflect/Method.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/control/workflow/WorkFlowInterface.h"


WorkFlowWrapper::WorkFlowWrapper(Object* anyType) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->anyType= anyType;
    
}


    auto WorkFlowWrapper::getWorkFlowObject() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(this->anyType);
    
}


                //@Throws(Exception.constructor)
            
    auto WorkFlowWrapper::getName() -> std::string{

        try {
            
    Class* helperClass = this->anyType->getClass();;
    

    Method* method = helperClass->getMethod("getName", 
                            nullptr);;
    

    std::string result = JavaBoxes::unbox<std::string>(method->invoke(this->anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Reflection Exception";;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "getName()", &e);
    

                                    }
                                



                            throw Exception(error);
                    
}

}


                //@Throws(Exception.constructor)
            
    auto WorkFlowWrapper::getStoreName() -> std::string{

        try {
            
    Class* helperClass = this->anyType->getClass();;
    

    Method* method = helperClass->getMethod("getStoreName", 
                            nullptr);;
    

    std::string result = JavaBoxes::unbox<std::string>(method->invoke(this->anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Reflection Exception";;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "getStoreName()", &e);
    

                                    }
                                



                            throw Exception(error);
                    
}

}


                //@Throws(Exception.constructor)
            
    auto WorkFlowWrapper::process() -> int32_t{

        try {
            
    Class* helperClass = this->anyType->getClass();;
    

    Method* method = helperClass->getMethod(this->commonStrings->PROCESS, 
                            nullptr);;
    

    int32_t result = JavaBoxes::unbox<int32_t>(method->invoke(this->anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Reflection Exception";;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, &e);
    

                                    }
                                



                            throw Exception(error);
                    
}

}




        #endif //ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_WORKFLOWWRAPPER_CPP
