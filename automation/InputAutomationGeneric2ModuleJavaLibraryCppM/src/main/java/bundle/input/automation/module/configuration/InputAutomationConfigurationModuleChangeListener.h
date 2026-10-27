
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
        



        #ifndef BUNDLE_INPUT_AUTOMATION_MODULE_CONFIGURATION_INPUTAUTOMATIONCONFIGURATIONMODULECHANGELISTENER_H
        #define BUNDLE_INPUT_AUTOMATION_MODULE_CONFIGURATION_INPUTAUTOMATIONCONFIGURATIONMODULECHANGELISTENER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class InputAutomationConfigurationModuleChangeEvent;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputAutomationConfigurationModuleChangeListener
            : public virtual Object
         {

    public: virtual void onAdd(InputAutomationConfigurationModuleChangeEvent* inputAutomationConfigurationChangeEvent) = 0;

    public: virtual void onRemove(InputAutomationConfigurationModuleChangeEvent* inputAutomationConfigurationChangeEvent) = 0;

};

            


        #endif //BUNDLE_INPUT_AUTOMATION_MODULE_CONFIGURATION_INPUTAUTOMATIONCONFIGURATIONMODULECHANGELISTENER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(BUNDLE_INPUT_AUTOMATION_MODULE_CONFIGURATION_INPUTAUTOMATIONCONFIGURATIONMODULECHANGELISTENER_H_COMPLETE)
        #define BUNDLE_INPUT_AUTOMATION_MODULE_CONFIGURATION_INPUTAUTOMATIONCONFIGURATIONMODULECHANGELISTENER_H_COMPLETE
        #if __has_include(<org/allbinary/input/automation/configuration/InputAutomationConfigurationModuleChangeEvent.h>)
#include <org/allbinary/input/automation/configuration/InputAutomationConfigurationModuleChangeEvent.h>
#endif

        #endif
    
