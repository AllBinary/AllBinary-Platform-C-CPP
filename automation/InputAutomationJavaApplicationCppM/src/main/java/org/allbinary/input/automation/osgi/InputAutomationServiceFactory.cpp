
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_OSGI_INPUTAUTOMATIONSERVICEFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_OSGI_INPUTAUTOMATIONSERVICEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/osgi/InputAutomationServiceFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/osgi/framework/Bundle.h>

      
#include <org/osgi/framework/ServiceFactory.h>

      
#include <org/osgi/framework/ServiceRegistration.h>

      
#include <org/allbinary/input/automation/InputAutomationJFrame.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto InputAutomationServiceFactory::inputAutomationServiceFactory_owner() -> InputAutomationServiceFactory* { static std::unique_ptr<InputAutomationServiceFactory> value(new InputAutomationServiceFactory()); return value.get(); }
InputAutomationServiceFactory* InputAutomationServiceFactory::inputAutomationServiceFactory = InputAutomationServiceFactory::inputAutomationServiceFactory_owner();

InputAutomationServiceFactory::InputAutomationServiceFactory() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
}


    auto InputAutomationServiceFactory::getInstance() -> InputAutomationServiceFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InputAutomationServiceFactory::inputAutomationServiceFactory;
    
}


    auto InputAutomationServiceFactory::getService(Bundle* bundle, ServiceRegistration* registration) -> Object*{
this->logUtil->putF(this->commonStrings->START, this, "getService");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InputAutomationJFrame::getInstance();;
    
}


    auto InputAutomationServiceFactory::ungetService(Bundle* bundle, ServiceRegistration* registration, Object* service) -> void{
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_OSGI_INPUTAUTOMATIONSERVICEFACTORY_CPP
