
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
        



        #ifndef BUNDLE_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULESERVICE_H
        #define BUNDLE_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULESERVICE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class InputAutomationModuleFactoryInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "bundle/input/automation/module/InputAutomationModuleServiceInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputAutomationModuleService
            : public virtual Object
        , public InputAutomationModuleServiceInterface {

    private: std::vector<InputAutomationModuleFactoryInterface*> inputAutomationModuleInterfaceArray;

public: InputAutomationModuleService(std::vector<InputAutomationModuleFactoryInterface*> inputAutomationModuleInterfaceArray);

    public: std::vector<InputAutomationModuleFactoryInterface*> getInputAutomationModuleInterfaceArray();

    public: void setInputAutomationModuleInterfaceArray(std::vector<InputAutomationModuleFactoryInterface*> inputAutomationModuleInterfaceArray);

};

            


        #endif //BUNDLE_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULESERVICE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(BUNDLE_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULESERVICE_H_COMPLETE)
        #define BUNDLE_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULESERVICE_H_COMPLETE
        #if __has_include(<org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h>)
#include <org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h>
#endif
#if __has_include("bundle/input/automation/module/InputAutomationModuleServiceInterface.h")
#include "bundle/input/automation/module/InputAutomationModuleServiceInterface.h"
#endif

        #endif
    
