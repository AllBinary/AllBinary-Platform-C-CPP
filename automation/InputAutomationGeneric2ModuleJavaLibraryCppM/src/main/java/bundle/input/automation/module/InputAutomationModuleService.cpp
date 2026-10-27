
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
        



        #ifndef BUNDLE_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULESERVICE_CPP
        #define BUNDLE_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULESERVICE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "bundle/input/automation/module/InputAutomationModuleService.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "bundle/input/automation/module/InputAutomationModuleServiceInterface.h"


InputAutomationModuleService::InputAutomationModuleService(std::vector<InputAutomationModuleFactoryInterface*> inputAutomationModuleInterfaceArray){
this->setInputAutomationModuleInterfaceArray(inputAutomationModuleInterfaceArray);
    
}


    auto InputAutomationModuleService::getInputAutomationModuleInterfaceArray() -> std::vector<InputAutomationModuleFactoryInterface*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->inputAutomationModuleInterfaceArray;
    
}


    auto InputAutomationModuleService::setInputAutomationModuleInterfaceArray(std::vector<InputAutomationModuleFactoryInterface*> inputAutomationModuleInterfaceArray) -> void{
this->inputAutomationModuleInterfaceArray= inputAutomationModuleInterfaceArray;
    
}




        #endif //BUNDLE_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULESERVICE_CPP
