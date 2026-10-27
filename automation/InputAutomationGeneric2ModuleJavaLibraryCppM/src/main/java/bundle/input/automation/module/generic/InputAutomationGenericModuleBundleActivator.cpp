
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
        



        #ifndef BUNDLE_INPUT_AUTOMATION_MODULE_GENERIC_INPUTAUTOMATIONGENERICMODULEBUNDLEACTIVATOR_CPP
        #define BUNDLE_INPUT_AUTOMATION_MODULE_GENERIC_INPUTAUTOMATIONGENERICMODULEBUNDLEACTIVATOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "bundle/input/automation/module/generic/InputAutomationGenericModuleBundleActivator.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/input/automation/module/generic/InputAutomationGenericModuleServiceFactory.h>

      
#include <org/allbinary/input/automation/module/osgi/InputAutomationModuleBundleActivator.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

InputAutomationGenericModuleBundleActivator::InputAutomationGenericModuleBundleActivator(){
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationGenericModuleBundleActivator::init() -> void{

    InputAutomationGenericModuleServiceFactory* inputAutomationGenericModuleServiceFactory = InputAutomationGenericModuleServiceFactory::getInstance();;
    
this->setInputAutomationModuleInterface(inputAutomationGenericModuleServiceFactory->getInputAutomationModuleInterfaceArray());
    
this->setServiceFactory(inputAutomationGenericModuleServiceFactory);
    
}




        #endif //BUNDLE_INPUT_AUTOMATION_MODULE_GENERIC_INPUTAUTOMATIONGENERICMODULEBUNDLEACTIVATOR_CPP
