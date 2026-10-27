
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/input/automation/configuration/InputAutomationConfigurationModuleChangeEvent.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InputAutomationConfigurationModuleChangeListener {

    public: virtual void onAdd(InputAutomationConfigurationModuleChangeEvent* inputAutomationConfigurationChangeEvent) = 0;

    public: virtual void onRemove(InputAutomationConfigurationModuleChangeEvent* inputAutomationConfigurationChangeEvent) = 0;

};

            


        #endif //BUNDLE_INPUT_AUTOMATION_MODULE_CONFIGURATION_INPUTAUTOMATIONCONFIGURATIONMODULECHANGELISTENER_H
