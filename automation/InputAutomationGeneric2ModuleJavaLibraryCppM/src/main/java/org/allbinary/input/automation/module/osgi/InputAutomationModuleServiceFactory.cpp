
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULESERVICEFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULESERVICEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/osgi/InputAutomationModuleServiceFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/osgi/framework/Bundle.h>

      
#include <org/osgi/framework/ServiceFactory.h>

      
#include <org/osgi/framework/ServiceRegistration.h>

      
#include <bundle/input/automation/module/InputAutomationModuleService.h>

      
#include <org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

InputAutomationModuleServiceFactory::InputAutomationModuleServiceFactory() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
}


    auto InputAutomationModuleServiceFactory::getService(Bundle* bundle, ServiceRegistration* registration) -> Object*{
this->logUtil->putF(this->commonStrings->START, this, "getService");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new InputAutomationModuleService(this->getInputAutomationModuleInterfaceArray());
    
}


    auto InputAutomationModuleServiceFactory::ungetService(Bundle* bundle, ServiceRegistration* registration, Object* service) -> void{
}


    auto InputAutomationModuleServiceFactory::getInputAutomationModuleInterfaceArray() -> std::vector<InputAutomationModuleFactoryInterface*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->inputAutomationModuleInterfaceArray;
    
}


    auto InputAutomationModuleServiceFactory::setInputAutomationModuleInterfaceArray(std::vector<InputAutomationModuleFactoryInterface*> inputAutomationModuleInterfaceArray) -> void{
this->inputAutomationModuleInterfaceArray= inputAutomationModuleInterfaceArray;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULESERVICEFACTORY_CPP
