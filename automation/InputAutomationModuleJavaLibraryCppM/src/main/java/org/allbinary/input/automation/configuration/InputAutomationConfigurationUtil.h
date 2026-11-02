
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_CONFIGURATION_INPUTAUTOMATIONCONFIGURATIONUTIL_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_CONFIGURATION_INPUTAUTOMATIONCONFIGURATIONUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class InputAutomationModuleFactoryInterface;
class InputAutomationModuleConfiguration;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class InputAutomationConfigurationModuleChangeEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputAutomationConfigurationUtil
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: static InputAutomationConfigurationModuleChangeEvent* getChangeEvent(InputAutomationModuleFactoryInterface* inputAutomationModuleInterface);

private: InputAutomationConfigurationUtil();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_CONFIGURATION_INPUTAUTOMATIONCONFIGURATIONUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_CONFIGURATION_INPUTAUTOMATIONCONFIGURATIONUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_CONFIGURATION_INPUTAUTOMATIONCONFIGURATIONUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h>)
#include <org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h>)
#include <org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h>
#endif
#if __has_include("org/allbinary/input/automation/configuration/InputAutomationConfigurationModuleChangeEvent.h")
#include "org/allbinary/input/automation/configuration/InputAutomationConfigurationModuleChangeEvent.h"
#endif

        #endif
    
