
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
        



        #ifndef BUNDLE_INPUT_AUTOMATION_MODULE_GENERIC_INPUTAUTOMATIONGENERICMODULEBUNDLEACTIVATOR_H
        #define BUNDLE_INPUT_AUTOMATION_MODULE_GENERIC_INPUTAUTOMATIONGENERICMODULEBUNDLEACTIVATOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class InputAutomationGenericModuleServiceFactory;
#include <org/allbinary/input/automation/module/osgi/InputAutomationModuleBundleActivator.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputAutomationGenericModuleBundleActivator: public InputAutomationModuleBundleActivator {

public: InputAutomationGenericModuleBundleActivator();

                //@Throws(Exception.constructor)
            
    public: void init();

};

            


        #endif //BUNDLE_INPUT_AUTOMATION_MODULE_GENERIC_INPUTAUTOMATIONGENERICMODULEBUNDLEACTIVATOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(BUNDLE_INPUT_AUTOMATION_MODULE_GENERIC_INPUTAUTOMATIONGENERICMODULEBUNDLEACTIVATOR_H_COMPLETE)
        #define BUNDLE_INPUT_AUTOMATION_MODULE_GENERIC_INPUTAUTOMATIONGENERICMODULEBUNDLEACTIVATOR_H_COMPLETE
        #if __has_include(<org/allbinary/input/automation/module/generic/InputAutomationGenericModuleServiceFactory.h>)
#include <org/allbinary/input/automation/module/generic/InputAutomationGenericModuleServiceFactory.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/osgi/InputAutomationModuleBundleActivator.h>)
#include <org/allbinary/input/automation/module/osgi/InputAutomationModuleBundleActivator.h>
#endif

        #endif
    
